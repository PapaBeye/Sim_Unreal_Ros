// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionLogarithm2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLogarithm2() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLogarithm2_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionLogarithm2();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionLogarithm2::StaticRegisterNativesUMaterialExpressionLogarithm2()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLogarithm2_NoRegister()
	{
		return UMaterialExpressionLogarithm2::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLogarithm2.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLogarithm2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLogarithm2.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::NewProp_X = { UE4CodeGen_Private::EPropertyClass::Struct, "X", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLogarithm2, X), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::NewProp_X_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::NewProp_X_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::NewProp_X,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLogarithm2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::ClassParams = {
		&UMaterialExpressionLogarithm2::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000820A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionLogarithm2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionLogarithm2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionLogarithm2, 2199798464);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionLogarithm2(Z_Construct_UClass_UMaterialExpressionLogarithm2, &UMaterialExpressionLogarithm2::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionLogarithm2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLogarithm2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
