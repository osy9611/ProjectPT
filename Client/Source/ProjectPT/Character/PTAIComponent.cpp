// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAIComponent.h"
#include "PTAICharacter.h"
#include "ProjectPT/Player/PTPlayerState.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/AbilitySystem/PTAbilitySystemComponent.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAI_AttributeSet.h"
#include "ProjectPT/Character/PTPawnExtensionComponent.h"
#include "ProjectPT/PTGameplayTags.h"
#include "ProjectPT/Player/PTPlayerState.h"
#include "ProjectPT/Physics/PTCollisionChannel.h"
#include "ProjectPT/Animation/PTAnimInstance.h"
#include "ProjectPT/Player/PTPlayerAIController.h"
#include "Components/GameFrameworkComponentManager.h"
#include "Perception/AIPerceptionSystem.h"
#include "Perception/AISense_Damage.h"

const FName UPTAIComponent::NAME_ActorFeatureName("AI");

UPTAIComponent::UPTAIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.bCanEverTick = false;
}

void UPTAIComponent::OnRegister()
{
	Super::OnRegister();

	//올바른 Actor에 등록되었는지 확인
	//OnRegister 단계에서 컴포넌트를 부착한다. 만약에 부착에 실패했다는 거는 컴포넌트 자체가 없기 때문에
	{
		if (!GetPawn<APawn>())
		{
			UE_LOG(PTLog, Error, TEXT("this component has been added to a BP whose base class is not a Pawn!!"));
			return;
		}
	}

	/*
	* GameFrameworkComponentManager에 InitState 사용을 위해 등록 진행
	*	- 등록은 상속받았던 IGameFrameworkInitStateInterface 매서드 RegisterInitStateFeature()를 활용
	* GameInstance에서 정의한 InitState 정보를 사용하기 위해서 등록하기 위한 함수로만 생각하자
	*/
	RegisterInitStateFeature();
}

void UPTAIComponent::BeginPlay()
{
	Super::BeginPlay();

	//PawnExtensionComponent에 대해서 (PawnExtension Feature) OnActorInitStateChanged() 관찰하도록 (Observing)
	BindOnActorInitStateChanged(UPTPawnExtensionComponent::NAME_ActorFeatureName, FGameplayTag(), false);

	ensure(TryToChangeInitState(FPTGameplayTags::Get().InitState_Spawned));

	CheckDefaultInitialization();
}

void UPTAIComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UnregisterInitStateFeature();
	Super::EndPlay(EndPlayReason);
}

void UPTAIComponent::OnActorInitStateChanged(const FActorInitStateChangedParams& Params)
{
	const FPTGameplayTags& InitTags = FPTGameplayTags::Get();
	if (Params.FeatureName == UPTPawnExtensionComponent::NAME_ActorFeatureName)
	{
		//PTPawnExtensionComponent의 DataInitialized 상태 변화 관찰 후, PTHeroComponent도 DataInitialized 상태로 변경
		// - CanChangInitState 확인
		if (Params.FeatureState == InitTags.InitState_DataInitialized)
			CheckDefaultInitialization();
	}
}

bool UPTAIComponent::CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const
{
	check(Manager);

	const FPTGameplayTags& InitTags = FPTGameplayTags::Get();
	APawn* Pawn = GetPawn<APawn>();
	//Spawned 초기화
	if (!CurrentState.IsValid() && DesiredState == InitTags.InitState_Spawned)
	{
		if (Pawn)
			return true;
	}

	//Spawned -> DataAvailable
	if (CurrentState == InitTags.InitState_Spawned && DesiredState == InitTags.InitState_DataAvailable)
	{
		//HeroComponent와 다르게 AI는 PlayerState를 가지고 있지 않기때문에 그냥 true로 반환 시킨다.
		return true;
	}

	// DataAvailable -> DataInitialized
	if (CurrentState == InitTags.InitState_DataAvailable && DesiredState == InitTags.InitState_DataInitialized)
	{
		return Manager->HasFeatureReachedInitState(Pawn, UPTPawnExtensionComponent::NAME_ActorFeatureName, InitTags.InitState_DataInitialized);
	}

	// DataInitialized -> GameplayReady
	if (CurrentState == InitTags.InitState_DataInitialized && DesiredState == InitTags.InitState_GameplayReady)
	{
		return true;
	}

	return false;
}

