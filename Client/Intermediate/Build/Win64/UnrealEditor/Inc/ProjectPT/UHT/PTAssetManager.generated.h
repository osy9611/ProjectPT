// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/PTAssetManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTAssetManager_generated_h
#error "PTAssetManager.generated.h already included, missing '#pragma once' in PTAssetManager.h"
#endif
#define PROJECTPT_PTAssetManager_generated_h

#define FID_Client_Source_ProjectPT_System_PTAssetManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTAssetManager(); \
	friend struct Z_Construct_UClass_UPTAssetManager_Statics; \
public: \
	DECLARE_CLASS(UPTAssetManager, UAssetManager, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTAssetManager)


#define FID_Client_Source_ProjectPT_System_PTAssetManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTAssetManager(UPTAssetManager&&); \
	UPTAssetManager(const UPTAssetManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTAssetManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPTAssetManager) \
	NO_API virtual ~UPTAssetManager();


#define FID_Client_Source_ProjectPT_System_PTAssetManager_h_12_PROLOG
#define FID_Client_Source_ProjectPT_System_PTAssetManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_System_PTAssetManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_System_PTAssetManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTAssetManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_System_PTAssetManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
