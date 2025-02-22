// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModularAIController.h"
#include "ProjectPT/Character/PTAIComponent.h"
#include "PTPlayerAIController.generated.h"

struct FMonsterData;
class UBrainComponent;
/**
 *
 */
UCLASS()
class PROJECTPT_API APTPlayerAIController : public AModularAIController
{
	GENERATED_BODY()
public:
	APTPlayerAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void OnPossess(APawn* InPawn) override;

	void RegisterSightConfig(FMonsterData* MonsterData);
	
	UFUNCTION(BlueprintCallable)
	void ProcessAbility(FGameplayTag Tag);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UseTableData")
	bool UseTableData;

	UPROPERTY(BlueprintReadOnly, Category = "SearchRadius");
	float SearchRadius;

	UPROPERTY(BlueprintReadOnly, Category = "Default Attack Range")
	float DefaultAttackRange = 100.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	TObjectPtr<UAIPerceptionComponent> AIPerceptionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	TWeakObjectPtr<UPTAIComponent> AIComponent;

};
