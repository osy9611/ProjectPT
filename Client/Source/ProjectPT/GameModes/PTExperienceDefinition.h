// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PTExperienceDefinition.generated.h"

class UPTPawnData;
class UPTExperienceActionSet;
class UGameFeatureAction;
/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTExperienceDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditDefaultsOnly, Category = GamePlay)
	TArray<FString> GameFeaturesToEnable;

	UPROPERTY(EditDefaultsOnly, Category = GamePlay)
	TArray<TObjectPtr<UPTExperienceActionSet>> ActionSets;

	UPROPERTY(EditDefaultsOnly, Instanced, Category = "Actions")
	TArray<TObjectPtr<UGameFeatureAction>>Actions;

	UPROPERTY(EditAnywhere, Category = Gameplay)
	TObjectPtr<UPTPawnData> DefaultPawnData;
};
