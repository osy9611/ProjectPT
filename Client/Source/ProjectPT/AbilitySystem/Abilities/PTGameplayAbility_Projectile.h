// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PTGameplayAbility.h"
#include "PTGameplayAbility_Projectile.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTGameplayAbility_Projectile : public UPTGameplayAbility
{
	GENERATED_BODY()
	
public:
	UPTGameplayAbility_Projectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	
	virtual bool CommitAbilityCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const bool ForceCooldown, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) override;
	

	UFUNCTION(BlueprintCallable)
	float GetCoolTime();

	UFUNCTION(BlueprintCallable)
	void CreateObject();

	UPROPERTY(EditDefaultsOnly, Category="UseBPGameplayEffect")
	bool UseBPGameplayEffect = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pawn")
	TSubclassOf<AActor> ProjectileObject;
};
