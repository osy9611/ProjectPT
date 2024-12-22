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
* [0,1]�� BlendFunction�� �°� ������� ���� Ÿ��
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

/*Camera Blending ��� ����*/
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

	//View�� ���� Pitch [Min, Max]
	UPROPERTY(EditDefaultsOnly, Category = "View", Meta = (UIMin = "-89.9", UIMax = "89.9", ClampMin = "-89.9", Clampmax = "89.9"))
	float ViewPitchMin;

	UPROPERTY(EditDefaultsOnly, Category = "View", Meta = (UIMin = "-89.9", UIMax = "89.9", ClampMin = "-89.9", Clampmax = "89.9"))
	float ViewPitchMax;

	//�󸶵��� Blend�� �������� �ð��� �ǹ�
	UPROPERTY(EditDefaultsOnly, Category = "Blending")
	float BlendTime;

	//�������� Blend �� [0, 1]
	float BlendAlpha;

	//�ش� CameraMode�� ���� Blend ��
	//�ռ� BlendAlpha�� ���� ���� �����Ͽ� ���� BlendWeight�� ���
	float BlendWeight;

	//EaseIn/Out�� ����� Exponent
	UPROPERTY(EditDefaultsOnly, Category = "Blending")
	float BlendExponent;

	UPROPERTY(EditDefaultsOnly, Category = "Blending")
	EPTCameraModeBlendFunction BlendFunction;
};

/*Camera Blending�� ����ϴ� ��ü*/
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

	//������ CameraMode�� ����
	UPROPERTY()
	TArray<TObjectPtr<UPTCameraMode>>CameraModeInstance;

	//Camera Matrix Blend ������Ʈ ���� ť
	UPROPERTY()
	TArray<TObjectPtr<UPTCameraMode>> CameraModeStack;

};