// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectPT/Pool/Poolable_Actor.h"
#include "PTProjectile.generated.h"

class UShapeComponent;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnProjectileHit,const TArray<FHitResult>);

UCLASS()
class PROJECTPT_API APTProjectile : public AActor, public IPoolableActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APTProjectile();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual void IgnoreCollison(AActor* Actor);
	virtual void RegisterData(const FVector& Pos, const FVector& Dir, float Range, float Raidus, float Speed);
	virtual void CheckUpdate();

	virtual void OnActive() override;
	virtual void OnDeActive() override;


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

	FOnProjectileHit OnProjectileHit;
private:

	UPROPERTY()
	FVector TargetLocation;

	float TraceRadius;

	AActor* Owner;
};
