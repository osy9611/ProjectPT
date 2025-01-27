// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonSessionSubsystem.h"
#include "Engine/AssetManager.h"
#include "Engine/LocalPlayer.h"

FString UMoveSessionData::GetMapName()
{
	FAssetData MapAssetData;
	if (UAssetManager::Get().GetPrimaryAssetData(MapID, MapAssetData))
	{
		UE_LOG(LogTemp, Error, TEXT("[CommonSessionSubsystem] GetMapName PacakageName %s"), *MapAssetData.PackageName.ToString());
		return MapAssetData.PackageName.ToString();
	}

	return FString();
}

FString UMoveSessionData::CreateURL()
{
	FString CombinedExtraArgs;

	for (const auto& ExtraArg : ExtraArgs)
	{
		if (ExtraArg.Key.IsEmpty())
		{
			continue;
		}

		/**
		 * ?�� separate�� �������� ExtraArg�� �߰���:
		 * - Key �� ������ ����, =(assignment)�� ���� �˸´� CmdArg�� ����
		 */
		if (ExtraArg.Value.IsEmpty())
		{
			CombinedExtraArgs += FString::Printf(TEXT("?%s"), *ExtraArg.Key);
		}
		else
		{
			CombinedExtraArgs += FString::Printf(TEXT("?%s=%s"), *ExtraArg.Key, *ExtraArg.Value);
		}
	}


	// Map ��� �տ� �߰��Ͽ�, ���� TravelURL ����
	return FString::Printf(TEXT("%s%s"), *GetMapName(), *CombinedExtraArgs);
}

void UCommonSessionSubsystem::MoveSession(APlayerController* PlayerController, UMoveSessionData* SessionData)
{
	ULocalPlayer* LocalPlayer = PlayerController != nullptr ? PlayerController->GetLocalPlayer() : nullptr;

	if (!LocalPlayer)
	{
		UE_LOG(LogTemp, Error, TEXT("[CommonSessionSubsystem] This PlayerController Is nullptr"));
		return;
	}

	GetWorld()->ServerTravel(SessionData->CreateURL());
}
