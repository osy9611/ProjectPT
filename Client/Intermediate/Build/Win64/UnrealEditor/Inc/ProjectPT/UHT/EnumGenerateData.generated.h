// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/EnumGenerateData.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_EnumGenerateData_generated_h
#error "EnumGenerateData.generated.h already included, missing '#pragma once' in EnumGenerateData.h"
#endif
#define PROJECTPT_EnumGenerateData_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Data_EnumGenerateData_h


#define FOREACH_ENUM_EPTELEMENTTYPE(op) \
	op(EPTElementType::NONE) \
	op(EPTElementType::SUPERHUMAN_TYPE) \
	op(EPTElementType::ELEMENTAL_TYPE) \
	op(EPTElementType::FIGHTING_TYPE) \
	op(EPTElementType::ILLUSION_TYPE) \
	op(EPTElementType::ILLUSION_TYPE2) 

enum class EPTElementType : uint8;
template<> struct TIsUEnumClass<EPTElementType> { enum { Value = true }; };
template<> PROJECTPT_API UEnum* StaticEnum<EPTElementType>();

#define FOREACH_ENUM_EMONSTERTYPE(op) \
	op(EMonsterType::NORMAL) \
	op(EMonsterType::BOSS) \
	op(EMonsterType::UNIQUE) 

enum class EMonsterType : uint8;
template<> struct TIsUEnumClass<EMonsterType> { enum { Value = true }; };
template<> PROJECTPT_API UEnum* StaticEnum<EMonsterType>();

#define FOREACH_ENUM_ECOLLISIONTYPE(op) \
	op(ECollisionType::RayTrace) \
	op(ECollisionType::Sphere) \
	op(ECollisionType::Capsule) \
	op(ECollisionType::Box) 

enum class ECollisionType : uint8;
template<> struct TIsUEnumClass<ECollisionType> { enum { Value = true }; };
template<> PROJECTPT_API UEnum* StaticEnum<ECollisionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
