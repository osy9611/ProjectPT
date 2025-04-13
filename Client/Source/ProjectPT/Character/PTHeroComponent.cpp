// Fill out your copyright notice in the Description page of Project Settings.


#include "PTHeroComponent.h"
#include "PlayerMappableInputConfig.h"
#include "GameplayEffectExtension.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include <EnhancedInputSubsystems.h>
#include "PTPawnExtensionComponent.h"
#include <ProjectPT/PTGameplayTags.h>
#include "ProjectPT/Character/PTPawnData.h"
#include <ProjectPT/Input/PTInputComponent.h>
#include "ProjectPT/Input/PTMappableConfigPair.h"
#include "ProjectPT/PTGameplayTags.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/Player/PTPlayerState.h"
#include "ProjectPT/Player/PTPlayerController.h"
#include "ProjectPT/Camera/PTCameraComponent.h"
#include "ProjectPT/Camera/PTCameraMode.h"
#include "Components/GameFrameworkComponentManager.h"
#include "ProjectPT/Camera/PTCameraMode_ThirdPerson.h"
#include "ProjectPT/AbilitySystem/PTAbilitySystemComponent.h"
#include "ProjectPT/Camera/PTCameraMode.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTCharacter_AttributeSet.h"
#include "ProjectPT/Object/PTObjectSubsystem.h"
#include "ProjectPT/Animation/PTAnimInstance.h"
#include "ProjectPT/Extensions/PTUIMessageExtensions.h"

const FName UPTHeroComponent::NAME_ActorFeatureName("Hero");

UPTHeroComponent::UPTHeroComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryComponentTick.bStartWithTickEnabled = false;
	PrimaryComponentTick.bCanEverTick = false;
}

void UPTHeroComponent::OnRegister()
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
	*  - 등록은 상속받았던 IGameFrameworkInitStateInterface 매서드 RegisterInitStateFeature()를 활용
	* GameInstance에서 정의한 InitState 정보를 사용하기 위해서 등록하기 위한 함수로만 생각하자
	*/
	RegisterInitStateFeature();
}

void UPTHeroComponent::BeginPlay()
{
	Super::BeginPlay();

	//PawnExtensionComponent에 대해서 (PawnExtension Feature) OnActorInitStateChanged() 관찰하도록 (Observing)
	BindOnActorInitStateChanged(UPTPawnExtensionComponent::NAME_ActorFeatureName, FGameplayTag(), false);

	ensure(TryToChangeInitState(FPTGameplayTags::Get().InitState_Spawned));


	CheckDefaultInitialization();
}

void UPTHeroComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UnregisterInitStateFeature();
	Super::EndPlay(EndPlayReason);
}

void UPTHeroComponent::OnActorInitStateChanged(const FActorInitStateChangedParams& Params)
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

bool UPTHeroComponent::CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const
{
	check(Manager);

	const FPTGameplayTags& InitTags = FPTGameplayTags::Get();
	APawn* Pawn = GetPawn<APawn>();
	APTPlayerState* PTPS = GetPlayerState<APTPlayerState>();
	//Spawned 초기화
	if (!CurrentState.IsValid() && DesiredState == InitTags.InitState_Spawned)
	{
		if (Pawn)
			return true;
	}

	//Spawned -> DataAvailable
	if (CurrentState == InitTags.InitState_Spawned && DesiredState == InitTags.InitState_DataAvailable)
	{
		if (!PTPS)
			return false;

		return true;
	}

	// DataAvailable -> DataInitialized
	if (CurrentState == InitTags.InitState_DataAvailable && DesiredState == InitTags.InitState_DataInitialized)
	{
		// PawnExtensionComponent가 DataInitialized될 때까지 기다림 (== 모든 Feature Component가 DataAvailable인 상태)
		return PTPS && Manager->HasFeatureReachedInitState(Pawn, UPTPawnExtensionComponent::NAME_ActorFeatureName, InitTags.InitState_DataInitialized);
	}

	// DataInitialized -> GameplayReady
	if (CurrentState == InitTags.InitState_DataInitialized && DesiredState == InitTags.InitState_GameplayReady)
	{
		return true;
	}

	return false;
}

