// Fill out your copyright notice in the Description page of Project Settings.


#include "PTPawnExtensionComponent.h"
#include "GameFramework/Character.h"
#include "Components/GameFrameworkComponentManager.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/PTGameplayTags.h"
#include "ProjectPT/AbilitySystem/PTAbilitySystemComponent.h"
#include "ProjectPT/Animation/PTAnimInstance.h"


/*feature name�� component �����ϱ� component�� ���� pawn extension�� �ִ� ���� Ȯ���� �� �ִ�.*/
const FName UPTPawnExtensionComponent::NAME_ActorFeatureName("PawnExtension");

UPTPawnExtensionComponent::UPTPawnExtensionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.bCanEverTick = false;
}

void UPTPawnExtensionComponent::SetPawnData(const UPTPawnData* InPawnData)
{
	APawn* Pawn = GetPawnChecked<APawn>();
	if (Pawn->GetLocalRole() != ROLE_Authority)
		return;

	if (PawnData)
		return;

	PawnData = InPawnData;
}

void UPTPawnExtensionComponent::SetPlayerInputComponent()
{
	CheckDefaultInitialization();
}

UPTAnimInstance* UPTPawnExtensionComponent::GetAnimInstance()
{
	if (APawn* Pawn = GetPawn<APawn>())
	{
		ACharacter* Character = Cast<ACharacter>(Pawn);
		USkeletalMeshComponent* SkeletalMeshComponent = Character->GetMesh();

		if (UPTAnimInstance* AnimInstance = Cast<UPTAnimInstance>(SkeletalMeshComponent->GetAnimInstance()))
		{
			return AnimInstance;
		}
	}
	return nullptr;
}

void UPTPawnExtensionComponent::SpawnDefaultController()
{
	APawn* Pawn = GetPawnChecked<APawn>();
	Pawn->SpawnDefaultController();
}

void UPTPawnExtensionComponent::InitializeGameAbilitySystem(AActor* IsOwnerActor)
{
	if (!IsOwnerActor)
		return;

	UPTAbilitySystemComponent* ASC = CreateDefaultSubobject<UPTAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	RegisterGameAbilitySystem(ASC, IsOwnerActor);

}

void UPTPawnExtensionComponent::RegisterGameAbilitySystem(UPTAbilitySystemComponent* InASC, AActor* IsOwnerActor)
{
	check(InASC && IsOwnerActor);

	if (AbilitySystemComponent == InASC)
		return;

	if (AbilitySystemComponent)
		UnRegisterGameAbilitySystem();

	APawn* Pawn = GetPawnChecked<APawn>();
	AActor* ExistingActor = InASC->GetAvatarActor();
	check(!ExistingActor);

	//ASC�� ������Ʈ�ϰ�, InitAbilityActorInfo�� Pawn�� ���� ȣ���Ͽ�, AvatarActor�� Pawn���� ������Ʈ ���ش�
	AbilitySystemComponent = InASC;
	AbilitySystemComponent->InitAbilityActorInfo(IsOwnerActor, Pawn);
}

void UPTPawnExtensionComponent::UnRegisterGameAbilitySystem()
{
	if (!AbilitySystemComponent)
	{
		return;
	}

	if (AbilitySystemComponent)
		AbilitySystemComponent = nullptr;
}

void UPTPawnExtensionComponent::OnRegister()
{
	Super::OnRegister();

	//�ùٸ� Actor�� ��ϵǾ����� Ȯ��
	//OnRegister �ܰ迡�� ������Ʈ�� �����Ѵ�. ���࿡ ������ �����ߴٴ� �Ŵ� ������Ʈ ��ü�� ���� ����
	{
		if (!GetPawn<APawn>())
		{
			UE_LOG(PTLog, Error, TEXT("this component has been added to a BP whose base class is not a Pawn"));
			return;
		}
	}

	/*
	* GameFrameworkComponentManager�� InitState ����� ���� ��� ����
	*  - ����� ��ӹ޾Ҵ� IGameFrameworkInitStateInterface �ż��� RegisterInitStateFeature()�� Ȱ��
	*  - �ش� �Լ��� ������ ����
	* GameInstance���� ������ InitState ������ ����ϱ� ���ؼ� ����ϱ� ���� �Լ��θ� ��������
	*/
	RegisterInitStateFeature();
}

