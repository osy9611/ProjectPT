// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/ShapeComponent.h"
#include "ProjectPT/Pool/ObjectPoolSubsystem.h"

// Sets default values
APTProjectile::APTProjectile()
{
	PrimaryActorTick.bCanEverTick = true;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComponent"));
	ProjectileMovement->InitialSpeed = 3000.0f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;
	ProjectileMovement->ProjectileGravityScale = 0.0f;
}

void APTProjectile::BeginPlay()
{
	Super::BeginPlay();

	if (!CollisionComponent)
	{
		CollisionComponent = GetComponentByClass<UShapeComponent>();
		if (CollisionComponent)
		{
			ProjectileMovement->SetUpdatedComponent(CollisionComponent);
		}
	}
}

void APTProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();

	if (FVector::Dist(CurrentLocation, TargetLocation) <= 5.0f)
	{
		ProjectileMovement->Deactivate();
		CollisionComponent->Deactivate();

		if (UObjectPoolSubsystem* ObjectPoolSubsystem = GetWorld()->GetSubsystem<UObjectPoolSubsystem>())
		{
			UE_LOG(LogTemp, Log, TEXT("Return Actor"));
			ObjectPoolSubsystem->ReturnActor(this);
		}
	}
}

void APTProjectile::IgnoreCollison(const AActor* Actor)
{
	check(Actor);

	if (CollisionComponent)
		CollisionComponent->IgnoreActorWhenMoving(const_cast<AActor*>(Actor), true);
}
PRAGMA_DISABLE_OPTIMIZATION
void APTProjectile::RegisterData(const FVector& Pos, const FVector& Dir, float Range, float Speed)
{
	SetActorLocation(Pos);

	TargetLocation = Pos + (Dir.GetSafeNormal() * Range);

	UE_LOG(LogTemp, Log, TEXT("%s"), *Dir.GetSafeNormal().ToString());

	ProjectileMovement->MaxSpeed = Speed;
	ProjectileMovement->InitialSpeed = Speed;

	ProjectileMovement->Velocity = Dir * ProjectileMovement->InitialSpeed;
	ProjectileMovement->Activate();
	CollisionComponent->Activate();

}
PRAGMA_ENABLE_OPTIMIZATION