// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Object/PTPlayerStart.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTPlayerStart() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PROJECTPT_API UClass* Z_Construct_UClass_APTPlayerStart();
PROJECTPT_API UClass* Z_Construct_UClass_APTPlayerStart_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class APTPlayerStart
void APTPlayerStart::StaticRegisterNativesAPTPlayerStart()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APTPlayerStart);
UClass* Z_Construct_UClass_APTPlayerStart_NoRegister()
{
	return APTPlayerStart::StaticClass();
}
struct Z_Construct_UClass_APTPlayerStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "Object/PTPlayerStart.h" },
		{ "ModuleRelativePath", "Object/PTPlayerStart.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTag_MetaData[] = {
		{ "Category", "PT|SpawnTag" },
		{ "ModuleRelativePath", "Object/PTPlayerStart.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APTPlayerStart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APTPlayerStart_Statics::NewProp_SpawnTag = { "SpawnTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APTPlayerStart, SpawnTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTag_MetaData), NewProp_SpawnTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APTPlayerStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APTPlayerStart_Statics::NewProp_SpawnTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTPlayerStart_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APTPlayerStart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerStart,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTPlayerStart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APTPlayerStart_Statics::ClassParams = {
	&APTPlayerStart::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APTPlayerStart_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APTPlayerStart_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APTPlayerStart_Statics::Class_MetaDataParams), Z_Construct_UClass_APTPlayerStart_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APTPlayerStart()
{
	if (!Z_Registration_Info_UClass_APTPlayerStart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APTPlayerStart.OuterSingleton, Z_Construct_UClass_APTPlayerStart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APTPlayerStart.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<APTPlayerStart>()
{
	return APTPlayerStart::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APTPlayerStart);
APTPlayerStart::~APTPlayerStart() {}
// End Class APTPlayerStart

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTPlayerStart_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APTPlayerStart, APTPlayerStart::StaticClass, TEXT("APTPlayerStart"), &Z_Registration_Info_UClass_APTPlayerStart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APTPlayerStart), 172203242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTPlayerStart_h_1945990643(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTPlayerStart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTPlayerStart_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
