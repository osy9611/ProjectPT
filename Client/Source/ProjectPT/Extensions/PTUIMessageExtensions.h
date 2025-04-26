// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectPT/Data/EnumGenerateData.h"
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
struct FUIUpdateEventMessage
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SetFirstList;
};

USTRUCT(BlueprintType)
struct FUIUpdateInventoryMessage
{
	GENERATED_BODY()
public:
};

USTRUCT(BlueprintType)
struct FUIActiveInteractionMessage
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsActive;
};

USTRUCT(BlueprintType)
struct FGetMailsMessage
{
	GENERATED_BODY()
public:
};

USTRUCT(BlueprintType)
struct FDeleteMailMessage
{
	GENERATED_BODY()
public:
	TArray<FString> Pids;
};

USTRUCT(BlueprintType)
struct FRecieveRewardMessage
{
	GENERATED_BODY()
public:
	TArray<FString> Pids;
};

USTRUCT(BlueprintType)
struct FGetEventMessage
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FGetEventRewardMessage
{
	GENERATED_BODY()
public:
	FString EventID;
	TArray<FString> EvnetRewardIDs;
};

USTRUCT(BlueprintType)
struct FAddInventoryMesssage
{
	GENERATED_BODY()
public:
	int32 ItemID;
};

USTRUCT(BlueprintType)
struct FRemoveInventoryMesssage
{
	GENERATED_BODY()
public:
	int32 ItemID;
};

USTRUCT(BlueprintType)
struct FGetInventoryMesssage
{
	GENERATED_BODY()
};


USTRUCT(BlueprintType)
struct FSetSlotInventoryMesssage
{
	GENERATED_BODY()
public:
	FString ItemID;
	int32 SlotNum;
};

USTRUCT(BlueprintType)
struct FChangeCategoryMessage
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemType Type;
};


USTRUCT(BlueprintType)
struct FUpdateCurrencyMessage
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECurrencyType Type;
	int32 Amount;
};