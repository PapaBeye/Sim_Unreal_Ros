// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sim__RWS/MyROSIntegrationGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyROSIntegrationGameInstance() {}
// Cross Module References
	SIM__RWS_API UClass* Z_Construct_UClass_UMyROSIntegrationGameInstance_NoRegister();
	SIM__RWS_API UClass* Z_Construct_UClass_UMyROSIntegrationGameInstance();
	ROSINTEGRATION_API UClass* Z_Construct_UClass_UROSIntegrationGameInstance();
	UPackage* Z_Construct_UPackage__Script_Sim__RWS();
// End Cross Module References
	void UMyROSIntegrationGameInstance::StaticRegisterNativesUMyROSIntegrationGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UMyROSIntegrationGameInstance_NoRegister()
	{
		return UMyROSIntegrationGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMyROSIntegrationGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyROSIntegrationGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UROSIntegrationGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Sim__RWS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyROSIntegrationGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyROSIntegrationGameInstance.h" },
		{ "ModuleRelativePath", "MyROSIntegrationGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyROSIntegrationGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyROSIntegrationGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyROSIntegrationGameInstance_Statics::ClassParams = {
		&UMyROSIntegrationGameInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMyROSIntegrationGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyROSIntegrationGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyROSIntegrationGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyROSIntegrationGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyROSIntegrationGameInstance, 806269312);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyROSIntegrationGameInstance(Z_Construct_UClass_UMyROSIntegrationGameInstance, &UMyROSIntegrationGameInstance::StaticClass, TEXT("/Script/Sim__RWS"), TEXT("UMyROSIntegrationGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyROSIntegrationGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
