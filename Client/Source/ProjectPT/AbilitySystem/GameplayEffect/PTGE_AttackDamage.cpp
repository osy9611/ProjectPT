// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGE_AttackDamage.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAttributeSet.h"

UPTGE_AttackDamage::UPTGE_AttackDamage()
{
	DurationPolicy = EGameplayEffectDurationType::Instant; //�� �����ӿ� �ٷ� ����Ǵ� GE Ÿ��

	//�� GE�� ���濡�� �ߵ��Ͽ� ������ ü���� ��´�.
	FGameplayModifierInfo ModifierInfo;
	ModifierInfo.Attribute = FGameplayAttribute(FindFieldChecked<FProperty>(UPTAttributeSet::StaticClass(),
		GET_MEMBER_NAME_CHECKED(UPTAttributeSet, Health)));

	ModifierInfo.ModifierOp = EGameplayModOp::Additive;

	FScalableFloat DamageAmount(-10);
	FGameplayEffectModifierMagnitude ModMagnitude(DamageAmount);

	ModifierInfo.ModifierMagnitude = ModMagnitude;
	Modifiers.Add(ModifierInfo);
}
