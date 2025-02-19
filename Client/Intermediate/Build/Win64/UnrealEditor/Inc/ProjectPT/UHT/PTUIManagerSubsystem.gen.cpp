// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/UI/PTUIManagerSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTUIManagerSubsystem() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UUIManagerSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UPTUIManagerSubsystem();
PROJECTPT_API UClass* Z_Construct_UClass_UPTUIManagerSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTUIManagerSubsystem
void UPTUIManagerSubsystem::StaticRegisterNativesUPTUIManagerSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTUIManagerSubsystem);
UClass* Z_Construct_UClass_UPTUIManagerSubsystem_NoRegister()
{
	return UPTUIManagerSubsystem::StaticClass();
}
struct Z_Construct_UClass_UPTUIManagerSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PTUIManagerSubsystem.h" },
		{ "ModuleRelativePath", "UI/PTUIManagerSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTUIManagerSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTUIManagerSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUIManagerSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTUIManagerSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTUIManagerSubsystem_Statics::ClassParams = {
	&UPTUIManagerSubsystem::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTUIManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTUIManagerSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTUIManagerSubsystem()
{
	if (!Z_Registration_Info_UClass_UPTUIManagerSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTUIManagerSubsystem.OuterSingleton, Z_Construct_UClass_UPTUIManagerSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTUIManagerSubsystem.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTUIManagerSubsystem>()
{
	return UPTUIManagerSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTUIManagerSubsystem);
UPTUIManagerSubsystem::~UPTUIManagerSubsystem() {}
// End Class UPTUIManagerSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTUIManagerSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTUIManagerSubsystem, UPTUIManagerSubsystem::StaticClass, TEXT("UPTUIManagerSubsystem"), &Z_Registration_Info_UClass_UPTUIManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTUIManagerSubsystem), 3119788489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTUIManagerSubsystem_h_1751535635(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTUIManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_UI_PTUIManagerSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
