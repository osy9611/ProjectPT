// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayTagContainer.h"
#include "Animation/AnimMontage.h"
#include "PTGameplayAbility.generated.h"

class APTCharacter;
class APTAICharacter;
class FGamePlayAbilitySpecHandle;
class UPTAttributeSet;
class UPTCameraMode;
class UPTHeroComponent;

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
	APTAICharacter* GetPTAICharacterFromActorInfo();

	UPTHeroComponent* GetPTHeroComponentFromActorInfo();

	virtual UPTAttributeSet* GetPTAttribute();

	virtual FGameplayTag GetGameplayTag(){ return GetCurrentAbilitySpec()->DynamicAbilityTags.GetByIndex(0); }

	UFUNCTION(BlueprintCallable)
	void SetCameraMode(TSubclassOf<UPTCameraMode> CameraMode, bool UseFovOffset = true);
	UFUNCTION(BlueprintCallable)
	void ClearCameraMode(bool UseFovOffset = true);

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PT|AbilityActivation")
	EPTAbilityActivationPolicy ActivationPolicy;

	TSubclassOf<UPTCameraMode> ActiveCameraMode;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PT|AnimMontage")
	UAnimMontage* AnimMontage;
};
