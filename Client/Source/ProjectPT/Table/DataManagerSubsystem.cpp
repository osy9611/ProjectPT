// Fill out your copyright notice in the Description page of Project Settings.


#include "DataManagerSubsystem.h"
#include "EnumGenerateData.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "Engine/DataTable.h"

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

	UE_LOG(PTLog, Log, TEXT("[UDataManageSubSystem] LoadAllData"));
	LoadAllDataBinary();

	bIsLoadData = true;
}

void UDataManagerSubsystem::LoadAllDataTable()
{
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
			UE_LOG(PTLog, Log, TEXT("[UDataManageSubSystem] Table already loaded: %s"), *FileName);
			NewTableData.Add(FileName, *ExistingTable);
			continue;
		}

		if (UDataTable* DataTable = LoadObject<UDataTable>(nullptr, *AssetPath))
		{
			UE_LOG(PTLog, Log, TEXT("[UDataManageSubSystem] Table Load Success: %s"), *FileName);
			FString Key = *(DataTable->RowStruct->GetName());
			NewTableData.Add(Key, DataTable);
		}
		else
		{
			UE_LOG(PTLog, Error, TEXT("[UDataManageSubSystem] Table Load Fail: %s"), *FileName);
		}
	}

	//기존 데이터 덮어쓰기
	CacheTableData = MoveTemp(NewTableData);
}

void UDataManagerSubsystem::LoadAllDataBinary()
{
	if (bIsLoadData)
		return;


	TMap<FString, UDataTable*> NewTableData;

	FString DataTableFolderPath = FPaths::ProjectContentDir() + TEXT("Table/Byte");

	UE_LOG(PTLog, Error, TEXT("[UDataManageSubSystem] DataTableFolderPath : %s"), *DataTableFolderPath);

	TArray<FString> FileNames;
	IFileManager::Get().FindFiles(FileNames, *DataTableFolderPath, TEXT("*.byte"));
	UE_LOG(PTLog, Error, TEXT("[UDataManageSubSystem] FileNames Count : %i"), FileNames.Num());
	for (const FString& FileName : FileNames)
	{
		if (UDataTable* DataTable = DeserializeData(DataTableFolderPath + "/" + FileName))
		{
			FString Key = *(DataTable->RowStruct->GetName());

			UE_LOG(PTLog, Error, TEXT("[UDataManageSubSystem] BinaryData Load : %s  Key: %s"), *FileName, *Key);
			NewTableData.Add(Key, DataTable);
		}
		else
		{
			UE_LOG(PTLog, Error, TEXT("[UDataManageSubSystem] BinaryData Load Fail: %s"), *FileName);
		}
	}

	//기존 데이터 덮어쓰기
	CacheTableData = MoveTemp(NewTableData);
}

void UDataManagerSubsystem::ReloadAllData()
{
	bIsLoadData = false;
	LoadAllData();
}

UDataTable* UDataManagerSubsystem::GetTableData(const FString& TableName)
{
	if (UDataTable** TablePtr = CacheTableData.Find(TableName))
	{
		return *TablePtr;
	}
	return nullptr;
}

UDataTable* UDataManagerSubsystem::DeserializeData(const FString& FilePath)
{
	if (FilePath.IsEmpty())
	{
		UE_LOG(PTLog, Log, TEXT("[UDataManageSubSystem] This File Path Is Null"));
		return nullptr;
	}

	TArray<uint8> BinaryData;

	if (FFileHelper::LoadFileToArray(BinaryData, *FilePath) == false)
	{
		UE_LOG(PTLog, Log, TEXT("[UDataManageSubSystem] Failed to load binary file : %s"), *FilePath);
		return nullptr;
	}

	FMemoryReader MemoryReader(BinaryData, true);

	UDataTable* DataTable = NewObject<UDataTable>();

	FObjectAndNameAsStringProxyArchive Ar(MemoryReader, false);
	DataTable->Serialize(Ar);

	return DataTable;
}
