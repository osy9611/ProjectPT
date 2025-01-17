// Fill out your copyright notice in the Description page of Project Settings.


#include "PTPlayerStart.h"

APTPlayerStart::APTPlayerStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void APTPlayerStart::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (!ShowRadiusInEditor)
		return;

	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (GetWorld())
	{
		FVector Center = GetActorLocation();
		int32 Segments = 32;
		FColor Color = FColor::Red;

		DrawDebugCapsule(GetWorld(), Center, Radius,Radius, GetActorQuat(), FColor::Red, false, -1.0f);

	}
}
