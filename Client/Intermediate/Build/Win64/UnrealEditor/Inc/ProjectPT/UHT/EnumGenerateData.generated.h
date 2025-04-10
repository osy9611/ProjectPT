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

#define FOREACH_ENUM_EREDDOTTYPE(op) \
	op(ERedDotType::Mail) \
	op(ERedDotType::Inventory) \
	op(ERedDotType::Event) 

enum class ERedDotType : uint8;
template<> struct TIsUEnumClass<ERedDotType> { enum { Value = true }; };
template<> PROJECTPT_API UEnum* StaticEnum<ERedDotType>();

#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::All) \
	op(EItemType::Potion) \
	op(EItemType::Scroll) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> PROJECTPT_API UEnum* StaticEnum<EItemType>();

#define FOREACH_ENUM_EGRADE(op) \
	op(EGrade::Normal) \
	op(EGrade::Rare) \
	op(EGrade::Legend) 

enum class EGrade : uint8;
template<> struct TIsUEnumClass<EGrade> { enum { Value = true }; };
template<> PROJECTPT_API UEnum* StaticEnum<EGrade>();

#define FOREACH_ENUM_EBINDTYPE(op) \
	op(EBindType::Character) \
	op(EBindType::Account) 

enum class EBindType : uint8;
template<> struct TIsUEnumClass<EBindType> { enum { Value = true }; };
template<> PROJECTPT_API UEnum* StaticEnum<EBindType>();

#define FOREACH_ENUM_EMAILTYPE(op) \
	op(EMailType::ServerMail) \
	op(EMailType::System) 

enum class EMailType : uint8;
template<> struct TIsUEnumClass<EMailType> { enum { Value = true }; };
template<> PROJECTPT_API UEnum* StaticEnum<EMailType>();

#define FOREACH_ENUM_EEVENTOPENTYPE(op) \
	op(EEventOpenType::NONE) \
	op(EEventOpenType::ConentsOpen) 

enum class EEventOpenType : uint8;
template<> struct TIsUEnumClass<EEventOpenType> { enum { Value = true }; };
template<> PROJECTPT_API UEnum* StaticEnum<EEventOpenType>();

#define FOREACH_ENUM_ECONTENTSTYPE(op) \
	op(EContentsType::Battle) 

enum class EContentsType : uint8;
template<> struct TIsUEnumClass<EContentsType> { enum { Value = true }; };
template<> PROJECTPT_API UEnum* StaticEnum<EContentsType>();

#define FOREACH_ENUM_EINTERACTIONTYPE(op) \
	op(EInteractionType::Shop) 

enum class EInteractionType : uint8;
template<> struct TIsUEnumClass<EInteractionType> { enum { Value = true }; };
template<> PROJECTPT_API UEnum* StaticEnum<EInteractionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
