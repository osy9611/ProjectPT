// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UIManagerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonActivatableWidgetBase;
struct FGameplayTag;
#ifdef COMMONGAME_UIManagerSubsystem_generated_h
#error "UIManagerSubsystem.generated.h already included, missing '#pragma once' in UIManagerSubsystem.h"
#endif
#define COMMONGAME_UIManagerSubsystem_generated_h

#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActivatableWidgetName); \
	DECLARE_FUNCTION(execGetActivatableWidgetClass); \
	DECLARE_FUNCTION(execCreateActivatableWidgetClass);


#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIManagerSubsystem(); \
	friend struct Z_Construct_UClass_UUIManagerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UUIManagerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonGame"), NO_API) \
	DECLARE_SERIALIZER(UUIManagerSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUIManagerSubsystem(UUIManagerSubsystem&&); \
	UUIManagerSubsystem(const UUIManagerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIManagerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIManagerSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UUIManagerSubsystem) \
	NO_API virtual ~UUIManagerSubsystem();


#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_17_PROLOG
#define FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONGAME_API UClass* StaticClass<class UUIManagerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Plugins_CommonGame_Source_CommonGame_Public_UIManagerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
