// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectPoolSubsystem.h"
#include "Poolable_Actor.h"
#include "ProjectPT/PTLogChannels.h"


UObjectPoolSubsystem::UObjectPoolSubsystem()
{
}

AActor* UObjectPoolSubsystem::GetActor(UClass* ClassType)
{
	UWorld* World = GetWorld();
	if (!World)
	{
		UE_LOG(PTLog, Log, TEXT("[ObjectPoolSubsystem] World Is Null"));
		return nullptr;
	}

	if (UPoolable_Actor** PoolableActor = ObjectPools.Find(ClassType))
	{
		return (*PoolableActor)->Get(World);
	}

	UPoolable_Actor* NewPool = NewObject<UPoolable_Actor>(this);
	NewPool->Init(World, ClassType);
	ObjectPools.Add(ClassType, NewPool);
	return NewPool->Get(World);
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
			UE_LOG(PTLog, Log, TEXT("This Class Is Not ObjectPool %s"), *ClassType->GetName());
		}
	}
}
