// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonUserWidgetBase.h"

UCommonUserWidgetBase::UCommonUserWidgetBase()
{
}

UCommonActivatableWidgetContainerBase* UCommonUserWidgetBase::GetLayerWidget(FGameplayTag LayerName)
{
	return Layers.FindRef(LayerName);
}

void UCommonUserWidgetBase::RegisterLayer(FGameplayTag LayerTag, UCommonActivatableWidgetContainerBase* LayerWidget)
{
	//IsDesignTime()
	//������ ������ Ÿ������ Ȯ���ϴ� �Լ�
	if (!IsDesignTime())
	{
		LayerWidget->SetTransitionDuration(0.0);
		Layers.Add(LayerTag, LayerWidget);
	}
}
