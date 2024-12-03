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

	//�� �κ��� ���ϸ� AvartarActor�� ����� �ȵǰ� Pawn ���� �� GAS�� ��� �ȵǴ� ������ ����
	check(AbilitySystemComponent);
	{
		//ó�� InitAbilityActorInfo�� ȣ�� ���, OwnerActor�� AvatarActor�� ���� Actor�� ����Ű�� ������, �̴� PlayerState�̴�.
		// - OwnerActor�� PlayerState�� �ǵ��ϴ°� ������, AvatarActor�� PlayerController�� �����ϴ� ����� Pawn�� �Ǿ�� �Ѵ�.
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
		//GetPawnDataForController���� ���� PawndData�� �������� �ʾ����Ƿ�, ExperienceManagerComponent�� DefautlPawnData�� �����Ѵ�.
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

