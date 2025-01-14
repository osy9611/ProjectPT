// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PTExperienceDefinition.generated.h"

class UPTPawnData;
class UPTWidgetData;
/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTExperienceDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

	void RegisterWidgetData(UWorld* World);

	UPROPERTY(EditAnywhere, Category = Gameplay)
	TObjectPtr<UPTPawnData> DefaultPawnData;

	UPROPERTY(EditAnywhere,Category = Gameplay)
	TObjectPtr<UPTWidgetData> DefaultWidgetData;

	UPROPERTY(EditAnywhere, Category = Gameplay)
	TObjectPtr<UPTPawnData> AIPawnData;

};
