// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Abilities/PTGameplayAbility.h"
#include "PTAbilitySet.generated.h"

class UPTAbilitySystemComponent;
class UPTGameplayAbility;

USTRUCT(BlueprintType)
struct FPTAbilitySet_GameplayAbility
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UPTGameplayAbility> Ability = nullptr;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag InputTag;

	UPROPERTY(EditDefaultsOnly)
	int32 AbilityLevel = 1;

	UPROPERTY(EditDefaultsOnly)
	bool isTrigger = false;
};

USTRUCT(BlueprintType)
struct FPTAbilitySet_GrantedHandles
{
	GENERATED_BODY()

	void AddAbilitySpecHandle(const FGameplayAbilitySpecHandle& Handle);
	void TakeFromAbilitySystem(UPTAbilitySystemComponent* ASC);

protected:
	UPROPERTY()
	TArray<FGameplayAbilitySpecHandle> AbilitySpecHandles;
};

/**
 *
 */
UCLASS()
class PROJECTPT_API UPTAbilitySet : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPTAbilitySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	void GiveToAbilitySystem(UPTAbilitySystemComponent* ASC, FPTAbilitySet_GrantedHandles* OutGrantedHandles, UObject* SourceObject = nullptr);

	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Abilities")
	TArray<FPTAbilitySet_GameplayAbility> GrantedGameplayAbilities;
};
