// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PTCameraMode.h"
#include "PTCameraMode_ThirdPerson.generated.h"

class UCurveVector;
/**
 * 
 */
UCLASS(Abstract,Blueprintable)
class PROJECTPT_API UPTCameraMode_ThirdPerson : public UPTCameraMode
{
	GENERATED_BODY()
public:
	UPTCameraMode_ThirdPerson(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void UpdateView(float DeltaTime) override;

	void UpdatePreventPentration(float DeltaTime);

	UPROPERTY(EditDefaultsOnly, Category = "Third Person")
	TObjectPtr<const UCurveVector> TargetOffsetCurve;

	UPROPERTY(EditAnywhere, Category = "Camera")
	float DefaultCameraDistance = -300.0f;

	UPROPERTY(EditAnywhere, Category = "Camera")
	float MinCameraDistance = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Camera")
	float CameraCollisionRadius = 2.0f;

	bool bIsSetOffset = false;
private:
	float PrevFieldOfView;
	float FieldOfViewOffset;
};
