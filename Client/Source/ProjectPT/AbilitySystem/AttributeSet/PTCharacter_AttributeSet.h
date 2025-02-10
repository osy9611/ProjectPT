// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "ProjectPT/Data/GenerateTableData.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAttributeSet.h"
#include "PTCharacter_AttributeSet.generated.h"

UCLASS()
class PROJECTPT_API UPTCharacter_AttributeSet : public UPTAttributeSet
{
	GENERATED_BODY()

public:
	UPTCharacter_AttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//값이 변경 되기 전에 호출되는 함수
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	//Attribute에 적용된 후 호출됨
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;


	virtual void InitAttributeSet(FString RowName) override;
	virtual FSkillData GetSkillData(FGameplayTag GameplayTag) override;
};
