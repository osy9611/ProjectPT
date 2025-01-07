// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/Widget.h"
#include "SCircumferenceMarkerWidget.h"
#include "CircumferenceMarkerWidget.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTPT_API UCircumferenceMarkerWidget : public UWidget
{
	GENERATED_BODY()

public:
	UCircumferenceMarkerWidget(const FObjectInitializer& ObjectInitializer);

	//SWidget과 UWidget간 데이터 싱크를 맞추기 위한 매서드
	virtual void SynchronizeProperties() override;

	//Widget 재생성
	virtual TSharedRef<SWidget> RebuildWidget() override;

	//해당 UWidget은 MyMarkerWidget의 SWidget을 가지고 있으므로 잘 해제해야 한다.
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Apperance)
	TArray<FCircumferenceMarkerEntry> MarkerList;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Apperance)
	float Radius = 48.0f;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = Apperance)
	FSlateBrush MarkerImage;

	UPROPERTY(EditAnywhere, Category = Apperance)
	uint8 bReticleCornerOutsizeSpreadRadius : 1;

	TSharedPtr<SCircumferenceMarkerWidget> MyMarkerWidget;
};
