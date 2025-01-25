// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonSessionSubsystem.h"
#include "PTCommonSessionSubsystem.generated.h"

struct FSceneData;

/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTCommonSessionSubsystem : public UCommonSessionSubsystem
{
	GENERATED_BODY()
public:
	UPTCommonSessionSubsystem();

	UFUNCTION(BlueprintCallable)
	void MoveSessionByTableID(int32 TableNo);
	
	void SetBGMSound(FString SoundPath);
};
