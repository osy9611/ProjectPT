// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Object/PTObjectSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTObjectSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UPTObjectSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UPTObjectSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTObjectSubsystem
void UPTObjectSubsystem::StaticRegisterNativesUPTObjectSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTObjectSubsystem);
UClass* Z_Construct_UClass_UPTObjectSubsystem_NoRegister()
{
	return UPTObjectSubsystem::StaticClass();
}
struct Z_Construct_UClass_UPTObjectSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Object/PTObjectSubsystem.h" },
		{ "ModuleRelativePath", "Object/PTObjectSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectDatas_MetaData[] = {
		{ "ModuleRelativePath", "Object/PTObjectSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectDatas_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectDatas_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectDatas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTObjectSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_ObjectDatas_ValueProp = { "ObjectDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_ObjectDatas_Key_KeyProp = { "ObjectDatas_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_ObjectDatas = { "ObjectDatas", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPTObjectSubsystem, ObjectDatas), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectDatas_MetaData), NewProp_ObjectDatas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPTObjectSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_ObjectDatas_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_ObjectDatas_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPTObjectSubsystem_Statics::NewProp_ObjectDatas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTObjectSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPTObjectSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTObjectSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTObjectSubsystem_Statics::ClassParams = {
	&UPTObjectSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPTObjectSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPTObjectSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTObjectSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTObjectSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTObjectSubsystem()
{
	if (!Z_Registration_Info_UClass_UPTObjectSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTObjectSubsystem.OuterSingleton, Z_Construct_UClass_UPTObjectSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTObjectSubsystem.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTObjectSubsystem>()
{
	return UPTObjectSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTObjectSubsystem);
UPTObjectSubsystem::~UPTObjectSubsystem() {}
// End Class UPTObjectSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTObjectSubsystem, UPTObjectSubsystem::StaticClass, TEXT("UPTObjectSubsystem"), &Z_Registration_Info_UClass_UPTObjectSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTObjectSubsystem), 1281734783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_2885660547(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTObjectSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
