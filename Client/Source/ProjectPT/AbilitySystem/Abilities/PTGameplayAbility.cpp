// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGameplayAbility.h"
#include "ProjectPT/Character/PTCharacter.h"

UPTGameplayAbility::UPTGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

APTCharacter* UPTGameplayAbility::GetPTCharacterFromActorInfo()
{
	return CurrentActorInfo ? Cast<APTCharacter>(CurrentActorInfo->AvatarActor.Get()) : nullptr;
}

void UPTGameplayAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UPTGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
