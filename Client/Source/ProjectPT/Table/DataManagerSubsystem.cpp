// Fill out your copyright notice in the Description page of Project Settings.


#include "DataManagerSubsystem.h"
#include "EnumGenerateData.h"

UDataManagerSubsystem::UDataManagerSubsystem()
{

}

void UDataManagerSubsystem::Deinitialize()
{
	Super::Deinitialize();

	CacheTableData.Empty();
}

void UDataManagerSubsystem::LoadAllData()
{
	if (bIsLoadData)
		return;

	UE_LOG(PTLog, Log, TEXT("LoadAllData"));

	CacheTableData.Empty();

	FString DataTableFolderPath = FPaths::ProjectContentDir() + TEXT("Table/Data");

	TArray<FString> FileNames;
	IFileManager::Get().FindFiles(FileNames, *DataTableFolderPath, TEXT("*.uasset"));

	for (const FString& FileName : FileNames)
	{
		FString AssetPath = FString::Printf(TEXT("/Game/Table/Data/%s"), *FPaths::GetBaseFilename(FileName));

		if (UDataTable* DataTable = LoadObject<UDataTable>(nullptr, *AssetPath))
		{
			UE_LOG(PTLog, Log, TEXT("Table Load Success : %s"), *FileName);

			FString Key = *(DataTable->GetRowStructName()).ToString();
			CacheTableData.Add(Key, DataTable);
		}
		else
			UE_LOG(PTLog, Error, TEXT("Table Load Fail : %s"), *FileName);
	}

	bIsLoadData = true;
}

void UDataManagerSubsystem::ReloadAllData()
{
	bIsLoadData = false;
	LoadAllData();
}

UDataTable* UDataManagerSubsystem::GetTableData(const FString& TableName)
{
	if(TWeakObjectPtr<UDataTable>*TablePtr = CacheTableData.Find(TableName))
	{
		return TablePtr->Get();
	}
	return nullptr;
}
