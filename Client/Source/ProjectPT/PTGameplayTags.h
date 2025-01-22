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
	* �Ʒ��� GameplayTags�� �ʱ�ȭ ���� �ܰ踦 �ǹ��Ѵ�
	*  - GameInstance�� �ʱ�ȭ �������� UGameFrameworkComponentManager�� RegisterInitState�� ��ϵǾ� ���������� ������Ʈ �ȴ�.
	*  - �� �ʱ�ȭ GameplayTag�� ������ Actor ���̿� �����Ǹ�, GameFrameworkInitStateInterface ��ӹ��� Ŭ������ �ʱ�ȭ ���¸� State Machine�� ���� ���� ������
	*    �������̽��� �����Ѵ�
	*/
	FGameplayTag InitState_Spawned;
	FGameplayTag InitState_DataAvailable;
	FGameplayTag InitState_DataInitialized;
	FGameplayTag InitState_GameplayReady;

	//InputTags
	FGameplayTag InputTag_Move;
	FGameplayTag InputTag_Look_Mouse;
	FGameplayTag InputTag_Zoom;

	//AI Event
	FGameplayTag AI_Event_Attack;

	//GCN Event
	FGameplayTag GameplayCue_RangeAttack_Damage;

private:
	static FPTGameplayTags GameplayTags;
};