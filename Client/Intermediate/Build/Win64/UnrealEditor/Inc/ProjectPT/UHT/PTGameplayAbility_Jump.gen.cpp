// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/AbilitySystem/Abilities/PTGameplayAbility_Jump.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTGameplayAbility_Jump() {}

// Begin Cross Module References
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_Jump();
PROJECTPT_API UClass* Z_Construct_UClass_UPTGameplayAbility_Jump_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTGameplayAbility_Jump Function JumpEnd
struct Z_Construct_UFunction_UPTGameplayAbility_Jump_JumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_Jump.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTGameplayAbility_Jump_JumpEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTGameplayAbility_Jump, nullptr, "JumpEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_Jump_JumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTGameplayAbility_Jump_JumpEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPTGameplayAbility_Jump_JumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTGameplayAbility_Jump_JumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTGameplayAbility_Jump::execJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JumpEnd();
	P_NATIVE_END;
}
// End Class UPTGameplayAbility_Jump Function JumpEnd

// Begin Class UPTGameplayAbility_Jump Function JumpStart
struct Z_Construct_UFunction_UPTGameplayAbility_Jump_JumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_Jump.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTGameplayAbility_Jump_JumpStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTGameplayAbility_Jump, nullptr, "JumpStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTGameplayAbility_Jump_JumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTGameplayAbility_Jump_JumpStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPTGameplayAbility_Jump_JumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTGameplayAbility_Jump_JumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPTGameplayAbility_Jump::execJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JumpStart();
	P_NATIVE_END;
}
// End Class UPTGameplayAbility_Jump Function JumpStart

// Begin Class UPTGameplayAbility_Jump
void UPTGameplayAbility_Jump::StaticRegisterNativesUPTGameplayAbility_Jump()
{
	UClass* Class = UPTGameplayAbility_Jump::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "JumpEnd", &UPTGameplayAbility_Jump::execJumpEnd },
		{ "JumpStart", &UPTGameplayAbility_Jump::execJumpStart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTGameplayAbility_Jump);
UClass* Z_Construct_UClass_UPTGameplayAbility_Jump_NoRegister()
{
	return UPTGameplayAbility_Jump::StaticClass();
}
struct Z_Construct_UClass_UPTGameplayAbility_Jump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilities/PTGameplayAbility_Jump.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilities/PTGameplayAbility_Jump.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTGameplayAbility_Jump_JumpEnd, "JumpEnd" }, // 1785065412
		{ &Z_Construct_UFunction_UPTGameplayAbility_Jump_JumpStart, "JumpStart" }, // 1362898282
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTGameplayAbility_Jump>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTGameplayAbility_Jump_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPTGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Jump_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTGameplayAbility_Jump_Statics::ClassParams = {
	&UPTGameplayAbility_Jump::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTGameplayAbility_Jump_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTGameplayAbility_Jump_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTGameplayAbility_Jump()
{
	if (!Z_Registration_Info_UClass_UPTGameplayAbility_Jump.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTGameplayAbility_Jump.OuterSingleton, Z_Construct_UClass_UPTGameplayAbility_Jump_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTGameplayAbility_Jump.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTGameplayAbility_Jump>()
{
	return UPTGameplayAbility_Jump::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTGameplayAbility_Jump);
UPTGameplayAbility_Jump::~UPTGameplayAbility_Jump() {}
// End Class UPTGameplayAbility_Jump

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Jump_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTGameplayAbility_Jump, UPTGameplayAbility_Jump::StaticClass, TEXT("UPTGameplayAbility_Jump"), &Z_Registration_Info_UClass_UPTGameplayAbility_Jump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTGameplayAbility_Jump), 4173606189U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Jump_h_3866610828(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Jump_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_AbilitySystem_Abilities_PTGameplayAbility_Jump_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
