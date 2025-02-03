// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PTActivatableWidget.generated.h"

class UPTUIManagerSubsystem;
struct FGameplayTag;
/**
 * CommonActivatableWidget�� Ư��
 * 1. Widget Layout�� Widget Instance�� �����ϱ� ���� �뵵�� CommonActivatableWidget�� Layour ���� :
 *	  - ��Ÿ�� Activate/Deactivate
 *    - WidgetTree���� ���Ű� �ƴ� ����/�״�(== Activatable/Deactivatable)
 * 2. Input(Mouse or Keyboard ��) ó�� ����� ����
 */
UCLASS()
class PROJECTPT_API UPTActivatableWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	UPTActivatableWidget();

	virtual TOptional<FUIInputConfig> GetDesiredInputConfig() const override;

	UPTUIManagerSubsystem* GetUIManagerSubsystem();

	UFUNCTION(BlueprintCallable)
	void ShowMouseCursor();

	UFUNCTION(BlueprintCallable)
	void HideMouseCursor();

	//Input ó�� ���
	UPROPERTY(EditDefaultsOnly, Category = Input)
	ECommonInputMode InputMode = ECommonInputMode::All;

	//Mouse ó�� ���
	UPROPERTY(EditDefaultsOnly, Category = Input)
	EMouseCaptureMode MouseCaptureMode = EMouseCaptureMode::CapturePermanently;
};
