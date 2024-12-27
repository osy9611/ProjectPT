// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Object/Projectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectile() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_APTProjectile();
PROJECTPT_API UClass* Z_Construct_UClass_APTProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class APTProjectile
void APTProjectile::StaticRegisterNativesAPTProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APTProjectile);
UClass* Z_Construct_UClass_APTProjectile_NoRegister()
{
	return APTProjectile::StaticClass();
}
struct Z_Construct_UClass_APTProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Object/Projectile.h" },
		{ "ModuleRelativePath", "Object/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "CollisionRoot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Object/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Object/Projectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Object/Projectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APTProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APTProjectile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APTProjectile, CollisionComponent), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APTProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APTProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APTProjectile_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APTProjectile, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APTProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APTProjectile_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APTProjectile_Statics::NewProp_ProjectileMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APTProjectile_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APTProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APTProjectile_Statics::ClassParams = {
	&APTProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APTProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APTProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APTProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_APTProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APTProjectile()
{
	if (!Z_Registration_Info_UClass_APTProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APTProjectile.OuterSingleton, Z_Construct_UClass_APTProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APTProjectile.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<APTProjectile>()
{
	return APTProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APTProjectile);
APTProjectile::~APTProjectile() {}
// End Class APTProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_Projectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APTProjectile, APTProjectile::StaticClass, TEXT("APTProjectile"), &Z_Registration_Info_UClass_APTProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APTProjectile), 1743009231U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_Projectile_h_1194757947(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_Projectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_Projectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
