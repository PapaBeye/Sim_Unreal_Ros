// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionArcsine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionArcsine() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArcsine_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionArcsine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionArcsine::StaticRegisterNativesUMaterialExpressionArcsine()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionArcsine_NoRegister()
	{
		return UMaterialExpressionArcsine::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionArcsine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionArcsine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionArcsine_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionArcsine.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionArcsine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionArcsine_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionArcsine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionArcsine_Statics::NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionArcsine, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionArcsine_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionArcsine_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionArcsine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionArcsine_Statics::NewProp_Input,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionArcsine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionArcsine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionArcsine_Statics::ClassParams = {
		&UMaterialExpressionArcsine::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000820A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionArcsine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionArcsine_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionArcsine_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionArcsine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionArcsine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionArcsine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionArcsine, 2515279851);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionArcsine(Z_Construct_UClass_UMaterialExpressionArcsine, &UMaterialExpressionArcsine::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionArcsine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionArcsine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
