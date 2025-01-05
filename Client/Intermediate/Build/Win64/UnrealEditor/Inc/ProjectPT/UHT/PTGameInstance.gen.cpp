// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/System/PTGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTGameInstance() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameInstance();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameInstance();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTGameInstance
void UPTGameInstance::StaticRegisterNativesUPTGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTGameInstance);
UClass* Z_Construct_UClass_UPTGameInstance_NoRegister()
{
	return UPTGameInstance::StaticClass();
}
struct Z_Construct_UClass_UPTGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "System/PTGameInstance.h" },
		{ "ModuleRelativePath", "System/PTGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTGameInstance_Statics::ClassParams = {
	&UPTGameInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTGameInstance()
{
	if (!Z_Registration_Info_UClass_UPTGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTGameInstance.OuterSingleton, Z_Construct_UClass_UPTGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTGameInstance.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTGameInstance>()
{
	return UPTGameInstance::StaticClass();
}
UPTGameInstance::UPTGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTGameInstance);
UPTGameInstance::~UPTGameInstance() {}
// End Class UPTGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_System_PTGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTGameInstance, UPTGameInstance::StaticClass, TEXT("UPTGameInstance"), &Z_Registration_Info_UClass_UPTGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTGameInstance), 122949936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_System_PTGameInstance_h_969033292(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_System_PTGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_System_PTGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
