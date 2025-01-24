// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "ProjectPT/Table/GenerateTableData.h"
#include "PTAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class PROJECTPT_API UPTAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UPTAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void InitAttributeSet(FString RowName);

	UFUNCTION(BlueprintCallable)
	virtual FSkillData GetSkillData(FGameplayTag GameplayTag);
public:
	ATTRIBUTE_ACCESSORS(UPTAttributeSet, Health);
	ATTRIBUTE_ACCESSORS(UPTAttributeSet, MaxHealth);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData Health;

	UPROPERTY(BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData MaxHealth;

	UPROPERTY(BlueprintReadOnly, Category = "Attribute")
	FGameplayAttributeData Mana;

	UPROPERTY(BlueprintReadOnly, Category = "Attribute")
	FSkillData Skill_Default;

	UPROPERTY(BlueprintReadOnly, Category = "Attribute")
	FSkillData Skill_Q;

};
