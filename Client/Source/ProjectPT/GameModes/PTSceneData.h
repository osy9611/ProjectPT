// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CommonSessionSubsystem.h"
#include "PTSceneData.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTSceneData : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable)
	UMoveSessionData* CreateMoveSessionData();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Experience, meta = (AllowedTypes = "Map"))
	FPrimaryAssetId MapID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Experience, meta = (AllowedTypes = "PTExperienceDefinition"))
	FPrimaryAssetId ExperinceID;
};