void UPTHeroComponent::HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState)
{
	const FPTGameplayTags& InitTags = FPTGameplayTags::Get();

	//DataAvailable -> DataInitialized단계
	if (CurrentState == InitTags.InitState_DataAvailable && DesiredState == InitTags.InitState_DataInitialized)
	{
		APawn* Pawn = GetPawn<APawn>();
		APTPlayerState* PTPS = GetPlayerState<APTPlayerState>();
		if (!ensure(Pawn && PTPS))
			return;

		//Input과 Camera에 대한 헨들링
		const bool bIsLocallyControlled = Pawn->IsLocallyControlled();
		const UPTPawnData* PawnData = nullptr;

		if (UPTPawnExtensionComponent* PawnExtComp = UPTPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
		{
			PawnData = PawnExtComp->GetPawnData<UPTPawnData>();

			//DataIntialize 단계까지 오면, Pawn이 Controller에 Posses 되어 준비된 상태이다
			PawnExtComp->RegisterGameAbilitySystem(PTPS->GetPTAbilitySystemComponent(), PTPS);
		}

		if (APTPlayerState* PlayerState = Pawn->GetPlayerState<APTPlayerState>())
		{
			UPTCharacter_AttributeSet* AttributeSet = PlayerState->CreateAttribute<UPTCharacter_AttributeSet>();
			AttributeSet->InitAttributeSet("1");
		}

		if (bIsLocallyControlled && PawnData)
		{
			if (UPTCameraComponent* CameraComponent = UPTCameraComponent::FindCameraComponent(Pawn))
			{
				CameraComponent->DetermineCameraModeDelegate.BindUObject(this, &ThisClass::DetermineCameraMode);
			}
		}

		if (APTPlayerController* PTPC = GetController<APTPlayerController>())
		{
			if (Pawn->InputComponent != nullptr)
				InitializePlayerInput(Pawn->InputComponent);
		}
	}
}

void UPTHeroComponent::CheckDefaultInitialization()
{
	//Pawn Extension Feature에 종속되어 있으므로, CheckDefaultInitializationForImplementers를 호출하지 않는다

	const FPTGameplayTags& InitTags = FPTGameplayTags::Get();
	static const TArray<FGameplayTag> StateChain = { InitTags.InitState_Spawned, InitTags.InitState_DataAvailable, InitTags.InitState_DataInitialized, InitTags.InitState_GameplayReady };
	ContinueInitStateChain(StateChain);
}

void UPTHeroComponent::SetAbilityCameraMode(TSubclassOf<UPTCameraMode> CameraMode, FGameplayAbilitySpecHandle& OwningSpecHandle, bool UseFovOffset)
{
	if (CameraMode)
	{
		AbilityCameraMode = CameraMode;
		AbilityCameraModeOwningSpecHandle = OwningSpecHandle;

		const APawn* Pawn = GetPawn<APawn>();
		if (!Pawn)
			return;
		if (UPTCameraComponent* CameraPomponent = UPTCameraComponent::FindCameraComponent(Pawn))
		{
			CameraPomponent->bAddFiledOfViewOffset = UseFovOffset;
		}
	}
}

void UPTHeroComponent::ClearAbilityCameraMode(const FGameplayAbilitySpecHandle& OwningSpecHandle, bool UseFovOffset)
{
	if (AbilityCameraModeOwningSpecHandle == OwningSpecHandle)
	{
		AbilityCameraMode = nullptr;
		AbilityCameraModeOwningSpecHandle = FGameplayAbilitySpecHandle();

		const APawn* Pawn = GetPawn<APawn>();
		if (!Pawn)
			return;
		if (UPTCameraComponent* CameraPomponent = UPTCameraComponent::FindCameraComponent(Pawn))
		{
			CameraPomponent->bAddFiledOfViewOffset = UseFovOffset;
		}
	}
}

TSubclassOf<UPTCameraMode> UPTHeroComponent::DetermineCameraMode() const
{
	if (AbilityCameraMode)
		return AbilityCameraMode;

	const APawn* Pawn = GetPawn<APawn>();

	if (!Pawn)
		return nullptr;

	if (UPTPawnExtensionComponent* PawnExtComp = UPTPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
	{
		if (const UPTPawnData* PawnData = PawnExtComp->GetPawnData<UPTPawnData>())
		{
			return PawnData->DefaultCameraMode;
		}
	}

	return TSubclassOf<UPTCameraMode>();
}

void UPTHeroComponent::InitializePlayerInput(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
		return;

	const AActor* Actor = Cast<AActor>(Pawn);
	check(Actor);

	const APlayerController* PC = GetController<APlayerController>();
	check(PC);

	// EnhancedInputLocalPlayerSubsystem 가져오기 위해
	const ULocalPlayer* LP = PC->GetLocalPlayer();
	check(LP);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	check(Subsystem);

	//MappingContext 초기화
	Subsystem->ClearAllMappings();

	if (const UPTPawnExtensionComponent* PawnExtComp = UPTPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
	{
		if (const UPTPawnData* PawnData = PawnExtComp->GetPawnData<UPTPawnData>())
		{
			if (const UPTInputConfig* InputConfig = PawnData->InputConfig)
			{
				const FPTGameplayTags& GameplayTags = FPTGameplayTags::Get();

				if (UPTObjectSubsystem* ObjectSubsystem = GetWorld()->GetSubsystem<UPTObjectSubsystem>())
				{
					ObjectSubsystem->RegisterActor(const_cast<AActor*>(Actor));
				}

				//Input Mapping Context를 순회하며, EnhanceInputLocalPlayerSubsystem에 추가한다
				//Enhanced Input System에서 기본 입력 매핑 리스트 중
				//자동 활성화 설정이 된 항목만 골라 플레이어 입력 서브시스템에 등록하는 구조
				//각 Config는 UInputMappingContext로 되어 있고,
				//AddPlayerMappableConfig 함수를 통해 유저가 키 리맵 가능한 매핑으로 적용된다.
				//이를 통해 초기 설정과 향후 입력 설정 변경, 저장/불러오기 기능의 기반이 됨
				for (const FPTMappableConfigPair& Pair : DefaultInputConfigs)
				{
					if (Pair.bShouldActivateAutomatically)
					{
						//Enhanced Input 시스템에서 입력 컨택스트를 추가하거나 제거할 때 사용되는 구조체
						FModifyContextOptions Options = {};
						Options.bIgnoreAllPressedKeysUntilRelease = false;

						//내부적으로 Input Mapping Context를 추가한다:
						Subsystem->AddPlayerMappableConfig(Pair.Config.LoadSynchronous(), Options);
					}
				}

				UPTInputComponent* PTIC = CastChecked<UPTInputComponent>(PlayerInputComponent);
				{
					{
						TArray<uint32> BindHandles;
						PTIC->BindAbilityActions(InputConfig, this, &ThisClass::Input_AbilityInputTagPressed, &ThisClass::Input_AbilityInputTagReleased, BindHandles);
					}
					PTIC->BindNativeAction(InputConfig, GameplayTags.InputTag_Move, ETriggerEvent::Triggered, this, &ThisClass::Input_Move, false);
					PTIC->BindNativeAction(InputConfig, GameplayTags.InputTag_Look_Mouse, ETriggerEvent::Triggered, this, &ThisClass::Input_LookMouse, false);
					PTIC->BindNativeAction(InputConfig, GameplayTags.InputTag_Zoom, ETriggerEvent::Triggered, this, &ThisClass::Input_Zoom, false);
					PTIC->BindNativeAction(InputConfig, GameplayTags.InputTag_Interaction, ETriggerEvent::Started, this, &ThisClass::Input_Interaction, false);
				}
			}
		}
	}
}

void UPTHeroComponent::Input_Move(const FInputActionValue& InputActionValue)
{
	if (!bIsMove)
		return;

	APawn* Pawn = GetPawn<APawn>();
	AController* Controller = Pawn ? Pawn->GetController() : nullptr;

	if (Controller)
	{
		const FVector2D Value = InputActionValue.Get<FVector2D>();
		const FRotator MovementRotation(0.0f, Controller->GetControlRotation().Yaw, 0.0f);


		if (Value.X != 0.0f)
		{
			const FVector MovementDirection = MovementRotation.RotateVector(FVector::RightVector);
			Pawn->AddMovementInput(MovementDirection, Value.X);
		}

		if (Value.Y != 0.0f)
		{
			const FVector MovementDirection = MovementRotation.RotateVector(FVector::ForwardVector);
			Pawn->AddMovementInput(MovementDirection, Value.Y);
		}
	}
}

void UPTHeroComponent::Input_LookMouse(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();

	if (!Pawn)
		return;

	const FVector2D Value = InputActionValue.Get<FVector2D>();
	if (Value.X != 0.0f)
	{
		Pawn->AddControllerYawInput(Value.X);
	}

	if (Value.Y != 0.0f)
	{
		double AimInversionValue = -Value.Y;
		Pawn->AddControllerPitchInput(AimInversionValue);
	}

	CheckInteraction();
}

void UPTHeroComponent::Input_Zoom(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();

	if (!Pawn)
		return;

	const float Value = InputActionValue.Get<float>();

	if (UPTCameraComponent* CameraPomponent = UPTCameraComponent::FindCameraComponent(Pawn))
	{
		CameraPomponent->AddFieldOfViewOffset(Value, false);
	}
}

void UPTHeroComponent::Input_Interaction(const FInputActionValue& InputActionValue)
{
	UE_LOG(PTLog, Log, TEXT("Input_Interaction"));

}

void UPTHeroComponent::Input_AbilityInputTagPressed(FGameplayTag InputTag)
{
	if (const APawn* Pawn = GetPawn<APawn>())
	{
		if (const UPTPawnExtensionComponent* PawnExtComp = UPTPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
		{
			if (UPTAbilitySystemComponent* ASC = PawnExtComp->GetAbilitySystemComponent())
				ASC->AbilityInputTagPressed(InputTag);
		}
	}
}

void UPTHeroComponent::Input_AbilityInputTagReleased(FGameplayTag InputTag)
{
	if (const APawn* Pawn = GetPawn<APawn>())
	{
		if (const UPTPawnExtensionComponent* PawnExtComp = UPTPawnExtensionComponent::FindPawnExtensionComponent(Pawn))
		{
			if (UPTAbilitySystemComponent* ASC = PawnExtComp->GetAbilitySystemComponent())
				ASC->AbilityInputTagReleased(InputTag);
		}
	}
}

void UPTHeroComponent::InteractionEnter(const AActor* OtherActor)
{
	if (!InteractionTarget.IsValid())
	{
		InteractionTarget = const_cast<AActor*>(OtherActor);
		return;
	}

	APawn* Pawn = GetPawn<APawn>();
	float Dist1 = FVector::Distance(InteractionTarget->GetActorLocation(), Pawn->GetActorLocation());
	float Dist2 = FVector::Distance(OtherActor->GetActorLocation(), Pawn->GetActorLocation());

	if (Dist1 > Dist2)
	{
		InteractionTarget = const_cast<AActor*>(OtherActor);
	}
}

void UPTHeroComponent::InteractionLeave(const AActor* OtherActor)
{
	if (!OtherActor || !InteractionTarget.IsValid())
		return;

	InteractionTarget = nullptr;
	SendInteractionUIMessage(false);
}

bool UPTHeroComponent::CheckInteraction()
{
	if (InteractionTarget.IsValid())
	{
		APawn* Pawn = GetPawn<APawn>();
		FVector Pos = Pawn->GetActorForwardVector();
		FVector TargetPos = InteractionTarget->GetActorLocation();

		Pos.Normalize();
		TargetPos.Normalize();

		float resultDot = FVector::DotProduct(Pos, TargetPos);
		bool ActiveUI = resultDot > 0;

		SendInteractionUIMessage(ActiveUI);

		return resultDot > 0;
	}

	return false;
}

void UPTHeroComponent::SendInteractionUIMessage(bool IsActive)
{
	const FPTGameplayTags& GameplayTags = FPTGameplayTags::Get();
	UGameplayMessageSubsystem& MessageSubsystem = UGameplayMessageSubsystem::Get(this);

	FUIActiveInteractionMessage UIActiveInteractionMessage;
	UIActiveInteractionMessage.IsActive = IsActive;
	MessageSubsystem.BroadcastMessage(GameplayTags.UI_Event_ActiveInteraction, UIActiveInteractionMessage);

}
