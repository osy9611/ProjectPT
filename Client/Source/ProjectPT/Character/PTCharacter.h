// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModularCharacter.h"
#include "Gameframework/Character.h"
#include "PTCharacter.generated.h"

class UPTCameraComponent;
class UPTPawnExtensionComponent;
/**
 * 
 */
UCLASS()
class PROJECTPT_API APTCharacter : public AModularCharacter
{
	GENERATED_BODY()
public:
	APTCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	TObjectPtr<UPTPawnExtensionComponent> PawnExtComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	TObjectPtr<UPTCameraComponent> CameraCoponent;
};
