// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGameplayAbility_Jump.h"
#include "ProjectPT/Character/PTCharacter.h"

UPTGameplayAbility_Jump::UPTGameplayAbility_Jump(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UPTGameplayAbility_Jump::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	JumpEnd();
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UPTGameplayAbility_Jump::JumpStart()
{
	if (APTCharacter* PTCharacter = GetPTCharacterFromActorInfo())
	{
		if (!PTCharacter->bPressedJump)
		{
			PTCharacter->UnCrouch();
			PTCharacter->Jump();
		}
	}
}

void UPTGameplayAbility_Jump::JumpEnd()
{
	if (APTCharacter* PTCharacter = GetPTCharacterFromActorInfo())
	{
		if (PTCharacter->bPressedJump)
		{
			PTCharacter->StopJumping();
		}
	}
}
