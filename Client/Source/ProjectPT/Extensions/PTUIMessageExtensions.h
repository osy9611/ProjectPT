// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PTUIMessageExtensions.generated.h"

USTRUCT(BlueprintType)
struct FUISkillCoolTimeMessage
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CoolTime;
};

USTRUCT(BlueprintType)
struct FUIFireZoomMessage
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FireZoom;
};

USTRUCT(BlueprintType)
struct FUIDamageMessage
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* TargetActor;

};

USTRUCT(BlueprintType)
struct FUIHPMessage
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HealthAmount;
};

USTRUCT(BlueprintType)
struct FUIUpdateMailMessage
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FDeleteMailMessage
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FRecieveRewardMessage
{
	GENERATED_BODY()
public:
	TArray<FString> Pids;
};