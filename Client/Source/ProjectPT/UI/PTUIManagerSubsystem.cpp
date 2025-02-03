// Fill out your copyright notice in the Description page of Project Settings.


#include "PTUIManagerSubsystem.h"
#include "PTActivatableWidget.h"

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
