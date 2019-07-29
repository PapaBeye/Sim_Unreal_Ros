// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Donut() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Donut_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Donut();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
// End Cross Module References
	void UEnvQueryGenerator_Donut::StaticRegisterNativesUEnvQueryGenerator_Donut()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Donut_NoRegister()
	{
		return UEnvQueryGenerator_Donut::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefineArc_MetaData[];
#endif
		static void NewProp_bDefineArc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefineArc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSpiralPattern_MetaData[];
#endif
		static void NewProp_bUseSpiralPattern_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSpiralPattern;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArcAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArcAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArcDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArcDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointsPerRing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointsPerRing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfRings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NumberOfRings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OuterRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InnerRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Points: Donut" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bDefineArc_MetaData[] = {
		{ "Category", "Generator" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bDefineArc_SetBit(void* Obj)
	{
		((UEnvQueryGenerator_Donut*)Obj)->bDefineArc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bDefineArc = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefineArc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEnvQueryGenerator_Donut), &Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bDefineArc_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bDefineArc_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bDefineArc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "context" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_Center = { UE4CodeGen_Private::EPropertyClass::Class, "Center", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Donut, Center), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_Center_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bUseSpiralPattern_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "If true, the rings of the wheel will be rotated in a spiral pattern.  If false, they will all be at a zero\nrotation, looking more like the spokes on a wheel." },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bUseSpiralPattern_SetBit(void* Obj)
	{
		((UEnvQueryGenerator_Donut*)Obj)->bUseSpiralPattern = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bUseSpiralPattern = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseSpiralPattern", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEnvQueryGenerator_Donut), &Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bUseSpiralPattern_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bUseSpiralPattern_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bUseSpiralPattern_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcAngle_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "If you generate items on a piece of circle you define angle of Arc cut here" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcAngle = { UE4CodeGen_Private::EPropertyClass::Struct, "ArcAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Donut, ArcAngle), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcDirection_MetaData[] = {
		{ "Category", "Generator" },
		{ "EditCondition", "bDefineArc" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "If you generate items on a piece of circle you define direction of Arc cut here" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "ArcDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Donut, ArcDirection), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_PointsPerRing_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "number of items to generate for each ring" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_PointsPerRing = { UE4CodeGen_Private::EPropertyClass::Struct, "PointsPerRing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Donut, PointsPerRing), Z_Construct_UScriptStruct_FAIDataProviderIntValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_PointsPerRing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_PointsPerRing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_NumberOfRings_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "number of rings to generate" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_NumberOfRings = { UE4CodeGen_Private::EPropertyClass::Struct, "NumberOfRings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Donut, NumberOfRings), Z_Construct_UScriptStruct_FAIDataProviderIntValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_NumberOfRings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_NumberOfRings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_OuterRadius_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "max distance between point and context" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_OuterRadius = { UE4CodeGen_Private::EPropertyClass::Struct, "OuterRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Donut, OuterRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_OuterRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_OuterRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Donut.h" },
		{ "ToolTip", "min distance between point and context" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_InnerRadius = { UE4CodeGen_Private::EPropertyClass::Struct, "InnerRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Donut, InnerRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_InnerRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_InnerRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bDefineArc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_bUseSpiralPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_ArcDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_PointsPerRing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_NumberOfRings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_OuterRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::NewProp_InnerRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_Donut>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::ClassParams = {
		&UEnvQueryGenerator_Donut::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009010A0u,
		nullptr, 0,
		Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Donut()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryGenerator_Donut_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryGenerator_Donut, 1045134788);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_Donut(Z_Construct_UClass_UEnvQueryGenerator_Donut, &UEnvQueryGenerator_Donut::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_Donut"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_Donut);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
