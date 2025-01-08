// Fill out your copyright notice in the Description page of Project Settings.


#include "PTWidgetData.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/UI/PTUIManagerSubsystem.h"
#include "ProjectPT/UI/PTActivatableWidget.h"

UPTWidgetData::UPTWidgetData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}
PRAGMA_DISABLE_OPTIMIZATION
void UPTWidgetData::RegisterWidgetData(UWorld* World)
{
	if (!World)
	{
		UE_LOG(PTLog, Error, TEXT("[UPTWidgetData] World Is nullptr"));
		return;
	}

	if (Widgets.IsEmpty())
	{
		UE_LOG(PTLog, Log, TEXT("[UPTWidgetData] Widget Array Is Empty WidgetDataName : %s"), *GetName());
		return;
	}


	UPTUIManagerSubsystem* UIManagerSubsystem = World->GetGameInstance()->GetSubsystem<UPTUIManagerSubsystem>();
	if (!UIManagerSubsystem)
	{
		UE_LOG(PTLog, Log, TEXT("[UPTWidgetData] UPTUIManagerSubsystem Is nullptr"));
		return;
	}

	for (const FWidgetData Widget : Widgets)
	{
		UIManagerSubsystem->CreateWidgetClass(Widget.AddWidgetType, Widget.ActiveWidget);
	}

	UE_LOG(PTLog, Log, TEXT("[UPTwidgetData] Complete RegisterWidget!!"));
}
PRAGMA_ENABLE_OPTIMIZATION