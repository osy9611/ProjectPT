// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/PTPawnExtensionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTPawnExtensionComponent_generated_h
#error "PTPawnExtensionComponent.generated.h already included, missing '#pragma once' in PTPawnExtensionComponent.h"
#endif
#define PROJECTPT_PTPawnExtensionComponent_generated_h

#define FID_Client_Source_ProjectPT_Character_PTPawnExtensionComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSkeletonMeshSocketPos); \
	DECLARE_FUNCTION(execGetSkeletonMeshSocketTransform);


#define FID_Client_Source_ProjectPT_Character_PTPawnExtensionComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTPawnExtensionComponent(); \
	friend struct Z_Construct_UClass_UPTPawnExtensionComponent_Statics; \
public: \
	DECLARE_CLASS(UPTPawnExtensionComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTPawnExtensionComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UPTPawnExtensionComponent*>(this); }


#define FID_Client_Source_ProjectPT_Character_PTPawnExtensionComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTPawnExtensionComponent(UPTPawnExtensionComponent&&); \
	UPTPawnExtensionComponent(const UPTPawnExtensionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTPawnExtensionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTPawnExtensionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTPawnExtensionComponent) \
	NO_API virtual ~UPTPawnExtensionComponent();


#define FID_Client_Source_ProjectPT_Character_PTPawnExtensionComponent_h_17_PROLOG
#define FID_Client_Source_ProjectPT_Character_PTPawnExtensionComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Character_PTPawnExtensionComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Character_PTPawnExtensionComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Character_PTPawnExtensionComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTPawnExtensionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Character_PTPawnExtensionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
