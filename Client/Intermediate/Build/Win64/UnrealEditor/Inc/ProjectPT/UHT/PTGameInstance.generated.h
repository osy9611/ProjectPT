// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/PTGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTGameInstance_generated_h
#error "PTGameInstance.generated.h already included, missing '#pragma once' in PTGameInstance.h"
#endif
#define PROJECTPT_PTGameInstance_generated_h

#define FID_Client_Source_ProjectPT_System_PTGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTGameInstance(); \
	friend struct Z_Construct_UClass_UPTGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPTGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTGameInstance)


#define FID_Client_Source_ProjectPT_System_PTGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPTGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTGameInstance(UPTGameInstance&&); \
	UPTGameInstance(const UPTGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTGameInstance) \
	NO_API virtual ~UPTGameInstance();


#define FID_Client_Source_ProjectPT_System_PTGameInstance_h_12_PROLOG
#define FID_Client_Source_ProjectPT_System_PTGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_System_PTGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_System_PTGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_System_PTGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
