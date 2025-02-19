// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UIManagerSubsystem.h"
#include "ProjectPT/PTLogChannels.h"
#include "PTUIManagerSubsystem.generated.h"

class UPTActivatableWidget;
class UPTSystemPopup;
struct FItemReward;

UCLASS()
class PROJECTPT_API UPTUIManagerSubsystem : public UUIManagerSubsystem
{
	GENERATED_BODY()

public:
	UPTUIManagerSubsystem();

	void ShowMouseCursor();
	void HideMouseCursor();

	void ShowSystemPopup(FString Title, FString Desc, FString YesText, TFunction<void()>YesCallback, FString NoText, TFunction<void()>NoCallback);
	void ShowSystemPopup(FString Title, FString Desc, FString YesText, TFunction<void()>YesCallback);

	void ShowItemRewardPopup(TArray<FItemReward> RewardDatas);

private:
	template<typename T = UUserWidget>
	T* GetWidget(FGameplayTag LayerTag, FString LayerName, FString WidgetPath);

private:
	FString DynamicPopupPath;
	FString SystemPopupPath;

	FGameplayTag DynamicLayerTag;
	FGameplayTag SystemLayerTag;
};

template<typename T>
inline T* UPTUIManagerSubsystem::GetWidget(FGameplayTag LayerTag, FString LayerName, FString WidgetPath)
{
	UCommonActivatableWidgetBase* WidgetBase = GetActivatableWidgetName(LayerTag, LayerName);
	if (!WidgetBase)
	{
		UE_LOG(PTLog, Error, TEXT("[PTUIManagerSubsystem] Not Found WBP_SystemLayout"));
		return nullptr;
	}

	UUserWidget* PopupWidget = WidgetBase->GetWidget("WBP_SystemLayout");
	if (!PopupWidget)
	{
		TSubclassOf<UUserWidget> WidgetClass = StaticLoadClass(UUserWidget::StaticClass(), nullptr, *WidgetPath);

		if (WidgetClass)
		{
			PopupWidget = WidgetBase->CreateWidgetClass(WidgetClass, true);
		}
	}

	return Cast<T>(PopupWidget);
}
