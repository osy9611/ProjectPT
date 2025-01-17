// Fill out your copyright notice in the Description page of Project Settings.


#include "PTObjectSubsystem.h"
#include "GameFramework/Actor.h"
#include "ProjectPT/PTLogChannels.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "ProjectPT/Character/PTPawnExtensionComponent.h"
#include "ProjectPT/Character/PTCharacter.h"
#include "ProjectPT/Player/PTPlayerState.h"
#include "ProjectPT/AbilitySystem/PTAbilitySystemComponent.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAttributeSet.h"
#include "ProjectPT/AbilitySystem/GameplayEffect/PTGE_AttackDamage.h"
#include "ProjectPT/GameModes/PTGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "ProjectPT/Object/PTPlayerStart.h"
#include "ProjectPT/Character/PTPawnData.h"
#include "ProjectPT/Character/PTAICharacter.h"
#include "ProjectPT/GameModes/PTGameModeBase.h"
#include "ProjectPT/Character/PTAIComponent.h"

UPTObjectSubsystem::UPTObjectSubsystem()
{
}

void UPTObjectSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UPTObjectSubsystem::Deinitialize()
{
	if (ObjectDatas.Num() > 0)
		ObjectDatas.Empty();

	if (CachePlayerStarts.Num() > 0)
		CachePlayerStarts.Empty();

	IsLoaded = false;
	Super::Deinitialize();
}

