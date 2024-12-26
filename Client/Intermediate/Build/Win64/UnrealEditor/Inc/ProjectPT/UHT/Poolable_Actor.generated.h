// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pool/Poolable_Actor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_Poolable_Actor_generated_h
#error "Poolable_Actor.generated.h already included, missing '#pragma once' in Poolable_Actor.h"
#endif
#define PROJECTPT_Poolable_Actor_generated_h

#define FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoolable_Actor(); \
	friend struct Z_Construct_UClass_UPoolable_Actor_Statics; \
public: \
	DECLARE_CLASS(UPoolable_Actor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPoolable_Actor)


#define FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoolable_Actor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoolable_Actor(UPoolable_Actor&&); \
	UPoolable_Actor(const UPoolable_Actor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolable_Actor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolable_Actor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoolable_Actor) \
	NO_API virtual ~UPoolable_Actor();


#define FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_13_PROLOG
#define FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPoolable_Actor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
