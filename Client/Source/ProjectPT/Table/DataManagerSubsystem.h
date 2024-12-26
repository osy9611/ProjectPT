// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ProjectPT/PTLogChannels.h"
#include "DataManagerSubsystem.generated.h"

/**
 *
 */
UCLASS()
class PROJECTPT_API UDataManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UDataManagerSubsystem();

	virtual void Deinitialize() override;

	void LoadAllData();
	void ReloadAllData();

	template<typename T = FTableRowBase>
	T* FindData(const FString& RowName);

	UDataTable* GetTableData(const FString& TableName);

private:
	//PIE ���� �� GC�� ��� UObject�� �����Ѵ�.
	//PIE ����� ReleaseSharedReference���� ������ ����� ������
	//�𸮾� GC�� ���ؼ� �̹� �޸𸮰� ������ ���¿� �߰������� �޸� ������ �ϱ⶧��
	//���� TWeakObjectPtr�� ������
	TMap<FString, UDataTable*> CacheTableData;
	bool bIsLoadData = false;
};

template<typename T>
T* UDataManagerSubsystem::FindData(const FString& RowName)
{
	FString Key = T::StaticStruct()->GetName();

	if (UDataTable** TablePtr = CacheTableData.Find(Key))
	{
		UDataTable* DataTable = *TablePtr;
		if (DataTable)
		{
			T* Result = DataTable->FindRow<T>(FName(*RowName), TEXT("FindData"));
			if (Result)
				return Result;
		}
	}

	return nullptr;
}
