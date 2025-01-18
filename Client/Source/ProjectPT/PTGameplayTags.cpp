// Fill out your copyright notice in the Description page of Project Settings.


#include "PTGameplayTags.h"
#include "PTLogChannels.h"
#include "GameplayTagsManager.h"

FPTGameplayTags FPTGameplayTags::GameplayTags;

void FPTGameplayTags::InitializeNativeTags()
{
	UGameplayTagsManager& Manager = UGameplayTagsManager::Get();
	GameplayTags.AddAllTags(Manager);
}

void FPTGameplayTags::AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment)
{
	OutTag = UGameplayTagsManager::Get().AddNativeGameplayTag(FName(TagName), FString(TEXT("(Native) ")) + FString(TagComment));
}

void FPTGameplayTags::AddAllTags(UGameplayTagsManager& Manager)
{
	AddTag(InitState_Spawned, "InitState.Spawned", "1: Actor/Component has initially spawned and can be extended");
	AddTag(InitState_DataAvailable, "InitState.DataAvailable", "2: All required data has been loaded/replicated and is ready for initialization");
	AddTag(InitState_DataInitialized, "InitState.DataInitialized", "3: The available data has been initialized for this actor/component, but it is not ready for full gameplay");
	AddTag(InitState_GameplayReady, "InitState.GameplayReady", "4: The actor/component is fully ready for active gameplay");

	//Input Tags
	AddTag(InputTag_Move, "InputTag.Move", "");
	AddTag(InputTag_Look_Mouse, "InputTag.Look.Mouse", "");
	AddTag(InputTag_Zoom, "InputTag.Zoom", "");

	//AI Event Tags
	AddTag(AI_Event_Attack, "AI.Event.Attack","");
}
