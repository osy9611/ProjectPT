// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGameModeBase.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/Character/PTPawnExtensionComponent.h"
#include "ProjectPT/GameModes/PTExperienceManagerComponent.h"
#include "ProjectPT/GameModes/PTGameState.h"
#include "ProjectPT/Character/PTCharacter.h"
#include "ProjectPT/Character/PTPawnData.h"
#include "ProjectPT/Player/PTPlayerController.h"
#include "ProjectPT/Player/PTPlayerState.h"
#include "ProjectPT/GameModes/PTExperienceDefinition.h"
#include "ProjectPT/Table/DataManagerSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "ProjectPT/Table/GenerateTableData.h"
#include "ProjectPT/Object/PTObjectSubsystem.h"
#include "ProjectPT/Sound/PTAudioSubsystem.h"
#include "ProjectPT/Object/PTPlayerStart.h"
#include "Engine/World.h"

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

	//���� GameInstance�� ����, �ʱ�ȭ �۾��� ����ǹǷ�, �� �����ӿ����� Experience ó���� ������ �� ����
	// - �̸� ó���ϱ� ����, �������� �ڿ� �̺�Ʈ�� �޾� ó���� �̾ �����Ѵ�.
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

PRAGMA_DISABLE_OPTIMIZATION
void APTGameModeBase::HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer)
{
	if (IsExperienceLoaded())
	{
		Super::HandleStartingNewPlayer_Implementation(NewPlayer);
	}
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

AActor* APTGameModeBase::ChoosePlayerStart_Implementation(AController* Player)
{
	if (UPTObjectSubsystem* PTObjectSubsystem = GetWorld()->GetSubsystem<UPTObjectSubsystem>())
	{
		PTObjectSubsystem->SetCachePlayerStart();

		FGameplayTag GameplayTag = UGameplayTagsManager::Get().RequestGameplayTag(FName(TEXT("Spawn.Player")));
		TArray<APTPlayerStart*> PlayerStartList = PTObjectSubsystem->GetPlayerStartList(GameplayTag);

		if (PlayerStartList.Num() > 0)
			return Cast<AActor>(PlayerStartList[0]);
	}

	return Super::ChoosePlayerStart_Implementation(Player);
}

void APTGameModeBase::HandleMatchAssignmentIfNotExceptingOne()
{
	FPrimaryAssetId ExperienceId;

	UWorld* World = GetWorld();

	if (!ExperienceId.IsValid() && UGameplayStatics::HasOption(OptionsString, TEXT("Experience")))
	{
		//Experience�� Value�� �����ͼ�, PrimaryAssetId�� �������ش�
		const FString ExperienceFromOptions = UGameplayStatics::ParseOption(OptionsString, TEXT("Experience"));
		ExperienceId = FPrimaryAssetId(FPrimaryAssetType(UPTExperienceDefinition::StaticClass()->GetFName()), FName(*ExperienceFromOptions));
	}

	if (!ExperienceId.IsValid())
		ExperienceId = FPrimaryAssetId(FPrimaryAssetType("PTExperienceDefinition"), FName("BP_PTDefaultExperience"));

	if (UDataManagerSubsystem* DataManager = GetGameInstance()->GetSubsystem<UDataManagerSubsystem>())
	{
		DataManager->LoadAllData();
	}

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
	if (CurrentExperience->DefaultWidgetData)
	{
		const_cast<UPTExperienceDefinition*>(CurrentExperience)->RegisterWidgetData(GetWorld());
	}

	if (CurrentExperience->AIPawnData)
	{
		if (UPTObjectSubsystem* ObjectSubSystem = GetWorld()->GetSubsystem<UPTObjectSubsystem>())
		{
			FGameplayTag GameplayTag = UGameplayTagsManager::Get().RequestGameplayTag(FName(TEXT("Spawn.Monster")));
			ObjectSubSystem->SpawnAIActor(CurrentExperience->AIPawnData.Get(), GameplayTag, TEXT("AI"));
		}
	}

	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APlayerController* PC = Cast<APlayerController>(*Iterator);

		if (PC && PC->GetPawn() == nullptr)
		{
			//RestartPlayer�� ���������� �÷��̾� ��Ʈ�ѷ��� ��������ִ°͸� �ִ°� �ƴϴ�.
			//Pawn�� ������ ���������� ���� ������ ������ ���ִ� �ͱ��� ���ش�.
			if (PlayerCanRestart(PC))
				RestartPlayer(PC);
		}
	}



	if (UPTAudioSubsystem* AudioSubSystem = GetGameInstance()->GetSubsystem<UPTAudioSubsystem>())
	{
		AudioSubSystem->RegisterData();
	}
}
PRAGMA_ENABLE_OPTIMIZATION
const UPTPawnData* APTGameModeBase::GetPawnDataForController(const AController* InController) const
{
	if (InController)
	{
		if (const APTPlayerState* PTPS = InController->GetPlayerState<APTPlayerState>())
		{
			//GetPawnData ���� 
			if (const UPTPawnData* PawnData = PTPS->GetPawnData<UPTPawnData>())
				return PawnData;
		}
	}
	//���� PlayerState�� PawnData�� �����Ǿ� ���� ���� ���, ExperienceManagerComponent�� CurrentExperience�κ��� �����ͼ� �����Ѵ�
	check(GameState);
	UPTExperienceManagerComponent* ExperienceManagerComponent = GameState->FindComponentByClass<UPTExperienceManagerComponent>();
	check(ExperienceManagerComponent);

	if (ExperienceManagerComponent->IsExperienceLoaded())
	{
		const UPTExperienceDefinition* Experience = ExperienceManagerComponent->GetCurrentExperienceChecked();


		ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();
		if (LocalPlayer)
		{
			if (LocalPlayer->PlayerController == InController)
			{
				if (Experience->DefaultPawnData)
				{
					return Experience->DefaultPawnData;
				}
			}
			else
			{
				if (Experience->AIPawnData)
				{
					return Experience->AIPawnData; 
				}
			}
		}

		
	}

	return nullptr;
}
