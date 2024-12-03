// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PTPawnData.generated.h"

class UPTInputConfig;
class UPTCameraMode;
class UPTAbilitySet;
/**
 *
 */
UCLASS()
class PROJECTPT_API UPTPawnData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPTPawnData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pawn")
	TSubclassOf<APawn> PawnClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	TSubclassOf<UPTCameraMode> DefaultCameraMode;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputConfig")
	TObjectPtr<UPTInputConfig> InputConfig;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Abilities")
	TArray<TObjectPtr<UPTAbilitySet>> AbilitySets;
};
