// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGameplayAbility_MeleeAttack.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/Character/PTCharacter.h"
#include "ProjectPT/Character/PTHeroComponent.h"

UPTGameplayAbility_MeleeAttack::UPTGameplayAbility_MeleeAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UPTGameplayAbility_MeleeAttack::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	if (TriggerEventData != nullptr)
	{
		UE_LOG(PTLog_GAS, Log, TEXT("%s"), *TriggerEventData->EventTag.GetTagName().ToString());
	}

	if (APTCharacter* PTCharacter = GetPTCharacterFromActorInfo())
	{
		if (UPTHeroComponent* PTHeroComponent = PTCharacter->FindComponentByClass<UPTHeroComponent>())
		{
			PTHeroComponent->SetMove(false);
		}
	}
}

void UPTGameplayAbility_MeleeAttack::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	if (APTCharacter* PTCharacter = GetPTCharacterFromActorInfo())
	{
		if (UPTHeroComponent* PTHeroComponent = PTCharacter->FindComponentByClass<UPTHeroComponent>())
		{
			PTHeroComponent->SetMove(true);
		}
	}

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
