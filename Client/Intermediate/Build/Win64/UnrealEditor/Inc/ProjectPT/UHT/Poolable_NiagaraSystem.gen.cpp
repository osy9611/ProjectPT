// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Pool/Poolable_NiagaraSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoolable_NiagaraSystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPoolable_NiagaraSystem();
PROJECTPT_API UClass* Z_Construct_UClass_UPoolable_NiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPoolable_NiagaraSystem
void UPoolable_NiagaraSystem::StaticRegisterNativesUPoolable_NiagaraSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoolable_NiagaraSystem);
UClass* Z_Construct_UClass_UPoolable_NiagaraSystem_NoRegister()
{
	return UPoolable_NiagaraSystem::StaticClass();
}
struct Z_Construct_UClass_UPoolable_NiagaraSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Pool/Poolable_NiagaraSystem.h" },
		{ "ModuleRelativePath", "Pool/Poolable_NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOwnerActor_MetaData[] = {
		{ "ModuleRelativePath", "Pool/Poolable_NiagaraSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pool/Poolable_NiagaraSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnOwnerActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoolable_NiagaraSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::NewProp_SpawnOwnerActor = { "SpawnOwnerActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolable_NiagaraSystem, SpawnOwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnOwnerActor_MetaData), NewProp_SpawnOwnerActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::NewProp_ObjectPool_Inner = { "ObjectPool", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::NewProp_ObjectPool = { "ObjectPool", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolable_NiagaraSystem, ObjectPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPool_MetaData), NewProp_ObjectPool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::NewProp_SpawnOwnerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::NewProp_ObjectPool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::NewProp_ObjectPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::ClassParams = {
	&UPoolable_NiagaraSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoolable_NiagaraSystem()
{
	if (!Z_Registration_Info_UClass_UPoolable_NiagaraSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolable_NiagaraSystem.OuterSingleton, Z_Construct_UClass_UPoolable_NiagaraSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoolable_NiagaraSystem.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPoolable_NiagaraSystem>()
{
	return UPoolable_NiagaraSystem::StaticClass();
}
UPoolable_NiagaraSystem::UPoolable_NiagaraSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolable_NiagaraSystem);
UPoolable_NiagaraSystem::~UPoolable_NiagaraSystem() {}
// End Class UPoolable_NiagaraSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_Poolable_NiagaraSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoolable_NiagaraSystem, UPoolable_NiagaraSystem::StaticClass, TEXT("UPoolable_NiagaraSystem"), &Z_Registration_Info_UClass_UPoolable_NiagaraSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolable_NiagaraSystem), 513558550U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_Poolable_NiagaraSystem_h_350599836(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_Poolable_NiagaraSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_Poolable_NiagaraSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
