// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionNormalize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionNormalize() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNormalize_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNormalize();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionNormalize::StaticRegisterNativesUMaterialExpressionNormalize()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionNormalize_NoRegister()
	{
		return UMaterialExpressionNormalize::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionNormalize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionNormalize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNormalize_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionNormalize.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNormalize.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionNormalize_Statics::NewProp_VectorInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNormalize.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNormalize_Statics::NewProp_VectorInput = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionNormalize, VectorInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNormalize_Statics::NewProp_VectorInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNormalize_Statics::NewProp_VectorInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionNormalize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNormalize_Statics::NewProp_VectorInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionNormalize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNormalize>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNormalize_Statics::ClassParams = {
		&UMaterialExpressionNormalize::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionNormalize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNormalize_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionNormalize_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNormalize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionNormalize()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionNormalize_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionNormalize, 3445900394);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionNormalize(Z_Construct_UClass_UMaterialExpressionNormalize, &UMaterialExpressionNormalize::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionNormalize"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNormalize);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
