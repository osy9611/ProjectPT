// Fill out your copyright notice in the Description page of Project Settings.


#include "PTAbilityTask_Trace.h"
#include "AbilitySystemComponent.h"
#include "ProjectPT/AbilitySystem/PTGameplayAbilityTargetActor_Trace.h"
#include "ProjectPT/AbilitySystem/Abilities/PTGameplayAbility.h"

UPTAbilityTask_Trace::UPTAbilityTask_Trace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

UPTAbilityTask_Trace* UPTAbilityTask_Trace::CreateTask(UPTGameplayAbility* OwningAbility, TSubclassOf<class APTGameplayAbilityTargetActor_Trace> TargetActorClass)
{
	UGameplayAbility* Ability = Cast<UGameplayAbility>(OwningAbility);
	check(Ability);

	UPTAbilityTask_Trace* Task = NewAbilityTask<UPTAbilityTask_Trace>(Ability);
	Task->TargetActorClass = TargetActorClass;
	return Task;
}

void UPTAbilityTask_Trace::Activate()
{
	Super::Activate();

	SpawnAndInitializeTargetActor();
	FinalizeTargetActor();

	SetWaitingOnAvatar();
}

void UPTAbilityTask_Trace::OnDestroy(bool bInOwnerFinished)
{
	if (SpawnedTargetActor)
		SpawnedTargetActor->Destroy();

	Super::OnDestroy(bInOwnerFinished);
}

void UPTAbilityTask_Trace::SpawnAndInitializeTargetActor()
{
	SpawnedTargetActor = Cast<APTGameplayAbilityTargetActor_Trace>(Ability->GetWorld()->SpawnActorDeferred<AGameplayAbilityTargetActor>
		(TargetActorClass, FTransform::Identity, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn));

	if (SpawnedTargetActor)
	{
		SpawnedTargetActor->SetShowDebug(true);
		SpawnedTargetActor->TargetDataReadyDelegate.AddUObject(this, &ThisClass::OnTargetDataReadyCallback);
	}
}

void UPTAbilityTask_Trace::FinalizeTargetActor()
{
	UAbilitySystemComponent* ASC = AbilitySystemComponent.Get();
	if (ASC)
	{
		const FTransform SpawnTransform = ASC->GetAvatarActor()->GetTransform();
		SpawnedTargetActor->FinishSpawning(SpawnTransform);

		ASC->SpawnedTargetActors.Push(SpawnedTargetActor);
		SpawnedTargetActor->StartTargeting(Ability);
		SpawnedTargetActor->ConfirmTargeting();
	}
}

void UPTAbilityTask_Trace::OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& DataHandle)
{
	if (ShouldBroadcastAbilityTaskDelegates())
		OnComplete.Broadcast(DataHandle);

	EndTask();
}
