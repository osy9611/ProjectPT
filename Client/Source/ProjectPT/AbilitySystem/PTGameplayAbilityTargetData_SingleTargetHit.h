// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Abilities/GameplayAbilityTargetTypes.h"
#include "PTGameplayAbilityTargetData_SingleTargetHit.generated.h"

USTRUCT()
struct FPTGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData_SingleTargetHit
{
	GENERATED_BODY()
public:
	FPTGameplayAbilityTargetData_SingleTargetHit()
		:CartridgeID(-1)
	{}

	virtual UScriptStruct* GetScriptStruct() const override
	{
		return FPTGameplayAbilityTargetData_SingleTargetHit::StaticStruct();
	}

	//Åº¾à ID
	UPROPERTY()
	int32 CartridgeID;
};