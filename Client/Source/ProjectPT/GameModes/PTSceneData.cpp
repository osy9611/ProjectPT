// Fill out your copyright notice in the Description page of Project Settings.


#include "PTSceneData.h"
#include "ProjectPT/PTLogChannels.h"

UMoveSessionData* UPTSceneData::CreateMoveSessionData()
{
	const FString ExperienceName = ExperinceID.PrimaryAssetName.ToString();

	UE_LOG(PTLog, Log, TEXT("[MoveSessionData] MapID : %s"), *MapID.ToString());

	UMoveSessionData* Result = NewObject<UMoveSessionData>();

	Result->MapID = MapID;
	UE_LOG(PTLog, Log, TEXT("[MoveSessionData] Result->MapID : %s"), *Result->MapID.ToString());
	Result->ExtraArgs.Add(TEXT("Experience"), ExperienceName);
	return Result;
}
