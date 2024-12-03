// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PTGameplayAbility.h"
#include "PTGameplayAbility_Jump.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTGameplayAbility_Jump : public UPTGameplayAbility
{
	GENERATED_BODY()
public:
	UPTGameplayAbility_Jump(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	UFUNCTION(BlueprintCallable, Category = "Ability")
	void JumpStart();

	UFUNCTION(BlueprintCallable, Category = "Ability")
	void JumpEnd();
};
