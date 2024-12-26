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
	//PIE 종료 시 GC이 모든 UObject를 정리한다.
	//PIE 종료시 ReleaseSharedReference에서 문제가 생기는 이유는
	//언리얼 GC에 의해서 이미 메모리가 해제된 상태에 추가적으로 메모리 해제를 하기때문
	//따라서 TWeakObjectPtr로 설정함
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
