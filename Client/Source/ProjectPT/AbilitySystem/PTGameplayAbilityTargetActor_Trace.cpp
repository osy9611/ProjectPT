#include "PTGameplayAbilityTargetActor_Trace.h"
#include "Abilities/GameplayAbility.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "ProjectPT/AbilitySystem/Task/PTAbilityTask_Trace.h"
#include "ProjectPT/Character/PTCharacter.h"
#include "ProjectPT/AbilitySystem/Abilities/PTGameplayAbility.h"
#include "ProjectPT/AbilitySystem/AttributeSet/PTAttributeSet.h"
#include "ProjectPT/PTLogChannels.h"
APTGameplayAbilityTargetActor_Trace::APTGameplayAbilityTargetActor_Trace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void APTGameplayAbilityTargetActor_Trace::StartTargeting(UGameplayAbility* Ability)
{
	Super::StartTargeting(Ability);

	SourceActor = Ability->GetCurrentActorInfo()->AvatarActor.Get();

	if (UPTGameplayAbility* PTGameAbility = CastChecked<UPTGameplayAbility>(Ability))
	{
		AttributeSet = PTGameAbility->GetPTAttribute();
	}
}

void APTGameplayAbilityTargetActor_Trace::ConfirmTargetingAndContinue()
{
	if (SourceActor)
	{
		FGameplayAbilityTargetDataHandle DataHandle = MakeTargetData();
		TargetDataReadyDelegate.Broadcast(DataHandle);
	}
}

FGameplayAbilityTargetDataHandle APTGameplayAbilityTargetActor_Trace::MakeTargetData()
{
	ACharacter* Character = CastChecked<ACharacter>(SourceActor);

	bool test = CheckCollisionData();

	FHitResult HitResult;

	FCollisionQueryParams Params(SCENE_QUERY_STAT(UPTAbilityTask_Trace), false, Character);

	const float AttackRange = 100.0f;
	const float AttackRadius = 50.0f;

	FVector Forward = Character->GetActorForwardVector();
	FVector Start = Character->GetActorLocation();
	FVector End = Start + Forward * AttackRange;

	bool HitDetected = GetWorld()->SweepSingleByChannel(
		HitResult,
		Character->GetActorLocation(),
		Character->GetActorLocation() + Character->GetActorForwardVector() * AttackRange,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeSphere(AttackRadius),
		Params);

	//이번에 추가
#if ENABLE_DRAW_DEBUG
	FVector TraceVec = Character->GetActorForwardVector() * AttackRange;
	FVector Center = Character->GetActorLocation() + TraceVec * 0.5f;
	//반지름
	float HalfHeight = AttackRange * 0.5f + AttackRadius;
	//캡슐 회전방향
	FQuat CapsuleRot = FRotationMatrix::MakeFromZ(TraceVec).ToQuat();
	//타겟 발견시 녹색,미발견시 빨강
	FColor DrawColor = HitDetected ? FColor::Green : FColor::Red;
	//생성후 삭제되기까지의 시간
	float DebugLifeTime = 5.0f;


	//캡슐 디버그 메쉬그리기
	DrawDebugCapsule(GetWorld(), Center, HalfHeight, AttackRadius, CapsuleRot, DrawColor, false, DebugLifeTime);
#endif

	FGameplayAbilityTargetDataHandle DataHandle;
	if (HitDetected)
	{
		FGameplayAbilityTargetData_SingleTargetHit* TargetData = new FGameplayAbilityTargetData_SingleTargetHit(HitResult);
		DataHandle.Add(TargetData);
	}

	/*if (bShowDebug)
	{
		FVector CapsuleOrigin = Start + (End - Start) * 0.5f;
		float CapsuleHalfHeight = AttackRange * 0.5f;
		FColor DrawColor = HitDetected ? FColor::Green : FColor::Red;
		DrawDebugCapsule(GetWorld(), CapsuleOrigin, CapsuleHalfHeight, AttackRadius, FRotationMatrix::MakeFromZ(Forward).ToQuat(), DrawColor, false, 5.0f);
	}*/

	return DataHandle;
}

PRAGMA_DISABLE_OPTIMIZATION
bool APTGameplayAbilityTargetActor_Trace::CheckCollisionData()
{
	APTCharacter* Character = CastChecked<APTCharacter>(SourceActor);

	FHitResult HitResult;

	FCollisionQueryParams Params(SCENE_QUERY_STAT(UPTAbilityTask_Trace), false, Character);

	if (!AttributeSet.IsValid())
	{
		UE_LOG(PTLog, Error, TEXT("Attribute Is Not Valid %s"), *Character->GetName());
		return false;
	}

	const float AttackRange = AttributeSet->Skill_Default.skillRange;
	const float AttackRadius = AttributeSet->Skill_Default.skillRadius;

	FVector Forward = Character->GetActorForwardVector();
	FVector Start = Character->GetActorLocation();
	FVector End = Start + Forward * AttackRange;

	FCollisionShape CollisionShape;
	switch (AttributeSet->Skill_Default.CollisionType)
	{
	case ECollisionType::Capsule:
		CollisionShape = FCollisionShape::MakeSphere(AttackRadius);
		break;
	}

	bool HitDetected = GetWorld()->SweepSingleByChannel(
		HitResult,
		Character->GetActorLocation(),
		Character->GetActorLocation() + Character->GetActorForwardVector() * AttackRange,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel2,
		CollisionShape,
		Params);
	return false;
}
PRAGMA_ENABLE_OPTIMIZATION