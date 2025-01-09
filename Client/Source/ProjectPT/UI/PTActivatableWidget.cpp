// Fill out your copyright notice in the Description page of Project Settings.


#include "PTActivatableWidget.h"
#include "ProjectPT/UI/PTUIManagerSubsystem.h"
#include "ProjectPT/PTLogChannels.h"
UPTActivatableWidget::UPTActivatableWidget()
{

}

TOptional<FUIInputConfig> UPTActivatableWidget::GetDesiredInputConfig() const
{
	return  FUIInputConfig(InputMode, MouseCaptureMode);
}

UPTUIManagerSubsystem* UPTActivatableWidget::GetUIManagerSubsystem()
{
	UPTUIManagerSubsystem* UIManagerSubsystem = GetWorld()->GetGameInstance()->GetSubsystem<UPTUIManagerSubsystem>();
	return UIManagerSubsystem;
}

void UPTActivatableWidget::ShowMouseCursor()
{
	UPTUIManagerSubsystem* UIManagerSubsystem = GetUIManagerSubsystem();
	if (!UIManagerSubsystem)
	{
		UE_LOG(PTLog, Error, TEXT("[PTActivatableWidget] ShowMouseCursor UIMangerSubsystem is nullptr"));
		return;
	}

	UIManagerSubsystem->ShowMouseCursor();
}

void UPTActivatableWidget::HideMouseCursor()
{
	UPTUIManagerSubsystem* UIManagerSubsystem = GetUIManagerSubsystem();
	if (!UIManagerSubsystem)
	{
		UE_LOG(PTLog, Error, TEXT("[PTActivatableWidget] HideMouseCursor UIMangerSubsystem is nullptr"));
		return;
	}
	UIManagerSubsystem->HideMouseCursor();
}

void UPTActivatableWidget::OnNotify_Implementation(FGameplayTag GamePlayTag)
{
}
