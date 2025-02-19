// Fill out your copyright notice in the Description page of Project Settings.


#include "PTUIManagerSubsystem.h"
#include "PTActivatableWidget.h"
#include "ProjectPT/System/PTAssetManager.h"
#include "ProjectPT/UI//System/PTRewardPopup.h"
#include "ProjectPT/UI/System/PTSystemPopup.h"
#include "ProjectPT/Data/ServerDatas/PTServerData.h"
#include "GameplayTagContainer.h"

UPTUIManagerSubsystem::UPTUIManagerSubsystem()
{
	DynamicPopupPath = "/Game/UI/HUD/System/Reward/WBP_RewardPopup.WBP_RewardPopup_C";
	SystemPopupPath = "/Game/UI/HUD/System/WBP_SystemPopup.WBP_SystemPopup_C";

	FString TagString = TEXT("UI.Layer.System");
	SystemLayerTag = FGameplayTag::RequestGameplayTag(FName(*TagString));

	TagString = TEXT("UI.Layer.Dynamic");
	DynamicLayerTag = FGameplayTag::RequestGameplayTag(FName(*TagString));

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
	UPTSystemPopup* SystemPopup = GetWidget<UPTSystemPopup>(SystemLayerTag, "WBP_SystemLayout", SystemPopupPath);
	if (SystemPopup)
	{
		SystemPopup->ShowSystemPopup(Title, Desc, YesText, YesCallback, NoText, NoCallback);
	}
}

void UPTUIManagerSubsystem::ShowSystemPopup(FString Title, FString Desc, FString YesText, TFunction<void()> YesCallback)
{

	UPTSystemPopup* SystemPopup = GetWidget<UPTSystemPopup>(SystemLayerTag, "WBP_SystemLayout",SystemPopupPath);
	if (SystemPopup)
	{
		SystemPopup->ShowSystemPopup(Title, Desc, YesText, YesCallback);
	}
}

void UPTUIManagerSubsystem::ShowItemRewardPopup(TArray<FItemReward> RewardDatas)
{
	UPTRewardPopup* RewardPopup = GetWidget<UPTRewardPopup>(DynamicLayerTag, "WBP_DynamicLayout", DynamicPopupPath);
	if (RewardPopup)
	{
		RewardPopup->ShowRewardPopup(RewardDatas);
	}
}

