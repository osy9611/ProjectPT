// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Animation/PTAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAnimInstance();
PROJECTPT_API UClass* Z_Construct_UClass_UPTAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class UPTAnimInstance Function CallEventDeath
static FName NAME_UPTAnimInstance_CallEventDeath = FName(TEXT("CallEventDeath"));
void UPTAnimInstance::CallEventDeath()
{
	ProcessEvent(FindFunctionChecked(NAME_UPTAnimInstance_CallEventDeath),NULL);
}
struct Z_Construct_UFunction_UPTAnimInstance_CallEventDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/PTAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTAnimInstance_CallEventDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTAnimInstance, nullptr, "CallEventDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAnimInstance_CallEventDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTAnimInstance_CallEventDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPTAnimInstance_CallEventDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTAnimInstance_CallEventDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPTAnimInstance Function CallEventDeath

// Begin Class UPTAnimInstance Function CallEventZoom
struct PTAnimInstance_eventCallEventZoom_Parms
{
	bool IsZoom;
};
static FName NAME_UPTAnimInstance_CallEventZoom = FName(TEXT("CallEventZoom"));
void UPTAnimInstance::CallEventZoom(bool IsZoom)
{
	PTAnimInstance_eventCallEventZoom_Parms Parms;
	Parms.IsZoom=IsZoom ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UPTAnimInstance_CallEventZoom),&Parms);
}
struct Z_Construct_UFunction_UPTAnimInstance_CallEventZoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/PTAnimInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsZoom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsZoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPTAnimInstance_CallEventZoom_Statics::NewProp_IsZoom_SetBit(void* Obj)
{
	((PTAnimInstance_eventCallEventZoom_Parms*)Obj)->IsZoom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPTAnimInstance_CallEventZoom_Statics::NewProp_IsZoom = { "IsZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PTAnimInstance_eventCallEventZoom_Parms), &Z_Construct_UFunction_UPTAnimInstance_CallEventZoom_Statics::NewProp_IsZoom_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPTAnimInstance_CallEventZoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPTAnimInstance_CallEventZoom_Statics::NewProp_IsZoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAnimInstance_CallEventZoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPTAnimInstance_CallEventZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPTAnimInstance, nullptr, "CallEventZoom", nullptr, nullptr, Z_Construct_UFunction_UPTAnimInstance_CallEventZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAnimInstance_CallEventZoom_Statics::PropPointers), sizeof(PTAnimInstance_eventCallEventZoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPTAnimInstance_CallEventZoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPTAnimInstance_CallEventZoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(PTAnimInstance_eventCallEventZoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPTAnimInstance_CallEventZoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPTAnimInstance_CallEventZoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UPTAnimInstance Function CallEventZoom

// Begin Class UPTAnimInstance
void UPTAnimInstance::StaticRegisterNativesUPTAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPTAnimInstance);
UClass* Z_Construct_UClass_UPTAnimInstance_NoRegister()
{
	return UPTAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UPTAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/PTAnimInstance.h" },
		{ "ModuleRelativePath", "Animation/PTAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPTAnimInstance_CallEventDeath, "CallEventDeath" }, // 2344783970
		{ &Z_Construct_UFunction_UPTAnimInstance_CallEventZoom, "CallEventZoom" }, // 3963081572
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPTAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPTAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPTAnimInstance_Statics::ClassParams = {
	&UPTAnimInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPTAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPTAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPTAnimInstance()
{
	if (!Z_Registration_Info_UClass_UPTAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPTAnimInstance.OuterSingleton, Z_Construct_UClass_UPTAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPTAnimInstance.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<UPTAnimInstance>()
{
	return UPTAnimInstance::StaticClass();
}
UPTAnimInstance::UPTAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPTAnimInstance);
UPTAnimInstance::~UPTAnimInstance() {}
// End Class UPTAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPTAnimInstance, UPTAnimInstance::StaticClass, TEXT("UPTAnimInstance"), &Z_Registration_Info_UClass_UPTAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPTAnimInstance), 1445124370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_2492129129(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Animation_PTAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
