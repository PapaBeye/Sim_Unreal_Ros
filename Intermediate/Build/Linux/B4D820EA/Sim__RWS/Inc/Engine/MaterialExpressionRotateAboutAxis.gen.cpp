// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionRotateAboutAxis.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRotateAboutAxis() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRotateAboutAxis();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionRotateAboutAxis::StaticRegisterNativesUMaterialExpressionRotateAboutAxis()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_NoRegister()
	{
		return UMaterialExpressionRotateAboutAxis::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PivotPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PivotPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizedRotationAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalizedRotationAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionRotateAboutAxis.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "MaterialExpressionRotateAboutAxis" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Period = { UE4CodeGen_Private::EPropertyClass::Float, "Period", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionRotateAboutAxis, Period), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Period_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Period_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionRotateAboutAxis, Position), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_PivotPoint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_PivotPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "PivotPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionRotateAboutAxis, PivotPoint), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_PivotPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_PivotPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_RotationAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_RotationAngle = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionRotateAboutAxis, RotationAngle), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_RotationAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_RotationAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_NormalizedRotationAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRotateAboutAxis.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_NormalizedRotationAxis = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalizedRotationAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionRotateAboutAxis, NormalizedRotationAxis), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_NormalizedRotationAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_NormalizedRotationAxis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_PivotPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_RotationAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::NewProp_NormalizedRotationAxis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRotateAboutAxis>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::ClassParams = {
		&UMaterialExpressionRotateAboutAxis::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionRotateAboutAxis()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionRotateAboutAxis_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionRotateAboutAxis, 625992043);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionRotateAboutAxis(Z_Construct_UClass_UMaterialExpressionRotateAboutAxis, &UMaterialExpressionRotateAboutAxis::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionRotateAboutAxis"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRotateAboutAxis);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
