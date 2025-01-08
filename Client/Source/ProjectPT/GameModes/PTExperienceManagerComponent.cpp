// Fill out your copyright notice in the Description page of Project Settings.


#include "PTExperienceManagerComponent.h"
#include <ProjectPT/System/PTAssetManager.h>
#include "PTExperienceDefinition.h"
#include <GameFeaturesSubsystemSettings.h>

void UPTExperienceManagerComponent::CallOrRegister_OnExperienceLoaded(FOnExperienceLoaded::FDelegate&& Delegate)
{
	if (IsExperienceLoaded())
		Delegate.Execute(CurrentExperience);
	else
		//���� ����� ���߱� ���ؼ��� Move�� �ϴ� ���� ��������
		OnExperienceLoaded.Add(MoveTemp(Delegate));
}

PRAGMA_DISABLE_OPTIMIZATION
void UPTExperienceManagerComponent::SetCurrentExperience(FPrimaryAssetId ExperienceId)
{
	UPTAssetManager& AssetManager = UPTAssetManager::Get();

	TSubclassOf<UPTExperienceDefinition> AssetClass;
	{
		FSoftObjectPath AssetPath = AssetManager.GetPrimaryAssetPath(ExperienceId);
		AssetClass = Cast<UClass>(AssetPath.TryLoad());
	}

	//CDO�� ������ ����
	//��ü�� ���� �������� �ʰ� Ŭ������ �⺻ �������� �����ϱ� ����
	const UPTExperienceDefinition* Experience = GetDefault<UPTExperienceDefinition>(AssetClass);
	check(Experience != nullptr);
	check(CurrentExperience == nullptr);
	{
		CurrentExperience = Experience;
	}

	StartExperienceLoad();
}
PRAGMA_ENABLE_OPTIMIZATION

void UPTExperienceManagerComponent::StartExperienceLoad()
{
	check(CurrentExperience);
	check(LoadState == EPTExperienceLoadState::Unloaded);

	LoadState = EPTExperienceLoadState::Loading;

	UPTAssetManager& AssetManager = UPTAssetManager::Get();

	TSet<FPrimaryAssetId> BundleAssetList;
	BundleAssetList.Add(CurrentExperience->GetPrimaryAssetId());

	TArray<FName> BundlesToLoad;
	{
		BundlesToLoad.Add(UGameFeaturesSubsystemSettings::LoadStateClient);
	}

	FStreamableDelegate OnAssetLoadedDelegate = FStreamableDelegate::CreateUObject(this, &ThisClass::OnExperienceLoadComplete);

	TSharedPtr<FStreamableHandle> Handle = AssetManager.ChangeBundleStateForPrimaryAssets(
		BundleAssetList.Array(),
		BundlesToLoad,
		{}, false, FStreamableDelegate(), FStreamableManager::AsyncLoadHighPriority);

	if (!Handle.IsValid() || Handle->HasLoadCompleted())
	{
		FStreamableHandle::ExecuteDelegate(OnAssetLoadedDelegate);
	}
	else
	{
		Handle->BindCompleteDelegate(OnAssetLoadedDelegate);
		Handle->BindCancelDelegate(FStreamableDelegate::CreateLambda([OnAssetLoadedDelegate]() 
			{
				OnAssetLoadedDelegate.ExecuteIfBound();
			}));

	}
}

void UPTExperienceManagerComponent::OnExperienceLoadComplete()
{
	check(LoadState == EPTExperienceLoadState::Loading);
	check(CurrentExperience);

	OnExperienceFullLoadCompleted();
}

void UPTExperienceManagerComponent::OnExperienceFullLoadCompleted()
{
 	check(LoadState != EPTExperienceLoadState::Loaded);

	LoadState = EPTExperienceLoadState::Loaded;

	OnExperienceLoaded.Broadcast(CurrentExperience);
	OnExperienceLoaded.Clear();
}

const UPTExperienceDefinition* UPTExperienceManagerComponent::GetCurrentExperienceChecked() const
{
	check(LoadState == EPTExperienceLoadState::Loaded);
	check(CurrentExperience != nullptr);
	return CurrentExperience;
}
