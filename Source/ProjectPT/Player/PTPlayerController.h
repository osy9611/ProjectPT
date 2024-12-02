// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ModularPlayerController.h"
#include "PTPlayerController.generated.h"

class APTPlayerState;

/**
 * 
 */
UCLASS()
class PROJECTPT_API APTPlayerController : public AModularPlayerController
{
	GENERATED_BODY()

public:
	APTPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	//���������� �÷��̾� ��Ʈ�ѷ��� ĳ���Ϳ��ٰ� ��������Ʈ�� ���ε��ϴµ� �װ� �÷��̾� ��Ʈ�ѷ��� ĳ���Ϳ��� �Ѱ��ش�
	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;

	APTPlayerState* GetPTPlayerState() const;
};
