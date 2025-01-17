// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModularAIController.h"
#include "PTPlayerAIController.generated.h"

struct FMonsterData;
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
	bool IsTargetVisible(AActor* TargetActor);

	UFUNCTION()
	void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "UseTableData")
	bool UseTableData;

	UPROPERTY(BlueprintReadOnly, Category = "SearchRadius");
	float SearchRadius;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category="AI")
	TObjectPtr<UAIPerceptionComponent> AIPerceptionComponent;

};
