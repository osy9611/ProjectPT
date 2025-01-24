// Fill out your copyright notice in the Description page of Project Settings.


#include "PTPlayerAIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "ProjectPT/Character/PTAIComponent.h"
#include "ProjectPT/Object/PTPlayerStart.h"
#include "ProjectPT/Table/GenerateTableData.h"
#include "ProjectPT/Table/DataManagerSubsystem.h"
#include "BrainComponent.h"
#include "Perception/AISenseConfig_Sight.h"

APTPlayerAIController::APTPlayerAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));
}

void APTPlayerAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	AIComponent = UPTAIComponent::FindAIComponent(InPawn);
	if (AIComponent.IsValid())
	{
		APTPlayerStart* PlayerStart = AIComponent->GetPlayerStart();
		if (!PlayerStart)
			return;

		SearchRadius = PlayerStart->Radius;

		if (UseTableData)
		{
			if (UDataManagerSubsystem* DataManager = GetWorld()->GetGameInstance()->GetSubsystem<UDataManagerSubsystem>())
			{
				FMonsterData* MonsterData = DataManager->FindData<FMonsterData>(FString::FromInt(PlayerStart->TableId));

				DefaultAttackRange = MonsterData->DefaultAttackRange;

				RegisterSightConfig(MonsterData);
			}
		}
	}
}

void APTPlayerAIController::RegisterSightConfig(FMonsterData* MonsterData)
{
	if (!MonsterData)
		return;

	if (!AIPerceptionComponent->IsRegistered())
	{
		return;
	}

	UAISenseConfig_Sight* SightConfig = NewObject<UAISenseConfig_Sight>(this, UAISenseConfig_Sight::StaticClass(), TEXT("SightConfig"));
	SightConfig->Implementation = UAISense_Sight::StaticClass();
	SightConfig->SightRadius = MonsterData->SightRadius;
	SightConfig->LoseSightRadius = MonsterData->LoseSightRadius;
	SightConfig->PeripheralVisionAngleDegrees = MonsterData->PeripheralVisionAngleDegrees;
	SightConfig->SetMaxAge(5.0f);
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = false;
	SightConfig->SetStartsEnabled(true);

	AIPerceptionComponent->ConfigureSense(*SightConfig);
	//AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
	AIPerceptionComponent->RegisterComponent();
}

void APTPlayerAIController::ProcessAbility(FGameplayTag Tag)
{
	if (AIComponent.Get())
	{
		AIComponent->ProcessAbility(Tag);
	}	
}
