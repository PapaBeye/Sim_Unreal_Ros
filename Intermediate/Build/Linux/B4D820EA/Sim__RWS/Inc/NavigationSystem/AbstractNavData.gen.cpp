// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/AbstractNavData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbstractNavData() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_AAbstractNavData_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_AAbstractNavData();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void AAbstractNavData::StaticRegisterNativesAAbstractNavData()
	{
	}
	UClass* Z_Construct_UClass_AAbstractNavData_NoRegister()
	{
		return AAbstractNavData::StaticClass();
	}
	struct Z_Construct_UClass_AAbstractNavData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAbstractNavData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavigationData,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbstractNavData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbstractNavData.h" },
		{ "ModuleRelativePath", "Public/AbstractNavData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAbstractNavData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbstractNavData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAbstractNavData_Statics::ClassParams = {
		&AAbstractNavData::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A6u,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAbstractNavData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAbstractNavData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAbstractNavData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAbstractNavData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAbstractNavData, 3322026384);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAbstractNavData(Z_Construct_UClass_AAbstractNavData, &AAbstractNavData::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("AAbstractNavData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAbstractNavData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
