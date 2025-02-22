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
	//Slate UI 프레임워크를 사용해 위젯을 정의하는 부분
	SLATE_BEGIN_ARGS(SCircumferenceMarkerWidget)
		: _MarkerBrush(FCoreStyle::Get().GetBrush("Throbber.CircleChunk"))
		, _Radius(48.0f)
		{}
		//각 마커에 대한 Brush(Box or Image)
		SLATE_ARGUMENT(const FSlateBrush*, MarkerBrush)
		//마커 리스트
		SLATE_ARGUMENT(TArray<FCircumferenceMarkerEntry>, MarkerList)
		//원의 둘레
		SLATE_ATTRIBUTE(float, Radius)
		//마커의 색깔 혹은 Opacity(투명도)
		SLATE_ATTRIBUTE(FSlateColor, ColorAndOpacity)
	SLATE_END_ARGS()

public:
	SCircumferenceMarkerWidget();

	//FArgument는 앞서 선언한 SLATE_BEGINE_ARGS에 의해 결정된다
	void Construct(const FArguments& InArgs);

	void SetRadius(float NewRadius);
	void SetMarkerList(TArray<FCircumferenceMarkerEntry>& NewMarkerList);
	FSlateRenderTransform GetMarkerRenderTransform(const FCircumferenceMarkerEntry& Marker, const float BaseRadius, const float HUDScale) const;

	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;
	virtual FVector2D ComputeDesiredSize(float) const override;
	virtual bool ComputeVolatility() const override { return true; }

	//circumfernece(원주율, 원형태)의 MarkerBrush
	const FSlateBrush* MarkerBrush;

	//reticle 중심으로 외각 코너의 각 아이콘들
	TArray<FCircumferenceMarkerEntry> MarkerList;

	//reticle 원의 Radius
	TAttribute<float> Radius;

	//marker의 color & Opacity
	TAttribute<FSlateColor> ColorAndOpacity;
	bool bColorAndOpacitySet;

	//각 마커를 원 밖으로 뺄지 말지
	uint8 bRecticleCornerOutsideSpreadRadius : 1;

};