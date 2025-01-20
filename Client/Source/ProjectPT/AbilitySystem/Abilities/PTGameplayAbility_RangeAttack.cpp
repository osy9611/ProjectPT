#include "AbilitySystemComponent.h"
#include "PTGameplayAbility_RangeAttack.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/AbilitySystem/PTGameplayAbilityTargetData_SingleTargetHit.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAttributeSet.h"
#include "ProjectPT/Character/PTHeroComponent.h"
#include "AIController.h"
#include "Components/StaticMeshComponent.h"

UPTGameplayAbility_RangeAttack::UPTGameplayAbility_RangeAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}
PRAGMA_DISABLE_OPTIMIZATION
void UPTGameplayAbility_RangeAttack::StartRangedWeaponTargeting()
{
	check(CurrentActorInfo);

	AActor* AvatarActor = CurrentActorInfo->AvatarActor.Get();
	check(AvatarActor);

	UAbilitySystemComponent* ASC = CurrentActorInfo->AbilitySystemComponent.Get();
	check(ASC);


	FGameplayAbilitySpec*  TEST = GetCurrentAbilitySpec();
	TEST->DynamicAbilityTags.GetByIndex(0);

	//�Ѿ��� ������ Hit ���� ���
	TArray<FHitResult> FoundHits;
	PerformLocalTargeting(FoundHits);

	FGameplayAbilityTargetDataHandle TargetData;
	TargetData.UniqueId = 0;

	if (FoundHits.Num() > 0)
	{
		const int32 CartridgeID = FMath::Rand();
		for (const FHitResult& FoundHit : FoundHits)
		{
			FPTGameplayAbilityTargetData_SingleTargetHit* NewTargetData = new FPTGameplayAbilityTargetData_SingleTargetHit();
			NewTargetData->HitResult = FoundHit;
			NewTargetData->CartridgeID = CartridgeID;
			TargetData.Add(NewTargetData);
		}
	}

	//������ AbilityTargetData�� �غ�Ǿ����Ƿ�, OnTargetDataReadyCallback�� ȣ���Ѵ�.
	OnTargetDataReadyCallback(TargetData, FGameplayTag());
}
PRAGMA_ENABLE_OPTIMIZATION
void UPTGameplayAbility_RangeAttack::PerformLocalTargeting(TArray<FHitResult>& OutHits)
{
	APawn* const AvatarPawn = Cast<APawn>(GetAvatarActorFromActorInfo());

	UPTAttributeSet* PTAttributeSet = GetPTAttribute();

	FRangedWeaponFiringInput InputData;
	InputData.bCanPlayBulletFX = true;

	const FTransform TargetTransform = GetTargetingTransform(AvatarPawn, EPTAbilityTargetingSource::CameraTowardsFocus);


	if (PTAttributeSet)
	{
		FSkillData SkillData = PTAttributeSet->GetSkillData(GetGameplayTag());
		InputData.MaxDamageRange = SkillData.skillRange;
		InputData.BulletTraceWeaponRadius = SkillData.skillRadius;
		MuzzleName = SkillData.MuzzleName;
	}

	//�𸮾��� ForwardVector�� EAxis::X�̴�.
	InputData.AimDir = TargetTransform.GetUnitAxis(EAxis::X);
	InputData.StartTrace = TargetTransform.GetTranslation();
	InputData.EndAim = InputData.StartTrace + InputData.AimDir * InputData.MaxDamageRange;

#if 0
	{
		static float DebugThickness = 2.0f;
		DrawDebugLine(GetWorld(), InputData.StartTrace, InputData.StartTrace + (InputData.AimDir * 100.0f), FColor::Yellow, false, 10.0f, 0, DebugThickness);
	}
#endif

	TraceBulletsInCartridge(InputData, OutHits);
}

