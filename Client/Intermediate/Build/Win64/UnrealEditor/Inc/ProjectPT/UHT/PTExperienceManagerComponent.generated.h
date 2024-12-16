// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/PTExperienceManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTExperienceManagerComponent_generated_h
#error "PTExperienceManagerComponent.generated.h already included, missing '#pragma once' in PTExperienceManagerComponent.h"
#endif
#define PROJECTPT_PTExperienceManagerComponent_generated_h

#define FID_Client_Source_ProjectPT_GameModes_PTExperienceManagerComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTExperienceManagerComponent(); \
	friend struct Z_Construct_UClass_UPTExperienceManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UPTExperienceManagerComponent, UGameStateComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTExperienceManagerComponent)


#define FID_Client_Source_ProjectPT_GameModes_PTExperienceManagerComponent_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPTExperienceManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTExperienceManagerComponent(UPTExperienceManagerComponent&&); \
	UPTExperienceManagerComponent(const UPTExperienceManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTExperienceManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTExperienceManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTExperienceManagerComponent) \
	NO_API virtual ~UPTExperienceManagerComponent();


#define FID_Client_Source_ProjectPT_GameModes_PTExperienceManagerComponent_h_23_PROLOG
#define FID_Client_Source_ProjectPT_GameModes_PTExperienceManagerComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_GameModes_PTExperienceManagerComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_GameModes_PTExperienceManagerComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTExperienceManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_GameModes_PTExperienceManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
