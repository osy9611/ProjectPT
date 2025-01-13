// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGameplayAbility_Projectile.h"
#include "ProjectPT/Pool/ObjectPoolSubsystem.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/Object/PTProjectile.h"
#include "ProjectPT/Character/PTHeroComponent.h"
#include "ProjectPT/Table/GenerateTableData.h"
#include "ProjectPT/AbilitySystem/PTAbilitySystemComponent.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAttributeSet.h"

UPTGameplayAbility_Projectile::UPTGameplayAbility_Projectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UPTGameplayAbility_Projectile::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}


PRAGMA_DISABLE_OPTIMIZATION
bool UPTGameplayAbility_Projectile::CommitAbilityCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const bool ForceCooldown, OUT FGameplayTagContainer* OptionalRelevantTags)
{
	if (!UseBPGameplayEffect)
	{
		FGameplayEffectContextHandle Context = MakeEffectContext(Handle, ActorInfo);
		FGameplayEffectSpecHandle SpecHandle = MakeOutgoingGameplayEffectSpec(CooldownGameplayEffectClass, GetAbilityLevel(Handle, ActorInfo));

		if (FGameplayEffectSpec* Spec = SpecHandle.Data.Get())
		{
			UPTAttributeSet* AttributeSet = GetPTAttribute();
			FSkillData SkillData = AttributeSet->GetSkillData(GetGameplayTag());

			Spec->SetDuration(SkillData.skillCoolTime, true);
		}

		FActiveGameplayEffectHandle Result = ApplyGameplayEffectSpecToOwner(Handle, ActorInfo, ActivationInfo, SpecHandle);

		return Result.IsValid();
	}

	return Super::CommitAbilityCooldown(Handle, ActorInfo, ActivationInfo, ForceCooldown, OptionalRelevantTags);
}
PRAGMA_ENABLE_OPTIMIZATION

float UPTGameplayAbility_Projectile::GetCoolTime()
{
	if (UPTAttributeSet* AttributeSet = GetPTAttribute())
	{
		FSkillData SkillData = AttributeSet->GetSkillData(GetGameplayTag());
		return 	SkillData.skillCoolTime;
	}

	return 0;
}

void UPTGameplayAbility_Projectile::CreateObject()
{
	//check(Actor);
	if (UObjectPoolSubsystem* ObjectPoolSubsystem = GetWorld()->GetSubsystem<UObjectPoolSubsystem>())
	{
		AActor* PoolActor = ObjectPoolSubsystem->GetActor(ProjectileObject);
		check(PoolActor);

		APTProjectile* Projectile = CastChecked<APTProjectile>(PoolActor);
		check(Projectile);

		UPTAttributeSet* AttributeSet = GetPTAttribute();
		check(AttributeSet);

		AActor* AvatarActor = CurrentActorInfo->AvatarActor.Get();
		Projectile->IgnoreCollison(AvatarActor);

		if (UPTHeroComponent* PTHeroComponent = GetPTHeroComponentFromActorInfo())
		{
			FTransform Transform = PTHeroComponent->GetSkeletonMeshSocketTransform(FName(TEXT("Muzzle_03")));

			FSkillData SkillData = AttributeSet->GetSkillData(GetGameplayTag());
		
			Projectile->RegisterData(Transform.GetLocation(), AvatarActor->GetActorForwardVector(), SkillData.skillRange, SkillData.skillRadius, SkillData.skillSpeed);
		}
	}
}
