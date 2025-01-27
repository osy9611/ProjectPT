// Fill out your copyright notice in the Description page of Project Settings.


#include "PTCommonSessionSubsystem.h"
#include "ProjectPT/Table/GenerateTableData.h"
#include "ProjectPT/Table/DataManagerSubsystem.h"
#include "ProjectPT/PTLogChannels.h"
#include "ProjectPT/GameModes/PTSceneData.h"
#include "ProjectPT/Sound/PTAudioSubsystem.h"
#include "PTAssetManager.h"

UPTCommonSessionSubsystem::UPTCommonSessionSubsystem()
{
}

void UPTCommonSessionSubsystem::MoveSessionByTableID(int32 TableNo)
{
	if (UDataManagerSubsystem* DataManager = GetGameInstance()->GetSubsystem<UDataManagerSubsystem>())
	{
		FSceneData* SceneData = DataManager->FindData<FSceneData>(FString::FromInt(TableNo));
		if (!SceneData)
		{
			UE_LOG(PTLog, Error, TEXT("[PTCommonSessionSubSystem] This SceneData Is nullptr TableNo %s"), *FString::FromInt(TableNo));
			return;
		}

		if (UPTAudioSubsystem* AudioComponent = GetGameInstance()->GetSubsystem<UPTAudioSubsystem>())
		{
			AudioComponent->UnRegisterData();
			AudioComponent->RegisterPlaySoundAfterSceneLoading(SceneData->BGMPath);
		}

		UPTAssetManager& AssetManager = UPTAssetManager::Get();
		AssetManager.AsynchronusLoadAsset(SceneData->DataPath, [&](UObject* result)
			{
				if (UPTSceneData* SceneData = Cast<UPTSceneData>(result))
				{
					UMoveSessionData* MoveSessionData = SceneData->CreateMoveSessionData();

					if (MoveSessionData)
					{
						GetWorld()->ServerTravel(MoveSessionData->CreateURL());
					}
				}
			});
	}
}