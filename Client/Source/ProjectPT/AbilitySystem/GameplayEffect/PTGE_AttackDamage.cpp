// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGE_AttackDamage.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAttributeSet.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAI_AttributeSet.h"

UPTGE_AttackDamage::UPTGE_AttackDamage()
{
	DurationPolicy = EGameplayEffectDurationType::Instant; //한 프레임에 바로 실행되는 GE 타입
	Executions.Add(FGameplayEffectExecutionDefinition(UPTDamageExecutionCalculation::StaticClass()));
}
UPTDamageExecutionCalculation::UPTDamageExecutionCalculation()
{
}

PRAGMA_DISABLE_OPTIMIZATION
void UPTDamageExecutionCalculation::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	UAbilitySystemComponent* ASC = ExecutionParams.GetTargetAbilitySystemComponent();
	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();

	// Modifier를 직접 설정하여 적용
	FGameplayModifierEvaluatedData EvaluatedData(
		UPTAttributeSet::GetHealthAttribute(),  // Attribute
		EGameplayModOp::Additive,               // Modifier Operation
		-10.0f                                  // Modifier Magnitude (Damage)
	);

	// Modifier를 OutExecutionOutput에 추가
	OutExecutionOutput.AddOutputModifier(EvaluatedData);

	UE_LOG(LogTemp, Log, TEXT("Damage Applied: %f"), EvaluatedData.Magnitude);
}
PRAGMA_ENABLE_OPTIMIZATION