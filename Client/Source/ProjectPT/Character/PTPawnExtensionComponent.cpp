// Fill out your copyright notice in the Description page of Project Settings.


#include "PTPawnExtensionComponent.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/PTGameplayTags.h"
#include "Components/GameFrameworkComponentManager.h"
#include "ProjectPT/AbilitySystem/PTAbilitySystemComponent.h"

/*feature name을 component 단위니깐 component를 빼고 pawn extension만 넣는 것은 확인할 수 있다.*/
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
PRAGMA_DISABLE_OPTIMIZATION
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

	//ASC를 업데이트하고, InitAbilityActorInfo를 Pawn과 같이 호출하여, AvatarActor를 Pawn으로 업데이트 해준다
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

	//올바른 Actor에 등록되었는지 확인
	//OnRegister 단계에서 컴포넌트를 부착한다. 만약에 부착에 실패했다는 거는 컴포넌트 자체가 없기 때문
	{
		if (!GetPawn<APawn>())
		{
			UE_LOG(PTLog, Error, TEXT("this component has been added to a BP whose base class is not a Pawn"));
			return;
		}
	}

	/*
	* GameFrameworkComponentManager에 InitState 사용을 위해 등록 진행
	*  - 등록은 상속받았던 IGameFrameworkInitStateInterface 매서드 RegisterInitStateFeature()를 활용
	*  - 해당 함수를 간단히 보기
	* GameInstance에서 정의한 InitState 정보를 사용하기 위해서 등록하기 위한 함수로만 생각하자
	*/
	RegisterInitStateFeature();
}

void UPTPawnExtensionComponent::BeginPlay()
{
	Super::BeginPlay();

	//InitState_Spawned로 상태 변환
	// - TryToChangeInitState는 다음과 같이 진행된다.
	//	 1.CanChangeInitState로 상태 변환 가능성 유무 판단
	//	 2.HandleChangeInitState로 내부 상태 변경
	//	 3.BindOnActorInitStateChanged로 Bind된 Delegate를 조건에 맞게 호출해 줌
	//     - PTPawnExtensionComponent의 경우, 모든 Actor의 Feature 상태 변화에 대해 OnActorInitStateChanged()가 호출됨

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

	//InitState_Spawned 초기화
	if (!CurrentState.IsValid() && DesiredState == InitTags.InitState_Spawned)
	{
		if (Pawn)
			return true;
	}

	//Spawned -> DataAvailable
	if (CurrentState == InitTags.InitState_Spawned && DesiredState == InitTags.InitState_DataAvailable)
	{
		//PawnData를 설정하고 있을 것이다
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
		//Actor에 바인드된 모든 Feature들이 DataAvailable 상태일 때, DataInitialized로 넘어감:
		// - HaveAllFeaturesReachedInitState 확인
		return Manager->HaveAllFeaturesReachedInitState(Pawn, InitTags.InitState_DataAvailable);
	}

	// DataInitialized -> GameplayReady
	if (CurrentState == InitTags.InitState_DataInitialized && DesiredState == InitTags.InitState_GameplayReady)
	{
		return true;
	}

	return false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UPTPawnExtensionComponent::CheckDefaultInitialization()
{
	CheckDefaultInitializationForImplementers();

	const FPTGameplayTags& InitTags = FPTGameplayTags::Get();

	static const TArray<FGameplayTag> StateChain = { InitTags.InitState_Spawned, InitTags.InitState_DataAvailable, InitTags.InitState_DataInitialized, InitTags.InitState_GameplayReady };

	ContinueInitStateChain(StateChain);
}
