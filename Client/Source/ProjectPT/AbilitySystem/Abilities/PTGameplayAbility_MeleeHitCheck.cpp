// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGameplayAbility_MeleeHitCheck.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/Character/PTCharacter.h"
#include "ProjectPT/Character/PTHeroComponent.h"
#include "ProjectPT/AbilitySystem/Task/PTAbilityTask_Trace.h"
#include "ProjectPT/AbilitySystem/PTGameplayAbilityTargetActor_Trace.h"

UPTGameplayAbility_MeleeHitCheck::UPTGameplayAbility_MeleeHitCheck(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UPTGameplayAbility_MeleeHitCheck::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
	if (TriggerEventData != nullptr)
		UE_LOG(PTLog_GAS, Log, TEXT("%s"), *TriggerEventData->EventTag.GetTagName().ToString());

	if (APTCharacter* PTCharacter = GetPTCharacterFromActorInfo())
	{
		if (UPTHeroComponent* PTHeroComponent = PTCharacter->FindComponentByClass<UPTHeroComponent>())
		{
			UPTAbilityTask_Trace* AttackTraceTask = UPTAbilityTask_Trace::CreateTask(this, APTGameplayAbilityTargetActor_Trace::StaticClass());

			AttackTraceTask->OnComplete.AddDynamic(this, &ThisClass::OnTraceResultCallback);
			AttackTraceTask->ReadyForActivation();
		}
	}

	UE_LOG(PTLog_GAS, Log, TEXT("Hit MeleeCheck"));



	EndAbility(Handle, ActorInfo, ActivationInfo, true, false);
}

void UPTGameplayAbility_MeleeHitCheck::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UPTGameplayAbility_MeleeHitCheck::OnTraceResultCallback(const FGameplayAbilityTargetDataHandle& TargetDataHandle)
{
	if (UAbilitySystemBlueprintLibrary::TargetDataHasHitResult(TargetDataHandle, 0))
	{
		FHitResult HitResult = UAbilitySystemBlueprintLibrary::GetHitResultFromTargetData(TargetDataHandle, 0);
		UE_LOG(PTLog_GAS, Log, TEXT("Target %s Detacted"), *(HitResult.GetActor()->GetName()));
	}
}


