// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/PTCommonSessionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTCommonSessionSubsystem_generated_h
#error "PTCommonSessionSubsystem.generated.h already included, missing '#pragma once' in PTCommonSessionSubsystem.h"
#endif
#define PROJECTPT_PTCommonSessionSubsystem_generated_h

#define FID_Client_Source_ProjectPT_System_PTCommonSessionSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMoveSessionByTableID);


#define FID_Client_Source_ProjectPT_System_PTCommonSessionSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTCommonSessionSubsystem(); \
	friend struct Z_Construct_UClass_UPTCommonSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UPTCommonSessionSubsystem, UCommonSessionSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTCommonSessionSubsystem)


#define FID_Client_Source_ProjectPT_System_PTCommonSessionSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTCommonSessionSubsystem(UPTCommonSessionSubsystem&&); \
	UPTCommonSessionSubsystem(const UPTCommonSessionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTCommonSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTCommonSessionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPTCommonSessionSubsystem) \
	NO_API virtual ~UPTCommonSessionSubsystem();


#define FID_Client_Source_ProjectPT_System_PTCommonSessionSubsystem_h_14_PROLOG
#define FID_Client_Source_ProjectPT_System_PTCommonSessionSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_System_PTCommonSessionSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_System_PTCommonSessionSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_System_PTCommonSessionSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTCommonSessionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_System_PTCommonSessionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
