// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UIManagerSubsystem.h"
#include "PTUIManagerSubsystem.generated.h"

class UPTActivatableWidget;
class UPTSystemPopup;

/**
 * 
 */
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

private:
	UPTSystemPopup* GetSystePopup();
private:
	FString SystemPopupPath;
	FGameplayTag SystemLayerTag;
};
