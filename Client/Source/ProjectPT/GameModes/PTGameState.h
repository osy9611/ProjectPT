// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "PTGameState.generated.h"

class UPTExperienceManagerComponent;
/**
 * 
 */
UCLASS()
class PROJECTPT_API APTGameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	APTGameState();

	UPROPERTY()
	TObjectPtr<UPTExperienceManagerComponent> ExperienceManagerComponent;
};
