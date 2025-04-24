// Fill out your copyright notice in the Description page of Project Settings.


#include "PTObjectSubsystem.h"
#include "GameFramework/Actor.h"
#include "ProjectPT/PTLogChannels.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "Kismet/GameplayStatics.h"
#include "ProjectPT/Character/PTPawnExtensionComponent.h"
#include "ProjectPT/Character/PTCharacter.h"
#include "ProjectPT/Player/PTPlayerState.h"
#include "ProjectPT/AbilitySystem/PTAbilitySystemComponent.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAttributeSet.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAI_AttributeSet.h"
#include "ProjectPT/AbilitySystem/GameplayEffect/PTGE_AttackDamage.h"
#include "ProjectPT/GameModes/PTGameModeBase.h"
#include "ProjectPT/Object/PTPlayerStart.h"
#include "ProjectPT/Character/PTPawnData.h"
#include "ProjectPT/Character/PTAICharacter.h"
#include "ProjectPT/GameModes/PTGameModeBase.h"
#include "ProjectPT/Character/PTAIComponent.h"
#include "ProjectPT/PTGameplayTags.h"
#include "ProjectPT/Extensions/PTUIMessageExtensions.h"
#include "ProjectPT/Character/PTNPCComponent.h"

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

void UPTObjectSubsystem::SpawnActor_GameplayTag(const UPTPawnData* PawnData, FGameplayTag GameplayTag, FString DataPawnName, TFunction<void(APawn*, APTPlayerStart*)> OnSpawnCallback)
{
	if (!PawnData)
	{
		UE_LOG(PTLog, Error, TEXT("PawnData Is nullptr"));
		return;
	}

	if (PawnData->PawnClass)
	{
		AIPawnData = const_cast<UPTPawnData*>(PawnData);
		TArray<APTPlayerStart*> PlayerStartList = GetPlayerStartList(GameplayTag);
		for (APTPlayerStart* PTPlayerStart : PlayerStartList)
		{
			APawn* Pawn = SpawnActor(PawnData->PawnClass, PTPlayerStart->GetActorTransform(), nullptr);

			if (Pawn && OnSpawnCallback)
			{
				OnSpawnCallback(Pawn, PTPlayerStart);
			}


			if (Pawn)
			{
				if (UPTNPCComponent* NPCComponent = UPTNPCComponent::FindNPCComponent(Pawn))
				{
					NPCComponent->SetNPCID(PTPlayerStart->TableId);
				}

				if (UPTAIComponent* AIComponent = UPTAIComponent::FindAIComponent(Pawn))
				{
					AIComponent->RegisterPTPlayerStart(PTPlayerStart);
					AIComponent->SetMonsterID(PTPlayerStart->TableId);
				}

				if (UPTPawnExtensionComponent* PawnExtComp = UPTPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
				{
					PawnExtComp->SetPawnData(PawnData);
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

//GAS에서 여러 형태의 타겟 데이터를 처리하기 위한 로직으로,
//FGameplayAbilityTargetDataHandle 내부의 다양한 타입을 분기 처리해
//ActorArray나 SingleHit 타입에 따라 데미지를 적용한다.
void UPTObjectSubsystem::ApplyActorsDamage(AActor* Owner, const FGameplayAbilityTargetDataHandle& InData, float Damage)
{
	check(Owner);
	UPTAbilitySystemComponent* OwnerASC = nullptr;
	if (APTPlayerState* PlayerState = Cast<APTPlayerState>(Owner))
	{
		OwnerASC = GetASC(PlayerState->GetPawn());
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

	if (!InData.IsValid(0))
	{
		UE_LOG(PTLog, Error, TEXT("[ObjectSubsystem] This InData Is Not Valid"));
		return;
	}

	for (const TSharedPtr<FGameplayAbilityTargetData> Data : InData.Data)
	{
		if (Data->GetScriptStruct()->IsChildOf(FGameplayAbilityTargetData_ActorArray::StaticStruct()))
		{
			if (const FGameplayAbilityTargetData_ActorArray* ActorArrayData = static_cast<FGameplayAbilityTargetData_ActorArray*>(Data.Get()))
			{
				if (ActorArrayData->TargetActorArray.IsEmpty())
					continue;

				for (TWeakObjectPtr<AActor> Actor : ActorArrayData->TargetActorArray)
				{
					if (!Actor.IsValid())
						continue;

					if (Actor.Get())
					{
						ApplyDamage(OwnerASC, Actor.Get(), Damage);
					}
				}
			}
		}

		if (Data->GetScriptStruct()->IsChildOf(FGameplayAbilityTargetData_SingleTargetHit::StaticStruct()))
		{
			if (const FGameplayAbilityTargetData_SingleTargetHit* SingleTargetHitData = static_cast<FGameplayAbilityTargetData_SingleTargetHit*>(Data.Get()))
			{
				if (!Data->HasHitResult())
					continue;
				if (const FHitResult* HitResult = Data->GetHitResult())
				{
					ApplyDamage(OwnerASC, HitResult->GetActor(), Damage);
				}
			}
		}
	}
}

void UPTObjectSubsystem::ApplyActorsDamage(AActor* Owner, const TArray<AActor*> TargetActors, float Damage)
{
	check(Owner);


	UPTAbilitySystemComponent* OwnerASC = GetASC(Owner);

	for (const AActor* TargetActor : TargetActors)
	{
		//if(!ObjectDatas.Contains(TargetActor))
		ApplyDamage(OwnerASC, TargetActor, Damage);
	}
}

void UPTObjectSubsystem::ApplyDamage(AActor* Owner, const AActor* TargetActor, float Damage)
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

void UPTObjectSubsystem::ApplyDamage(UPTAbilitySystemComponent* OwnerASC, const AActor* TargetActor, float Damage)
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
		if (SpecHandle.IsValid())
		{
			const FPTGameplayTags& GameplayTags = FPTGameplayTags::Get();

			//GameplayEffectSpec에 런타임에서 유동적인 값을 주입하기 위한 함수
			//GameplayEffect에서는 SetByCaller 타입의 Modifier를 정의해두고,
			//실제 적용 시 Ability 측에서 FGameplayTag와 함께 값을 전달해주는 방식
			SpecHandle.Data->SetSetByCallerMagnitude(
				GameplayTags.GE_Event_Damage,
				Damage
			);

			FActiveGameplayEffectHandle ActiveGEHandle = TargetASC->ApplyGameplayEffectSpecToTarget(*SpecHandle.Data.Get(), TargetASC);
			if (UPTAIComponent* AIComponent = UPTAIComponent::FindAIComponent(TargetActor))
			{
				AIComponent->SendDamageEvent(OwnerASC->GetAvatarActor(), 1);
			}
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

UPTPawnData* UPTObjectSubsystem::GetPawnData()
{
	if (AIPawnData.IsValid())
	{
		return AIPawnData.Get();
	}

	return nullptr;
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
