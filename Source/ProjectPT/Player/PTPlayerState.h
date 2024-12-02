// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "PTPlayerState.generated.h"

class UPTPawnData;
class UPTExperienceDefinition;

/**
 * PawnData를 캐싱하는것이 주 목적
 */
UCLASS()
class PROJECTPT_API APTPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	APTPlayerState(const FObjectInitializer& ObjectInitializer);

	virtual void PostInitializeComponents() override;

	template<class T>
	const T* GetPawnData() const { return Cast<T>(PawnData); }

	void OnExperienceLoaded(const UPTExperienceDefinition* CurrentExperience);
	void SetPawnData(const UPTPawnData* PawnData);

	UPROPERTY()
	TObjectPtr<const UPTPawnData> PawnData;
};
