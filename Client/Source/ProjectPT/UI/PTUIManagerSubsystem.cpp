// Fill out your copyright notice in the Description page of Project Settings.


#include "PTUIManagerSubsystem.h"
#include "PTActivatableWidget.h"
#include "ProjectPT/System/PTAssetManager.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/UI/System/PTSystemPopup.h"
#include "GameplayTagContainer.h"

UPTUIManagerSubsystem::UPTUIManagerSubsystem()
{
	SystemPopupPath = "/Game/UI/HUD/System/WBP_SystemPopup.WBP_SystemPopup_C";

	FString TagString = TEXT("UI.Layer.System");
	SystemLayerTag = FGameplayTag::RequestGameplayTag(FName(*TagString));

}

void UPTUIManagerSubsystem::ShowMouseCursor()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		if (PlayerController->bShowMouseCursor)
			return;

		PlayerController->bShowMouseCursor = true;
	}
}

void UPTUIManagerSubsystem::HideMouseCursor()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		PlayerController->bShowMouseCursor = false;
	}
}

void UPTUIManagerSubsystem::ShowSystemPopup(FString Title, FString Desc, FString YesText, TFunction<void()> YesCallback, FString NoText, TFunction<void()> NoCallback)
{
	UPTSystemPopup* SystemPopup = GetSystePopup();
	if (SystemPopup)
	{
		SystemPopup->ShowSystemPopup(Title, Desc, YesText, YesCallback, NoText, NoCallback);
	}
}

void UPTUIManagerSubsystem::ShowSystemPopup(FString Title, FString Desc, FString YesText, TFunction<void()> YesCallback)
{

	UPTSystemPopup* SystemPopup = GetSystePopup();
	if (SystemPopup)
	{
		SystemPopup->ShowSystemPopup(Title, Desc, YesText, YesCallback);
	}
}

UPTSystemPopup* UPTUIManagerSubsystem::GetSystePopup()
{
	UCommonActivatableWidgetBase* WidgetBase = GetActivatableWidgetName(SystemLayerTag, "WBP_SystemLayout");
	if (!WidgetBase)
	{
		UE_LOG(PTLog, Error, TEXT("[PTUIManagerSubsystem] Not Found WBP_SystemLayout"));
		return nullptr;
	}

	UUserWidget* PopupWidget = WidgetBase->GetWidget("WBP_SystemLayout");
	if (!PopupWidget)
	{
		TSubclassOf<UUserWidget> WidgetClass = StaticLoadClass(UUserWidget::StaticClass(), nullptr, *SystemPopupPath);

		if (WidgetClass)
		{
			PopupWidget = WidgetBase->CreateWidgetClass(WidgetClass, true);
		}
	}

	UPTSystemPopup* SystemPopup = Cast<UPTSystemPopup>(PopupWidget);

	return SystemPopup;
}
