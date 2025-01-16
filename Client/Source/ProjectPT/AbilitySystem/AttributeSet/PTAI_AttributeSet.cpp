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
		FMonsterData* MonsterData = DataManager->FindData<FMonsterData>(RowName);
		if (MonsterData)
		{
			Health = MonsterData->HP;
		}
	}
}
