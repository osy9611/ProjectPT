// Fill out your copyright notice in the Description page of Project Settings.


#include "UIManagerSubsystem.h"
#include "CommonUserWidgetBase.h"
#include "CommonPlayerController.h"
#include "CommonLocalPlayer.h"


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
PRAGMA_DISABLE_OPTIMIZATION
void UUIManagerSubsystem::CreateLayoutWidget(UCommonLocalPlayer* LocalPlayer)
{
	if (!LocalPlayer)
	{
		return;
		UE_LOG(LogTemp, Error, TEXT("This PlayerController is Nullptr"));
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
PRAGMA_ENABLE_OPTIMIZATION

void UUIManagerSubsystem::AddToLayoutViewport(UCommonLocalPlayer* LocalPlayer)
{
	check(CurrentWidget);
	CurrentWidget->SetPlayerContext(FLocalPlayerContext(LocalPlayer));
	CurrentWidget->AddToPlayerScreen(1000);
}

void UUIManagerSubsystem::RemoveLayoutFromViewport()
{
	check(CurrentWidget);
	//UCommonUserWidget�� SlateWidget�� �����ͼ� Parent�� ������� ���� ���´�.
	TWeakPtr<SWidget> LayoutSlateWidget = CurrentWidget->GetCachedWidget();
	if (LayoutSlateWidget.IsValid())
	{
		CurrentWidget->RemoveFromParent();
	}
}
