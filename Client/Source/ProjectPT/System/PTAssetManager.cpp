// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAssetManager.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/PTGameplayTags.h"

UPTAssetManager::UPTAssetManager()
{
}

//해당 함수는 UE에서도 .exe 명령 인자를 넣을 수 있다는 것을 알려준다.
void UPTAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	FPTGameplayTags::InitializeNativeTags();
}

UPTAssetManager& UPTAssetManager::Get()
{
	check(GEngine);

	if (UPTAssetManager* Singletone = Cast<UPTAssetManager>(GEngine->AssetManager))
		return *Singletone;

	UE_LOG(PTLog, Fatal, TEXT("invalid AssetManagerClassname in DefaultEngine.ini(project setting); it must be HakAssetManager"));

	//위의 UE_LOG의 Fatal로 인해, Crash 나기 때문에 도달하지 않지만 컴파일을 위해 더미를 리턴
	return *NewObject<UPTAssetManager>();
}

bool UPTAssetManager::ShouldLogAssetLoads()
{
	const TCHAR* CommandLineContent = FCommandLine::Get();

	static bool bLogAssetLoads = FParse::Param(CommandLineContent, TEXT("LogAssetLoads"));
	return bLogAssetLoads;
}

UObject* UPTAssetManager::SynchronusLoadAsset(const FSoftObjectPath& AssetPath)
{
	if (AssetPath.IsValid())
	{
		TUniquePtr<FScopeLogTime> LogTimePtr;
		if (ShouldLogAssetLoads())
		{
			LogTimePtr = MakeUnique<FScopeLogTime>(*FString::Printf(TEXT("synchronous loaded assets [%s]"), *AssetPath.ToString()), nullptr, FScopeLogTime::ScopeLog_Seconds);
		}

		if (UAssetManager::IsValid())
		{
			return UAssetManager::GetStreamableManager().LoadSynchronous(AssetPath);
		}

		return AssetPath.TryLoad();
	}
	return nullptr;
}

void UPTAssetManager::AsynchronusLoadAsset(const FSoftObjectPath& AssetPath, TFunction<void(UObject*)> callback)
{
	if (AssetPath.IsValid())
	{
		TUniquePtr<FScopeLogTime> LogTimePtr;
		if (ShouldLogAssetLoads())
		{
			LogTimePtr = MakeUnique<FScopeLogTime>(*FString::Printf(TEXT("synchronous loaded assets [%s]"), *AssetPath.ToString()), nullptr, FScopeLogTime::ScopeLog_Seconds);
		}

		FStreamableManager& StreamableManager = UAssetManager::GetStreamableManager();
		TSharedPtr<FStreamableHandle> handle = StreamableManager.RequestAsyncLoad(AssetPath,
			[AssetPath, callback]()
			{
				UObject* LoadedAsset = AssetPath.ResolveObject();
				if (LoadedAsset)
				{
					UE_LOG(PTLog, Log, TEXT("Asynchronus load complete : %s"), *AssetPath.ToString());
					callback(LoadedAsset);
				}
				else
				{
					UE_LOG(PTLog, Error, TEXT("Failed to load asset : %s"), *AssetPath.ToString());
					callback(nullptr);
				}
			},
			FStreamableManager::AsyncLoadHighPriority);
	}
}

void UPTAssetManager::AddLoadedAsset(const UObject* Asset)
{
	if (ensureAlways(Asset))
	{
		FScopeLock Lock(&SyncObject);
		LoadedAssets.Add(Asset);
	}
}
