// Fill out your copyright notice in the Description page of Project Settings.


#include "PTCharacter_AttributeSet.h"
#include "ProjectPT/Table/DataManagerSubsystem.h"
#include "ProjectPT/Table/EnumGenerateData.h"


UPTCharacter_AttributeSet::UPTCharacter_AttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}
PRAGMA_DISABLE_OPTIMIZATION
void UPTCharacter_AttributeSet::InitAttributeSet(FString RowName)
{
	//Character와 관련된 데이터를 입력해서 등록해주면 될거같다.
	if (UDataManagerSubsystem* DataManager = GetWorld()->GetGameInstance()->GetSubsystem<UDataManagerSubsystem>())
	{
		Skill_Default = *DataManager->FindData<FSkillData>("1001");
		Skill_Q = *DataManager->FindData<FSkillData>("1002");
	}
}
FSkillData UPTCharacter_AttributeSet::GetSkillData(FGameplayTag GameplayTag)
{
	FSkillData Result = FSkillData();
	if (GameplayTag.IsValid())
	{
		FString TagStr = GameplayTag.ToString();

		if (TagStr == TEXT("InputTag.Ability.SkillDefault"))
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
PRAGMA_ENABLE_OPTIMIZATION