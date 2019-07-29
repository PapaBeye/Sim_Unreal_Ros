// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionDesaturation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDesaturation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDesaturation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDesaturation();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionDesaturation::StaticRegisterNativesUMaterialExpressionDesaturation()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDesaturation_NoRegister()
	{
		return UMaterialExpressionDesaturation::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDesaturation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LuminanceFactors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LuminanceFactors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Fraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDesaturation.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDesaturation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_LuminanceFactors_MetaData[] = {
		{ "Category", "MaterialExpressionDesaturation" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDesaturation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_LuminanceFactors = { UE4CodeGen_Private::EPropertyClass::Struct, "LuminanceFactors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDesaturation, LuminanceFactors), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_LuminanceFactors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_LuminanceFactors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Fraction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDesaturation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Fraction = { UE4CodeGen_Private::EPropertyClass::Struct, "Fraction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDesaturation, Fraction), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Fraction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Fraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDesaturation.h" },
		{ "ToolTip", "Outputs: Lerp(Input,dot(Input,LuminanceFactors)),Fraction)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDesaturation, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Input_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Input_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_LuminanceFactors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Fraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::NewProp_Input,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDesaturation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::ClassParams = {
		&UMaterialExpressionDesaturation::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000020A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDesaturation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionDesaturation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionDesaturation, 761000985);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionDesaturation(Z_Construct_UClass_UMaterialExpressionDesaturation, &UMaterialExpressionDesaturation::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionDesaturation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDesaturation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
