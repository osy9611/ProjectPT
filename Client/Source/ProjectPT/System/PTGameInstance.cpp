// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGameInstance.h"
#include "ProjectPT/PTGameplayTags.h"
#include <Components/GameFrameworkComponentManager.h>
void UPTGameInstance::Init()
{
	Super::Init();

	//앞서 정의한 InitState의 GameplayTags 등록:
	//UGameFrameworkComponentManager : Component를 관리하는 매니져
	UGameFrameworkComponentManager* ComponentManager = GetSubsystem<UGameFrameworkComponentManager>(this);
	if (ensure(ComponentManager))
	{
		const FPTGameplayTags& GameplayTags = FPTGameplayTags::Get();

		ComponentManager->RegisterInitState(GameplayTags.InitState_Spawned, false, FGameplayTag());
		ComponentManager->RegisterInitState(GameplayTags.InitState_DataAvailable, false, GameplayTags.InitState_Spawned);
		ComponentManager->RegisterInitState(GameplayTags.InitState_DataInitialized, false, GameplayTags.InitState_DataAvailable);
		ComponentManager->RegisterInitState(GameplayTags.InitState_GameplayReady, false, GameplayTags.InitState_DataInitialized);
	}
}

void UPTGameInstance::Shutdown()
{
	Super::Shutdown();
}
