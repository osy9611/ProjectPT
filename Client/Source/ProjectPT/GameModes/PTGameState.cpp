// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGameState.h"
#include "ProjectPT/GameModes/PTExperienceManagerComponent.h"

APTGameState::APTGameState()
{
	ExperienceManagerComponent = CreateDefaultSubobject<UPTExperienceManagerComponent>(TEXT("ExperienceManagerComponent"));
}
