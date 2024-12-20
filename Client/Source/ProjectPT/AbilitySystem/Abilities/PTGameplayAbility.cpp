// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGameplayAbility.h"
#include "ProjectPT/Character/PTCharacter.h"
#include "ProjectPT/Player/PTPlayerState.h"

UPTGameplayAbility::UPTGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

APTCharacter* UPTGameplayAbility::GetPTCharacterFromActorInfo()
{
	return CurrentActorInfo ? Cast<APTCharacter>(CurrentActorInfo->AvatarActor.Get()) : nullptr;
}

UPTAttributeSet* UPTGameplayAbility::GetPTAttribute()
{
	if (APTCharacter* PTCharacter = GetPTCharacterFromActorInfo())
	{
		if (APTPlayerState* PTPlayerState = PTCharacter->GetPlayerState<APTPlayerState>())
		{
			return PTPlayerState->GetPTAttributeSet();
		}
	}
	return nullptr;
}

void UPTGameplayAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UPTGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
