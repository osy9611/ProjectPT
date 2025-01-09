// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAttributeSet.h"
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
	FSkillData Result = FSkillData();
	if(GameplayTag.IsValid())
	{
		FString TagStr = GameplayTag.ToString();

		if (TagStr==TEXT("InputTag.Ability.SkillDefault"))
		{
			Result = Skill_Default;
		}

		if (TagStr == TEXT("InputTag.Ability.SkillQ"))
		{
			Result = Skill_Q;
		}
	}

	return Result;
}
