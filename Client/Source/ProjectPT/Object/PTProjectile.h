// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PTProjectile.generated.h"

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

	virtual void IgnoreCollison(AActor* Actor);
	virtual void RegisterData(const FVector& Pos, const FVector& Dir, float Range, float Raidus, float Speed);
	virtual void CheckUpdate();

	UFUNCTION(BlueprintCallable)
	virtual void ReturnObject();

	UFUNCTION(BlueprintCallable)
	virtual void CheckCollisionHit();

	UFUNCTION(BlueprintCallable)
	bool CheckOwnerActor(const AActor* Actor) { return  Owner == Actor; }

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "CollisionRoot")
	UShapeComponent* CollisionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	class UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(BlueprintReadWrite, Category = "PT|IsCollisionHit")
	bool IsCollisionHit;

private:
	UPROPERTY()
	FVector TargetLocation;

	float TraceRadius;

	AActor* Owner;
};
