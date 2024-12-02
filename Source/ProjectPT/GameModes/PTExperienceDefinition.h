// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PTExperienceDefinition.generated.h"

class UPTPawnData;
/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTExperienceDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Category = Gameplay)
	TObjectPtr<UPTPawnData> DefaultPawnData;
};
