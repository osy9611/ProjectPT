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

	//SWidget�� UWidget�� ������ ��ũ�� ���߱� ���� �ż���
	virtual void SynchronizeProperties() override;

	//Widget �����
	virtual TSharedRef<SWidget> RebuildWidget() override;

	//�ش� UWidget�� MyMarkerWidget�� SWidget�� ������ �����Ƿ� �� �����ؾ� �Ѵ�.
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
