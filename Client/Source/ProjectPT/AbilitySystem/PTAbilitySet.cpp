// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAbilitySet.h"
#include "PTAbilitySystemComponent.h"
#include "Animation/AnimMontage.h"

void FPTAbilitySet_GrantedHandles::AddAbilitySpecHandle(const FGameplayAbilitySpecHandle& Handle)
{
	if (Handle.IsValid())
		AbilitySpecHandles.Add(Handle);
}

void FPTAbilitySet_GrantedHandles::TakeFromAbilitySystem(UPTAbilitySystemComponent* ASC)
{
	if (!ASC->IsOwnerActorAuthoritative())
		return;

	for (const FGameplayAbilitySpecHandle& Handle : AbilitySpecHandles)
	{
		if (Handle.IsValid())
			ASC->ClearAbility(Handle);
	}
}

UPTAbilitySet::UPTAbilitySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UPTAbilitySet::GiveToAbilitySystem(UPTAbilitySystemComponent* ASC, FPTAbilitySet_GrantedHandles* OutGrantedHandles, UObject* SourceObject)
{
	check(ASC);

	if (!ASC->IsOwnerActorAuthoritative())
		return;

	for (int32 AbilityIndex = 0; AbilityIndex < GrantedGameplayAbilities.Num(); ++AbilityIndex)
	{
		const FPTAbilitySet_GameplayAbility& AbilityToGrant = GrantedGameplayAbilities[AbilityIndex];
		if (!IsValid(AbilityToGrant.Ability))
			continue;

		UPTGameplayAbility* AbilityCDO = AbilityToGrant.Ability->GetDefaultObject<UPTGameplayAbility>();

		if(AbilityToGrant.AnimMontage)
			AbilityCDO->AnimMontage = AbilityToGrant.AnimMontage;

		FGameplayAbilitySpec AbilitySpec(AbilityCDO, AbilityToGrant.AbilityLevel);
		AbilitySpec.SourceObject = SourceObject;
		AbilitySpec.DynamicAbilityTags.AddTag(AbilityToGrant.InputTag);

		const FGameplayAbilitySpecHandle AbilitySpecHandle = ASC->GiveAbility(AbilitySpec);
		if (OutGrantedHandles)
			OutGrantedHandles->AddAbilitySpecHandle(AbilitySpecHandle);

	}
}