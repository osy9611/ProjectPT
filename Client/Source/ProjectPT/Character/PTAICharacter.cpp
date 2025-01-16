// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAICharacter.h"
#include "ProjectPT/Character/PTPawnExtensionComponent.h"
#include "ProjectPT/Player/PTPlayerState.h"

APTAICharacter::APTAICharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	//Create PawnExtensionComponent »ý¼º
	PawnExtComponent = CreateDefaultSubobject<UPTPawnExtensionComponent>(TEXT("PawnExtensionComponent"));
}

void APTAICharacter::BeginPlay()
{
	Super::BeginPlay();

}

void APTAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
