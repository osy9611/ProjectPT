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

#define FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_12_CALLBACK_WRAPPERS
#define FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PROJECTPT_API UPoolableActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoolableActor(UPoolableActor&&); \
	UPoolableActor(const UPoolableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PROJECTPT_API, UPoolableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolableActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoolableActor) \
	PROJECTPT_API virtual ~UPoolableActor();


#define FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPoolableActor(); \
	friend struct Z_Construct_UClass_UPoolableActor_Statics; \
public: \
	DECLARE_CLASS(UPoolableActor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ProjectPT"), PROJECTPT_API) \
	DECLARE_SERIALIZER(UPoolableActor)


#define FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPoolableActor() {} \
public: \
	typedef UPoolableActor UClassType; \
	typedef IPoolableActor ThisClass; \
	static void Execute_K2_OnActive(UObject* O); \
	static void Execute_K2_OnDeActive(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_9_PROLOG
#define FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_12_CALLBACK_WRAPPERS \
	FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPoolableActor>();

#define FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoolable_Actor(); \
	friend struct Z_Construct_UClass_UPoolable_Actor_Statics; \
public: \
	DECLARE_CLASS(UPoolable_Actor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPoolable_Actor)


#define FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_36_ENHANCED_CONSTRUCTORS \
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


#define FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_33_PROLOG
#define FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_36_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPoolable_Actor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
