// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "PTAnimNotify_AttackHitCheck.generated.h"

/**
 *
 */
UCLASS()
class PROJECTPT_API UPTAnimNotify_AttackHitCheck : public UAnimNotify
{
	GENERATED_BODY()

public:
	UPTAnimNotify_AttackHitCheck();

protected:
	virtual FString GetNotifyName_Implementation() const override;
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

protected:
	UPROPERTY(EditAnywhere, Meta=(Category = "Event"))
	FGameplayTag TriggerGameplayTag;

};
