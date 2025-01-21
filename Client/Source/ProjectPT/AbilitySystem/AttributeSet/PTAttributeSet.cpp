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

void UPTAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
	if (Attribute == GetHealthAttribute())
	{

	}
}

void UPTAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		float NewHealth = GetHealth();
		UE_LOG(LogTemp,Log, TEXT("PostGameplayEffectExecute: New Health Value: %f"), NewHealth);
	}
}