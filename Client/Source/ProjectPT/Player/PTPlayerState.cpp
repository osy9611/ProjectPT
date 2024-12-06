// Fill out your copyright notice in the Description page of Project Settings.


#include "PTPlayerState.h"
#include "ProjectPT/GameModes/PTGameModeBase.h"
#include "ProjectPT/GameModes/PTExperienceManagerComponent.h"
#include "ProjectPT/AbilitySystem/PTAbilitySystemComponent.h"
#include "ProjectPT/AbilitySystem/PTAbilitySet.h"
#include "ProjectPT/Character/PTPawnData.h"

APTPlayerState::APTPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	AbilitySystemComponent = ObjectInitializer.CreateDefaultSubobject<UPTAbilitySystemComponent>(this, TEXT("AbilitySystemComponent"));
}

void APTPlayerState::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	//이 부분을 안하면 AvartarActor가 등록이 안되고 Pawn 생성 시 GAS가 등록 안되는 문제가 있음
	check(AbilitySystemComponent);
	{
		//처음 InitAbilityActorInfo를 호출 당시, OwnerActor와 AvatarActor가 같은 Actor를 가르키고 있으며, 이는 PlayerState이다.
		// - OwnerActor는 PlayerState가 의도하는게 맞지만, AvatarActor는 PlayerController가 소유하는 대상인 Pawn이 되어야 한다.
		FGameplayAbilityActorInfo* ActorInfo = AbilitySystemComponent->AbilityActorInfo.Get();
		check(ActorInfo->OwnerActor == this);
		check(ActorInfo->OwnerActor == ActorInfo->AvatarActor);
	}

	AbilitySystemComponent->InitAbilityActorInfo(this, GetPawn());

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

	for (UPTAbilitySet* AbilitySet : PawnData->AbilitySets)
	{
		if (AbilitySet)
			AbilitySet->GiveToAbilitySystem(AbilitySystemComponent, nullptr);
	}
}

