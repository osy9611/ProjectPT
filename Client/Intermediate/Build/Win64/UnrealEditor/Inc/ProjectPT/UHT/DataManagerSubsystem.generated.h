// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Table/DataManagerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_DataManagerSubsystem_generated_h
#error "DataManagerSubsystem.generated.h already included, missing '#pragma once' in DataManagerSubsystem.h"
#endif
#define PROJECTPT_DataManagerSubsystem_generated_h

#define FID_Client_Source_ProjectPT_Table_DataManagerSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataManagerSubsystem(); \
	friend struct Z_Construct_UClass_UDataManagerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UDataManagerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UDataManagerSubsystem)


#define FID_Client_Source_ProjectPT_Table_DataManagerSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDataManagerSubsystem(UDataManagerSubsystem&&); \
	UDataManagerSubsystem(const UDataManagerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataManagerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataManagerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataManagerSubsystem) \
	NO_API virtual ~UDataManagerSubsystem();


#define FID_Client_Source_ProjectPT_Table_DataManagerSubsystem_h_13_PROLOG
#define FID_Client_Source_ProjectPT_Table_DataManagerSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Table_DataManagerSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Table_DataManagerSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UDataManagerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Table_DataManagerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
