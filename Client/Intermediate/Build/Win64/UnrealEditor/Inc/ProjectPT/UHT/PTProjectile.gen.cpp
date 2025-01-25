// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPT/Object/PTProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePTProjectile() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_APTProjectile();
PROJECTPT_API UClass* Z_Construct_UClass_APTProjectile_NoRegister();
PROJECTPT_API UClass* Z_Construct_UClass_UPoolableActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPT();
// End Cross Module References

// Begin Class APTProjectile Function CheckCollisionHit
struct Z_Construct_UFunction_APTProjectile_CheckCollisionHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Object/PTProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APTProjectile_CheckCollisionHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APTProjectile, nullptr, "CheckCollisionHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APTProjectile_CheckCollisionHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_APTProjectile_CheckCollisionHit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APTProjectile_CheckCollisionHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APTProjectile_CheckCollisionHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APTProjectile::execCheckCollisionHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckCollisionHit();
	P_NATIVE_END;
}
// End Class APTProjectile Function CheckCollisionHit

// Begin Class APTProjectile Function CheckOwnerActor
struct Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics
{
	struct PTProjectile_eventCheckOwnerActor_Parms
	{
		const AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Object/PTProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PTProjectile_eventCheckOwnerActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
void Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PTProjectile_eventCheckOwnerActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PTProjectile_eventCheckOwnerActor_Parms), &Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APTProjectile, nullptr, "CheckOwnerActor", nullptr, nullptr, Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::PTProjectile_eventCheckOwnerActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::PTProjectile_eventCheckOwnerActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APTProjectile_CheckOwnerActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APTProjectile_CheckOwnerActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APTProjectile::execCheckOwnerActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckOwnerActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class APTProjectile Function CheckOwnerActor

// Begin Class APTProjectile Function ReturnObject
struct Z_Construct_UFunction_APTProjectile_ReturnObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Object/PTProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APTProjectile_ReturnObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APTProjectile, nullptr, "ReturnObject", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APTProjectile_ReturnObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_APTProjectile_ReturnObject_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APTProjectile_ReturnObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APTProjectile_ReturnObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APTProjectile::execReturnObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnObject();
	P_NATIVE_END;
}
// End Class APTProjectile Function ReturnObject

// Begin Class APTProjectile
void APTProjectile::StaticRegisterNativesAPTProjectile()
{
	UClass* Class = APTProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckCollisionHit", &APTProjectile::execCheckCollisionHit },
		{ "CheckOwnerActor", &APTProjectile::execCheckOwnerActor },
		{ "ReturnObject", &APTProjectile::execReturnObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APTProjectile);
UClass* Z_Construct_UClass_APTProjectile_NoRegister()
{
	return APTProjectile::StaticClass();
}
struct Z_Construct_UClass_APTProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Object/PTProjectile.h" },
		{ "ModuleRelativePath", "Object/PTProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "CollisionRoot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Object/PTProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Object/PTProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsCollisionHit_MetaData[] = {
		{ "Category", "PT|IsCollisionHit" },
		{ "ModuleRelativePath", "Object/PTProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Object/PTProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static void NewProp_IsCollisionHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCollisionHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APTProjectile_CheckCollisionHit, "CheckCollisionHit" }, // 1281799466
		{ &Z_Construct_UFunction_APTProjectile_CheckOwnerActor, "CheckOwnerActor" }, // 1530976714
		{ &Z_Construct_UFunction_APTProjectile_ReturnObject, "ReturnObject" }, // 2521081561
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APTProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APTProjectile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APTProjectile, CollisionComponent), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APTProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APTProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
void Z_Construct_UClass_APTProjectile_Statics::NewProp_IsCollisionHit_SetBit(void* Obj)
{
	((APTProjectile*)Obj)->IsCollisionHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APTProjectile_Statics::NewProp_IsCollisionHit = { "IsCollisionHit", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APTProjectile), &Z_Construct_UClass_APTProjectile_Statics::NewProp_IsCollisionHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsCollisionHit_MetaData), NewProp_IsCollisionHit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APTProjectile_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APTProjectile, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APTProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APTProjectile_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APTProjectile_Statics::NewProp_ProjectileMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APTProjectile_Statics::NewProp_IsCollisionHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APTProjectile_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APTProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APTProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APTProjectile_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPoolableActor_NoRegister, (int32)VTABLE_OFFSET(APTProjectile, IPoolableActor), false },  // 3985566043
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APTProjectile_Statics::ClassParams = {
	&APTProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APTProjectile_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APTProjectile_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APTProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_APTProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APTProjectile()
{
	if (!Z_Registration_Info_UClass_APTProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APTProjectile.OuterSingleton, Z_Construct_UClass_APTProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APTProjectile.OuterSingleton;
}
template<> PROJECTPT_API UClass* StaticClass<APTProjectile>()
{
	return APTProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APTProjectile);
APTProjectile::~APTProjectile() {}
// End Class APTProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APTProjectile, APTProjectile::StaticClass, TEXT("APTProjectile"), &Z_Registration_Info_UClass_APTProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APTProjectile), 3639500085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTProjectile_h_3054298296(TEXT("/Script/ProjectPT"),
	Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Client_Source_ProjectPT_Object_PTProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
