// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Object/Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTPT_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define PROJECTPT_Projectile_generated_h

#define FID_Client_Source_ProjectPT_Object_Projectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPTProjectile(); \
	friend struct Z_Construct_UClass_APTProjectile_Statics; \
public: \
	DECLARE_CLASS(APTProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectPT"), NO_API) \
	DECLARE_SERIALIZER(APTProjectile)


#define FID_Client_Source_ProjectPT_Object_Projectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APTProjectile(APTProjectile&&); \
	APTProjectile(const APTProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APTProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APTProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APTProjectile) \
	NO_API virtual ~APTProjectile();


#define FID_Client_Source_ProjectPT_Object_Projectile_h_11_PROLOG
#define FID_Client_Source_ProjectPT_Object_Projectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Client_Source_ProjectPT_Object_Projectile_h_14_INCLASS_NO_PURE_DECLS \
	FID_Client_Source_ProjectPT_Object_Projectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTPT_API UClass* StaticClass<class APTProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Client_Source_ProjectPT_Object_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
