// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "PTCameraMode.h"
#include "PTCameraComponent.generated.h"

class UTPCameraModeStack;

template<class TClass> class TSubclassOf;

DECLARE_DELEGATE_RetVal(TSubclassOf<UPTCameraMode>, FPTCameraModeDelegate);

/**
 *
 */
UCLASS()
class PROJECTPT_API UPTCameraComponent : public UCameraComponent
{
	GENERATED_BODY()
public:
	UPTCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	AActor* GetTargetActor()const { return GetOwner(); }
	void UpdateCameraModes();

	static UPTCameraComponent* FindCameraComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UPTCameraComponent>() : nullptr); }

	virtual void OnRegister() final;
	virtual void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView) final;

	//카메라의 Blending 기능을 지원하는 Stack
	UPROPERTY()
	TObjectPtr<UPTCameraModeStack> CameraModeStack;

	//현재 CameraMode를 가져오는 Delegate
	FPTCameraModeDelegate DetermineCameraModeDelegate;

	void AddFieldOfViewOffset(float Value, bool ResetFieldOfViewOffSet)
	{
		FieldOfViewOffset = FMath::Clamp(FieldOfViewOffset - Value * 100.0f * 0.016f, 0.0f, 20.0f);
		bResetFieldOfViewOffSet = ResetFieldOfViewOffSet;
	}

public:
	bool bResetFieldOfViewOffSet;
protected:

	float FieldOfViewOffset;
};