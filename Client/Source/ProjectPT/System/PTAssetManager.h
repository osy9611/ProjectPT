// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "PTAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTAssetManager : public UAssetManager
{
	GENERATED_BODY()
public:
	UPTAssetManager();

	/*
	* UAssetManager's interfaces
	*/
	virtual void StartInitialLoading() final;

	static UPTAssetManager& Get();

	static bool ShouldLogAssetLoads();

	static UObject* SynchronusLoadAsset(const FSoftObjectPath& AssetPath);
	static void AsynchronusLoadAsset(const FSoftObjectPath& AssetPath, TFunction<void(UObject*)>callback);

	template<typename AssetType>
	static AssetType* GetAsset(const TSoftObjectPtr<AssetType>& AssetPointer, bool bKeepMemory = true);

	template<typename AssetType>
	static void GetAssetAsync(const TSoftObjectPtr<AssetType>& AssetPointer, TFunction<void(UObject*)>callback, bool bKeepInMemory = true);

	template<typename AssetType>
	static TSubclassOf<AssetType> GetSubclass(const TSoftClassPtr<AssetType>& AssetPointer, bool bKeepInMemory = true);

	template<typename AssetType>
	static void GetSubclassAsync(const TSoftClassPtr<AssetType>& AssetPointer, TFunction<void(TSubclassOf<AssetType>)>callback, bool bKeepInMemory = true);

	//[THREAD-SAFE] �޸𸮿� �ε��� ���� ĳ��
	void AddLoadedAsset(const UObject* Asset);

	//GC�� ���
	//�𸮾󿡼��� �������� ī���� �ý����� ���� �������� �ڵ� �����ϱ� ������ Unity Addressable �ý��۰��� �ٸ���
	//������ �÷��ǰ� ���۷��� ī���� �ý��� ���п�, ���� �޸𸮸� ������ �ʿ䰡 ���� �ε�� ���� ���� ���θ� Ȯ���ϰų� �����ϴ� �� ����Ѵ�.
	UPROPERTY()
	TSet<TObjectPtr<const UObject>> LoadedAssets;

	//Object���� Locking
	FCriticalSection SyncObject;
};

template<typename AssetType>
AssetType* UPTAssetManager::GetAsset(const TSoftObjectPtr<AssetType>& AssetPointer, bool bKeepMemory)
{
	AssetType* LoadedAsset = nullptr;

	const FSoftObjectPath& AssetPath = AssetPointer.ToSoftObjectPath();
	if (AssetPath.IsValid())
	{
		LoadedAsset = AssetPointer.Get();
		if (!LoadedAsset)
		{
			LoadedAsset = Cast<AssetType>(SynchronusLoadAsset(AssetPath));

			//ensureAlwaysMsgf : ���� �������� �ʰ� ���� ����
			ensureAlwaysMsgf(LoadedAsset, TEXT("Failed to loaded asset [%s]"), *AssetPointer.ToString());

			if (LoadedAsset && bKeepMemory)
			{
				//���⼭ AddLoadAsset�� �޸𸮿� �����ϱ� ���� ��ġ��� �����ϸ� ��
				// - �ѹ� ��ϵǸ� ���� ������ �ʴ��� Unloaded�� ���� ����(ĳ�̵ȴٴ� �ǹ�)
				Get().AddLoadedAsset(Cast<UObject>(LoadedAsset));
			}
		}
	}

	return LoadedAsset;
}

template <typename AssetType>
void UPTAssetManager::GetAssetAsync(const TSoftObjectPtr<AssetType>& AssetPointer, TFunction<void(UObject*)> callback, bool bKeepInMemory)
{
	const FSoftObjectPath& AssetPath = AssetPointer.ToSoftObjectPath();
	if (AssetPath.IsValid())
	{
		AssetType* LoadedAsset = nullptr;

		LoadedAsset = AssetPointer.Get();
		if (!LoadedAsset)
		{
			AsynchronusLoadAsset(AssetPath, [bKeepInMemory, callback](UObject* result)
				{
					if (result && bKeepInMemory)
						Get().AddLoadedAsset(result);

					callback(result);
				});
		}
	}
}

template<typename AssetType>
TSubclassOf<AssetType> UPTAssetManager::GetSubclass(const TSoftClassPtr<AssetType>& AssetPointer, bool bKeepInMemory)
{
	TSubclassOf<AssetType> LoadedSubClass;

	const FSoftObjectPath& AssetPath = AssetPointer.ToSoftObjectPath();
	if (AssetPath.IsValid())
	{
		LoadedSubClass = AssetPointer.Get();
		if (!LoadedSubClass)
		{
			LoadedSubClass = Cast<UClass>(SynchronusLoadAsset(AssetPath));
			//ensureAlwaysMsgf : ���� �������� �ʰ� ���� ����
			ensureAlwaysMsgf(LoadedSubClass, TEXT("Failed to loaded asset [%s]"), *AssetPointer.ToString());
		}

		if (LoadedSubClass && bKeepInMemory)
			Get().AddLoadedAsset(Cast<UObject>(LoadedSubClass));
	}

	return LoadedSubClass;
}

template<typename AssetType>
void UPTAssetManager::GetSubclassAsync(const TSoftClassPtr<AssetType>& AssetPointer, TFunction<void(TSubclassOf<AssetType>)> callback, bool bKeepInMemory)
{
	const FSoftObjectPath& AssetPath = AssetPointer.ToSoftObjectPath();

	if (AssetPath.IsValid())
	{
		UObject* resultAsset = nullptr;
		TSubclassOf<AssetType> LoadedSubClass = nullptr;
		LoadedSubClass = AssetPointer.Get();

		if (!LoadedSubClass)
		{
			AsynchronusLoadAsset(AssetPath, [resultAsset, bKeepInMemory]()
				{
					if (resultAsset && bKeepInMemory)
						Get().AddLoadedAsset(resultAsset);

					callback(Cast<UClass>(resultAsset));
				});
		}
	}
}