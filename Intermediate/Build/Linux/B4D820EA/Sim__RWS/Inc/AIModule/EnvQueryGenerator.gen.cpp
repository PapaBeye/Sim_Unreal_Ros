// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UEnvQueryGenerator::StaticRegisterNativesUEnvQueryGenerator()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_NoRegister()
	{
		return UEnvQueryGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSortTests_MetaData[];
#endif
		static void NewProp_bAutoSortTests_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSortTests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Statics::Class_MetaDataParams[] = {
		{ "Category", "Generators" },
		{ "IncludePath", "EnvironmentQuery/EnvQueryGenerator.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_bAutoSortTests_MetaData[] = {
		{ "Category", "Option" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryGenerator.h" },
		{ "ToolTip", "if set, tests will be automatically sorted for best performance before running query" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_bAutoSortTests_SetBit(void* Obj)
	{
		((UEnvQueryGenerator*)Obj)->bAutoSortTests = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_bAutoSortTests = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoSortTests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEnvQueryGenerator), &Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_bAutoSortTests_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_bAutoSortTests_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_bAutoSortTests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_ItemType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryGenerator.h" },
		{ "ToolTip", "type of generated items" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_ItemType = { UE4CodeGen_Private::EPropertyClass::Class, "ItemType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator, ItemType), Z_Construct_UClass_UEnvQueryItemType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_ItemType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_OptionName_MetaData[] = {
		{ "Category", "Option" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_OptionName = { UE4CodeGen_Private::EPropertyClass::Str, "OptionName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator, OptionName), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_OptionName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_OptionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_bAutoSortTests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Statics::NewProp_OptionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_Statics::ClassParams = {
		&UEnvQueryGenerator::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001010A1u,
		nullptr, 0,
		Z_Construct_UClass_UEnvQueryGenerator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryGenerator, 3477104466);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator(Z_Construct_UClass_UEnvQueryGenerator, &UEnvQueryGenerator::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
