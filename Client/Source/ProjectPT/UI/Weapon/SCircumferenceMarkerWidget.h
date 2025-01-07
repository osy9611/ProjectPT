// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Containers/Array.h"
#include "Math/Vector2D.h"
#include "Misc/Attribute.h"
#include "Rendering/SlateRenderTransform.h"
#include "Styling/CoreStyle.h"
#include "Styling/ISlateStyle.h"
#include "Styling/SlateColor.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SLeafWidget.h"
#include "SCircumferenceMarkerWidget.generated.h"

USTRUCT(BlueprintType)
struct FCircumferenceMarkerEntry
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ForceUnits = deg))
	float PositionAngle = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (FOrceUnits = deg))
	float ImageRotationAngle = 0.0f;
};

class SCircumferenceMarkerWidget : public SLeafWidget
{
	//Slate UI �����ӿ�ũ�� ����� ������ �����ϴ� �κ�
	SLATE_BEGIN_ARGS(SCircumferenceMarkerWidget)
		: _MarkerBrush(FCoreStyle::Get().GetBrush("Throbber.CircleChunk"))
		, _Radius(48.0f)
		{}
		//�� ��Ŀ�� ���� Brush(Box or Image)
		SLATE_ARGUMENT(const FSlateBrush*, MarkerBrush)
		//��Ŀ ����Ʈ
		SLATE_ARGUMENT(TArray<FCircumferenceMarkerEntry>, MarkerList)
		//���� �ѷ�
		SLATE_ATTRIBUTE(float, Radius)
		//��Ŀ�� ���� Ȥ�� Opacity(����)
		SLATE_ATTRIBUTE(FSlateColor, ColorAndOpacity)
	SLATE_END_ARGS()

public:
	SCircumferenceMarkerWidget();

	//FArgument�� �ռ� ������ SLATE_BEGINE_ARGS�� ���� �����ȴ�
	void Construct(const FArguments& InArgs);

	void SetRadius(float NewRadius);
	void SetMarkerList(TArray<FCircumferenceMarkerEntry>& NewMarkerList);
	FSlateRenderTransform GetMarkerRenderTransform(const FCircumferenceMarkerEntry& Marker, const float BaseRadius, const float HUDScale) const;

	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;
	virtual FVector2D ComputeDesiredSize(float) const override;
	virtual bool ComputeVolatility() const override { return true; }

	//circumfernece(������, ������)�� MarkerBrush
	const FSlateBrush* MarkerBrush;

	//reticle �߽����� �ܰ� �ڳ��� �� �����ܵ�
	TArray<FCircumferenceMarkerEntry> MarkerList;

	//reticle ���� Radius
	TAttribute<float> Radius;

	//marker�� color & Opacity
	TAttribute<FSlateColor> ColorAndOpacity;
	bool bColorAndOpacitySet;

	//�� ��Ŀ�� �� ������ ���� ����
	uint8 bRecticleCornerOutsideSpreadRadius : 1;

};