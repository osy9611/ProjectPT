// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAICharacter.h"
#include "ProjectPT/Character/PTPawnExtensionComponent.h"
#include "ProjectPT/Player/PTPlayerState.h"

APTAICharacter::APTAICharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	//Create PawnExtensionComponent 생성
	PawnExtComponent = CreateDefaultSubobject<UPTPawnExtensionComponent>(TEXT("PawnExtensionComponent"));
}

void APTAICharacter::BeginPlay()
{
	Super::BeginPlay();

	/*
	* 1프레임 뒤에 적용이 되야한다.
	* BeginPlay에서 아직 완전히 초기화가 안되는 문제가 있기 때문에 1프레임 뒤에 적용해야한다.
	*/
	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::SetPlayerInputComponent);
}

void APTAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APTAICharacter::SetPlayerInputComponent()
{
	PawnExtComponent->SetPlayerInputComponent();
}
