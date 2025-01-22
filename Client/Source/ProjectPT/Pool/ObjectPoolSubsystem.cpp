// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPoolSubsystem.h"
#include "Poolable_Actor.h"
#include "Poolable_NiagaraSystem.h"
#include "ProjectPT/PTLogChannels.h"
#include "NiagaraComponent.h"
#include "NiagaraDataInterfaceArrayFunctionLibrary.h"
#include <Kismet/GameplayStatics.h>

UObjectPoolSubsystem::UObjectPoolSubsystem()
{
}

void UObjectPoolSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	NiagaraPools = NewObject<UPoolable_NiagaraSystem>(this);
	NiagaraPools->SpawnRootActor(InWorld);
}

AActor* UObjectPoolSubsystem::GetActor(TSubclassOf<AActor> ClassType)
{
	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(PTLog, Log, TEXT("[ObjectPoolSubsystem] World Is Null"));
		return nullptr;
	}
	UPoolable_Actor** PoolableActor = ObjectPools.Find(ClassType.Get());
	if (!PoolableActor)
	{
		UPoolable_Actor* NewPool = NewObject<UPoolable_Actor>(this);
		NewPool->Init(World, ClassType);
		ObjectPools.Add(ClassType, NewPool);
	}

	return (*PoolableActor)->Get(World, true);
}

void UObjectPoolSubsystem::ReturnActor(AActor* Actor)
{
	check(Actor);

	UClass* ClassType = Actor->GetClass();
	if (ClassType)
	{
		if (UPoolable_Actor** PoolableActor = ObjectPools.Find(ClassType))
		{
			(*PoolableActor)->Return(Actor);
		}
		else
		{
			UE_LOG(PTLog, Log, TEXT("[ObjectPoolSubsystem] This Class Is Not ObjectPool %s"), *ClassType->GetName());
		}
	}
}

UNiagaraComponent* UObjectPoolSubsystem::GetNiagaraSystem(UNiagaraSystem* NiagaraSystem, AActor* OwnerActor, bool IsActive)
{
	if (!NiagaraPools)
	{
		UE_LOG(PTLog, Error, TEXT("[ObjectPoolSubsystem] Niagara Pool System Is nullptr"));
		return nullptr;
	}

	if (NiagaraPools->IsEmpty())
	{
		NiagaraPools->Init();
	}

	UNiagaraComponent* NiagaraComp = NiagaraPools->Get(NiagaraSystem, OwnerActor, IsActive);

	return NiagaraComp;
}

void UObjectPoolSubsystem::ReturnNiagaraSystem(UNiagaraComponent* NiagaraComp)
{
	if (!NiagaraComp)
	{
		UE_LOG(PTLog, Error, TEXT("[ObjectPoolSubsystem] Object Return Fail NiagaraComp Is nullptr"));
		return;
	}

	if (!NiagaraPools)
	{
		UE_LOG(PTLog, Error, TEXT("[ObjectPoolSubsystem] Niagara Pool System Is nullptr"));
		return;
	}

	NiagaraPools->Return(NiagaraComp);
}
