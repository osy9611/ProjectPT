// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Pool/ObjectPoolSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPoolSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UObjectPoolSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UObjectPoolSubsystem_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPoolable_Actor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UObjectPoolSubsystem
void UObjectPoolSubsystem::StaticRegisterNativesUObjectPoolSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectPoolSubsystem);
UClass* Z_Construct_UClass_UObjectPoolSubsystem_NoRegister()
{
	return UObjectPoolSubsystem::StaticClass();
}
struct Z_Construct_UClass_UObjectPoolSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Pool/ObjectPoolSubsystem.h" },
		{ "ModuleRelativePath", "Pool/ObjectPoolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPools_MetaData[] = {
		{ "ModuleRelativePath", "Pool/ObjectPoolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPools_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectPools_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectPools;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPoolSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_ObjectPools_ValueProp = { "ObjectPools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPoolable_Actor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_ObjectPools_Key_KeyProp = { "ObjectPools_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_ObjectPools = { "ObjectPools", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectPoolSubsystem, ObjectPools), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPools_MetaData), NewProp_ObjectPools_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectPoolSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_ObjectPools_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_ObjectPools_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_ObjectPools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectPoolSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectPoolSubsystem_Statics::ClassParams = {
	&UObjectPoolSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UObjectPoolSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectPoolSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectPoolSubsystem()
{
	if (!Z_Registration_Info_UClass_UObjectPoolSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectPoolSubsystem.OuterSingleton, Z_Construct_UClass_UObjectPoolSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectPoolSubsystem.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UObjectPoolSubsystem>()
{
	return UObjectPoolSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPoolSubsystem);
UObjectPoolSubsystem::~UObjectPoolSubsystem() {}
// End Class UObjectPoolSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectPoolSubsystem, UObjectPoolSubsystem::StaticClass, TEXT("UObjectPoolSubsystem"), &Z_Registration_Info_UClass_UObjectPoolSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectPoolSubsystem), 3702784699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_848124954(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_ObjectPoolSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
