// Fill out your copyright notice in the Description page of Project Settings.


#include "Poolable_Actor.h"

void UPoolable_Actor::Init(UWorld* World, TSubclassOf<AActor> Actor, int32 count)
{
	check(Actor);

	OriginalActor = Actor;
	for (int32 i = 0; i < count; ++i)
	{
		if (AActor* NewActor = Create(World))
		{
			HideActor(NewActor);
			ObjectPool.Add(NewActor);
		}
	}
}

AActor* UPoolable_Actor::Get(UWorld* World)
{
	AActor* Result;
	if (ObjectPool.IsEmpty())
		Result = Create(World);
	else
		Result = ObjectPool.Pop();

	if (Result)
		ShowActor(Result);

	return Result;
}

void UPoolable_Actor::Return(AActor* Actor)
{
	check(Actor);

	HideActor(Actor);
	ObjectPool.Add(Actor);
}

void UPoolable_Actor::HideActor(AActor* Actor)
{
	check(Actor);

	Actor->SetActorHiddenInGame(true);
	Actor->SetActorEnableCollision(false);
	Actor->SetActorTickEnabled(false);
}

void UPoolable_Actor::ShowActor(AActor* Actor)
{
	check(Actor);
	Actor->SetActorHiddenInGame(false);
	Actor->SetActorEnableCollision(true);
	Actor->SetActorTickEnabled(true);
}
