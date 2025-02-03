// Fill out your copyright notice in the Description page of Project Settings.


#include "PTExperienceManagerComponent.h"
#include "ProjectPT/System/PTAssetManager.h"
#include "PTExperienceDefinition.h"
#include "GameFeaturesSubsystem.h"
#include "GameFeatureAction.h"
#include "PTExperienceActionSet.h"
#include "PTExperienceActionSet.h"
#include "GameFeaturesSubsystemSettings.h"

void UPTExperienceManagerComponent::CallOrRegister_OnExperienceLoaded(FOnExperienceLoaded::FDelegate&& Delegate)
{
	if (IsExperienceLoaded())
		Delegate.Execute(CurrentExperience);
	else
		//���� ����� ���߱� ���ؼ��� Move�� �ϴ� ���� ��������
		OnExperienceLoaded.Add(MoveTemp(Delegate));
}

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

	GameFeaturePluginURLs.Reset();

	auto CollectGameFeaturePluginURLs = [This = this](const UPrimaryDataAsset* Context, const TArray<FString>& FeaturePluginList)
		{
			//FeaturePluginList�� ��ȸ�ϸ�, PluginURL�� ExperienceManagerComponent�� GameFeaturePluginURLs�� �߰����ش�.
			for (const FString& PluginName : FeaturePluginList)
			{
				FString PluginURL;
				if (UGameFeaturesSubsystem::Get().GetPluginURLByName(PluginName, PluginURL))
				{
					This->GameFeaturePluginURLs.AddUnique(PluginURL);
				}
			}
		};

	//GameFeatureToEnable�� �ִ� Plugin�� �ϴ� Ȱ��ȭ�� GameFeature Plugin �ĺ������� ���
	CollectGameFeaturePluginURLs(CurrentExperience, CurrentExperience->GameFeaturesToEnable);

	//GameFeaturePluginURLs�� ��ϵ� Plugin�� �ε� �� Ȱ��ȭ
	NumGameFeaturePluginsLoading = GameFeaturePluginURLs.Num();
	if (NumGameFeaturePluginsLoading)
	{
		LoadState = EPTExperienceLoadState::LoadingGameFeatures;
		for (const FString& PluginURL : GameFeaturePluginURLs)
		{
			//�� Plugin�� �ε� �� Ȱ��ȭ ����, OnGameFeaturePluginLoadCompletes �ݹ� �Լ� ���
			UGameFeaturesSubsystem::Get().LoadAndActivateGameFeaturePlugin(PluginURL,FGameFeaturePluginLoadComplete::CreateUObject(this, &ThisClass::OnGameFeaturePluginLoadComplete));
		}
	}
	else
	{
		OnExperienceFullLoadCompleted();
	}
}

void UPTExperienceManagerComponent::OnGameFeaturePluginLoadComplete(const UE::GameFeatures::FResult& Result)
{
	//�� GameFeature Plugin�� �ε��� ��, �ش� �Լ��� �ݹ����� �Ҹ���.
	NumGameFeaturePluginsLoading--;

	if (NumGameFeaturePluginsLoading == 0)
	{
		//GameFeaturePlugin �ε��� �� ������ ���, ������� Loaded�μ�, OnExperienceFullLoadCompleted�� ȣ���Ѵ�.
		//GameFeaturePluing �ε��� Ȱ��ȭ�� �����ٸ�? UGameFeatureAction�� Ȱ��ȭ �ؾ��Ѵ�.
		OnExperienceLoadComplete();
	}
}

void UPTExperienceManagerComponent::OnExperienceFullLoadCompleted()
{
 	check(LoadState != EPTExperienceLoadState::Loaded);

	//GaemFeature Plugin�� �ε��� Ȱ��ȭ ����, GameFeature Action ���� Ȱ��ȭ ���Ѿ���
	{
		LoadState = EPTExperienceLoadState::Loaded;
		FGameFeatureActivatingContext Context;
		{
			//������ �ڵ��� �������ش�
			const FWorldContext* ExistingWorldContext = GEngine->GetWorldContextFromWorld(GetWorld());
			if (ExistingWorldContext)
				Context.SetRequiredWorldContextHandle(ExistingWorldContext->ContextHandle);
		}

		auto ActivateListOfActions = [&Context](const TArray<UGameFeatureAction*>& ActionList)
			{
				for (UGameFeatureAction* Action : ActionList)
				{
					//��������� GameFeatureAction�� ���� Registering -> Loading -> Activation ������ ȣ���Ѵ�
					if (Action)
					{
						Action->OnGameFeatureRegistering();
						Action->OnGameFeatureLoading();
						Action->OnGameFeatureActivating(Context);
					}
				}
			};

		ActivateListOfActions(CurrentExperience->Actions);

		for (const TObjectPtr<UPTExperienceActionSet>& ActionSet : CurrentExperience->ActionSets)
		{
			ActivateListOfActions(ActionSet->Actions);
		}
	}

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
