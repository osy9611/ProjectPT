// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAI_AttributeSet.h"
#include "ProjectPT/Table/DataManagerSubsystem.h"

UPTAI_AttributeSet::UPTAI_AttributeSet(const FObjectInitializer& ObjectInitializer)
{
}

void UPTAI_AttributeSet::InitAttributeSet(FString RowName)
{
	Super::InitAttributeSet(RowName);
	if (UDataManagerSubsystem* DataManager = GetWorld()->GetGameInstance()->GetSubsystem<UDataManagerSubsystem>())
	{
		Skill_Default = *DataManager->FindData<FSkillData>("1001");

		FMonsterData* MonsterData = DataManager->FindData<FMonsterData>(RowName);
		if (MonsterData)
		{
			Health = MonsterData->HP;
		}
	}
}

FSkillData UPTAI_AttributeSet::GetSkillData(FGameplayTag GameplayTag)
{
	FSkillData Result = FSkillData();
	if (GameplayTag.IsValid())
	{
		FString TagStr = GameplayTag.ToString();

		if (TagStr == TEXT("InputTag.Ability.SkillDefault"))
		{
			Result = Skill_Default;
		}
	}

	return Result;
}
