// Fill out your copyright notice in the Description page of Project Settings.


#include "PTPlayerController.h"
#include "ProjectPT/Player/PTPlayerState.h"

APTPlayerController::APTPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void APTPlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	Super::PostProcessInput(DeltaTime, bGamePaused);
}

APTPlayerState* APTPlayerController::GetPTPlayerState() const
{
	return CastChecked<APTPlayerState>(PlayerState, ECastCheckedType::NullAllowed);
}