void UPTPawnExtensionComponent::BeginPlay()
{
	Super::BeginPlay();

	//InitState_Spawned�� ���� ��ȯ
	// - TryToChangeInitState�� ������ ���� ����ȴ�.
	//	 1.CanChangeInitState�� ���� ��ȯ ���ɼ� ���� �Ǵ�
	//	 2.HandleChangeInitState�� ���� ���� ����
	//	 3.BindOnActorInitStateChanged�� Bind�� Delegate�� ���ǿ� �°� ȣ���� ��
	//     - PTPawnExtensionComponent�� ���, ��� Actor�� Feature ���� ��ȭ�� ���� OnActorInitStateChanged()�� ȣ���

	ensure(TryToChangeInitState(FPTGameplayTags::Get().InitState_Spawned));
}

void UPTPawnExtensionComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UnregisterInitStateFeature();
	Super::EndPlay(EndPlayReason);
}

void UPTPawnExtensionComponent::OnActorInitStateChanged(const FActorInitStateChangedParams& Params)
{
	if (Params.FeatureName != NAME_ActorFeatureName)
	{
		const FPTGameplayTags& InitTags = FPTGameplayTags::Get();
		if (Params.FeatureState == InitTags.InitState_DataAvailable)
			CheckDefaultInitialization();
	}
}

bool UPTPawnExtensionComponent::CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const
{
	check(Manager);

	APawn* Pawn = GetPawn<APawn>();
	const FPTGameplayTags& InitTags = FPTGameplayTags::Get();

	//InitState_Spawned �ʱ�ȭ
	if (!CurrentState.IsValid() && DesiredState == InitTags.InitState_Spawned)
	{
		if (Pawn)
			return true;
	}

	//Spawned -> DataAvailable
	if (CurrentState == InitTags.InitState_Spawned && DesiredState == InitTags.InitState_DataAvailable)
	{
		//PawnData�� �����ϰ� ���� ���̴�
		if (!PawnData)
			return false;

		const bool bIsLocallyControlled = Pawn->IsLocallyControlled();
		if (bIsLocallyControlled)
		{
			if (!GetController<AController>())
				return false;
		}

		return true;
	}

	//DataAvailable -> DataInitialized
	if (CurrentState == InitTags.InitState_DataAvailable && DesiredState == InitTags.InitState_DataInitialized)
	{
		//Actor�� ���ε�� ��� Feature���� DataAvailable ������ ��, DataInitialized�� �Ѿ:
		// - HaveAllFeaturesReachedInitState Ȯ��
		return Manager->HaveAllFeaturesReachedInitState(Pawn, InitTags.InitState_DataAvailable);
	}

	// DataInitialized -> GameplayReady
	if (CurrentState == InitTags.InitState_DataInitialized && DesiredState == InitTags.InitState_GameplayReady)
	{
		return true;
	}

	return false;
}
void UPTPawnExtensionComponent::CheckDefaultInitialization()
{
	CheckDefaultInitializationForImplementers();

	const FPTGameplayTags& InitTags = FPTGameplayTags::Get();

	static const TArray<FGameplayTag> StateChain = { InitTags.InitState_Spawned, InitTags.InitState_DataAvailable, InitTags.InitState_DataInitialized, InitTags.InitState_GameplayReady };

	ContinueInitStateChain(StateChain);
}

FTransform UPTPawnExtensionComponent::GetSkeletonMeshSocketTransform(FName SocketName)
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

FVector UPTPawnExtensionComponent::GetSkeletonMeshSocketPos(FName SocketName)
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
