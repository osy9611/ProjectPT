// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UIManagerSubsystem.h"
#include "PTUIManagerSubsystem.generated.h"

class UPTActivatableWidget;

/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTUIManagerSubsystem : public UUIManagerSubsystem
{
	GENERATED_BODY()
	
public:
	void ShowMouseCursor();
	void HideMouseCursor();
};
