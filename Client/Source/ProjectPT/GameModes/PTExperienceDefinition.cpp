// Fill out your copyright notice in the Description page of Project Settings.


#include "PTExperienceDefinition.h"
#include "ProjectPT/UI/PTWidgetData.h"

void UPTExperienceDefinition::RegisterWidgetData(UWorld* World)
{
	if (DefaultWidgetData)
	{
		DefaultWidgetData->RegisterWidgetData(World);
	}
}
