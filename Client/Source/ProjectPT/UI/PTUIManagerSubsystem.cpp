// Fill out your copyright notice in the Description page of Project Settings.


#include "PTUIManagerSubsystem.h"
#include "PTActivatableWidget.h"
#include "ProjectPT/System/PTAssetManager.h"
#include "ProjectPT/UI//System/PTRewardPopup.h"
#include "ProjectPT/UI/System/PTSystemPopup.h"
#include "ProjectPT/UI/System/DetailDesc/PTDetailDescPopup.h"
#include "ProjectPT/Data/ServerDatas/PTServerData.h"
#include "GameplayTagContainer.h"
#include "EnhancedInputSubsystems.h"

UPTUIManagerSubsystem::UPTUIManagerSubsystem()
{
	DetailDescPopupPath = "/Game/UI/HUD/System/DetailDesc/WBP_DetailDescPopup.WBP_DetailDescPopup_C";
	RewardPopupPath = "/Game/UI/HUD/System/Reward/WBP_RewardPopup.WBP_RewardPopup_C";
	SystemPopupPath = "/Game/UI/HUD/System/WBP_SystemPopup.WBP_SystemPopup_C";

	FString TagString = TEXT("UI.Layer.System");
	SystemLayerTag = FGameplayTag::RequestGameplayTag(FName(*TagString));

	TagString = TEXT("UI.Layer.Dynamic");
	DynamicLayerTag = FGameplayTag::RequestGameplayTag(FName(*TagString));
}

void UPTUIManagerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UPTUIManagerSubsystem::RegisterMappingData(APlayerController* PlayerController, UInputMappingContext* MappingContext)
{
	if (!PlayerController || !MappingContext)
	{
		UE_LOG(PTLog, Error, TEXT("[PTUIManageSubsystem] RegisterMappingData Fail PlayerController or MappinConext is nullptr"));
		return;
	}

	UEnhancedInputLocalPlayerSubsystem* InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
	if (!InputSubsystem)
	{
		UE_LOG(PTLog, Error, TEXT("[PTUIManageSubsystem] EnhancedInputLocalPlayerSubsystem is nullptr"));
		return;
	}

	if (!ActiveMappingContexts.Contains(MappingContext))
	{
		InputSubsystem->AddMappingContext(MappingContext, 0);
		ActiveMappingContexts.Add(MappingContext);
	}
}

void UPTUIManagerSubsystem::RemoveMappingData(APlayerController* PlayerController, UInputMappingContext* MappingContext)
{
	if (!PlayerController || !MappingContext)
	{
		UE_LOG(PTLog, Error, TEXT("[PTUIManageSubsystem] RemoveMappingData Fail PlayerController or MappinConext is nullptr"));
		return;
	}

	UEnhancedInputLocalPlayerSubsystem* InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
	if (!InputSubsystem)
	{
		UE_LOG(PTLog, Error, TEXT("[PTUIManageSubsystem] EnhancedInputLocalPlayerSubsystem is nullptr"));
		return;
	}

	if (!ActiveMappingContexts.Contains(MappingContext))
	{
		InputSubsystem->RemoveMappingContext(MappingContext);
		ActiveMappingContexts.Remove(MappingContext);
	}
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

void UPTUIManagerSubsystem::ShowDetailDescPopup(FString Title, FString Desc)
{
	UPTDetailDescPopup* DetailDescPopup = GetWidget<UPTDetailDescPopup>(SystemLayerTag, "WBP_SystemLayout", DetailDescPopupPath);
	if (DetailDescPopup)
	{
		DetailDescPopup->ShowDetailDescPopup(Title, Desc);
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

	UPTSystemPopup* SystemPopup = GetWidget<UPTSystemPopup>(SystemLayerTag, "WBP_SystemLayout", SystemPopupPath);
	if (SystemPopup)
	{
		SystemPopup->ShowSystemPopup(Title, Desc, YesText, YesCallback);
	}
}

void UPTUIManagerSubsystem::ShowItemRewardPopup(TArray<FItemReward> RewardDatas)
{
	UPTRewardPopup* RewardPopup = GetWidget<UPTRewardPopup>(DynamicLayerTag, "WBP_DynamicLayout", RewardPopupPath);
	if (RewardPopup)
	{
		RewardPopup->ShowRewardPopup(RewardDatas);
	}
}

