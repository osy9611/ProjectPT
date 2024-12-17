# pragma once

#include "Engine/DataTable.h"
#include "GenerateTableData.generated.h"

USTRUCT(BlueprintType)
struct FTest : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name3;
};
USTRUCT(BlueprintType)
struct FTest2 : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float range;
};
USTRUCT(BlueprintType)
struct FTest3 : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float range;
};

