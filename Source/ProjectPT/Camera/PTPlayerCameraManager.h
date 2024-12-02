// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "PTPlayerCameraManager.generated.h"

/**
 *
 */
#define PT_CAMERA_DEFAULT_FOV (80.0f)
#define PT_CAMERA_DEFAULT_PITCH_MIN (-89.0f)
#define PT_CAMERA_DEFAULT_PITCH_MAX (89.0f)

UCLASS()
class PROJECTPT_API APTPlayerCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()
public:
	APTPlayerCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
