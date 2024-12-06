// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "PTAbilityTask_Trace.generated.h"

class UPTGameplayAbility
/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTAbilityTask_Trace : public UAbilityTask
{
	GENERATED_BODY()
public:
	UPTAbilityTask_Trace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/*UFUNCTION(BlueprintCallable, Category = "Ability|Task", meta = (DisplayName = "WaitForTrace"), HidePin="OwningAbility",DefaultToSelf="OwningAbility",BlueprintInternalUseOnly="TRUE")
	static UPTAbilityTask_Trace* CreateTask(UPTGameplayAbility* OwningAbility, TSubclassOf<class >)*/
};
