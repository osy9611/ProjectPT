// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

class UShapeComponent;

UCLASS()
class PROJECTPT_API APTProjectile : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APTProjectile();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void IgnoreCollison(const AActor* Actor);

	virtual void RegisterData(const FVector &Pos,const FVector &Dir, float Range, float Speed);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "CollisionRoot")
	UShapeComponent* CollisionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	class UProjectileMovementComponent* ProjectileMovement;

private:
	UPROPERTY()
	FVector TargetLocation;
};
