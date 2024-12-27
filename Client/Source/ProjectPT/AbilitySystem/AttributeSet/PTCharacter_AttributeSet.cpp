// Fill out your copyright notice in the Description page of Project Settings.


#include "PTCharacter_AttributeSet.h"
#include "ProjectPT/Table/DataManagerSubsystem.h"
#include "ProjectPT/Table/EnumGenerateData.h"


UPTCharacter_AttributeSet::UPTCharacter_AttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

void UPTCharacter_AttributeSet::InitAttributeSet(FString RowName)
{
	//Character�� ���õ� �����͸� �Է��ؼ� ������ָ� �ɰŰ���.
	if (UDataManagerSubsystem* DataManager = GetWorld()->GetGameInstance()->GetSubsystem<UDataManagerSubsystem>())
	{
		Skill1 = *DataManager->FindData<FSkillData>("1001");
		Skill2 = *DataManager->FindData<FSkillData>("1002");
	}
}
