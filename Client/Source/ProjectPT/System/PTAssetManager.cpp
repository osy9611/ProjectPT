// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAssetManager.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/PTGameplayTags.h"

UPTAssetManager::UPTAssetManager()
{
}

//�ش� �Լ��� UE������ .exe ��� ���ڸ� ���� �� �ִٴ� ���� �˷��ش�.
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

	//���� UE_LOG�� Fatal�� ����, Crash ���� ������ �������� ������ �������� ���� ���̸� ����
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
