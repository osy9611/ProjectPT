// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "ProjectPT/Table/GenerateTableData.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAttributeSet.h"
#include "PTCharacter_AttributeSet.generated.h"

UCLASS()
class PROJECTPT_API UPTCharacter_AttributeSet : public UPTAttributeSet
{
	GENERATED_BODY()

public:
	UPTCharacter_AttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void InitAttributeSet(FString RowName) override;
	virtual FSkillData GetSkillData(FGameplayTag GameplayTag) override;
};
