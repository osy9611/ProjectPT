// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/PTHeroComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef PROJECTPT_PTHeroComponent_generated_h
#error "PTHeroComponent.generated.h already included, missing '#pragma once' in PTHeroComponent.h"
#endif
#define PROJECTPT_PTHeroComponent_generated_h

#define FID_Client_Source_ProjectPT_Character_PTHeroComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInteractionLeave); \
	DECLARE_FUNCTION(execInteractionEnter);


#define FID_Client_Source_ProjectPT_Character_PTHeroComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTHeroComponent(); \
	friend struct Z_Construct_UClass_UPTHeroComponent_Statics; \
public: \
	DECLARE_CLASS(UPTHeroComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTHeroComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UPTHeroComponent*>(this); }


#define FID_Client_Source_ProjectPT_Character_PTHeroComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTHeroComponent(UPTHeroComponent&&); \
	UPTHeroComponent(const UPTHeroComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTHeroComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTHeroComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTHeroComponent) \
	NO_API virtual ~UPTHeroComponent();


#define FID_Client_Source_ProjectPT_Character_PTHeroComponent_h_20_PROLOG
#define FID_Client_Source_ProjectPT_Character_PTHeroComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Character_PTHeroComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Character_PTHeroComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Character_PTHeroComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTHeroComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Character_PTHeroComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
