// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PTObjectSubsystem.generated.h"

class UPTAbilitySystemComponent;
/**
 *
 */
UCLASS()
class PROJECTPT_API UPTObjectSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UPTObjectSubsystem();

	virtual void Deinitialize() override;

	APawn* SpawnActor(UClass* PawnClass, const FTransform& SpawnTransform,APawn* Instigator);
	void RegisterActor(AActor* Actor);
	void ReturnActor(AActor* Actor);

	void ApplyActorsDamage(AActor* Owner, const TArray<AActor>& TargetActors);
	void ApplyDamage(AActor* Onwer, const AActor* TargetActor);
	void ApplyDamage(UPTAbilitySystemComponent* OwnerASC, const AActor* TargetActor);

private:
	UPTAbilitySystemComponent* GetASC(AActor* Actor);

private:
	UPROPERTY()
	TMap<FString, AActor*> ObjectDatas;
};
