// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestRos/WAROSIntegrationGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWAROSIntegrationGameInstance() {}
// Cross Module References
	TESTROS_API UClass* Z_Construct_UClass_UWAROSIntegrationGameInstance_NoRegister();
	TESTROS_API UClass* Z_Construct_UClass_UWAROSIntegrationGameInstance();
	ROSINTEGRATION_API UClass* Z_Construct_UClass_UROSIntegrationGameInstance();
	UPackage* Z_Construct_UPackage__Script_TestRos();
// End Cross Module References
	void UWAROSIntegrationGameInstance::StaticRegisterNativesUWAROSIntegrationGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UWAROSIntegrationGameInstance_NoRegister()
	{
		return UWAROSIntegrationGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UWAROSIntegrationGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWAROSIntegrationGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UROSIntegrationGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TestRos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWAROSIntegrationGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WAROSIntegrationGameInstance.h" },
		{ "ModuleRelativePath", "WAROSIntegrationGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWAROSIntegrationGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWAROSIntegrationGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWAROSIntegrationGameInstance_Statics::ClassParams = {
		&UWAROSIntegrationGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWAROSIntegrationGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWAROSIntegrationGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWAROSIntegrationGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWAROSIntegrationGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWAROSIntegrationGameInstance, 3574846763);
	template<> TESTROS_API UClass* StaticClass<UWAROSIntegrationGameInstance>()
	{
		return UWAROSIntegrationGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWAROSIntegrationGameInstance(Z_Construct_UClass_UWAROSIntegrationGameInstance, &UWAROSIntegrationGameInstance::StaticClass, TEXT("/Script/TestRos"), TEXT("UWAROSIntegrationGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWAROSIntegrationGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
