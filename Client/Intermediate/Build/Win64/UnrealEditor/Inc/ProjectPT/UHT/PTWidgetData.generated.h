// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/PTWidgetData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTWidgetData_generated_h
#error "PTWidgetData.generated.h already included, missing '#pragma once' in PTWidgetData.h"
#endif
#define PROJECTPT_PTWidgetData_generated_h

#define FID_Client_Source_ProjectPT_UI_PTWidgetData_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetData_Statics; \
	PROJECTPT_API static class UScriptStruct* StaticStruct();


template<> PROJECTPT_API UScriptStruct* StaticStruct<struct FWidgetData>();

#define FID_Client_Source_ProjectPT_UI_PTWidgetData_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTWidgetData(); \
	friend struct Z_Construct_UClass_UPTWidgetData_Statics; \
public: \
	DECLARE_CLASS(UPTWidgetData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTWidgetData)


#define FID_Client_Source_ProjectPT_UI_PTWidgetData_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTWidgetData(UPTWidgetData&&); \
	UPTWidgetData(const UPTWidgetData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTWidgetData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTWidgetData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTWidgetData) \
	NO_API virtual ~UPTWidgetData();


#define FID_Client_Source_ProjectPT_UI_PTWidgetData_h_26_PROLOG
#define FID_Client_Source_ProjectPT_UI_PTWidgetData_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_UI_PTWidgetData_h_29_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_UI_PTWidgetData_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTWidgetData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_UI_PTWidgetData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
