// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalTesting_init() {}
	FUNCTIONALTESTING_API UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestAISpawned__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/FunctionalTesting",
				PKG_CompiledIn | 0x00000080,
				0x91B63B27,
				0x953F5D97,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
