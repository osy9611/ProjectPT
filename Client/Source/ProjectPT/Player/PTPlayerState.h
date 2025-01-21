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
 * PawnData를 캐싱하는것이 주 목적
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
	* CreateDefaultSubobject는 생성자 내에서 사용하기 때문에
	* NewObject로 써야함
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
	 * 어빌리티 컴포넌트가 여기에 있는 이유
	 *  - 네트워크를 고려하면 이곳에 추가를 해야한다.
	 *  - PlayerState는 주기적으로 서버에서 클라이언트로 배포되는 엑터이기 때문
	*/
	UPROPERTY(VisibleAnywhere, Category = "PlayerState")
	TObjectPtr<UPTAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, Category = "PlayerState")
	TObjectPtr<UPTAttributeSet> AttributeSet;
};
