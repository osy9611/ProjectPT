// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAttributeSet.h"
#include "GameplayEffectExtension.h"
#include "ProjectPT/Table/DataManagerSubsystem.h"
#include "ProjectPT/Table/EnumGenerateData.h"

UPTAttributeSet::UPTAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UPTAttributeSet::InitAttributeSet(FString rowName)
{
}

FSkillData UPTAttributeSet::GetSkillData(FGameplayTag GameplayTag)
{
	return FSkillData();
}