FTransform UPTGameplayAbility_RangeAttack::GetTargetingTransform(APawn* SourcePawn, EPTAbilityTargetingSource Source)
{
	check(SourcePawn);
	check(Source == EPTAbilityTargetingSource::CameraTowardsFocus);

	AController* Controller = SourcePawn->Controller;
	if (Controller == nullptr)
		return FTransform();

	double FocalDistance = 1024.0f;
	FVector FocalLoc;
	FVector CamLoc;
	FRotator CamRot;

	Controller-> GetPlayerViewPoint(CamLoc, CamRot);

	FVector AimDir = CamRot.Vector().GetSafeNormal();
	FocalLoc = CamLoc + (AimDir * FocalDistance);

	const FVector WeaponLoc = GetWeaponTargetingSourceLocation();
	FVector FinalCamLoc = FocalLoc + (((WeaponLoc - FocalLoc) | AimDir) * AimDir);

#if 0
	{
		// WeaponLoc (��ǻ� ActorLoc)
		DrawDebugPoint(GetWorld(), WeaponLoc, 10.0f, FColor::Red, false, 60.0f);
		// CamLoc
		DrawDebugPoint(GetWorld(), CamLoc, 10.0f, FColor::Yellow, false, 60.0f);
		// FinalCamLoc
		DrawDebugPoint(GetWorld(), FinalCamLoc, 10.0f, FColor::Magenta, false, 60.0f);

		// (WeaponLoc - FocalLoc)
		DrawDebugLine(GetWorld(), FocalLoc, WeaponLoc, FColor::Yellow, false, 60.0f, 0, 2.0f);
		// (AimDir)
		DrawDebugLine(GetWorld(), CamLoc, FocalLoc, FColor::Blue, false, 60.0f, 0, 2.0f);

		// Project Direction Line
		DrawDebugLine(GetWorld(), WeaponLoc, FinalCamLoc, FColor::Red, false, 60.0f, 0, 2.0f);
	}
#endif

	return FTransform(CamRot, FinalCamLoc);
}

FVector UPTGameplayAbility_RangeAttack::GetWeaponTargetingSourceLocation() const
{
	APawn* const AvatarPawn = Cast<APawn>(GetAvatarActorFromActorInfo());
	check(AvatarPawn);

	const FVector SourceLoc = AvatarPawn->GetActorLocation();
	return SourceLoc;
}

void UPTGameplayAbility_RangeAttack::TraceBulletsInCartridge(const FRangedWeaponFiringInput& InputData, TArray<FHitResult>& OutHits)
{
	const FVector BulletDir = InputData.AimDir;
	const FVector EndTrace = InputData.StartTrace + (BulletDir * InputData.MaxDamageRange);

	//HitLocation�� �ʱ�ȭ ������ EndTrace�� ����
	FVector HitLocation = EndTrace;

	TArray<FHitResult> AllImpacts;
	FHitResult Impact = DoSingleBulletTrace(InputData.StartTrace, EndTrace, InputData.BulletTraceWeaponRadius, false, AllImpacts);

	const AActor* HitActor = Impact.GetActor();
	if (HitActor)
	{
		if (AllImpacts.Num() > 0)
			OutHits.Append(AllImpacts);

		HitLocation = Impact.ImpactPoint;
	}

	if (OutHits.Num() == 0)
	{
		if (!Impact.bBlockingHit)
		{
			Impact.Location = EndTrace;
			Impact.ImpactPoint = EndTrace;
		}

		OutHits.Add(Impact);
	}
}

int32 FindFirstPawnHitResult(const TArray<FHitResult>& HitResults)
{
	for (int32 Idx = 0; Idx < HitResults.Num(); ++Idx)
	{
		const FHitResult& CurHitResult = HitResults[Idx];

		//DoseRepresentClass : Ư�� ������Ʈ�� ������ Ŭ������ ��Ÿ������ Ȯ���ϱ� ���ؼ� ���
		if (CurHitResult.HitObjectHandle.DoesRepresentClass(APawn::StaticClass()))
		{
			return Idx;
		}
		else
		{
			AActor* HitActor = CurHitResult.HitObjectHandle.FetchActor();

			if ((HitActor != nullptr) && (HitActor->GetAttachParentActor() != nullptr) && (Cast<APawn>(HitActor->GetAttachParentActor()) != nullptr))
				return Idx;
		}
	}

	return INDEX_NONE;
}

