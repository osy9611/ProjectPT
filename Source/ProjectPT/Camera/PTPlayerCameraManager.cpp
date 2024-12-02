// Fill out your copyright notice in the Description page of Project Settings.


#include "PTPlayerCameraManager.h"

APTPlayerCameraManager::APTPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	DefaultFOV = PT_CAMERA_DEFAULT_FOV;
	ViewPitchMin = PT_CAMERA_DEFAULT_PITCH_MIN;
	ViewPitchMax = PT_CAMERA_DEFAULT_PITCH_MAX;
}
