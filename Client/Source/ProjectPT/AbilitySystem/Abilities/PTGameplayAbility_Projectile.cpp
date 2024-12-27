// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGameplayAbility_Projectile.h"
#include "ProjectPT/Pool/ObjectPoolSubsystem.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/Object/Projectile.h"
#include "ProjectPT/Character/PTHeroComponent.h"

UPTGameplayAbility_Projectile::UPTGameplayAbility_Projectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
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
			Projectile->RegisterData(Transform.GetLocation(), AvatarActor->GetActorForwardVector(), 1000, 3000.0f);
		}
	}
}

void UPTGameplayAbility_Projectile::ShotProjectile()
{
}
