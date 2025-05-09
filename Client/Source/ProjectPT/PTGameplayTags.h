// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

class UGameplayTagsManager;
\
struct FPTGameplayTags
{
	static const FPTGameplayTags& Get() { return GameplayTags; }
	static void InitializeNativeTags();

	void AddTag(FGameplayTag& OutTag, const ANSICHAR* TagName, const ANSICHAR* TagComment);
	void AddAllTags(UGameplayTagsManager& Manager);

	/*
	* 아래의 GameplayTags는 초기화 과정 단계를 의미한다
	*  - GameInstance의 초기화 과정에서 UGameFrameworkComponentManager의 RegisterInitState로 등록되어 선형적으로 업데이트 된다.
	*  - 이 초기화 GameplayTag는 게임의 Actor 사이에 공유되며, GameFrameworkInitStateInterface 상속받은 클래스는 초기화 상태를 State Machine과 같이 관리 가능한
	*    인터페이스를 제공한다
	*/
	FGameplayTag InitState_Spawned;
	FGameplayTag InitState_DataAvailable;
	FGameplayTag InitState_DataInitialized;
	FGameplayTag InitState_GameplayReady;

	//InputTags
	FGameplayTag InputTag_Move;
	FGameplayTag InputTag_Look_Mouse;
	FGameplayTag InputTag_Zoom;
	FGameplayTag InputTag_Interaction;

	//UI Event
	FGameplayTag UI_Event_Health;
	FGameplayTag UI_Event_MailUpdate;
	FGameplayTag UI_Event_EventUpdate;
	FGameplayTag UI_Event_InvenUpdate;
	FGameplayTag UI_Event_ActiveInteraction;

	//AI Event
	FGameplayTag AI_Event_Attack;
	FGameplayTag AI_Event_Death;

	//GE Event
	FGameplayTag GE_Event_Damage;

	//GCN Event
	FGameplayTag GameplayCue_RangeAttack_Damage;

	//Request Event(가상으로 서버가 있다고 작업하기 위해서 일단 추가함)
	FGameplayTag Request_GetMails;
	FGameplayTag Request_DeleteAllMail;
	FGameplayTag Request_DeleteMail;
	FGameplayTag Request_ReceiveAllReward;
	FGameplayTag Request_ReceiveReward;

	FGameplayTag Request_GetEventData;
	FGameplayTag Request_GetEventReward;

	FGameplayTag Reqeust_AddItem;
	FGameplayTag Request_RemoveItem;
	FGameplayTag Request_GetInvenData;
	FGameplayTag Request_ChangeCategory;
	FGameplayTag Request_UpdateCurrency;
private:
	static FPTGameplayTags GameplayTags;
};