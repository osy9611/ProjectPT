// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UIManagerSubsystem.generated.h"


class UCommonUserWidgetBase;
class UCommonLocalPlayer;
/**
 *
 */
UCLASS(Abstract, config=Game)
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

	//ACommonPlayerController* GetCommonPlayerController(UCommonLocalPlayer* LocalPlayer);

	void RegisterWidget(TSubclassOf<UCommonUserWidgetBase> CommonWidget);
	void CreateLayoutWidget(UCommonLocalPlayer* PlayerController);
	void AddToLayoutViewport(UCommonLocalPlayer* PlayerController);
	void RemoveLayoutFromViewport();

	UPROPERTY(Transient)
	TSubclassOf<UCommonUserWidgetBase> CurrentWidgetClass;

	UPROPERTY(Transient)
	TObjectPtr<UCommonUserWidgetBase> CurrentWidget;

	UPROPERTY(Config, EditAnywhere)
	TSoftClassPtr<UCommonUserWidgetBase> DefualtWidget;

};
