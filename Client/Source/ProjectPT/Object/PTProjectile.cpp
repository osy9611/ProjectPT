// Fill out your copyright notice in the Description page of Project Settings.


#include "PTProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/ShapeComponent.h"
#include "ProjectPT/Pool/ObjectPoolSubsystem.h"
#include "ProjectPT/Physics/PTCollisionChannel.h"

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
	CheckUpdate();
}

void APTProjectile::IgnoreCollison(AActor* Actor)
{
	check(Actor);

	Owner = Actor;
	if (CollisionComponent)
		CollisionComponent->IgnoreActorWhenMoving(Actor, true);
}

void APTProjectile::RegisterData(const FVector& Pos, const FVector& Dir, float Range,float Radius, float Speed)
{
	SetActorLocation(Pos);

	TargetLocation = Pos + (Dir.GetSafeNormal() * Range);

	UE_LOG(LogTemp, Log, TEXT("%s"), *Dir.GetSafeNormal().ToString());

	ProjectileMovement->MaxSpeed = Speed;
	ProjectileMovement->InitialSpeed = Speed;

	ProjectileMovement->Velocity = Dir * ProjectileMovement->InitialSpeed;
	ProjectileMovement->Activate();
	CollisionComponent->Activate();
	TraceRadius = Radius;
}

void APTProjectile::CheckUpdate()
{
	if (!IsCollisionHit)
	{
		FVector CurrentLocation = GetActorLocation();

		if (FVector::Dist(CurrentLocation, TargetLocation) <= 5.0f)
		{
			ReturnObject();
		}
	}
}

void APTProjectile::ReturnObject()
{
	Owner = nullptr;
	ProjectileMovement->Deactivate();
	CollisionComponent->Deactivate();
	if (UObjectPoolSubsystem* ObjectPoolSubsystem = GetWorld()->GetSubsystem<UObjectPoolSubsystem>())
	{
		UE_LOG(LogTemp, Log, TEXT("Return Actor"));
		ObjectPoolSubsystem->ReturnActor(this);
	}
}

void APTProjectile::CheckCollisionHit()
{
	SetActorTickEnabled(false);

	FHitResult OutHit;
	FCollisionQueryParams Params;
	
	FVector Start = GetActorLocation();
	FVector End = GetActorLocation();

	float Radius = TraceRadius;

	bool Hit = GetWorld()->SweepSingleByChannel(
		OutHit,
		Start,
		End,
		FQuat::Identity,
		PT_TraceChannel_Interaction,
		FCollisionShape::MakeSphere(Radius),
		Params
	);

#if ENABLE_DRAW_DEBUG
	FVector TraceVec = GetActorForwardVector();
	FVector Center = GetActorLocation() + TraceVec * 0.5f;
	float HalfHeight = 0.5 + Radius;
	FQuat CapsuleRot = FRotationMatrix::MakeFromZ(TraceVec).ToQuat();
	FColor DrawColor = Hit ? FColor::Green : FColor::Red;
	float DebugLifeTime = 5.0f;
	DrawDebugCapsule(GetWorld(), Center, HalfHeight, Radius, CapsuleRot, DrawColor, false, DebugLifeTime);
#endif

	if (Hit)
	{

	}
}
