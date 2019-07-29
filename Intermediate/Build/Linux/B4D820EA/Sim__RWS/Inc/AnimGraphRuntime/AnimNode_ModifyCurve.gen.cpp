// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_ModifyCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ModifyCurve() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
	static UEnum* EModifyCurveApplyMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EModifyCurveApplyMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModifyCurveApplyMode(EModifyCurveApplyMode_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EModifyCurveApplyMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_CRC() { return 3507331501U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModifyCurveApplyMode"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EModifyCurveApplyMode::Add", (int64)EModifyCurveApplyMode::Add },
				{ "EModifyCurveApplyMode::Scale", (int64)EModifyCurveApplyMode::Scale },
				{ "EModifyCurveApplyMode::Blend", (int64)EModifyCurveApplyMode::Blend },
				{ "EModifyCurveApplyMode::WeightedMovingAverage", (int64)EModifyCurveApplyMode::WeightedMovingAverage },
				{ "EModifyCurveApplyMode::RemapCurve", (int64)EModifyCurveApplyMode::RemapCurve },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Add.ToolTip", "Add new value to input curve value" },
				{ "Blend.ToolTip", "Blend input with new curve value, using Alpha setting on the node" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
				{ "RemapCurve.ToolTip", "Remaps the new curve value between the CurveValues entry and 1.0 (.5 in CurveValues makes 0.51 map to 0.02)" },
				{ "Scale.ToolTip", "Scale input value by new value" },
				{ "WeightedMovingAverage.ToolTip", "Blend the new curve value with the last curve value using Alpha to determine the weighting (.5 is a moving average, higher values react to new values faster, lower slower)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EModifyCurveApplyMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EModifyCurveApplyMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_ModifyCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ModifyCurve"), sizeof(FAnimNode_ModifyCurve), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ModifyCurve(FAnimNode_ModifyCurve::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_ModifyCurve"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ModifyCurve
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ModifyCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ModifyCurve")),new UScriptStruct::TCppStructOps<FAnimNode_ModifyCurve>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ModifyCurve;
	struct Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastCurveValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastCurveValues;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastCurveValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurveValues;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ApplyMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ApplyMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
		{ "ToolTip", "Easy way to modify curve values on a pose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Float, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_Alpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames = { UE4CodeGen_Private::EPropertyClass::Array, "CurveNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, CurveNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "CurveNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_LastCurveValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_LastCurveValues = { UE4CodeGen_Private::EPropertyClass::Array, "LastCurveValues", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, LastCurveValues), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_LastCurveValues_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_LastCurveValues_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_LastCurveValues_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "LastCurveValues", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues = { UE4CodeGen_Private::EPropertyClass::Array, "CurveValues", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000045, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, CurveValues), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "CurveValues", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode = { UE4CodeGen_Private::EPropertyClass::Enum, "ApplyMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, ApplyMode), Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_SourcePose = { UE4CodeGen_Private::EPropertyClass::Struct, "SourcePose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000045, 1, nullptr, STRUCT_OFFSET(FAnimNode_ModifyCurve, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_SourcePose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_SourcePose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_LastCurveValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_LastCurveValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_SourcePose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_ModifyCurve",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_ModifyCurve),
		alignof(FAnimNode_ModifyCurve),
		Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ModifyCurve"), sizeof(FAnimNode_ModifyCurve), Get_Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_CRC() { return 2871633582U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
