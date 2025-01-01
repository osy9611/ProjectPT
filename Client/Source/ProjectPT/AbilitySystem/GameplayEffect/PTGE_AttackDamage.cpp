// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGE_AttackDamage.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAttributeSet.h"

UPTGE_AttackDamage::UPTGE_AttackDamage()
{
	DurationPolicy = EGameplayEffectDurationType::Instant; //한 프레임에 바로 실행되는 GE 타입

	//이 GE는 상대방에서 발동하여 상대방의 체력을 깍는다.
	FGameplayModifierInfo ModifierInfo;
	ModifierInfo.Attribute = FGameplayAttribute(FindFieldChecked<FProperty>(UPTAttributeSet::StaticClass(),
		GET_MEMBER_NAME_CHECKED(UPTAttributeSet, Health)));

	ModifierInfo.ModifierOp = EGameplayModOp::Additive;

	FScalableFloat DamageAmount(-10);
	FGameplayEffectModifierMagnitude ModMagnitude(DamageAmount);

	ModifierInfo.ModifierMagnitude = ModMagnitude;
	Modifiers.Add(ModifierInfo);
}
