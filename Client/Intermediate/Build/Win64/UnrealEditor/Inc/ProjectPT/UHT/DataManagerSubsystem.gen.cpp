// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Table/DataManagerSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataManagerSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UDataManagerSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UDataManagerSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UDataManagerSubsystem
void UDataManagerSubsystem::StaticRegisterNativesUDataManagerSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataManagerSubsystem);
UClass* Z_Construct_UClass_UDataManagerSubsystem_NoRegister()
{
	return UDataManagerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UDataManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Table/DataManagerSubsystem.h" },
		{ "ModuleRelativePath", "Table/DataManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataManagerSubsystem_Statics::ClassParams = {
	&UDataManagerSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataManagerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_UDataManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataManagerSubsystem.OuterSingleton, Z_Construct_UClass_UDataManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataManagerSubsystem.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UDataManagerSubsystem>()
{
	return UDataManagerSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataManagerSubsystem);
UDataManagerSubsystem::~UDataManagerSubsystem() {}
// End Class UDataManagerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_DataManagerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataManagerSubsystem, UDataManagerSubsystem::StaticClass, TEXT("UDataManagerSubsystem"), &Z_Registration_Info_UClass_UDataManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataManagerSubsystem), 3601463240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_DataManagerSubsystem_h_289369356(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_DataManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Table_DataManagerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
