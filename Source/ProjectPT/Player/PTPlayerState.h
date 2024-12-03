// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "PTPlayerState.generated.h"

class UPTPawnData;
class UPTExperienceDefinition;
class UPTAbilitySystemComponent;
/**
 * PawnData�� ĳ���ϴ°��� �� ����
 */
UCLASS()
class PROJECTPT_API APTPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	APTPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void PostInitializeComponents() final;

	template<class T>
	const T* GetPawnData() const { return Cast<T>(PawnData); }
	void OnExperienceLoaded(const UPTExperienceDefinition* CurrentExperience);
	void SetPawnData(const UPTPawnData* PawnData);
	UPTAbilitySystemComponent* GetPTAbilitySystemComponent() const { return AbilitySystemComponent; }

	UPROPERTY()
	TObjectPtr<const UPTPawnData> PawnData;

	/*
	 * �����Ƽ ������Ʈ�� ���⿡ �ִ� ����
	 *  - ��Ʈ��ũ�� ����ϸ� �̰��� �߰��� �ؾ��Ѵ�.
	 *  - PlayerState�� �ֱ������� �������� Ŭ���̾�Ʈ�� �����Ǵ� �����̱� ����
	*/
	UPROPERTY(VisibleAnywhere, Category = "PlayerState")
	TObjectPtr<UPTAbilitySystemComponent> AbilitySystemComponent;
};
