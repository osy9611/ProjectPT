// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/Abilities/PTGameplayAbility_Projectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTGameplayAbility_Projectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_Projectile();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_Projectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTGameplayAbility_Projectile Function CreateObject
struct Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics
{
	struct PTGameplayAbility_Projectile_eventCreateObject_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_Projectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTGameplayAbility_Projectile_eventCreateObject_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTGameplayAbility_Projectile, nullptr, "CreateObject", nullptr, nullptr, Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::PTGameplayAbility_Projectile_eventCreateObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::PTGameplayAbility_Projectile_eventCreateObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTGameplayAbility_Projectile::execCreateObject)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateObject(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UPTGameplayAbility_Projectile Function CreateObject

// Begin Class UPTGameplayAbility_Projectile
void UPTGameplayAbility_Projectile::StaticRegisterNativesUPTGameplayAbility_Projectile()
{
	UClass* Class = UPTGameplayAbility_Projectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateObject", &UPTGameplayAbility_Projectile::execCreateObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTGameplayAbility_Projectile);
UClass* Z_Construct_UClass_UPTGameplayAbility_Projectile_NoRegister()
{
	return UPTGameplayAbility_Projectile::StaticClass();
}
struct Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/PTGameplayAbility_Projectile.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_Projectile.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTGameplayAbility_Projectile_CreateObject, "CreateObject" }, // 3892338799
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTGameplayAbility_Projectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPTGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::ClassParams = {
	&UPTGameplayAbility_Projectile::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTGameplayAbility_Projectile()
{
	if (!Z_Registration_Info_UClass_UPTGameplayAbility_Projectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTGameplayAbility_Projectile.OuterSingleton, Z_Construct_UClass_UPTGameplayAbility_Projectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTGameplayAbility_Projectile.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTGameplayAbility_Projectile>()
{
	return UPTGameplayAbility_Projectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTGameplayAbility_Projectile);
UPTGameplayAbility_Projectile::~UPTGameplayAbility_Projectile() {}
// End Class UPTGameplayAbility_Projectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTGameplayAbility_Projectile, UPTGameplayAbility_Projectile::StaticClass, TEXT("UPTGameplayAbility_Projectile"), &Z_Registration_Info_UClass_UPTGameplayAbility_Projectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTGameplayAbility_Projectile), 4181630826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_1531909406(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Projectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
