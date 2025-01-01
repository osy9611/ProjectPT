// Fill out your copyright notice in the Description page of Project Settings.


#include "PTObjectSubsystem.h"
#include "GameFramework/Actor.h"
#include "ProjectPT/PTLogChannels.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "ProjectPT/Character/PTPawnExtensionComponent.h"
#include "ProjectPT/Character/PTCharacter.h"
#include <ProjectPT/Player/PTPlayerState.h>
#include "ProjectPT/AbilitySystem/PTAbilitySystemComponent.h"
#include "ProjectPT/AbilitySystem/GameplayEffect/PTGE_AttackDamage.h"
#include "ProjectPT/GameModes/PTGameModeBase.h"

UPTObjectSubsystem::UPTObjectSubsystem()
{
}

void UPTObjectSubsystem::Deinitialize()
{
	if (ObjectDatas.Num() > 0)
		ObjectDatas.Empty();

	Super::Deinitialize();
}

APawn* UPTObjectSubsystem::SpawnActor(UClass* PawnClass, const FTransform& SpawnTransform, APawn* Instigator)
{
	check(PawnClass);

	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Instigator = Instigator;
	SpawnInfo.ObjectFlags |= RF_Transient;
	SpawnInfo.bDeferConstruction = true;

	if (APawn* SpawnedPawn = GetWorld()->SpawnActor<APawn>(PawnClass, SpawnTransform, SpawnInfo))
	{
		if (AActor* Actor = Cast<AActor>(SpawnedPawn))
		{
			RegisterActor(Actor);
		}
		return SpawnedPawn;
	}

	return nullptr;
}

void UPTObjectSubsystem::RegisterActor(AActor* Actor)
{
	check(Actor);

	FString ActorName = Actor->GetName();

	if (!ObjectDatas.Contains(ActorName))
	{
		UE_LOG(PTLog, Log, TEXT("[PTObjectSubsystem] Success Register Actor!! ActorName: %s"), *ActorName);
		ObjectDatas.Add(ActorName, Actor);
	}
	else
	{
		UE_LOG(PTLog, Log, TEXT("[PTObjectSubsystem] This Actor Is Already Reigstered ActorName: %s"), *ActorName);
	}
}

void UPTObjectSubsystem::ReturnActor(AActor* Actor)
{
}

void UPTObjectSubsystem::ApplyActorsDamage(AActor* Owner, const TArray<AActor>& TargetActors)
{
	check(Owner);

	UPTAbilitySystemComponent* OwnerASC = GetASC(Owner);

	for (const AActor& TargetActor : TargetActors)
	{
		ApplyDamage(OwnerASC, &TargetActor);
	}
}

void UPTObjectSubsystem::ApplyDamage(AActor* Owner, const AActor* TargetActor)
{
	check(Owner);
	check(TargetActor);

	UPTAbilitySystemComponent* OwnerASC = GetASC(Owner);

	FString ActorName = TargetActor->GetName();
	if (AActor** Actor = ObjectDatas.Find(ActorName))
	{
		UPTAbilitySystemComponent* TargetASC = GetASC(const_cast<AActor*>(TargetActor));
		check(TargetASC);

		FGameplayEffectContextHandle EffectContext = OwnerASC->MakeEffectContext();
		FGameplayEffectSpecHandle SpecHandle = OwnerASC->MakeOutgoingSpec(UPTGE_AttackDamage::StaticClass(), 1.0f, EffectContext);

		if (SpecHandle.IsValid())
		{
			TargetASC->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get(), TargetASC);
		}
	}
	else
	{
		UE_LOG(PTLog, Error, TEXT("[ObjectSubSystem] This Actor Is Not Found Actor Naem %s"), *ActorName);
	}
}

void UPTObjectSubsystem::ApplyDamage(UPTAbilitySystemComponent* OwnerASC, const AActor* TargetActor)
{
	check(OwnerASC);
	check(TargetActor);

	FString ActorName = TargetActor->GetName();
	if (AActor** Actor = ObjectDatas.Find(ActorName))
	{
		UPTAbilitySystemComponent* TargetASC = GetASC(const_cast<AActor*>(TargetActor));
		check(TargetASC);

		FGameplayEffectContextHandle EffectContext = OwnerASC->MakeEffectContext();
		FGameplayEffectSpecHandle SpecHandle = OwnerASC->MakeOutgoingSpec(UPTGE_AttackDamage::StaticClass(), 1.0f, EffectContext);

		if (SpecHandle.IsValid())
		{
			TargetASC->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get(), TargetASC);
		}
	}
	else
	{
		UE_LOG(PTLog, Error, TEXT("[ObjectSubSystem] This Actor Is Not Found Actor Naem %s"), *ActorName);
	}

}

UPTAbilitySystemComponent* UPTObjectSubsystem::GetASC(AActor* Actor)
{
	if (!Actor)
	{
		UE_LOG(PTLog, Log, TEXT("[UPTObjectSubsystem] GetASC() Actor Is nullptr"));
		return nullptr;
	}

	if (APTCharacter* PTCharacter = Cast<APTCharacter>(Actor))
	{
		if (APTPlayerState* PTPlayerState = Cast<APTPlayerState>(PTCharacter->GetPlayerState()))
		{
			return PTPlayerState->GetPTAbilitySystemComponent();
		}
	}

	return nullptr;
}
