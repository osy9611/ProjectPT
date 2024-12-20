// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "PTGameplayAbility.generated.h"

class APTCharacter;
class FGamePlayAbilitySpecHandle;
class UPTAttributeSet;

UENUM(BlueprintType)
enum class EPTAbilityActivationPolicy : uint8
{
	OnInputTirggered,
	WhileInputActive,
	OnSpawn
};

/**
 * 
 */
UCLASS(Abstract)
class PROJECTPT_API UPTGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
public:
	UPTGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	APTCharacter* GetPTCharacterFromActorInfo();
	virtual UPTAttributeSet* GetPTAttribute();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PT|AbilityActivation")
	EPTAbilityActivationPolicy ActivationPolicy;
};
