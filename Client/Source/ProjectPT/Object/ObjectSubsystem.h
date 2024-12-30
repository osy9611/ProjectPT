// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ObjectSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTPT_API UObjectSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:
	UObjectSubsystem();

	void SpawnActor(AActor* Actor);

	void ApplyActorsDamage(AActor* Owner, const TArray<AActor>& TargetActors);
	void ApplyDamage(AActor* Onwer, const AActor* TargetActor);


private:
	TMap<FString, AActor> ObjectDatas;
};
