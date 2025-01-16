// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "GameplayTagContainer.h"
#include "PTPlayerStart.generated.h"

UCLASS()
class PROJECTPT_API APTPlayerStart : public APlayerStart
{
	GENERATED_BODY()
public:
	APTPlayerStart(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	FGameplayTag GetGameplayTag() { return SpawnTag; }

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PT|SpawnTag")
	FGameplayTag SpawnTag;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PT|PawnMonsterId")
	int32 TableId;
};
