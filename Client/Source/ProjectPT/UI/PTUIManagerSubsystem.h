// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UIManagerSubsystem.h"
#include "ProjectPT/PTLogChannels.h"
#include "PTUIManagerSubsystem.generated.h"

class UPTActivatableWidget;
class UPTSystemPopup;
class UInputMappingContext;
struct FItemReward;

UCLASS()
class PROJECTPT_API UPTUIManagerSubsystem : public UUIManagerSubsystem
{
	GENERATED_BODY()

public:
	UPTUIManagerSubsystem();
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	void RegisterMappingData(APlayerController* PlayerController, UInputMappingContext* MappingContext);
	void RemoveMappingData(APlayerController* PlayerController, UInputMappingContext* MappingContext);

	void ShowMouseCursor();
	void HideMouseCursor();

	void ShowDetailDescPopup(FString Title, FString Desc);
	void ShowSystemPopup(FString Title, FString Desc, FString YesText, TFunction<void()>YesCallback, FString NoText, TFunction<void()>NoCallback);
	void ShowSystemPopup(FString Title, FString Desc, FString YesText, TFunction<void()>YesCallback);

	void ShowItemRewardPopup(TArray<FItemReward> RewardDatas);

private:
	template<typename T = UUserWidget>
	T* GetWidget(FGameplayTag LayerTag, FString LayerName, FString WidgetPath);

private:
	//MappingContext 중복 방지를 위함
	UPROPERTY()
	TArray<UInputMappingContext*>ActiveMappingContexts;

	FString DetailDescPopupPath;
	FString RewardPopupPath;
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
			PopupWidget = WidgetBase->CreateWidgetClass(WidgetClass, ESlateVisibility::Visible, ESlateVisibility::Hidden, true);
		}
	}

	return Cast<T>(PopupWidget);
}
