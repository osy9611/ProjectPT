// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAIComponent.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/AbilitySystem/PTAbilitySystemComponent.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAI_AttributeSet.h"
#include "ProjectPT/Character/PTPawnExtensionComponent.h"
#include "ProjectPT/PTGameplayTags.h"
#include "Components/GameFrameworkComponentManager.h"
#include "ProjectPT/Player/PTPlayerState.h"

const FName UPTAIComponent::NAME_ActorFeatureName("AI");

UPTAIComponent::UPTAIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.bCanEverTick = false;
}

void UPTAIComponent::OnRegister()
{
	Super::OnRegister();

	//�ùٸ� Actor�� ��ϵǾ����� Ȯ��
	//OnRegister �ܰ迡�� ������Ʈ�� �����Ѵ�. ���࿡ ������ �����ߴٴ� �Ŵ� ������Ʈ ��ü�� ���� ������
	{
		if (!GetPawn<APawn>())
		{
			UE_LOG(PTLog, Error, TEXT("this component has been added to a BP whose base class is not a Pawn!!"));
			return;
		}
	}

	/*
	* GameFrameworkComponentManager�� InitState ����� ���� ��� ����
	*	- ����� ��ӹ޾Ҵ� IGameFrameworkInitStateInterface �ż��� RegisterInitStateFeature()�� Ȱ��
	* GameInstance���� ������ InitState ������ ����ϱ� ���ؼ� ����ϱ� ���� �Լ��θ� ��������
	*/
	RegisterInitStateFeature();
}

void UPTAIComponent::BeginPlay()
{
	Super::BeginPlay();

	//PawnExtensionComponent�� ���ؼ� (PawnExtension Feature) OnActorInitStateChanged() �����ϵ��� (Observing)
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
		//PTPawnExtensionComponent�� DataInitialized ���� ��ȭ ���� ��, PTHeroComponent�� DataInitialized ���·� ����
		// - CanChangInitState Ȯ��
		if (Params.FeatureState == InitTags.InitState_DataInitialized)
			CheckDefaultInitialization();
	}
}

bool UPTAIComponent::CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const
{
	check(Manager);

	const FPTGameplayTags& InitTags = FPTGameplayTags::Get();
	APawn* Pawn = GetPawn<APawn>();
	//Spawned �ʱ�ȭ
	if (!CurrentState.IsValid() && DesiredState == InitTags.InitState_Spawned)
	{
		if (Pawn)
			return true;
	}

	//Spawned -> DataAvailable
	if (CurrentState == InitTags.InitState_Spawned && DesiredState == InitTags.InitState_DataAvailable)
	{
		//HeroComponent�� �ٸ��� AI�� PlayerState�� ������ ���� �ʱ⶧���� �׳� true�� ��ȯ ��Ų��.
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

	//DataAvailable -> DataInitialized�ܰ�
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
			}

			PTPlayerState->GetPTAttributeSet()->InitAttributeSet("1");


			Pawn->SpawnDefaultController();
		}
	}
}


void UPTAIComponent::CheckDefaultInitialization()
{
	//Pawn Extension Feature�� ���ӵǾ� �����Ƿ�, CheckDefaultInitializationForImplementers�� ȣ������ �ʴ´�

	const FPTGameplayTags& InitTags = FPTGameplayTags::Get();
	static const TArray<FGameplayTag> StateChain = { InitTags.InitState_Spawned, InitTags.InitState_DataAvailable, InitTags.InitState_DataInitialized, InitTags.InitState_GameplayReady };
	ContinueInitStateChain(StateChain);
}

FTransform UPTAIComponent::GetSkeletonMeshSocketTransform(FName SocketName)
{
	if (const APawn* Pawn = GetPawn<APawn>())
	{
		if (const USkeletalMeshComponent* SkeletalMeshComponent = Pawn->FindComponentByClass<USkeletalMeshComponent>())
		{
			return SkeletalMeshComponent->GetSocketTransform(SocketName);
		}
	}
	return FTransform();
}

FVector UPTAIComponent::GetSkeletonMeshSocketPos(FName SocketName)
{
	if (const APawn* Pawn = GetPawn<APawn>())
	{
		if (const USkeletalMeshComponent* SkeletalMeshComponent = Pawn->FindComponentByClass<USkeletalMeshComponent>())
		{
			return SkeletalMeshComponent->GetSocketLocation(SocketName);
		}
	}
	return FVector();
}
