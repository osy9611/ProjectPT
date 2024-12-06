// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "PTMappableConfigPair.generated.h"

class UPlayerMappableInputConfig;

USTRUCT()
struct FPTMappableConfigPair
{
	GENERATED_BODY()
public:
	FPTMappableConfigPair() = default;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UPlayerMappableInputConfig> Config;

	UPROPERTY(EditAnywhere)
	bool bShouldActivateAutomatically = true;
};
