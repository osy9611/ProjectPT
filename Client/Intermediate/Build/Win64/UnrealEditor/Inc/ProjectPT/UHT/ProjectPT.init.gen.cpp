// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectPT_init() {}
	PROJECTPT_API UFunction* Z_Construct_UDelegateFunction_ProjectPT_OnChangeRedDot__DelegateSignature();
	PROJECTPT_API UFunction* Z_Construct_UDelegateFunction_ProjectPT_OnClickEvent__DelegateSignature();
	PROJECTPT_API UFunction* Z_Construct_UDelegateFunction_ProjectPT_OnInteractionChanged__DelegateSignature();
	PROJECTPT_API UFunction* Z_Construct_UDelegateFunction_ProjectPT_OnItemCellClickEvent__DelegateSignature();
	PROJECTPT_API UFunction* Z_Construct_UDelegateFunction_ProjectPT_OnItemCellDropEvent__DelegateSignature();
	PROJECTPT_API UFunction* Z_Construct_UDelegateFunction_ProjectPT_OnUpdateShop__DelegateSignature();
	PROJECTPT_API UFunction* Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectPT;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectPT()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectPT.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectPT_OnChangeRedDot__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectPT_OnClickEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectPT_OnInteractionChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectPT_OnItemCellClickEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectPT_OnItemCellDropEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectPT_OnUpdateShop__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectPT_TraceResultDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectPT",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCBFA21C4,
				0xCC3422E9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectPT.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectPT.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectPT(Z_Construct_UPackage__Script_ProjectPT, TEXT("/Script/ProjectPT"), Z_Registration_Info_UPackage__Script_ProjectPT, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCBFA21C4, 0xCC3422E9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
