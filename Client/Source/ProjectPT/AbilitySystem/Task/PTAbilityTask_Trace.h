// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "PTAbilityTask_Trace.generated.h"

class UPTGameplayAbility;
class APTGameplayAbilityTargetActor_Trace;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTraceResultDelegate, const FGameplayAbilityTargetDataHandle&, TargetDataHandle);

/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTAbilityTask_Trace : public UAbilityTask
{
	GENERATED_BODY()
public:
	UPTAbilityTask_Trace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, Category = "Ability|Task", meta = (DisplayName = "WaitForTrace", HidePin="OwningAbility",DefaultToSelf="OwningAbility",BlueprintInternalUseOnly="TRUE"))
	static UPTAbilityTask_Trace* CreateTask(UPTGameplayAbility* OwningAbility, TSubclassOf<class APTGameplayAbilityTargetActor_Trace> TargetActorClass);
	
	virtual void Activate() override;
	virtual void OnDestroy(bool bInOwnerFinished) override;

	void SpawnAndInitializeTargetActor();
	void FinalizeTargetActor();

protected:
	void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& DataHandle);

public:
	UPROPERTY(BlueprintAssignable)
	FTraceResultDelegate OnComplete;

protected:
	UPROPERTY()
	TSubclassOf<class  APTGameplayAbilityTargetActor_Trace> TargetActorClass;

	UPROPERTY()
	TObjectPtr<class  APTGameplayAbilityTargetActor_Trace> SpawnedTargetActor;
};
