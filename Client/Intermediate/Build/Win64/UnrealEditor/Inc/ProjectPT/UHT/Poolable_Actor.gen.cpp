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
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPoolable_Actor();
PROJECTPT_API UClass* Z_Construct_UClass_UPoolable_Actor_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPoolableActor();
PROJECTPT_API UClass* Z_Construct_UClass_UPoolableActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Interface UPoolableActor Function K2_OnActive
void IPoolableActor::K2_OnActive()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_K2_OnActive instead.");
}
static FName NAME_UPoolableActor_K2_OnActive = FName(TEXT("K2_OnActive"));
void IPoolableActor::Execute_K2_OnActive(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPoolableActor::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPoolableActor_K2_OnActive);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UPoolableActor_K2_OnActive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pool/Poolable_Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolableActor_K2_OnActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoolableActor, nullptr, "K2_OnActive", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActor_K2_OnActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolableActor_K2_OnActive_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPoolableActor_K2_OnActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolableActor_K2_OnActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UPoolableActor Function K2_OnActive

// Begin Interface UPoolableActor Function K2_OnDeActive
void IPoolableActor::K2_OnDeActive()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_K2_OnDeActive instead.");
}
static FName NAME_UPoolableActor_K2_OnDeActive = FName(TEXT("K2_OnDeActive"));
void IPoolableActor::Execute_K2_OnDeActive(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPoolableActor::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPoolableActor_K2_OnDeActive);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UPoolableActor_K2_OnDeActive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pool/Poolable_Actor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolableActor_K2_OnDeActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPoolableActor, nullptr, "K2_OnDeActive", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActor_K2_OnDeActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolableActor_K2_OnDeActive_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPoolableActor_K2_OnDeActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolableActor_K2_OnDeActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UPoolableActor Function K2_OnDeActive

// Begin Interface UPoolableActor
void UPoolableActor::StaticRegisterNativesUPoolableActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoolableActor);
UClass* Z_Construct_UClass_UPoolableActor_NoRegister()
{
	return UPoolableActor::StaticClass();
}
struct Z_Construct_UClass_UPoolableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pool/Poolable_Actor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoolableActor_K2_OnActive, "K2_OnActive" }, // 386151642
		{ &Z_Construct_UFunction_UPoolableActor_K2_OnDeActive, "K2_OnDeActive" }, // 3959634826
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPoolableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPoolableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolableActor_Statics::ClassParams = {
	&UPoolableActor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoolableActor()
{
	if (!Z_Registration_Info_UClass_UPoolableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolableActor.OuterSingleton, Z_Construct_UClass_UPoolableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoolableActor.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPoolableActor>()
{
	return UPoolableActor::StaticClass();
}
UPoolableActor::UPoolableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolableActor);
UPoolableActor::~UPoolableActor() {}
// End Interface UPoolableActor

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
		{ Z_Construct_UClass_UPoolableActor, UPoolableActor::StaticClass, TEXT("UPoolableActor"), &Z_Registration_Info_UClass_UPoolableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolableActor), 3985566043U) },
		{ Z_Construct_UClass_UPoolable_Actor, UPoolable_Actor::StaticClass, TEXT("UPoolable_Actor"), &Z_Registration_Info_UClass_UPoolable_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolable_Actor), 3821965332U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_2562636710(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Pool_Poolable_Actor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
