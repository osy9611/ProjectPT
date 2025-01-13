// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModularAIController.h"
#include "PTPlayerAIController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTPT_API APTPlayerAIController : public AModularAIController
{
	GENERATED_BODY()
public:
	APTPlayerAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	
};
