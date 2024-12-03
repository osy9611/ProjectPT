// Fill out your copyright notice in the Description page of Project Settings.


#include "PTPlayerController.h"
#include "ProjectPT/Player/PTPlayerState.h"
#include "ProjectPT/AbilitySystem/PTAbilitySystemComponent.h"
#include "ProjectPT/Camera/PTPlayerCameraManager.h"

APTPlayerController::APTPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PlayerCameraManagerClass = APTPlayerCameraManager::StaticClass();
}

void APTPlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	if (UPTAbilitySystemComponent* ASC = GetPTAbilitySystemComponent())
		ASC->ProcessAbilityInput(DeltaTime, bGamePaused);

	Super::PostProcessInput(DeltaTime, bGamePaused);
}

UPTAbilitySystemComponent* APTPlayerController::GetPTAbilitySystemComponent() const
{
	const APTPlayerState* PS = GetPTPlayerState();
	return (PS ? PS->GetPTAbilitySystemComponent() : nullptr);
}

APTPlayerState* APTPlayerController::GetPTPlayerState() const
{
	return CastChecked<APTPlayerState>(PlayerState, ECastCheckedType::NullAllowed);
}
