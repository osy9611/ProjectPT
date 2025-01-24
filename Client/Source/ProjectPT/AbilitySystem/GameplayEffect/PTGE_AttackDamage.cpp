// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGE_AttackDamage.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAttributeSet.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAI_AttributeSet.h"
#include "ProjectPT/Character/PTAIComponent.h"
#include "ProjectPT/PTGameplayTags.h"

UPTGE_AttackDamage::UPTGE_AttackDamage()
{
	DurationPolicy = EGameplayEffectDurationType::Instant; //한 프레임에 바로 실행되는 GE 타입
	Executions.Add(FGameplayEffectExecutionDefinition(UPTDamageExecutionCalculation::StaticClass()));
}
UPTDamageExecutionCalculation::UPTDamageExecutionCalculation()
{
}

void UPTDamageExecutionCalculation::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
	UAbilitySystemComponent* ASC = ExecutionParams.GetTargetAbilitySystemComponent();
	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();

	const FPTGameplayTags& GameplayTags = FPTGameplayTags::Get();

	const float Damage = Spec.GetSetByCallerMagnitude(GameplayTags.GE_Event_Damage, false, 0.0f);

	// Modifier를 직접 설정하여 적용
	FGameplayModifierEvaluatedData EvaluatedData(
		UPTAttributeSet::GetHealthAttribute(),  // Attribute
		EGameplayModOp::Additive,               // Modifier Operation
		-Damage                               // Modifier Magnitude (Damage)
	);

	// Modifier를 OutExecutionOutput에 추가
	OutExecutionOutput.AddOutputModifier(EvaluatedData);

	if (UPTAIComponent* AIComponent = UPTAIComponent::FindAIComponent(ASC->GetAvatarActor()))
	{
		if (ASC)
		{
			FGameplayCueParameters CueParameters;
			CueParameters.RawMagnitude = Damage;

			FGameplayEffectContextHandle Context = Spec.GetContext();
			FName Tag = GameplayTags.GameplayCue_RangeAttack_Damage.GetTagName();

			//ASC->ExecuteGameplayCue(FGameplayTag::RequestGameplayTag(Tag), Context);
			ASC->ExecuteGameplayCue(FGameplayTag::RequestGameplayTag(Tag), CueParameters);
		}
	}

	UE_LOG(LogTemp, Log, TEXT("Damage Applied: %f"), EvaluatedData.Magnitude);
}