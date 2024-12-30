// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Object/ObjectSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_ObjectSubsystem_generated_h
#error "ObjectSubsystem.generated.h already included, missing '#pragma once' in ObjectSubsystem.h"
#endif
#define PROJECTPT_ObjectSubsystem_generated_h

#define FID_Client_Source_ProjectPT_Object_ObjectSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectSubsystem(); \
	friend struct Z_Construct_UClass_UObjectSubsystem_Statics; \
public: \
	DECLARE_CLASS(UObjectSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UObjectSubsystem)


#define FID_Client_Source_ProjectPT_Object_ObjectSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UObjectSubsystem(UObjectSubsystem&&); \
	UObjectSubsystem(const UObjectSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectSubsystem) \
	NO_API virtual ~UObjectSubsystem();


#define FID_Client_Source_ProjectPT_Object_ObjectSubsystem_h_13_PROLOG
#define FID_Client_Source_ProjectPT_Object_ObjectSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Object_ObjectSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Object_ObjectSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UObjectSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Object_ObjectSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
