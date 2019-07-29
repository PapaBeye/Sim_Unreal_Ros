// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/Materials/MaterialExpressionLandscapeLayerSample.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerSample() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMaterialExpressionLandscapeLayerSample::StaticRegisterNativesUMaterialExpressionLandscapeLayerSample()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_NoRegister()
	{
		return UMaterialExpressionLandscapeLayerSample::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviewWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapeLayerSample.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSample.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSample.h" },
		{ "ToolTip", "GUID that should be unique within the material, this is used for parameter renaming." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerSample, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_PreviewWeight_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerWeight" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSample.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_PreviewWeight = { UE4CodeGen_Private::EPropertyClass::Float, "PreviewWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerSample, PreviewWeight), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_PreviewWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_PreviewWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerWeight" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSample.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerSample, ParameterName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_ParameterName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_ExpressionGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_PreviewWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::NewProp_ParameterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapeLayerSample>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::ClassParams = {
		&UMaterialExpressionLandscapeLayerSample::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001020A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionLandscapeLayerSample, 3237184051);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionLandscapeLayerSample(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSample, &UMaterialExpressionLandscapeLayerSample::StaticClass, TEXT("/Script/Landscape"), TEXT("UMaterialExpressionLandscapeLayerSample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeLayerSample);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
