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

	//���� ���� �Ǳ� ���� ȣ��Ǵ� �Լ�
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	//Attribute�� ����� �� ȣ���
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;


	virtual void InitAttributeSet(FString RowName) override;
	virtual FSkillData GetSkillData(FGameplayTag GameplayTag) override;
};
