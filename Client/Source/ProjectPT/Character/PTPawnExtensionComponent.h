// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnComponent.h"
#include "Components/GameFrameworkInitStateInterface.h"
#include "ProjectPT/Player/PTPlayerState.h"
#include "ProjectPT/Character/PTPawnData.h"
#include "PTPawnExtensionComponent.generated.h"

class UPTAbilitySystemComponent;
class UPTAnimInstance;
/**
 *
 */
UCLASS()
class PROJECTPT_API UPTPawnExtensionComponent : public UPawnComponent, public IGameFrameworkInitStateInterface
{
	GENERATED_BODY()
public:
	UPTPawnExtensionComponent(const FObjectInitializer& ObjectInitializer);

	/*Feature Name Á¤ÀÇ*/
	static const FName NAME_ActorFeatureName;

	static UPTPawnExtensionComponent* FindPawnExtensionComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UPTPawnExtensionComponent>() : nullptr); }

	template<class T>
	const T* GetPawnData() const { return Cast<T>(PawnData); }

	void SetPawnData(const UPTPawnData* InPawnData);
	void SetPlayerInputComponent();
	UPTAbilitySystemComponent* GetAbilitySystemComponent() const { return AbilitySystemComponent; }

	UPTAnimInstance* GetAnimInstance();

	APTPlayerState* GetPlayerState()
	{
		APawn* Pawn = GetPawnChecked<APawn>();
		APTPlayerState* PlayerState = Pawn->GetPlayerState<APTPlayerState>();
		return PlayerState;
	}

	/*Actor Controller*/
	void SpawnDefaultController();

	/*Game Ability System*/
	void InitializeGameAbilitySystem(AActor* IsOwnerActor);
	void RegisterGameAbilitySystem(UPTAbilitySystemComponent* InASC, AActor* IsOwnerActor);
	void UnRegisterGameAbilitySystem();

	virtual void OnRegister() final;
	virtual void BeginPlay() final;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) final;

	/*GameFeature*/
	virtual FName GetFeatureName() const final { return  NAME_ActorFeatureName; }
	virtual void OnActorInitStateChanged(const FActorInitStateChangedParams& Params) final;
	virtual bool CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const final;
	virtual void CheckDefaultInitialization() final;

	UFUNCTION(BlueprintCallable)
	FTransform GetSkeletonMeshSocketTransform(FName SocketName);
	UFUNCTION(BlueprintCallable)
	FVector GetSkeletonMeshSocketPos(FName SocketName);

	UPROPERTY(EditDefaultsOnly, Category = "PT|Pawn")
	TObjectPtr<const UPTPawnData> PawnData;

	UPROPERTY()
	TObjectPtr<UPTAbilitySystemComponent> AbilitySystemComponent;
};
