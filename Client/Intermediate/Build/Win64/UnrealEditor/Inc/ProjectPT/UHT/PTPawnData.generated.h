// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/PTPawnData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_PTPawnData_generated_h
#error "PTPawnData.generated.h already included, missing '#pragma once' in PTPawnData.h"
#endif
#define PROJECTPT_PTPawnData_generated_h

#define FID_Client_Source_ProjectPT_Character_PTPawnData_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPTPawnData(); \
	friend struct Z_Construct_UClass_UPTPawnData_Statics; \
public: \
	DECLARE_CLASS(UPTPawnData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(UPTPawnData)


#define FID_Client_Source_ProjectPT_Character_PTPawnData_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPTPawnData(UPTPawnData&&); \
	UPTPawnData(const UPTPawnData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPTPawnData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPTPawnData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPTPawnData) \
	NO_API virtual ~UPTPawnData();


#define FID_Client_Source_ProjectPT_Character_PTPawnData_h_15_PROLOG
#define FID_Client_Source_ProjectPT_Character_PTPawnData_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Character_PTPawnData_h_18_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Character_PTPawnData_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class UPTPawnData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Character_PTPawnData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