PRAGMA_DISABLE_OPTIMIZATION
void UPTObjectSubsystem::SpawnAIActor(const UPTPawnData* PawnData, FGameplayTag GameplayTag, FString DataPawnName)
{
	if (!PawnData)
	{
		UE_LOG(PTLog, Error, TEXT("PawnData Is nullptr"));
		return;
	}

	if (PawnData->PawnClass)
	{
		TArray<APTPlayerStart*> PlayerStartList = GetPlayerStartList(GameplayTag);
		for (APTPlayerStart* PTPlayerStart : PlayerStartList)
		{
			APawn* Pawn = SpawnActor(PawnData->PawnClass, PTPlayerStart->GetActorTransform(), nullptr);

			if (Pawn)
			{
				if (UPTAIComponent* AIComponent = UPTAIComponent::FindAIComponent(Pawn))
				{
					AIComponent->RegisterPTPlayerStart(PTPlayerStart);
					AIComponent->SetMonsterID(PTPlayerStart->TableId);
				}

				if (UPTPawnExtensionComponent* PawnExtComp = UPTPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
				{
					PawnExtComp->SetPlayerInputComponent();
				}
			}
		}
	}
}

APawn* UPTObjectSubsystem::SpawnActor(UClass* PawnClass, const FTransform& SpawnTransform, APawn* Instigator)
{
	check(PawnClass);

	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnInfo.Instigator = Instigator;
	SpawnInfo.ObjectFlags |= RF_Transient;
	SpawnInfo.bDeferConstruction = true;

	if (APawn* SpawnedPawn = GetWorld()->SpawnActor<APawn>(PawnClass, SpawnTransform, SpawnInfo))
	{
		if (AActor* Actor = Cast<AActor>(SpawnedPawn))
		{
			RegisterActor(Actor);
		}
		
		SpawnedPawn->FinishSpawning(SpawnTransform);
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

void UPTObjectSubsystem::ApplyActorsDamage(AActor* Owner, const FGameplayAbilityTargetDataHandle& InData)
{
	check(Owner);
	UPTAbilitySystemComponent* OwnerASC = nullptr;
	if (APTPlayerState* PlayerState = Cast<APTPlayerState>(Owner))
	{
		OwnerASC = PlayerState->GetPTAbilitySystemComponent();
	}
	else
	{
		OwnerASC = GetASC(Owner);
	}
	
	if (!OwnerASC)
	{
		UE_LOG(PTLog, Error, TEXT("[ObjectSubsystem] OwnerASC Is Fail"));
		return;
	}

	for (const TSharedPtr<FGameplayAbilityTargetData> Data : InData.Data)
	{
		if (!Data->HasHitResult())
			continue;

		if (const FHitResult* HitResult = Data->GetHitResult())
		{
			ApplyDamage(OwnerASC, HitResult->GetActor());
		}
	}
}

void UPTObjectSubsystem::ApplyActorsDamage(AActor* Owner, const TArray<AActor*> TargetActors)
{
	check(Owner);


	UPTAbilitySystemComponent* OwnerASC = GetASC(Owner);

	for (const AActor* TargetActor : TargetActors)
	{
		//if(!ObjectDatas.Contains(TargetActor))
		ApplyDamage(OwnerASC, TargetActor);
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
	if (!TargetActor || !OwnerASC)
		return;

	FString ActorName = TargetActor->GetName();
	if (AActor** Actor = ObjectDatas.Find(ActorName))
	{
		UPTAbilitySystemComponent* TargetASC = GetASC(const_cast<AActor*>(TargetActor));
		if (!TargetASC)
		{
			UE_LOG(PTLog, Error, TEXT("[PTObjectSubSystem] ApplyDamage() : This Target Actor ASC Is nullptr [%s]"), *TargetActor->GetName());
			return;
		}

		FGameplayEffectContextHandle EffectContext = OwnerASC->MakeEffectContext();
		EffectContext.AddSourceObject(OwnerASC->GetOwner());
		FGameplayEffectSpecHandle SpecHandle = OwnerASC->MakeOutgoingSpec(UPTGE_AttackDamage::StaticClass(), 1.0f, EffectContext);
		float NewHealth = TargetASC->GetNumericAttribute(UPTAttributeSet::GetHealthAttribute());
		if (SpecHandle.IsValid())
		{
			FActiveGameplayEffectHandle ActiveGEHandle = TargetASC->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get(), TargetASC);
		}
	}
	else
	{
		UE_LOG(PTLog, Error, TEXT("[ObjectSubSystem] This Actor Is Not Found Actor Name %s"), *ActorName);
	}

}

TArray<APTPlayerStart*> UPTObjectSubsystem::GetPlayerStartList(FGameplayTag GameplayTag)
{
	if (CachePlayerStarts.Contains(GameplayTag))
	{
		return CachePlayerStarts[GameplayTag].PlayerStartList;
	}

	return TArray<APTPlayerStart*>();
}

void UPTObjectSubsystem::SetCachePlayerStart()
{
	if (IsLoaded)
		return;

	UE_LOG(PTLog, Log, TEXT("[ObjectSubSystem] Start CachePlayerStart!"));
	TArray<AActor*> PlayerStarts;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APTPlayerStart::StaticClass(), PlayerStarts);

	for (AActor* PlayerStartActor : PlayerStarts)
	{
		APTPlayerStart* PlayerStart = Cast< APTPlayerStart>(PlayerStartActor);
		if (PlayerStart)
		{
			FGameplayTag GameplayTag = PlayerStart->GetGameplayTag();

			if (FPlayerStartList* PlayerStartListResult = CachePlayerStarts.Find(GameplayTag))
			{
				PlayerStartListResult->PlayerStartList.Add(PlayerStart);
			}
			else
			{
				FPlayerStartList PlayerStartList;
				PlayerStartList.PlayerStartList.Add(PlayerStart);
				CachePlayerStarts.Add(GameplayTag, PlayerStartList);
			}
		}
	}

	IsLoaded = true;
	UE_LOG(PTLog, Log, TEXT("[ObjectSubSystem] Complete CachePlayerStart!"))
}

UPTAbilitySystemComponent* UPTObjectSubsystem::GetASC(AActor* Actor)
{
	if (!Actor)
	{
		UE_LOG(PTLog, Log, TEXT("[UPTObjectSubsystem] GetASC() Actor Is nullptr"));
		return nullptr;
	}

	if (UPTPawnExtensionComponent* PawnExtComp = UPTPawnExtensionComponent::FindPawnExtensionComponent(Actor))
	{
		return PawnExtComp->GetAbilitySystemComponent();
	}
	return nullptr;
}
PRAGMA_ENABLE_OPTIMIZATION
