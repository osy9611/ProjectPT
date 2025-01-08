// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "PTWidgetData.generated.h"

class UPTActivatableWidget;

USTRUCT(BlueprintType)
struct FWidgetData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AddWidgetType")
	FGameplayTag AddWidgetType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ActiveWidget")
	TSubclassOf<UPTActivatableWidget> ActiveWidget;
};
/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTWidgetData : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPTWidgetData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	void RegisterWidgetData(UWorld* World);
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category= "Widgets")
	TArray<FWidgetData> Widgets;
};
