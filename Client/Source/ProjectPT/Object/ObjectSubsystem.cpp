// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectSubsystem.h"
#include "GameFramework/Actor.h"
#include "ProjectPT/PTLogChannels.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "ProjectPT/Character/PTPawnExtensionComponent.h"
#include "ProjectPT/Character/PTCharacter.h"
#include <ProjectPT/Player/PTPlayerState.h>

UObjectSubsystem::UObjectSubsystem()
{
}

void UObjectSubsystem::SpawnActor(AActor* Actor)
{
}

void UObjectSubsystem::ApplyActorsDamage(AActor* Owner, const TArray<AActor>& TargetActors)
{
	check(Owner);

	for (const AActor& TargetActor : TargetActors)
	{
		ApplyDamage(Owner, &TargetActor);
	}
}

void UObjectSubsystem::ApplyDamage(AActor* Owner, const AActor* TargetActor)
{
	check(Owner);
	check(TargetActor);

	FString ActorName = TargetActor->GetName();

	if (AActor* Actor = ObjectDatas.Find(ActorName))
	{
		APTCharacter* PTCharacter = Cast<APTCharacter>(Actor);
		check(PTCharacter);

		APTPlayerState* PTPlayerState = Cast<APTPlayerState>(PTCharacter->GetPlayerState());
		check(PTPlayerState);

		UPTAbilitySystemComponent* ASC = PTPlayerState->GetPTAbilitySystemComponent();
		check(ASC);


	}
	else
	{
		UE_LOG(PTLog, Error, TEXT("[ObjectSubSystem] This Actor Is Not Found Actor Naem %s"), *ActorName);
	}
}
