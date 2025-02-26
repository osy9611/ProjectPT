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

	//UI Event
	AddTag(UI_Event_Health, "UI.Event.Health", "");
	AddTag(UI_Event_MailUpdate, "UI.Event.MailUpdate","");
	AddTag(UI_Event_EventUpdate, "UI.Event.EventUpdate", "");
	AddTag(UI_Event_InvenUpdate, "UI.Event.InvenUpdate", "");

	//GE Event
	AddTag(GE_Event_Damage, "GameplayEffect.Event.Damage", "");

	//AI Event Tags
	AddTag(AI_Event_Attack, "AI.Event.Attack","");
	AddTag(AI_Event_Death, "AI.Event.Death", "");

	//GCN Event
	AddTag(GameplayCue_RangeAttack_Damage, "GameplayCue.RangeAttack.Damage", "");

	//Request Event(가상으로 서버가 있다고 작업하기 위해서 잃단 추가함)
	AddTag(Request_DeleteAllMail, "Request.DeleteAllMail","");
	AddTag(Request_DeleteMail, "Request.DeleteMail", "");
	AddTag(Request_ReceiveAllReward, "Request.ReceiveAllReward","");
	AddTag(Request_ReceiveReward, "Request.ReceiveReward", "");
	AddTag(Request_GetEventData, "Request.GetEvent", "");
	AddTag(Request_GetEventReward, "Request.GetEventReward", "");
	AddTag(Reqeust_AddItem, "Reqeust.AddItem", "");
	AddTag(Request_RemoveItem, "Request.RemoveItem", "");
	AddTag(Request_InvenSlotChange, "Request.InvenSlotChange", "");
	AddTag(Request_GetInvenData, "Request.GetInvenData", "");
}
