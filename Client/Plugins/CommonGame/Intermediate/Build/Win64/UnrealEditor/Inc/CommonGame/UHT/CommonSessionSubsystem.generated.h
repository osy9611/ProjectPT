// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonSessionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UMoveSessionData;
#ifdef COMMONGAME_CommonSessionSubsystem_generated_h
#error "CommonSessionSubsystem.generated.h already included, missing '#pragma once' in CommonSessionSubsystem.h"
#endif
#define COMMONGAME_CommonSessionSubsystem_generated_h

#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoveSessionData(); \
	friend struct Z_Construct_UClass_UMoveSessionData_Statics; \
public: \
	DECLARE_CLASS(UMoveSessionData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UMoveSessionData)


#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoveSessionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMoveSessionData(UMoveSessionData&&); \
	UMoveSessionData(const UMoveSessionData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoveSessionData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoveSessionData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoveSessionData) \
	NO_API virtual ~UMoveSessionData();


#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_9_PROLOG
#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_12_INCLASS_NO_PURE_DECLS \
	FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONGAME_API UClass* StaticClass<class UMoveSessionData>();

#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMoveSession);


#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonSessionSubsystem(); \
	friend struct Z_Construct_UClass_UCommonSessionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCommonSessionSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UCommonSessionSubsystem)


#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCommonSessionSubsystem(UCommonSessionSubsystem&&); \
	UCommonSessionSubsystem(const UCommonSessionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonSessionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonSessionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonSessionSubsystem) \
	NO_API virtual ~UCommonSessionSubsystem();


#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_28_PROLOG
#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_31_INCLASS_NO_PURE_DECLS \
	FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONGAME_API UClass* StaticClass<class UCommonSessionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonSessionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
