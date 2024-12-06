// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGameplayAbility_MeleeAttack.h"
#include "ProjectPT/PTLogChannels.h"
UPTGameplayAbility_MeleeAttack::UPTGameplayAbility_MeleeAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UPTGameplayAbility_MeleeAttack::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	UE_LOG(PTLog_GAS, Log, TEXT("%s"), *TriggerEventData->EventTag.GetTagName().ToString());

	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);


}

void UPTGameplayAbility_MeleeAttack::OnTraceResultCallback(const FGameplayAbilityTargetDataHandle& TargetDataHandle)
{
}
