// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "CommonUserWidgetBase.h"
#include "CommonActivatableWidget.h"
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
	UCommonActivatableWidget* CreateWidgetClass(FGameplayTag LayerName, UCommonActivatableWidget* ActivatableWidgetClass);

	UFUNCTION(BlueprintCallable)
	UCommonActivatableWidget* GetWidgetClass(FGameplayTag LayerName, UCommonActivatableWidget* ActivatableWidgetClass);

	template<typename T = UCommonActivatableWidget> 
	T* CreateWidgetClass(FGameplayTag LayerName, UClass* ActivatableWidgetClass);

	template<typename T = UCommonActivatableWidget>
	T* GetWidgetClass(FGameplayTag LayerName, UClass* ActivatableWidgetClass);

	UPROPERTY(Transient)
	TSubclassOf<UCommonUserWidgetBase> CurrentWidgetClass;

	UPROPERTY(Transient)
	TObjectPtr<UCommonUserWidgetBase> CurrentWidget;

	UPROPERTY(Config, EditAnywhere)
	TSoftClassPtr<UCommonUserWidgetBase> DefualtWidget;

};

template<typename T>
T* UUIManagerSubsystem::CreateWidgetClass(FGameplayTag LayerName, UClass* ActivatableWidgetClass)
{
	if (!CurrentWidget)
	{
		UE_LOG(LogTemp, Log, TEXT("[UIManageSubsystem] CurrentWidget is nullptr"));
		return nullptr;
	}

	return Cast<T>(CurrentWidget->CreateWidgetToLayer(LayerName, ActivatableWidgetClass));
}

template<typename T>
T* UUIManagerSubsystem::GetWidgetClass(FGameplayTag LayerName, UClass* ActivatableWidgetClass)
{
	if (!CurrentWidget)
	{
		UE_LOG(LogTemp, Log, TEXT("[UIManageSubsystem] CurrentWidget is nullptr"));
		return nullptr;
	}

	return Cast<T>(CurrentWidget->GetWidgetToLayer(LayerName, ActivatableWidgetClass));
}
