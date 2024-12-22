// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PTCameraMode.generated.h"

class UPTCameraComponent;

/**
 * FPTCameraModeView
 */
struct FPTCameraModeView
{
	FPTCameraModeView();

	void Blend(const FPTCameraModeView& Other, float OtherWeight);

	FVector Location;
	FRotator Rotation;
	FRotator ControlRotation;
	float FieldOfView;
};

/*
* [0,1]을 BlendFunction에 맞게 재매핑을 위한 타입
*/
UENUM(BlueprintType)
enum class EPTCameraModeBlendFunction : uint8
{
	Linear,
	EaseIn,
	EaseOut,
	EaseInOut,
	COUNT
};

/*Camera Blending 대상 유닛*/
UCLASS()
class UPTCameraMode : public UObject
{
	GENERATED_BODY()
public:
	UPTCameraMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	void UpdateCameraMode(float DeltaTime);
	virtual void UpdateView(float DeltaTime);
	void UpdateBlending(float DeltaTime);

	const FPTCameraModeView& GetCameraModeView() const { return View; }

	UPTCameraComponent* GetPTCameraComponent() const;
	AActor* GetTargetActor() const;
	FVector GetPivotLocation() const;
	FVector GetPivotForward() const;
	FRotator GetPivotRotation() const;

	float GetBlendTime() const { return BlendTime; }
	float GetBlendWeight() const { return BlendWeight; }
	void SetBlendWeight(float Weight);

protected:
	FPTCameraModeView View;
	
	UPROPERTY(EditDefaultsOnly, Category = "View", Meta = (UIMin = "5.0", UIMax = "170", ClampMin = "5.0", Clampmax = "170.0"))
	float FieldOfView;

	//View에 대한 Pitch [Min, Max]
	UPROPERTY(EditDefaultsOnly, Category = "View", Meta = (UIMin = "-89.9", UIMax = "89.9", ClampMin = "-89.9", Clampmax = "89.9"))
	float ViewPitchMin;

	UPROPERTY(EditDefaultsOnly, Category = "View", Meta = (UIMin = "-89.9", UIMax = "89.9", ClampMin = "-89.9", Clampmax = "89.9"))
	float ViewPitchMax;

	//얼마동안 Blend를 진행할지 시간을 의미
	UPROPERTY(EditDefaultsOnly, Category = "Blending")
	float BlendTime;

	//선형적인 Blend 값 [0, 1]
	float BlendAlpha;

	//해당 CameraMode의 최종 Blend 값
	//앞서 BlendAlpha의 선형 값을 매핑하여 최종 BlendWeight를 계산
	float BlendWeight;

	//EaseIn/Out에 사용한 Exponent
	UPROPERTY(EditDefaultsOnly, Category = "Blending")
	float BlendExponent;

	UPROPERTY(EditDefaultsOnly, Category = "Blending")
	EPTCameraModeBlendFunction BlendFunction;
};

/*Camera Blending을 담당하는 객체*/
UCLASS()
class UPTCameraModeStack : public UObject
{
	GENERATED_BODY()
public:
	UPTCameraModeStack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPTCameraMode* GetCameraModeInstance(TSubclassOf<UPTCameraMode>& OutCameraModeView);
	void PushCameraMode(TSubclassOf<UPTCameraMode>& CameraModeClass);
	void EvaluateStack(float DeltaTime, FPTCameraModeView& OutCameraModeView);
	void UpdateStack(float DeltaTime);
	void BlendStack(FPTCameraModeView& OutCameraModeView) const;

	//생성된 CameraMode를 관리
	UPROPERTY()
	TArray<TObjectPtr<UPTCameraMode>>CameraModeInstance;

	//Camera Matrix Blend 업데이트 진행 큐
	UPROPERTY()
	TArray<TObjectPtr<UPTCameraMode>> CameraModeStack;

};