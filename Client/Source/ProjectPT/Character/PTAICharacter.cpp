// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAICharacter.h"
#include "ProjectPT/Character/PTPawnExtensionComponent.h"
#include "ProjectPT/Player/PTPlayerState.h"

APTAICharacter::APTAICharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	//Create PawnExtensionComponent ����
	PawnExtComponent = CreateDefaultSubobject<UPTPawnExtensionComponent>(TEXT("PawnExtensionComponent"));
}

void APTAICharacter::BeginPlay()
{
	Super::BeginPlay();

	/*
	* 1������ �ڿ� ������ �Ǿ��Ѵ�.
	* BeginPlay���� ���� ������ �ʱ�ȭ�� �ȵǴ� ������ �ֱ� ������ 1������ �ڿ� �����ؾ��Ѵ�.
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
