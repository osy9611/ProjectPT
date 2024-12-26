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

	TMap<FString, UDataTable*> NewTableData;

	FString DataTableFolderPath = FPaths::ProjectContentDir() + TEXT("Table/Data");
	TArray<FString> FileNames;
	IFileManager::Get().FindFiles(FileNames, *DataTableFolderPath, TEXT("*.uasset"));


	for (const FString& FileName : FileNames)
	{
		FString AssetPath = FString::Printf(TEXT("/Game/Table/Data/%s"), *FPaths::GetBaseFilename(FileName));

		//이미 로드된 데이터 확인
		if (UDataTable** ExistingTable = CacheTableData.Find(FileName))
		{
			UE_LOG(PTLog, Log, TEXT("Table already loaded: %s"), *FileName);
			NewTableData.Add(FileName, *ExistingTable);
			continue;
		}

		if (UDataTable* DataTable = LoadObject<UDataTable>(nullptr, *AssetPath))
		{
			UE_LOG(PTLog, Log, TEXT("Table Load Success: %s"), *FileName);
			FString Key = *(DataTable->GetRowStructName()).ToString();
			NewTableData.Add(Key, DataTable);
		}
		else
		{
			UE_LOG(PTLog, Error, TEXT("Table Load Fail: %s"), *FileName);
		}
	}

	//기존 데이터 덮어쓰기
	CacheTableData = MoveTemp(NewTableData);
	bIsLoadData = true;
}

void UDataManagerSubsystem::ReloadAllData()
{
	bIsLoadData = false;
	LoadAllData();
}

UDataTable* UDataManagerSubsystem::GetTableData(const FString& TableName)
{
	if(UDataTable**TablePtr = CacheTableData.Find(TableName))
	{
		return *TablePtr;
	}
	return nullptr;
}
