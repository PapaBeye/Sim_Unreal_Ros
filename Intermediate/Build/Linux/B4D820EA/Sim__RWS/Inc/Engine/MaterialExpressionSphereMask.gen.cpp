// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSphereMask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSphereMask() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphereMask_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphereMask();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionSphereMask::StaticRegisterNativesUMaterialExpressionSphereMask()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSphereMask_NoRegister()
	{
		return UMaterialExpressionSphereMask::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSphereMask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardnessPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HardnessPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hardness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Radius;
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
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSphereMask.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_HardnessPercent_MetaData[] = {
		{ "Category", "MaterialExpressionSphereMask" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Hardness" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "OverridingInputProperty", "Hardness" },
		{ "ToolTip", "in percent 0%=soft .. 100%=hard" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_HardnessPercent = { UE4CodeGen_Private::EPropertyClass::Float, "HardnessPercent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, HardnessPercent), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_HardnessPercent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_HardnessPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_AttenuationRadius_MetaData[] = {
		{ "Category", "MaterialExpressionSphereMask" },
		{ "DisplayName", "Radius" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "OverridingInputProperty", "Radius" },
		{ "ToolTip", "in the unit that A and B are measured" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_AttenuationRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AttenuationRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, AttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_AttenuationRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_AttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Hardness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'HardnessPercent' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Hardness = { UE4CodeGen_Private::EPropertyClass::Struct, "Hardness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, Hardness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Hardness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Hardness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'AttenuationRadius' if not specified" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Struct, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, Radius), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "ToolTip", "1 to 4 dimensional vector, should be the same type as A" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "ToolTip", "1 to 4 dimensional vector, should be the same type as B" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_HardnessPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_AttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Hardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_A,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSphereMask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::ClassParams = {
		&UMaterialExpressionSphereMask::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSphereMask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionSphereMask, 1764156167);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSphereMask(Z_Construct_UClass_UMaterialExpressionSphereMask, &UMaterialExpressionSphereMask::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSphereMask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSphereMask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
