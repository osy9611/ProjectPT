// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "CommonUserWidgetBase.h"
#include "CommonActivatableWidgetBase.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "UIManagerSubsystem.generated.h"

class UCommonLocalPlayer;
/**
 *
 */
UCLASS(Abstract, config = Game)
class COMMONGAME_API UUIManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UUIManagerSubsystem();
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	virtual void NotifyPlayerAdded(UCommonLocalPlayer* LocalPlayer);
	virtual void NotifyPlayerRemoved(UCommonLocalPlayer* LocalPlayer);
	virtual void NotifyPlayerDestroyed(UCommonLocalPlayer* LocalPlayer);

	void RegisterWidget(TSubclassOf<UCommonUserWidgetBase> CommonWidget);
	void CreateLayoutWidget(UCommonLocalPlayer* PlayerController);
	void AddToLayoutViewport(UCommonLocalPlayer* PlayerController);
	void RemoveLayoutFromViewport();

	UFUNCTION(BlueprintCallable)
	UCommonActivatableWidgetBase* CreateActivatableWidgetClass(FGameplayTag LayerName, UCommonActivatableWidgetBase* ActivatableWidgetClass);

	UFUNCTION(BlueprintCallable)
	UCommonActivatableWidgetBase* GetActivatableWidgetClass(FGameplayTag LayerName, UCommonActivatableWidgetBase* ActivatableWidgetClass);

	UFUNCTION(BlueprintCallable)
	UCommonActivatableWidgetBase* GetActivatableWidgetName(FGameplayTag LayerName, const FString& WidgetName);

	template<typename T = UCommonActivatableWidgetBase>
	T* CreateActivatableWidgetClass(FGameplayTag LayerName, UClass* ActivatableWidgetClass);

	template<typename T = UCommonActivatableWidgetBase>
	T* GetActivatableWidgetClass(FGameplayTag LayerName, UClass* ActivatableWidgetClass);

	UPROPERTY(Transient)
	TSubclassOf<UCommonUserWidgetBase> CurrentWidgetClass;

	UPROPERTY(Transient)
	TObjectPtr<UCommonUserWidgetBase> CurrentWidget;

	UPROPERTY(Config, EditAnywhere)
	TSoftClassPtr<UCommonUserWidgetBase> DefualtWidget;

};

template<typename T>
T* UUIManagerSubsystem::CreateActivatableWidgetClass(FGameplayTag LayerName, UClass* ActivatableWidgetClass)
{
	if (!CurrentWidget)
	{
		UE_LOG(LogTemp, Log, TEXT("[UIManageSubsystem] CurrentWidget is nullptr"));
		return nullptr;
	}

	return Cast<T>(CurrentWidget->CreateWidgetToLayer(LayerName, ActivatableWidgetClass));
}

template<typename T>
T* UUIManagerSubsystem::GetActivatableWidgetClass(FGameplayTag LayerName, UClass* ActivatableWidgetClass)
{
	if (!CurrentWidget)
	{
		UE_LOG(LogTemp, Log, TEXT("[UIManageSubsystem] CurrentWidget is nullptr"));
		return nullptr;
	}

	return Cast<T>(CurrentWidget->GetWidgetToLayer(LayerName, ActivatableWidgetClass));
}
