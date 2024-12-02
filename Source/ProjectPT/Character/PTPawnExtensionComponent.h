// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnComponent.h"
#include "Components/GameFrameworkInitStateInterface.h"
#include "PTPawnExtensionComponent.generated.h"

class UPTPawnData;

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

	virtual void OnRegister() final;
	virtual void BeginPlay() final;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) final;

	/*GameFeature*/
	virtual FName GetFeatureName() const final { return  NAME_ActorFeatureName; }
	virtual void OnActorInitStateChanged(const FActorInitStateChangedParams& Params) final;
	virtual bool CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const final;
	virtual void CheckDefaultInitialization() final;

	UPROPERTY(EditDefaultsOnly, Category = "PT|Pawn")
	TObjectPtr<const UPTPawnData> PawnData;
};
