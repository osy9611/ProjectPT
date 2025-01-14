// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "PTObjectSubsystem.generated.h"

class UPTAbilitySystemComponent;
class UPTPawnData;
class APTPlayerStart;

USTRUCT()
struct FPlayerStartList
{
	GENERATED_BODY()
public:

	UPROPERTY()
	TArray<APTPlayerStart*> PlayerStartList;
};

UCLASS()
class PROJECTPT_API UPTObjectSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UPTObjectSubsystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	void SpawnAIActor(const UPTPawnData* PawnData, FGameplayTag GameplayTag, FString DataPawnName);

	APawn* SpawnActor(UClass* PawnClass, const FTransform& SpawnTransform,APawn* Instigator);
	void RegisterActor(AActor* Actor);
	void ReturnActor(AActor* Actor);

	void ApplyActorsDamage(AActor* Owner, const TArray<AActor>& TargetActors);
	void ApplyDamage(AActor* Onwer, const AActor* TargetActor);
	void ApplyDamage(UPTAbilitySystemComponent* OwnerASC, const AActor* TargetActor);

	void SetCachePlayerStart();
	TArray<APTPlayerStart*> GetPlayerStartList(FGameplayTag GameplayTag);

private:
	bool IsLoaded =false;
	UPTAbilitySystemComponent* GetASC(AActor* Actor);

private:
	UPROPERTY()
	TMap<FGameplayTag , FPlayerStartList> CachePlayerStarts;

	UPROPERTY()
	TMap<FString, AActor*> ObjectDatas;

	TObjectPtr<UPTPawnData> AIPanwData;
};
