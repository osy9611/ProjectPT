// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PTGameplayAbility.h"
#include "PTGameplayAbility_MeleeAttack.generated.h"

class APTGameplayAbilityTargetActor_Trace;
/**
 *
 */
UCLASS()
class PROJECTPT_API UPTGameplayAbility_MeleeAttack : public UPTGameplayAbility
{
	GENERATED_BODY()
public:
	UPTGameplayAbility_MeleeAttack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
};
