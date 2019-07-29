// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_OnCircle() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_OnCircle_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_OnCircle();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
// End Cross Module References
	static UEnum* EPointOnCircleSpacingMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod, Z_Construct_UPackage__Script_AIModule(), TEXT("EPointOnCircleSpacingMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPointOnCircleSpacingMethod(EPointOnCircleSpacingMethod_StaticEnum, TEXT("/Script/AIModule"), TEXT("EPointOnCircleSpacingMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod_CRC() { return 1947004431U; }
	UEnum* Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPointOnCircleSpacingMethod"), 0, Get_Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPointOnCircleSpacingMethod::BySpaceBetween", (int64)EPointOnCircleSpacingMethod::BySpaceBetween },
				{ "EPointOnCircleSpacingMethod::ByNumberOfPoints", (int64)EPointOnCircleSpacingMethod::ByNumberOfPoints },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ByNumberOfPoints.ToolTip", "Use a fixed number of points" },
				{ "BySpaceBetween.ToolTip", "Use the SpaceBetween value to determine how far apart points should be." },
				{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPointOnCircleSpacingMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPointOnCircleSpacingMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UEnvQueryGenerator_OnCircle::StaticRegisterNativesUEnvQueryGenerator_OnCircle()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryGenerator_OnCircle_NoRegister()
	{
		return UEnvQueryGenerator_OnCircle::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CircleCenterZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CircleCenterZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_MetaData[];
#endif
		static void NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CircleCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CircleCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleRadians_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleRadians;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArcAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArcAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArcDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArcDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointOnCircleSpacingMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PointOnCircleSpacingMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PointOnCircleSpacingMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NumberOfPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpaceBetween_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpaceBetween;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CircleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CircleRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Points: Circle" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bDefineArc_MetaData[] = {
		{ "Category", "Generator" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bDefineArc_SetBit(void* Obj)
	{
		((UEnvQueryGenerator_OnCircle*)Obj)->bDefineArc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bDefineArc = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefineArc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEnvQueryGenerator_OnCircle), &Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bDefineArc_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bDefineArc_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bDefineArc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_TraceData_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "horizontal trace for nearest obstacle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_TraceData = { UE4CodeGen_Private::EPropertyClass::Struct, "TraceData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, TraceData), Z_Construct_UScriptStruct_FEnvTraceData, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_TraceData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_TraceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleCenterZOffset_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "context offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleCenterZOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "CircleCenterZOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, CircleCenterZOffset), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleCenterZOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleCenterZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "ignore tracing into context actors when generating the circle" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_SetBit(void* Obj)
	{
		((UEnvQueryGenerator_OnCircle*)Obj)->bIgnoreAnyContextActorsWhenGeneratingCircle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreAnyContextActorsWhenGeneratingCircle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UEnvQueryGenerator_OnCircle), &Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleCenter_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "context" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleCenter = { UE4CodeGen_Private::EPropertyClass::Class, "CircleCenter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, CircleCenter), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleCenter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_AngleRadians_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_AngleRadians = { UE4CodeGen_Private::EPropertyClass::Float, "AngleRadians", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, AngleRadians), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_AngleRadians_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_AngleRadians_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_ArcAngle_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "If you generate items on a piece of circle you define angle of Arc cut here" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_ArcAngle = { UE4CodeGen_Private::EPropertyClass::Struct, "ArcAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, ArcAngle), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_ArcAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_ArcAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_ArcDirection_MetaData[] = {
		{ "Category", "Generator" },
		{ "EditCondition", "bDefineArc" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "If you generate items on a piece of circle you define direction of Arc cut here" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_ArcDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "ArcDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, ArcDirection), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_ArcDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_ArcDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_PointOnCircleSpacingMethod_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "how we are choosing where the points are in the circle" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_PointOnCircleSpacingMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "PointOnCircleSpacingMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, PointOnCircleSpacingMethod), Z_Construct_UEnum_AIModule_EPointOnCircleSpacingMethod, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_PointOnCircleSpacingMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_PointOnCircleSpacingMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_PointOnCircleSpacingMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_NumberOfPoints_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "this many items will be generated on a circle" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_NumberOfPoints = { UE4CodeGen_Private::EPropertyClass::Struct, "NumberOfPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, NumberOfPoints), Z_Construct_UScriptStruct_FAIDataProviderIntValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_NumberOfPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_NumberOfPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_SpaceBetween_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "items will be generated on a circle this much apart" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_SpaceBetween = { UE4CodeGen_Private::EPropertyClass::Struct, "SpaceBetween", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, SpaceBetween), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_SpaceBetween_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_SpaceBetween_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleRadius_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_OnCircle.h" },
		{ "ToolTip", "max distance of path between point and context" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleRadius = { UE4CodeGen_Private::EPropertyClass::Struct, "CircleRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000010001, 1, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_OnCircle, CircleRadius), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bDefineArc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_TraceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleCenterZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_bIgnoreAnyContextActorsWhenGeneratingCircle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_AngleRadians,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_ArcAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_ArcDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_PointOnCircleSpacingMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_PointOnCircleSpacingMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_NumberOfPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_SpaceBetween,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::NewProp_CircleRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_OnCircle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::ClassParams = {
		&UEnvQueryGenerator_OnCircle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009010A0u,
		nullptr, 0,
		Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_OnCircle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryGenerator_OnCircle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryGenerator_OnCircle, 883080008);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryGenerator_OnCircle(Z_Construct_UClass_UEnvQueryGenerator_OnCircle, &UEnvQueryGenerator_OnCircle::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryGenerator_OnCircle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_OnCircle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
