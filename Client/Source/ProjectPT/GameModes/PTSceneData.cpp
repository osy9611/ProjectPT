// Fill out your copyright notice in the Description page of Project Settings.


#include "PTSceneData.h"

UMoveSessionData* UPTSceneData::CreateMoveSessionData()
{
	const FString ExperienceName = ExperinceID.PrimaryAssetName.ToString();

	UMoveSessionData* Result = NewObject<UMoveSessionData>();
	Result->MapID = MapID;
	Result->ExtraArgs.Add(TEXT("Experience"), ExperienceName);
	return Result;
}
