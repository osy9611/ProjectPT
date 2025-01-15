// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModularCharacter.h"
#include "PTAICharacter.generated.h"

class UPTPawnExtensionComponent;

UCLASS()
class PROJECTPT_API APTAICharacter : public AModularCharacter
{
	GENERATED_BODY()
public:
	APTAICharacter();

protected:
	virtual void BeginPlay() override;
	
public:
	virtual void Tick(float DeltaTime) override;

	void SetPlayerInputComponent();
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	TObjectPtr<UPTPawnExtensionComponent> PawnExtComponent;

};
