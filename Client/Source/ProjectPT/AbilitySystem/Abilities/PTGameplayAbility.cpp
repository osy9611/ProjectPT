// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGameplayAbility.h"
#include "ProjectPT/Character/PTCharacter.h"
#include "ProjectPT/Character/PTHeroComponent.h"
#include "ProjectPT/Character/PTAICharacter.h"
#include "ProjectPT/Player/PTPlayerState.h"
#include "ProjectPT/Camera/PTCameraMode.h"

UPTGameplayAbility::UPTGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

APTCharacter* UPTGameplayAbility::GetPTCharacterFromActorInfo()
{
	return CurrentActorInfo ? Cast<APTCharacter>(CurrentActorInfo->AvatarActor.Get()) : nullptr;
}

APTAICharacter* UPTGameplayAbility::GetPTAICharacterFromActorInfo()
{
	return CurrentActorInfo ? Cast<APTAICharacter>(CurrentActorInfo->AvatarActor.Get()) : nullptr;
}

UPTHeroComponent* UPTGameplayAbility::GetPTHeroComponentFromActorInfo()
{
	return CurrentActorInfo ? UPTHeroComponent::FindHeroComponent(CurrentActorInfo->AvatarActor.Get()) : nullptr;
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

	if (APTAICharacter* AICharacter = GetPTAICharacterFromActorInfo())
	{
		if (APTPlayerState* PTPlayerState = AICharacter->GetPlayerState<APTPlayerState>())
		{
			return PTPlayerState->GetPTAttributeSet();
		}
	}
	return nullptr;
}

void UPTGameplayAbility::SetCameraMode(TSubclassOf<UPTCameraMode> CameraMode, bool UseFovOffset)
{
	if (UPTHeroComponent* HeroComponent = GetPTHeroComponentFromActorInfo())
	{
		HeroComponent->SetAbilityCameraMode(CameraMode, CurrentSpecHandle,UseFovOffset);
		ActiveCameraMode = CameraMode;
	}
}

void UPTGameplayAbility::ClearCameraMode(bool UseFovOffset)
{
	if (ActiveCameraMode)
	{
		if (UPTHeroComponent* HeroComponent = GetPTHeroComponentFromActorInfo())
		{
			HeroComponent->ClearAbilityCameraMode(CurrentSpecHandle,UseFovOffset);
		}

		ActiveCameraMode = nullptr;
	}
}

void UPTGameplayAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UPTGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}
