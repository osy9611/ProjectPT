// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnComponent.h"
#include "Components/GameFrameworkInitStateInterface.h"
#include "ProjectPT/Input/PTMappableConfigPair.h"
#include "GameplayAbilitySpecHandle.h"
#include "PTHeroComponent.generated.h"

struct FPTMappableConfigPair;
struct FInputActionValue;
class UPTCameraMode;
/**
 * ī�޶�, �Է� �� �÷��̾ �����ϴ� �ý����� �ʱ�ȭ�� ó���ϴ� ������Ʈ
 * Pawn�� ���Ӽ��� �����ϱ� ���ؼ� ���������� ����
 */
UCLASS(Blueprintable, Meta = (BlueprintSpawnableComponent))
class PROJECTPT_API UPTHeroComponent : public UPawnComponent, public IGameFrameworkInitStateInterface
{
	GENERATED_BODY()
public:
	UPTHeroComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	static UPTHeroComponent* FindHeroComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UPTHeroComponent>() : nullptr); }

	static const FName NAME_ActorFeatureName;

	virtual void OnRegister() final;	//������Ʈ�� �����Ǵ� ���� �ʱ⿡ ȣ��Ǵ� �Լ�
	virtual void BeginPlay() final;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) final;

	virtual FName GetFeatureName() const final { return NAME_ActorFeatureName; } //Ư�� Feature�� ���� ���ͷ� ó���ϵ��� �ĺ��ϴ� �߿��� �κ�
	virtual void OnActorInitStateChanged(const FActorInitStateChangedParams& Params) final;
	virtual bool CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const final;
	virtual void HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) final;
	virtual void CheckDefaultInitialization() final;


	//AbilityCameraSet
	void SetAbilityCameraMode(TSubclassOf<UPTCameraMode> CameraMode, FGameplayAbilitySpecHandle& OwningSpecHandle);
	void ClearAbilityCameraMode(const FGameplayAbilitySpecHandle& OwningSpecHandle);


	TSubclassOf<UPTCameraMode> DetermineCameraMode() const;
	void InitializePlayerInput(UInputComponent* PlayerInputComponent);
	void Input_Move(const FInputActionValue& InputActionValue);
	void SetMove(bool IsMove) { bIsMove = IsMove; }
	void Input_LookMouse(const FInputActionValue& InputActionValue);
	void Input_Zoom(const FInputActionValue& InputActionValue);

	void Input_AbilityInputTagPressed(FGameplayTag InputTag);
	void Input_AbilityInputTagReleased(FGameplayTag InputTag);

	UPROPERTY(EditAnywhere)
	bool bIsMove = true;

	UPROPERTY(EditAnywhere)
	TArray<FPTMappableConfigPair> DefaultInputConfigs;

	UPROPERTY()
	TSubclassOf<UPTCameraMode> AbilityCameraMode;

	FGameplayAbilitySpecHandle AbilityCameraModeOwningSpecHandle;
};
