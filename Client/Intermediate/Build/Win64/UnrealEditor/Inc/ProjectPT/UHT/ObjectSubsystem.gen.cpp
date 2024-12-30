// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Object/ObjectSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UObjectSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UObjectSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UObjectSubsystem
void UObjectSubsystem::StaticRegisterNativesUObjectSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectSubsystem);
UClass* Z_Construct_UClass_UObjectSubsystem_NoRegister()
{
	return UObjectSubsystem::StaticClass();
}
struct Z_Construct_UClass_UObjectSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Object/ObjectSubsystem.h" },
		{ "ModuleRelativePath", "Object/ObjectSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UObjectSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectSubsystem_Statics::ClassParams = {
	&UObjectSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectSubsystem()
{
	if (!Z_Registration_Info_UClass_UObjectSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectSubsystem.OuterSingleton, Z_Construct_UClass_UObjectSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectSubsystem.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UObjectSubsystem>()
{
	return UObjectSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectSubsystem);
UObjectSubsystem::~UObjectSubsystem() {}
// End Class UObjectSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_ObjectSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectSubsystem, UObjectSubsystem::StaticClass, TEXT("UObjectSubsystem"), &Z_Registration_Info_UClass_UObjectSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectSubsystem), 1576314557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_ObjectSubsystem_h_3836782842(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_ObjectSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_ObjectSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
