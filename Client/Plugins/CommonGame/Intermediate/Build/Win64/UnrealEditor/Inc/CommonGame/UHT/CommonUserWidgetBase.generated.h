// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUserWidgetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonActivatableWidgetContainerBase;
struct FGameplayTag;
#ifdef COMMONGAME_CommonUserWidgetBase_generated_h
#error "CommonUserWidgetBase.generated.h already included, missing '#pragma once' in CommonUserWidgetBase.h"
#endif
#define COMMONGAME_CommonUserWidgetBase_generated_h

#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonUserWidgetBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegisterLayer);


#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonUserWidgetBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUserWidgetBase(); \
	friend struct Z_Construct_UClass_UCommonUserWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UCommonUserWidgetBase, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UCommonUserWidgetBase)


#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonUserWidgetBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCommonUserWidgetBase(UCommonUserWidgetBase&&); \
	UCommonUserWidgetBase(const UCommonUserWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUserWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUserWidgetBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UCommonUserWidgetBase) \
	NO_API virtual ~UCommonUserWidgetBase();


#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonUserWidgetBase_h_14_PROLOG
#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonUserWidgetBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonUserWidgetBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonUserWidgetBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonUserWidgetBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONGAME_API UClass* StaticClass<class UCommonUserWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Plugins_CommonGame_Source_CommonGame_Public_CommonUserWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
