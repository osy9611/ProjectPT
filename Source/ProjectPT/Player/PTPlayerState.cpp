// Fill out your copyright notice in the Description page of Project Settings.


#include "PTPlayerState.h"
#include "ProjectPT/GameModes/PTGameModeBase.h"
#include "ProjectPT/GameModes/PTExperienceManagerComponent.h"

APTPlayerState::APTPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void APTPlayerState::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	const AGameStateBase* GameState = GetWorld()->GetGameState();
	check(GameState);

	UPTExperienceManagerComponent* ExperienceManagerComponent = GameState->FindComponentByClass<UPTExperienceManagerComponent>();
	check(ExperienceManagerComponent);
	ExperienceManagerComponent->CallOrRegister_OnExperienceLoaded(FOnExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::OnExperienceLoaded));
}

void APTPlayerState::OnExperienceLoaded(const UPTExperienceDefinition* CurrentExperience)
{
	if (APTGameModeBase* GameModeBase = GetWorld()->GetAuthGameMode<APTGameModeBase>())
	{
		//GetPawnDataForController에서 아직 PawndData를 설정하지 않았으므로, ExperienceManagerComponent의 DefautlPawnData로 설정한다.
		const UPTPawnData* NewPawnData = GameModeBase->GetPawnDataForController(GetOwningController());
		check(NewPawnData);

		SetPawnData(NewPawnData);
	}
}

void APTPlayerState::SetPawnData(const UPTPawnData* InPawnData)
{
	check(InPawnData);

	check(!PawnData);

	PawnData = InPawnData;
}
