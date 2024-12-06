// Fill out your copyright notice in the Description page of Project Settings.


#include "PTCameraMode_ThirdPerson.h"
#include "Curves/CurveVector.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/Camera/PTCameraComponent.h"
UPTCameraMode_ThirdPerson::UPTCameraMode_ThirdPerson(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	FieldOfViewOffset = 0;
}

void UPTCameraMode_ThirdPerson::UpdateView(float DeltaTime)
{
	FVector PivotLocation = GetPivotLocation();
	FRotator PivotRotation = GetPivotRotation();

	PivotRotation.Pitch = FMath::ClampAngle(PivotRotation.Pitch, ViewPitchMin, ViewPitchMax);

	View.Location = PivotLocation;
	View.Rotation = PivotRotation;
	View.ControlRotation = View.Rotation;
	View.FieldOfView = FieldOfView + FieldOfViewOffset;

	//TargetOffsetCurve가 오버라이드되어 있다면, Curve에 값을 가져와 적용 진행
	if (TargetOffsetCurve)
	{
		const FVector TargetOffset = TargetOffsetCurve->GetVectorValue(PivotRotation.Pitch);
		View.Location = PivotLocation + PivotRotation.RotateVector(TargetOffset);
	}

	UpdatePreventPentration(DeltaTime);
}

void UPTCameraMode_ThirdPerson::UpdatePreventPentration(float DeltaTime)
{
	FVector PivotLocation = GetPivotLocation();
	FVector DesiredCameraPosition = View.Location;
	FVector Direction = DesiredCameraPosition - PivotLocation;
	FHitResult HitResult;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(GetTargetActor());

	float DistBlockedPct = 1.0f;
	bool bHit = GetWorld()->SweepSingleByChannel(
		HitResult,
		PivotLocation,
		DesiredCameraPosition,
		FQuat::Identity,
		ECC_Camera,
		FCollisionShape::MakeSphere(CameraCollisionRadius),
		QueryParams
	);

	if (bHit)
	{
		FVector AdjustedLocation = HitResult.Location - Direction.GetSafeNormal();
		View.Location = AdjustedLocation;
	}
}
