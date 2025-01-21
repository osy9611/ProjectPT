// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "GameplayEffectExecutionCalculation.h"
#include "PTGE_AttackDamage.generated.h"

struct FGameplayEffectCustomExecutionParameters;
struct FGameplayEffectCustomExecutionOutput;

UCLASS()
class PROJECTPT_API UPTDamageExecutionCalculation : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
public:
	UPTDamageExecutionCalculation();

	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;
};

UCLASS()
class PROJECTPT_API UPTGE_AttackDamage : public UGameplayEffect
{
	GENERATED_BODY()
	
public:
	UPTGE_AttackDamage();
};
