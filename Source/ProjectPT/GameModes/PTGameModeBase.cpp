// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGameModeBase.h"
#include "ProjectPT/PTLogChannels.h"
#include <ProjectPT/Character/PTPawnExtensionComponent.h>
#include "ProjectPT/GameModes/PTExperienceManagerComponent.h"
#include "ProjectPT/GameModes/PTGameState.h"
#include "ProjectPT/Character/PTCharacter.h"
#include "ProjectPT/Character/PTPawnData.h"
#include "ProjectPT/Player/PTPlayerController.h"
#include "ProjectPT/Player/PTPlayerState.h"
#include "ProjectPT/GameModes/PTExperienceDefinition.h"
#include <Kismet/GameplayStatics.h>
APTGameModeBase::APTGameModeBase()
{

	GameStateClass = APTGameState::StaticClass();
	PlayerControllerClass = APTPlayerController::StaticClass();
	PlayerStateClass = APTPlayerState::StaticClass();
	DefaultPawnClass = APTCharacter::StaticClass();
}

void APTGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	//아직 GameInstance를 통해, 초기화 작업이 진행되므로, 현 프레임에서는 Experience 처리를 진행할 수 없다
	// - 이를 처리하기 위해, 한프레임 뒤에 이벤트를 받아 처리를 이어서 진행한다.
	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::HandleMatchAssignmentIfNotExceptingOne);
}

void APTGameModeBase::InitGameState()
{
	Super::InitGameState();

	UPTExperienceManagerComponent* ExperienceManagerComponent = GameState->FindComponentByClass<UPTExperienceManagerComponent>();
	check(ExperienceManagerComponent);

	ExperienceManagerComponent->CallOrRegister_OnExperienceLoaded(FOnExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::OnExperienceLoaded));
}

UClass* APTGameModeBase::GetDefaultPawnClassForController_Implementation(AController* InController)
{
	if (const UPTPawnData* PawnData = GetPawnDataForController(InController))
	{
		if (PawnData->PawnClass)
			return PawnData->PawnClass;
	}
	return Super::GetDefaultPawnClassForController_Implementation(InController);
}

void APTGameModeBase::HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer)
{
	if (IsExperienceLoaded())
		Super::HandleStartingNewPlayer_Implementation(NewPlayer);
}

APawn* APTGameModeBase::SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform)
{
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Instigator = GetInstigator();
	SpawnInfo.ObjectFlags |= RF_Transient;
	SpawnInfo.bDeferConstruction = true;

	if (UClass* PawnClass = GetDefaultPawnClassForController(NewPlayer))
	{
		if (APawn* SpawnedPawn = GetWorld()->SpawnActor<APawn>(PawnClass, SpawnTransform, SpawnInfo))
		{
			if (UPTPawnExtensionComponent* PawnExtComp = UPTPawnExtensionComponent::FindPawnExtensionComponent(SpawnedPawn))
			{
				if (const UPTPawnData* PawnData = GetPawnDataForController(NewPlayer))
					PawnExtComp->SetPawnData(PawnData);
			}

			SpawnedPawn->FinishSpawning(SpawnTransform);
			return SpawnedPawn;
		}
	}
	return nullptr;
}

void APTGameModeBase::HandleMatchAssignmentIfNotExceptingOne()
{
	FPrimaryAssetId ExperienceId;

	UWorld* World = GetWorld();

	if (!ExperienceId.IsValid() && UGameplayStatics::HasOption(OptionsString, TEXT("Experience")))
	{
		//Experience의 Value를 가져와서, PrimaryAssetId를 생성해준다
		const FString ExperienceFromOptions = UGameplayStatics::ParseOption(OptionsString, TEXT("Experience"));
		ExperienceId = FPrimaryAssetId(FPrimaryAssetType(UPTExperienceDefinition::StaticClass()->GetFName()), FName(*ExperienceFromOptions));
	}

	if (!ExperienceId.IsValid())
		ExperienceId = FPrimaryAssetId(FPrimaryAssetType("PTExperienceDefinition"), FName("BP_PTDefaultExperience"));

	OnMatchAssignmentGiven(ExperienceId);
}

void APTGameModeBase::OnMatchAssignmentGiven(FPrimaryAssetId ExperienceId)
{
	check(ExperienceId.IsValid());

	UPTExperienceManagerComponent* ExperienceManagerComponent = GameState->FindComponentByClass<UPTExperienceManagerComponent>();
	check(ExperienceManagerComponent);

	ExperienceManagerComponent->SetCurrentExperience(ExperienceId);
}

bool APTGameModeBase::IsExperienceLoaded() const
{
	check(GameState);
	UPTExperienceManagerComponent* ExperienceManagerComponent = GameState->FindComponentByClass<UPTExperienceManagerComponent>();
	check(ExperienceManagerComponent);

	return ExperienceManagerComponent->IsExperienceLoaded();
}

void APTGameModeBase::OnExperienceLoaded(const UPTExperienceDefinition* CurrentExperience)
{
	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APlayerController* PC = Cast<APlayerController>(*Iterator);

		if (PC && PC->GetPawn() == nullptr)
		{
			//RestartPlayer는 내부적으로 플레이어 컨트롤러를 재시작해주는것만 있는게 아니다.
			//Pawn이 없으면 내부적으로 폰을 가져와 스폰을 해주는 것까지 해준다.
			if (PlayerCanRestart(PC))
				RestartPlayer(PC);
		}
	}
}

const UPTPawnData* APTGameModeBase::GetPawnDataForController(const AController* InController) const
{
	//아직 PlayerState에 PawnData가 설정되어 있지 않은 경우, ExperienceManagerComponent의 CurrentExperience로부터 가져와서 설정한다
	check(GameState);
	UPTExperienceManagerComponent* ExperienceManagerComponent = GameState->FindComponentByClass<UPTExperienceManagerComponent>();
	check(ExperienceManagerComponent);

	if (ExperienceManagerComponent->IsExperienceLoaded())
	{
		const UPTExperienceDefinition* Experience = ExperienceManagerComponent->GetCurrentExperienceChecked();
		if (Experience->DefaultPawnData)
		{
			return Experience->DefaultPawnData;
		}
	}

	return nullptr;
}
