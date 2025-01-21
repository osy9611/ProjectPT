// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ProjectPT/AbilitySystem/PTAbilitySystemComponent.h"
#include "PTPlayerState.generated.h"

class UPTPawnData;
class UPTExperienceDefinition;
class UPTAbilitySystemComponent;
class UPTAttributeSet;
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
	UPTAttributeSet* GetPTAttributeSet() const { return AttributeSet; }

	/*
	* CreateDefaultSubobject�� ������ ������ ����ϱ� ������
	* NewObject�� �����
	*/
	template<class T = UPTAttributeSet>
	T* CreateAttribute()
	{
		if (!HasAnyFlags(RF_ClassDefaultObject))
		{
			AttributeSet = NewObject<T>(this, T::StaticClass(), TEXT("AttributeSet"));
			AbilitySystemComponent->AddAttributeSetSubobject(AttributeSet.Get());
		}
		return Cast<T>(AttributeSet);
	}

	UPROPERTY()
	TObjectPtr<const UPTPawnData> PawnData;

	/*
	 * �����Ƽ ������Ʈ�� ���⿡ �ִ� ����
	 *  - ��Ʈ��ũ�� ����ϸ� �̰��� �߰��� �ؾ��Ѵ�.
	 *  - PlayerState�� �ֱ������� �������� Ŭ���̾�Ʈ�� �����Ǵ� �����̱� ����
	*/
	UPROPERTY(VisibleAnywhere, Category = "PlayerState")
	TObjectPtr<UPTAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, Category = "PlayerState")
	TObjectPtr<UPTAttributeSet> AttributeSet;
};
