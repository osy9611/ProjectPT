// Fill out your copyright notice in the Description page of Project Settings.


#include "UIManagerSubsystem.h"
#include "CommonPlayerController.h"
#include "CommonLocalPlayer.h"
#include "CommonActivatableWidget.h"


UUIManagerSubsystem::UUIManagerSubsystem()
{
}

void UUIManagerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UUIManagerSubsystem::Deinitialize()
{
	Super::Deinitialize();
	RegisterWidget(nullptr);
}

void UUIManagerSubsystem::NotifyPlayerAdded(UCommonLocalPlayer* LocalPlayer)
{
	check(LocalPlayer);

	LocalPlayer->OnPlayerContollerSet.AddWeakLambda(this, [this](UCommonLocalPlayer* LocalPlayer, APlayerController* PlayerController)
		{
			if (LocalPlayer)
			{
				ACommonPlayerController* CommonPlayerController = Cast<ACommonPlayerController>(PlayerController);

				NotifyPlayerRemoved(LocalPlayer);
				CreateLayoutWidget(LocalPlayer);
			}
		});

	/*if (CurrentWidget)
	{
		AddToLayoutViewport(LocalPlayer);
	}
	else
	{
		CreateLayoutWidget(LocalPlayer);
	}*/
}

void UUIManagerSubsystem::NotifyPlayerRemoved(UCommonLocalPlayer* LocalPlayer)
{
	if (CurrentWidget)
	{
		RemoveLayoutFromViewport();
	}
}

void UUIManagerSubsystem::NotifyPlayerDestroyed(UCommonLocalPlayer* LocalPlayer)
{
	check(LocalPlayer);
	
	LocalPlayer->OnPlayerContollerSet.RemoveAll(this);
	RemoveLayoutFromViewport();
}


//ACommonPlayerController* UUIManagerSubsystem::GetCommonPlayerController(UCommonLocalPlayer* LocalPlayer)
//{
//	if (!LocalPlayer)
//	{
//		UE_LOG(LogTemp, Error, TEXT("[UIManagerSubsystem] GetCommonPlayerController() This LocalPlayer is Null"));
//		return nullptr;
//	}
//
//	if (APlayerController* PC = LocalPlayer->GetPlayerController(GetWorld()))
//	{
//		if (ACommonPlayerController* CommonPlayerController = Cast<ACommonPlayerController>(PC))
//			return CommonPlayerController;
//	}
//
//	return nullptr;
//}

void UUIManagerSubsystem::RegisterWidget(TSubclassOf<UCommonUserWidgetBase> CommonWidget)
{
	if (CurrentWidgetClass != CommonWidget)
	{
		CurrentWidgetClass = CommonWidget;
	}
}

void UUIManagerSubsystem::CreateLayoutWidget(UCommonLocalPlayer* LocalPlayer)
{
	if (!LocalPlayer)
	{
		UE_LOG(LogTemp, Error, TEXT("This PlayerController is Nullptr"));
		return;
	}

	if (CurrentWidgetClass == nullptr)
	{
		TSubclassOf<UCommonUserWidgetBase> WidgetClass = DefualtWidget.LoadSynchronous();
		RegisterWidget(WidgetClass);
	}

	check(CurrentWidgetClass);
	TSubclassOf<UCommonUserWidgetBase> WidgetBase = CurrentWidgetClass;

	if (APlayerController* PlayerController = LocalPlayer->GetPlayerController(GetWorld()))
	{

		if (UCommonUserWidgetBase* NewWidgetBase = CreateWidget<UCommonUserWidgetBase>(PlayerController, CurrentWidgetClass))
		{
			CurrentWidget = NewWidgetBase;
			AddToLayoutViewport(LocalPlayer);
		}
	}

}

void UUIManagerSubsystem::AddToLayoutViewport(UCommonLocalPlayer* LocalPlayer)
{
	check(CurrentWidget);
	CurrentWidget->SetPlayerContext(FLocalPlayerContext(LocalPlayer));
	CurrentWidget->AddToPlayerScreen(1000);
}

void UUIManagerSubsystem::RemoveLayoutFromViewport()
{
	check(CurrentWidget);
	//UCommonUserWidget의 SlateWidget을 가져와서 Parent와 연결고리를 끊어 놓는다.
	TWeakPtr<SWidget> LayoutSlateWidget = CurrentWidget->GetCachedWidget();
	if (LayoutSlateWidget.IsValid())
	{
		CurrentWidget->RemoveFromParent();
	}
}

UCommonActivatableWidget* UUIManagerSubsystem::CreateWidgetClass(FGameplayTag LayerName, UCommonActivatableWidget* ActivatableWidgetClass)
{
	if (!ActivatableWidgetClass)
	{
		UE_LOG(LogTemp, Log, TEXT("This ActivatableWidgetClass Is Null"));
		return nullptr;
	}

	return CreateWidgetClass<UCommonActivatableWidget>(LayerName, ActivatableWidgetClass->GetClass());
}
