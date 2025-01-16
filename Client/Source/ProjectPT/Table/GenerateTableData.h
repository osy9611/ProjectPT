# pragma once

#include "Engine/DataTable.h"
#include "EnumGenerateData.h"
#include "GenerateTableData.generated.h"

USTRUCT(BlueprintType)
struct FMonsterData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HP;
};
USTRUCT(BlueprintType)
struct FSceneData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DataPath;
};
USTRUCT(BlueprintType)
struct FSkillData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float skillRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float skillRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float skillSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float skillCoolTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MuzzleName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECollisionType CollisionType;
};

