// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "CommonActivatableWidgetBase.h"
#include "CommonUserWidgetBase.generated.h"

class UCommonActivatableWidgetBase;
/**
 *
 */
UCLASS(Abstract)
class COMMONGAME_API UCommonUserWidgetBase : public UCommonUserWidget
{
	GENERATED_BODY()
public:
	UCommonUserWidgetBase();

	UCommonActivatableWidgetContainerBase* GetLayerWidget(FGameplayTag LayerName);

	UFUNCTION(BlueprintCallable)
	void RegisterLayer(FGameplayTag LayerTag, UCommonActivatableWidgetContainerBase* LayerWidget);

	UFUNCTION(BlueprintCallable)
	UCommonActivatableWidgetBase* CreateWidgetToLayer(FGameplayTag LayerName, UClass* ActivatableWidgetClass);

	UFUNCTION(BlueprintCallable)
	UCommonActivatableWidgetBase* GetWidgetToLayer(FGameplayTag LayerName, UClass* ActivatableWidgetClass);

	UPROPERTY(Transient)
	TMap<FGameplayTag, TObjectPtr<UCommonActivatableWidgetContainerBase>> Layers;
};