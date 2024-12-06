// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/GameStateComponent.h"
#include "PTExperienceManagerComponent.generated.h"

class UPTExperienceDefinition;

enum class EPTExperienceLoadState
{
	Unloaded,
	Loading,
	Loaded,
};

DECLARE_MULTICAST_DELEGATE_OneParam(FOnExperienceLoaded, const UPTExperienceDefinition*);

/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTExperienceManagerComponent : public UGameStateComponent
{
	GENERATED_BODY()
	
public:
	bool IsExperienceLoaded() const { return(LoadState == EPTExperienceLoadState::Loaded) && (CurrentExperience != nullptr); }

	//OnExperienceLoaded�� ���ε� �ϰų�, �ε��� �Ϸ�Ǿ��ٸ� �ٷ� ȣ����
	void CallOrRegister_OnExperienceLoaded(FOnExperienceLoaded::FDelegate&& Delegate);

	void SetCurrentExperience(FPrimaryAssetId ExperienceId);
	void StartExperienceLoad();
	void OnExperienceLoadComplete();
	void OnExperienceFullLoadCompleted();
	const UPTExperienceDefinition* GetCurrentExperienceChecked() const;
public:
	UPROPERTY()
	TObjectPtr<const UPTExperienceDefinition> CurrentExperience;

	//�ε� ����
	EPTExperienceLoadState LoadState = EPTExperienceLoadState::Unloaded;

	//�ε��� �Ϸ�� ���� Broadcasting Delegate
	FOnExperienceLoaded OnExperienceLoaded;
};
