// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionAdd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAdd() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAdd_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAdd();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionAdd::StaticRegisterNativesUMaterialExpressionAdd()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionAdd_NoRegister()
	{
		return UMaterialExpressionAdd::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionAdd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstB_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstA_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConstA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionAdd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAdd_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionAdd.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAdd.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_ConstB_MetaData[] = {
		{ "Category", "MaterialExpressionAdd" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAdd.h" },
		{ "OverridingInputProperty", "B" },
		{ "ToolTip", "only used if B is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_ConstB = { UE4CodeGen_Private::EPropertyClass::Float, "ConstB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionAdd, ConstB), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_ConstB_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_ConstB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_ConstA_MetaData[] = {
		{ "Category", "MaterialExpressionAdd" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAdd.h" },
		{ "OverridingInputProperty", "A" },
		{ "ToolTip", "only used if A is not hooked up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_ConstA = { UE4CodeGen_Private::EPropertyClass::Float, "ConstA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionAdd, ConstA), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_ConstA_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_ConstA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAdd.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstB' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionAdd, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAdd.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstA' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionAdd, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_ConstB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_ConstA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAdd_Statics::NewProp_A,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionAdd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionAdd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionAdd_Statics::ClassParams = {
		&UMaterialExpressionAdd::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionAdd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAdd_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAdd_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAdd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionAdd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionAdd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionAdd, 2280662108);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionAdd(Z_Construct_UClass_UMaterialExpressionAdd, &UMaterialExpressionAdd::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionAdd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAdd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
