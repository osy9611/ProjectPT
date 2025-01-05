// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PTLocalPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTLocalPlayer_generated_h
#error "PTLocalPlayer.generated.h already included, missing '#pragma once' in PTLocalPlayer.h"
#endif
#define PROJECTPT_PTLocalPlayer_generated_h

#define FID_Client_Source_ProjectPT_Player_PTLocalPlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTLocalPlayer(); \
	friend struct Z_Construct_UClass_UPTLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UPTLocalPlayer, UCommonLocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTLocalPlayer)


#define FID_Client_Source_ProjectPT_Player_PTLocalPlayer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPTLocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTLocalPlayer(UPTLocalPlayer&&); \
	UPTLocalPlayer(const UPTLocalPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTLocalPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTLocalPlayer) \
	NO_API virtual ~UPTLocalPlayer();


#define FID_Client_Source_ProjectPT_Player_PTLocalPlayer_h_12_PROLOG
#define FID_Client_Source_ProjectPT_Player_PTLocalPlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Player_PTLocalPlayer_h_15_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Player_PTLocalPlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTLocalPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Player_PTLocalPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
