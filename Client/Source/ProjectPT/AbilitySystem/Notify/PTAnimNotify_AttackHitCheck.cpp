// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAnimNotify_AttackHitCheck.h"
#include "AbilitySystemBlueprintLibrary.h"
UPTAnimNotify_AttackHitCheck::UPTAnimNotify_AttackHitCheck()
{
}

FString UPTAnimNotify_AttackHitCheck::GetNotifyName_Implementation() const
{
	return FString("GASAttackHitCheck");
}

void UPTAnimNotify_AttackHitCheck::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	if (MeshComp)
	{
		AActor* OwnerActor = MeshComp->GetOwner();

		if (OwnerActor)
		{
			FGameplayEventData PayloadData;
			PayloadData.EventMagnitude = 1;
			UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(OwnerActor, TriggerGameplayTag, PayloadData);
		}
	}

}
