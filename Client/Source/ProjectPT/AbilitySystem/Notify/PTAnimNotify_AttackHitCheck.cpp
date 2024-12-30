// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAnimNotify_AttackHitCheck.h"
#include "AbilitySystemGlobals.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/Character/PTPawnExtensionComponent.h"
#include "ProjectPT/AbilitySystem/PTAbilitySystemComponent.h"

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
			UPTPawnExtensionComponent* PawnExtComp = UPTPawnExtensionComponent::FindPawnExtensionComponent(OwnerActor);
			if (PawnExtComp == nullptr)
			{
				UE_LOG(PTLog_GAS, Error, TEXT("This Actor Not Have UPTPawnExtensionComponent : %s"), *OwnerActor->GetName());
				return;
			}

			UPTAbilitySystemComponent* AbilityCompoent = PawnExtComp->GetAbilitySystemComponent();
			check(AbilityCompoent);

			FGameplayEventData PayloadData;
			PayloadData.EventMagnitude = 1;

			int32 result = AbilityCompoent->HandleGameplayEvent(TriggerGameplayTag, &PayloadData);
		}
	}

}