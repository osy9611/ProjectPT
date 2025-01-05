// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CommonGameInstance.h"
#include "PTGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTGameInstance : public UCommonGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Shutdown() override;

};
