// Fill out your copyright notice in the Description page of Project Settings.


#include "PTCharacter.h"
#include "ProjectPT/Camera/PTCameraComponent.h"
#include "ProjectPT/Character/PTPawnExtensionComponent.h"
#include "Components/SkeletalMeshComponent.h"

APTCharacter::APTCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	//Create PawnExtensionComponent »ý¼º
	PawnExtComponent = CreateDefaultSubobject<UPTPawnExtensionComponent>(TEXT("PawnExtensionComponent"));

	{
		CameraCoponent = CreateDefaultSubobject<UPTCameraComponent>(TEXT("CameraComponent"));
		CameraCoponent->SetRelativeLocation(FVector(-300.0f, 0.0f, 75.0f));
	}
}

void APTCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APTCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APTCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PawnExtComponent->SetPlayerInputComponent();
}