// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionDynamicParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDynamicParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDynamicParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDynamicParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UMaterialExpressionDynamicParameter::StaticRegisterNativesUMaterialExpressionDynamicParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDynamicParameter_NoRegister()
	{
		return UMaterialExpressionDynamicParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ParameterIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParamNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParamNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDynamicParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDynamicParameter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParameterIndex_MetaData[] = {
		{ "Category", "MaterialExpressionDynamicParameter" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDynamicParameter.h" },
		{ "ToolTip", "The index of the dynamic parameter for use in tools that allow > 1" },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParameterIndex = { UE4CodeGen_Private::EPropertyClass::UInt32, "ParameterIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDynamicParameter, ParameterIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParameterIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParameterIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionDynamicParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDynamicParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDynamicParameter, DefaultValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_DefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParamNames_MetaData[] = {
		{ "Category", "MaterialExpressionDynamicParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDynamicParameter.h" },
		{ "ToolTip", "The names of the parameters.\nThese will show up in Cascade when editing a particle system\nthat uses the material it is in..." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParamNames = { UE4CodeGen_Private::EPropertyClass::Array, "ParamNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000041, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDynamicParameter, ParamNames), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParamNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParamNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParamNames_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ParamNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParameterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParamNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParamNames_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDynamicParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::ClassParams = {
		&UMaterialExpressionDynamicParameter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000820A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDynamicParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionDynamicParameter, 100387240);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionDynamicParameter(Z_Construct_UClass_UMaterialExpressionDynamicParameter, &UMaterialExpressionDynamicParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionDynamicParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDynamicParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
