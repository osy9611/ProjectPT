// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PTActivatableWidget.generated.h"

class UPTUIManagerSubsystem;
struct FGameplayTag;
/**
 * CommonActivatableWidget의 특성
 * 1. Widget Layout과 Widget Instance를 구분하기 위한 용도로 CommonActivatableWidget은 Layour 정의 :
 *	  - 런타임 Activate/Deactivate
 *    - WidgetTree에서 제거가 아닌 껏다/켰다(== Activatable/Deactivatable)
 * 2. Input(Mouse or Keyboard 등) 처리 방법을 정의
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

	//Input 처리 방식
	UPROPERTY(EditDefaultsOnly, Category = Input)
	ECommonInputMode InputMode = ECommonInputMode::All;

	//Mouse 처리 방식
	UPROPERTY(EditDefaultsOnly, Category = Input)
	EMouseCaptureMode MouseCaptureMode = EMouseCaptureMode::CapturePermanently;
};
