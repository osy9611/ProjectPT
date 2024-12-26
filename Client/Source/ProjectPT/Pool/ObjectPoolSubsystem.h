// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ObjectPoolSubsystem.generated.h"

class UPoolable_Actor;

UCLASS()
class PROJECTPT_API UObjectPoolSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UObjectPoolSubsystem();

	AActor* GetActor(UClass* ClassType);
	void ReturnActor(AActor* Actor);

private:
	UPROPERTY()
	TMap<UClass*, UPoolable_Actor*> ObjectPools;
};
