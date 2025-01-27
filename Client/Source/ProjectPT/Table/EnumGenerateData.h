# pragma once

#include "EnumGenerateData.generated.h"

UENUM(BlueprintType)
enum class EPTElementType:uint8
{
	NONE, 
	SUPERHUMAN_TYPE, //화염
	ELEMENTAL_TYPE, //나무
	FIGHTING_TYPE, //바다
	ILLUSION_TYPE, //어둠
	ILLUSION_TYPE2, //어둠2
};

UENUM(BlueprintType)
enum class EMonsterType:uint8
{
	NORMAL, //일반
	BOSS, //보스
	UNIQUE, //유니크
};

UENUM(BlueprintType)
enum class ECollisionType:uint8
{
	RayTrace, //레이
	Sphere, //구형
	Capsule, //캡슐
	Box, //박스
};


