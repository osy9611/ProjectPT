// Fill out your copyright notice in the Description page of Project Settings.


#include "PTCharacter_AttributeSet.h"
#include "GameplayEffectExtension.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "ProjectPT/Table/DataManagerSubsystem.h"
#include "ProjectPT/Table/EnumGenerateData.h"
#include "ProjectPT/Extensions/PTUIMessageExtensions.h"
#include "ProjectPT/PTGameplayTags.h"


UPTCharacter_AttributeSet::UPTCharacter_AttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

PRAGMA_DISABLE_OPTIMIZATION
void UPTCharacter_AttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
}
void UPTCharacter_AttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		const FPTGameplayTags& GameplayTags = FPTGameplayTags::Get();
		UGameplayMessageSubsystem& MessageSubsystem = UGameplayMessageSubsystem::Get(this);

		float HealthRatio = GetHealth()/ GetMaxHealth();
		FUIHPMessage UIHealthMessage;
		UIHealthMessage.HealthAmount = HealthRatio;

		MessageSubsystem.BroadcastMessage(GameplayTags.UI_Event_Health, UIHealthMessage);
	}
}

void UPTCharacter_AttributeSet::InitAttributeSet(FString RowName)
{
	//Character와 관련된 데이터를 입력해서 등록해주면 될거같다.
	if (UDataManagerSubsystem* DataManager = GetWorld()->GetGameInstance()->GetSubsystem<UDataManagerSubsystem>())
	{
		FPlayerData PlayerData = *DataManager->FindData<FPlayerData>(RowName);

		Health = PlayerData.HP;
		MaxHealth = PlayerData.HP;
		Skill_Default = *DataManager->FindData<FSkillData>(FString::FromInt(PlayerData.Skill_Default));
		Skill_Q = *DataManager->FindData<FSkillData>(FString::FromInt(PlayerData.Skill_Q));
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