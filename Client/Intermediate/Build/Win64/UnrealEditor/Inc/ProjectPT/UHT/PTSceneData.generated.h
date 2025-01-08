// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/PTSceneData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoveSessionData;
#ifdef PROJECTPT_PTSceneData_generated_h
#error "PTSceneData.generated.h already included, missing '#pragma once' in PTSceneData.h"
#endif
#define PROJECTPT_PTSceneData_generated_h

#define FID_Client_Source_ProjectPT_GameModes_PTSceneData_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateMoveSessionData);


#define FID_Client_Source_ProjectPT_GameModes_PTSceneData_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTSceneData(); \
	friend struct Z_Construct_UClass_UPTSceneData_Statics; \
public: \
	DECLARE_CLASS(UPTSceneData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTSceneData)


#define FID_Client_Source_ProjectPT_GameModes_PTSceneData_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPTSceneData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTSceneData(UPTSceneData&&); \
	UPTSceneData(const UPTSceneData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTSceneData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTSceneData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTSceneData) \
	NO_API virtual ~UPTSceneData();


#define FID_Client_Source_ProjectPT_GameModes_PTSceneData_h_13_PROLOG
#define FID_Client_Source_ProjectPT_GameModes_PTSceneData_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_GameModes_PTSceneData_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_GameModes_PTSceneData_h_16_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_GameModes_PTSceneData_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTSceneData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_GameModes_PTSceneData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
