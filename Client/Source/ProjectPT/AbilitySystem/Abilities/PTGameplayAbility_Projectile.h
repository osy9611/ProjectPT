// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PTGameplayAbility.h"
#include "PTGameplayAbility_Projectile.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTGameplayAbility_Projectile : public UPTGameplayAbility
{
	GENERATED_BODY()
	
public:
	UPTGameplayAbility_Projectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable)
	void CreateObject();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pawn")
	TSubclassOf<AActor> ProjectileObject;
};
