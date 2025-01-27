// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAI_AttributeSet.h"
#include "GameplayEffectExtension.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "ProjectPT/AbilitySystem/PTAbilitySystemComponent.h"
#include "ProjectPT/PTGameplayTags.h"
#include "ProjectPT/Character/PTAIComponent.h"
#include "ProjectPT/Table/DataManagerSubsystem.h"
#include "ProjectPT/Player/PTPlayerState.h"

UPTAI_AttributeSet::UPTAI_AttributeSet(const FObjectInitializer& ObjectInitializer)
{

}

void UPTAI_AttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
}

void UPTAI_AttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		float NowHealth = GetHealth();
		if (NowHealth <= 0)
		{
			UAbilitySystemComponent* ASC = GetOwningAbilitySystemComponent();
			if (UPTAIComponent* AIComp = UPTAIComponent::FindAIComponent(ASC->GetAvatarActor()))
			{
				AIComp->StartDeath();
			}
		}
	}
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
			MaxHealth = MonsterData->HP;

			Skill_Default = *DataManager->FindData<FSkillData>(FString::FromInt(MonsterData->Skill1));
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