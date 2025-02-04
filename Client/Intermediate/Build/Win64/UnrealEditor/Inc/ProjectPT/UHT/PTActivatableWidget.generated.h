// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/PTActivatableWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTActivatableWidget_generated_h
#error "PTActivatableWidget.generated.h already included, missing '#pragma once' in PTActivatableWidget.h"
#endif
#define PROJECTPT_PTActivatableWidget_generated_h

#define FID_Client_Source_ProjectPT_UI_PTActivatableWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHideMouseCursor); \
	DECLARE_FUNCTION(execShowMouseCursor);


#define FID_Client_Source_ProjectPT_UI_PTActivatableWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTActivatableWidget(); \
	friend struct Z_Construct_UClass_UPTActivatableWidget_Statics; \
public: \
	DECLARE_CLASS(UPTActivatableWidget, UCommonActivatableWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTActivatableWidget)


#define FID_Client_Source_ProjectPT_UI_PTActivatableWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTActivatableWidget(UPTActivatableWidget&&); \
	UPTActivatableWidget(const UPTActivatableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTActivatableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTActivatableWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPTActivatableWidget) \
	NO_API virtual ~UPTActivatableWidget();


#define FID_Client_Source_ProjectPT_UI_PTActivatableWidget_h_18_PROLOG
#define FID_Client_Source_ProjectPT_UI_PTActivatableWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_UI_PTActivatableWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_UI_PTActivatableWidget_h_21_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_UI_PTActivatableWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTActivatableWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_UI_PTActivatableWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
