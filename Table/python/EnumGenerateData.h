# pragma once

#include "EnumGenerateData.generated.h"

UENUM(BlueprintType)
enum class EPTElementType:uint8
{
	NONE, 
	SUPERHUMAN_TYPE, 
	ELEMENTAL_TYPE, 
	FIGHTING_TYPE, 
	ILLUSION_TYPE, 
	ILLUSION_TYPE2, //!End
};

UENUM(BlueprintType)
enum class EMonsterType:uint8
{
	NORMAL, 
	BOSS, 
	UNIQUE, //!End
};