void UPTAIComponent::HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState)
{
	const FPTGameplayTags& InitTags = FPTGameplayTags::Get();

	//DataAvailable -> DataInitialized단계
	if (CurrentState == InitTags.InitState_DataAvailable && DesiredState == InitTags.InitState_DataInitialized)
	{
		APawn* Pawn = GetPawn<APawn>();
		if (!ensure(Pawn))
			return;

		if (UPTPawnExtensionComponent* PawnExtComp = UPTPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
		{
			APTPlayerState* PTPlayerState = GetWorld()->SpawnActor<APTPlayerState>(APTPlayerState::StaticClass());
			if (PTPlayerState)
			{
				Pawn->SetPlayerState(PTPlayerState);
				PawnExtComp->RegisterGameAbilitySystem(PTPlayerState->GetPTAbilitySystemComponent(), PTPlayerState);

				UPTAI_AttributeSet* AttributeSet = PTPlayerState->CreateAttribute<UPTAI_AttributeSet>();
				AttributeSet->InitAttributeSet(FString::FromInt(TableId));

				const UPTPawnData* PawnData = PawnExtComp->GetPawnData<UPTPawnData>();
				PTPlayerState->SetPawnData(PawnData);
				
			}
			Pawn->SpawnDefaultController();
		}
	}
}


void UPTAIComponent::CheckDefaultInitialization()
{
	//Pawn Extension Feature에 종속되어 있으므로, CheckDefaultInitializationForImplementers를 호출하지 않는다
	const FPTGameplayTags& InitTags = FPTGameplayTags::Get();
	static const TArray<FGameplayTag> StateChain = { InitTags.InitState_Spawned, InitTags.InitState_DataAvailable, InitTags.InitState_DataInitialized, InitTags.InitState_GameplayReady };
	ContinueInitStateChain(StateChain);
}

void UPTAIComponent::StartDeath()
{
	APawn* Pawn = GetPawn<APawn>();
	check(Pawn);

	const FPTGameplayTags& InitTags = FPTGameplayTags::Get();
	ProcessAbility(InitTags.AI_Event_Death);

	if (UPTPawnExtensionComponent* PawnExtComp = UPTPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
	{
		if (UPTAnimInstance* AnimInstance = PawnExtComp->GetAnimInstance())
		{
			AnimInstance->CallEventDeath();
		}
	}

	if (UPrimitiveComponent* PrimitiveRoot = Cast<UPrimitiveComponent>(Pawn->GetRootComponent()))
	{
		PrimitiveRoot->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void UPTAIComponent::ProcessAbility(FGameplayTag Tag)
{
	if (APawn* Pawn = GetPawn<APawn>())
	{
		APTPlayerState* PTPlayerState = Pawn->GetPlayerState<APTPlayerState>();

		if (!PTPlayerState)
			return;
		UPTAbilitySystemComponent* ASC = PTPlayerState->GetPTAbilitySystemComponent();
		if (ASC)
		{
			ASC->ProcessAbility(Tag);
		}
	}
}

void UPTAIComponent::SendDamageEvent(AActor* Instigator, float DamageAmount)
{
	if (APawn* Pawn = GetPawn<APawn>())
	{
		const FPTGameplayTags& GameplayTags = FPTGameplayTags::Get();
		FName Tag = FName(*GameplayTags.AI_Event_Attack.ToString());
		UAISense_Damage::ReportDamageEvent(GetWorld(), Pawn, Instigator, DamageAmount, Pawn->GetActorLocation(), FVector::ZeroVector, Tag);
	}
}

bool UPTAIComponent::IsTargetVisible(AActor* TargetActor)
{
	if (APawn* Pawn = GetPawn<APawn>())
	{
		FVector EyeLocation;
		FRotator EyeRotation;
		Pawn->GetActorEyesViewPoint(EyeLocation, EyeRotation);

		FHitResult HitResult;
		FVector TargetLocation = TargetActor->GetActorLocation();

		FCollisionQueryParams TraceParams;
		TraceParams.bReturnPhysicalMaterial = false;
		TraceParams.AddIgnoredActor(Pawn);

		//Start Line Trace
		bool bHit = GetWorld()->LineTraceSingleByChannel(
			HitResult,
			EyeLocation,
			TargetLocation,
			PT_TraceChannel_Interaction,
			TraceParams
		);

#if 0
		DrawDebugLine(
			GetWorld(),
			EyeLocation,
			TargetLocation,
			FColor::Red,
			false,
			1.0f,
			0,
			1.0f
		);
#endif

		if (bHit && HitResult.GetActor() != TargetActor)
		{
			return false;
		}

		return true;
	}

	return false;
}

bool UPTAIComponent::IsAttackRange(AActor* TargetActor, float DefaultAttackRange)
{
	if (!TargetActor)
	{
		//UE_LOG(PTLog, Log, TEXT("This TargetActor is nullptr"));
		return false;
	}

	if (APawn* Pawn = GetPawn<APawn>())
	{
		float Distance = FVector::Dist(Pawn->GetActorLocation(), TargetActor->GetActorLocation());

		if (DefaultAttackRange >= Distance)
		{
			if (IsTargetVisible(TargetActor))
			{
				return true;
			}
		}
	}


	return false;
}