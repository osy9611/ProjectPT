// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/PTAIComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTAIComponent_generated_h
#error "PTAIComponent.generated.h already included, missing '#pragma once' in PTAIComponent.h"
#endif
#define PROJECTPT_PTAIComponent_generated_h

#define FID_Client_Source_ProjectPT_Character_PTAIComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSkeletonMeshSocketPos); \
	DECLARE_FUNCTION(execGetSkeletonMeshSocketTransform);


#define FID_Client_Source_ProjectPT_Character_PTAIComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTAIComponent(); \
	friend struct Z_Construct_UClass_UPTAIComponent_Statics; \
public: \
	DECLARE_CLASS(UPTAIComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTAIComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UPTAIComponent*>(this); }


#define FID_Client_Source_ProjectPT_Character_PTAIComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTAIComponent(UPTAIComponent&&); \
	UPTAIComponent(const UPTAIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTAIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTAIComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTAIComponent) \
	NO_API virtual ~UPTAIComponent();


#define FID_Client_Source_ProjectPT_Character_PTAIComponent_h_17_PROLOG
#define FID_Client_Source_ProjectPT_Character_PTAIComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Character_PTAIComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Character_PTAIComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Character_PTAIComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTAIComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Character_PTAIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
