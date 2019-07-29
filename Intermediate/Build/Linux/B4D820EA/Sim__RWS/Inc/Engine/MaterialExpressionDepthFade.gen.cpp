// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionDepthFade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDepthFade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthFade_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDepthFade();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionDepthFade::StaticRegisterNativesUMaterialExpressionDepthFade()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionDepthFade_NoRegister()
	{
		return UMaterialExpressionDepthFade::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDepthFade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeDistanceDefault_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeDistanceDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityDefault_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpacityDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FadeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDepthFade.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistanceDefault_MetaData[] = {
		{ "Category", "MaterialExpressionDepthFade" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
		{ "OverridingInputProperty", "FadeDistance" },
		{ "ToolTip", "World space distance over which the fade should take place.  This is used when FadeDistance is unconnected." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistanceDefault = { UE4CodeGen_Private::EPropertyClass::Float, "FadeDistanceDefault", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthFade, FadeDistanceDefault), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistanceDefault_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistanceDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_OpacityDefault_MetaData[] = {
		{ "Category", "MaterialExpressionDepthFade" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
		{ "OverridingInputProperty", "InOpacity" },
		{ "ToolTip", "Opacity which will be scaled by the result of the fade.  This is used when InOpacity is unconnected." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_OpacityDefault = { UE4CodeGen_Private::EPropertyClass::Float, "OpacityDefault", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthFade, OpacityDefault), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_OpacityDefault_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_OpacityDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'FadeDistanceDefault' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistance = { UE4CodeGen_Private::EPropertyClass::Struct, "FadeDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthFade, FadeDistance), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_InOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDepthFade.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'OpacityDefault' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_InOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "InOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionDepthFade, InOpacity), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_InOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_InOpacity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistanceDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_OpacityDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_FadeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::NewProp_InOpacity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDepthFade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::ClassParams = {
		&UMaterialExpressionDepthFade::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000020A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDepthFade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionDepthFade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionDepthFade, 865266743);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionDepthFade(Z_Construct_UClass_UMaterialExpressionDepthFade, &UMaterialExpressionDepthFade::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionDepthFade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDepthFade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
