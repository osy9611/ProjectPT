// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PTGameplayAbility.h"
#include "PTGameplayAbility_MeleeHitCheck.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTGameplayAbility_MeleeHitCheck : public UPTGameplayAbility
{
	GENERATED_BODY()

public:
	UPTGameplayAbility_MeleeHitCheck(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

protected:
	UFUNCTION()
	void OnTraceResultCallback(const FGameplayAbilityTargetDataHandle& TargetDataHandle);
};
