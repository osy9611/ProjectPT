// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Pool/Poolable_Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoolable_Actor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPoolable_Actor();
PROJECTPT_API UClass* Z_Construct_UClass_UPoolable_Actor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPoolable_Actor
void UPoolable_Actor::StaticRegisterNativesUPoolable_Actor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoolable_Actor);
UClass* Z_Construct_UClass_UPoolable_Actor_NoRegister()
{
	return UPoolable_Actor::StaticClass();
}
struct Z_Construct_UClass_UPoolable_Actor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Pool/Poolable_Actor.h" },
		{ "ModuleRelativePath", "Pool/Poolable_Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalActor_MetaData[] = {
		{ "ModuleRelativePath", "Pool/Poolable_Actor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPool_MetaData[] = {
		{ "ModuleRelativePath", "Pool/Poolable_Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_OriginalActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoolable_Actor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPoolable_Actor_Statics::NewProp_OriginalActor = { "OriginalActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolable_Actor, OriginalActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalActor_MetaData), NewProp_OriginalActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoolable_Actor_Statics::NewProp_ObjectPool_Inner = { "ObjectPool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoolable_Actor_Statics::NewProp_ObjectPool = { "ObjectPool", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolable_Actor, ObjectPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPool_MetaData), NewProp_ObjectPool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoolable_Actor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolable_Actor_Statics::NewProp_OriginalActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolable_Actor_Statics::NewProp_ObjectPool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolable_Actor_Statics::NewProp_ObjectPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolable_Actor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPoolable_Actor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolable_Actor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolable_Actor_Statics::ClassParams = {
	&UPoolable_Actor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPoolable_Actor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPoolable_Actor_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolable_Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolable_Actor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoolable_Actor()
{
	if (!Z_Registration_Info_UClass_UPoolable_Actor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolable_Actor.OuterSingleton, Z_Construct_UClass_UPoolable_Actor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoolable_Actor.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPoolable_Actor>()
{
	return UPoolable_Actor::StaticClass();
}
UPoolable_Actor::UPoolable_Actor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolable_Actor);
UPoolable_Actor::~UPoolable_Actor() {}
// End Class UPoolable_Actor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoolable_Actor, UPoolable_Actor::StaticClass, TEXT("UPoolable_Actor"), &Z_Registration_Info_UClass_UPoolable_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolable_Actor), 3821965332U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_1196731710(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
