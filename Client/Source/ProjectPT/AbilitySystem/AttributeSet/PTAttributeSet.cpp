// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAttributeSet.h"
#include "GameplayEffectExtension.h"
#include "ProjectPT/Data/DataManagerSubsystem.h"
#include "ProjectPT/Data/EnumGenerateData.h"

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
