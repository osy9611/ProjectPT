// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PTGameplayAbility.h"
#include "PTGameplayAbility_RangeAttack.generated.h"

UENUM(BlueprintType)
enum class EPTAbilityTargetingSource : uint8
{
	CameraTowardsFocus,
};
/**
 * 
 */
UCLASS()
class PROJECTPT_API UPTGameplayAbility_RangeAttack : public UPTGameplayAbility
{
	GENERATED_BODY()
public:
	struct FRangedWeaponFiringInput
	{
		FVector StartTrace;
		FVector EndAim;
		FVector AimDir;
		float MaxDamageRange = 25000.0f;
		float BulletTraceWeaponRadius = 0.0f;
		bool bCanPlayBulletFX = false;

		FRangedWeaponFiringInput()
			:StartTrace(StartTrace),
			EndAim(EndAim),
			AimDir(AimDir)
		{}
	};
	UPTGameplayAbility_RangeAttack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable)
	void StartRangedWeaponTargeting();

	void PerformLocalTargeting(TArray<FHitResult>& OutHits);
	FTransform GetTargetingTransform(APawn* SourcePawn, EPTAbilityTargetingSource Source);
	FVector GetWeaponTargetingSourceLocation() const;
	void TraceBulletsInCartridge(const FRangedWeaponFiringInput& InputData, TArray<FHitResult>& OutHits);
	FHitResult DoSingleBulletTrace(const FVector& StartTrace, const FVector& EndTrace, float SweepRadius, bool bIsSimulated, TArray<FHitResult>& OutHits) const;
	FHitResult WeaponTrace(const FVector& StartTrace, const FVector& EndTrace, float SweepRadius, bool bIsSimulated, TArray<FHitResult>& OutHitResults) const;
	ECollisionChannel DetermineTraceChannel(FCollisionQueryParams& TraceParams, bool bIsSimulated) const;
	void AddAdditionalTraceIgnoreActors(FCollisionQueryParams& TraceParams) const;
	void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& InData, FGameplayTag ApplicationTag);

	/*Called When Target Data Is Ready*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnRangeWeaponTargetDataReady(const FGameplayAbilityTargetDataHandle& TargetData);

	bool bDrawDebugLine = true;
};