FHitResult UPTGameplayAbility_RangeAttack::DoSingleBulletTrace(const FVector& StartTrace, const FVector& EndTrace, 
	float SweepRadius, bool bIsSimulated, TArray<FHitResult>& OutHits) const
{
	FHitResult Impact;

	if (FindFirstPawnHitResult(OutHits) == INDEX_NONE)
	{
		Impact = WeaponTrace(StartTrace, EndTrace, 0.0f, bIsSimulated, OutHits);
	}

	if (FindFirstPawnHitResult(OutHits) == INDEX_NONE)
	{
		//���� SweepRadius�� 0���� ũ��, 0.0�϶� ��� �浹 ���ɼ��� Ŀ���Ƿ� �ѹ� �� Trace ����
		if (SweepRadius > 0.0f)
		{
			TArray<FHitResult> SweepHits;
			Impact = WeaponTrace(StartTrace, EndTrace, SweepRadius, bIsSimulated, SweepHits);

			//Sphere Trace�� ������ ����� SweepHits�� �˻��Ͽ�, Pawn�� �ִ°� �˻�
			const int32 FirstPawnIdx = FindFirstPawnHitResult(SweepHits);
			if (SweepHits.IsValidIndex(FirstPawnIdx))
			{
				bool bUseSweepHits = true;
				for (int32 Idx = 0; Idx < FirstPawnIdx; ++Idx)
				{
					const FHitResult& CurHitResult = SweepHits[Idx];

					auto Pred = [&CurHitResult](const FHitResult& Other)
						{
							return Other.HitObjectHandle == CurHitResult.HitObjectHandle;
						};

					if (CurHitResult.bBlockingHit && OutHits.ContainsByPredicate(Pred))
					{
						bUseSweepHits = false;
						break;
					}
				}

				if (bUseSweepHits)
					OutHits = SweepHits;
			}
		}
	}

	return Impact;
}

FHitResult UPTGameplayAbility_RangeAttack::WeaponTrace(const FVector& StartTrace, const FVector& EndTrace, float SweepRadius, bool bIsSimulated, TArray<FHitResult>& OutHitResults) const
{
	TArray<FHitResult> HitResults;

	FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(WeaponTrace), true, GetAvatarActorFromActorInfo());
	TraceParams.bReturnPhysicalMaterial = true;
	
	AddAdditionalTraceIgnoreActors(TraceParams);

	const ECollisionChannel TraceChannel = DetermineTraceChannel(TraceParams, bIsSimulated);
	if (SweepRadius > 0.0f)
	{
		GetWorld()->SweepMultiByChannel(HitResults, StartTrace, EndTrace, FQuat::Identity, TraceChannel, FCollisionShape::MakeSphere(SweepRadius), TraceParams);
	}
	else
	{
		GetWorld()->LineTraceMultiByChannel(HitResults, StartTrace, EndTrace, TraceChannel, TraceParams);
	}

	FHitResult Hit(ForceInit);
	if (HitResults.Num() > 0)
	{
		for (FHitResult& CurHitResult : HitResults)
		{
			auto Pred = [&CurHitResult](const FHitResult& Other)
				{
					return Other.HitObjectHandle == CurHitResult.HitObjectHandle;
				};

			if (!OutHitResults.ContainsByPredicate(Pred))
				OutHitResults.Add(CurHitResult);
		}

		//Hit�� ���� ������ ���� Impact�� ����
		Hit = OutHitResults.Last();
	}
	else
	{
		//Hit�� ��� ������ �⺻ ������ ĳ��
		Hit.TraceStart = StartTrace;
		Hit.TraceEnd = EndTrace;
	}

	return Hit;
}

ECollisionChannel UPTGameplayAbility_RangeAttack::DetermineTraceChannel(FCollisionQueryParams& TraceParams, bool bIsSimulated) const
{
	return ECC_GameTraceChannel2;
}

void UPTGameplayAbility_RangeAttack::AddAdditionalTraceIgnoreActors(FCollisionQueryParams& TraceParams) const
{
	if (AActor* Avatar = GetAvatarActorFromActorInfo())
	{
		TArray<AActor*> AttatchActors;

		Avatar->GetAttachedActors(AttatchActors);

		TraceParams.AddIgnoredActors(AttatchActors);
	}
}

void UPTGameplayAbility_RangeAttack::OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& InData, FGameplayTag ApplicationTag)
{
	UAbilitySystemComponent* ASC = CurrentActorInfo->AbilitySystemComponent.Get();
	check(ASC);

	if (const FGameplayAbilitySpec* AbilitySpec = ASC->FindAbilitySpecFromHandle(CurrentSpecHandle))
	{
		FGameplayAbilityTargetDataHandle LocalTargetDataHandle(MoveTemp(const_cast<FGameplayAbilityTargetDataHandle&>(InData)));

		if (CommitAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo))
		{
			AActor* AvatarActor = CurrentActorInfo->AvatarActor.Get();
			OnRangeWeaponTargetDataReady(AvatarActor,LocalTargetDataHandle);
		}
		else
		{
			K2_EndAbility();
		}
	}
}
