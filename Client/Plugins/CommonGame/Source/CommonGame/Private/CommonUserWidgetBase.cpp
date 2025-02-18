// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonUserWidgetBase.h"
#include "CommonActivatableWidget.h"
#include "Kismet/GameplayStatics.h"

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
	//에디터 디자인 타임인지 확인하는 함수
	if (!IsDesignTime())
	{
		LayerWidget->SetTransitionDuration(0.0);
		Layers.Add(LayerTag, LayerWidget);
	}
}

UCommonActivatableWidgetBase* UCommonUserWidgetBase::CreateWidgetToLayer(FGameplayTag LayerName, UClass* ActivatableWidgetClass)
{
	if (UCommonActivatableWidgetContainerBase* LayerWidget = GetLayerWidget(LayerName))
	{
		UCommonActivatableWidget* ActivateWidget = GetWidgetToLayer(LayerName, ActivatableWidgetClass);
		if (ActivateWidget)
		{
			if (LayerWidget->GetActiveWidget() != ActivateWidget)
			{
				LayerWidget->RemoveWidget(*ActivateWidget);
				LayerWidget->AddWidgetInstance(*ActivateWidget);
			}
		}
		else
		{
			ActivateWidget = LayerWidget->AddWidget(ActivatableWidgetClass);
		}

		return Cast<UCommonActivatableWidgetBase>(ActivateWidget);
	}

	return nullptr;
}

UCommonActivatableWidgetBase* UCommonUserWidgetBase::GetWidgetToLayer(FGameplayTag LayerName, UClass* ActivatableWidgetClass)
{
	if (UCommonActivatableWidgetContainerBase* LayerWidget = GetLayerWidget(LayerName))
	{
		const TArray<UCommonActivatableWidget*>& Widgets = LayerWidget->GetWidgetList();
		UCommonActivatableWidget* const* FoundWidget = Widgets.FindByPredicate([&](UCommonActivatableWidget* Widget) {
			UE_LOG(LogTemp, Log, TEXT("Widget Static Class : %s, ActivatableWidgetClass Static Class : %s"), *Widget->StaticClass()->GetName(), *ActivatableWidgetClass->StaticClass()->GetName());
			return Widget->IsA(ActivatableWidgetClass);
			});

		if (FoundWidget)
		{
			return Cast<UCommonActivatableWidgetBase>(*FoundWidget);
		}
	}

	return nullptr;
}

UCommonActivatableWidgetBase* UCommonUserWidgetBase::GetWidgetToLayer(FGameplayTag LayerName, const FString& WidgetName)
{
	if (UCommonActivatableWidgetContainerBase* LayerWidget = GetLayerWidget(LayerName))
	{
		const TArray<UCommonActivatableWidget*>& Widgets = LayerWidget->GetWidgetList();
		UCommonActivatableWidget* const* FoundWidget = Widgets.FindByPredicate([&](UCommonActivatableWidget* Widget) {
			UE_LOG(LogTemp, Log, TEXT("Widget Static Class : %s, ActivatableWidgetClass Static Class : %s"), *Widget->GetName(), *WidgetName);
			return Widget->GetName().Contains(WidgetName);
			});
		if (FoundWidget)
		{
			return Cast<UCommonActivatableWidgetBase>(*FoundWidget);
		}
	}
	return nullptr;
}