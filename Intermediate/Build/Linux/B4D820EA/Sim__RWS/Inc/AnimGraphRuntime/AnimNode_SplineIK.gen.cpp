// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_SplineIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SplineIK() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SplineIK();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSplineIKCachedBoneData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSplineCurves();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
	static UEnum* ESplineBoneAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ESplineBoneAxis"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESplineBoneAxis(ESplineBoneAxis_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("ESplineBoneAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis_CRC() { return 1571401311U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESplineBoneAxis"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESplineBoneAxis::X", (int64)ESplineBoneAxis::X },
				{ "ESplineBoneAxis::Y", (int64)ESplineBoneAxis::Y },
				{ "ESplineBoneAxis::Z", (int64)ESplineBoneAxis::Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
				{ "ToolTip", "The different axes we can align our bones to.\nNote that the values are set to match up with EAxis (but without 'None')" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESplineBoneAxis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESplineBoneAxis",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_SplineIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SplineIK_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SplineIK, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_SplineIK"), sizeof(FAnimNode_SplineIK), Get_Z_Construct_UScriptStruct_FAnimNode_SplineIK_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SplineIK(FAnimNode_SplineIK::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_SplineIK"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SplineIK
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SplineIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SplineIK")),new UScriptStruct::TCppStructOps<FAnimNode_SplineIK>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SplineIK;
	struct Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedOffsetRotations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedOffsetRotations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedOffsetRotations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBoneLengths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedBoneLengths;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CachedBoneLengths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedBoneReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedBoneReferences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedBoneReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalSplineLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OriginalSplineLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stretch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Stretch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TwistBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Roll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PointCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCalculateSpline_MetaData[];
#endif
		static void NewProp_bAutoCalculateSpline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCalculateSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BoneAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SplineIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedOffsetRotations_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Cached bone offset rotations. Same size as CachedBoneReferences" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedOffsetRotations = { UE4CodeGen_Private::EPropertyClass::Array, "CachedOffsetRotations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, CachedOffsetRotations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedOffsetRotations_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedOffsetRotations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedOffsetRotations_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedOffsetRotations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedBoneLengths_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Cached bone lengths. Same size as CachedBoneReferences" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedBoneLengths = { UE4CodeGen_Private::EPropertyClass::Array, "CachedBoneLengths", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, CachedBoneLengths), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedBoneLengths_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedBoneLengths_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedBoneLengths_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "CachedBoneLengths", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedBoneReferences_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Cached data for bones in the IK chain, from start to end" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedBoneReferences = { UE4CodeGen_Private::EPropertyClass::Array, "CachedBoneReferences", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, CachedBoneReferences), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedBoneReferences_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedBoneReferences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedBoneReferences_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedBoneReferences", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSplineIKCachedBoneData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_OriginalSplineLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Cached spline length from when the spline was originally applied to the skeleton" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_OriginalSplineLength = { UE4CodeGen_Private::EPropertyClass::Float, "OriginalSplineLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, OriginalSplineLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_OriginalSplineLength_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_OriginalSplineLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneSpline_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Spline we maintain internally" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneSpline = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneSpline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, BoneSpline), Z_Construct_UScriptStruct_FSplineCurves, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneSpline_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The distance along the spline from the start from which bones are constrained" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Float, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Stretch_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The maximum stretch allowed when fitting bones to the spline. 0.0 means bones do not stretch their length,\n1.0 means bones stretch to the length of the spline" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Stretch = { UE4CodeGen_Private::EPropertyClass::Float, "Stretch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, Stretch), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Stretch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Stretch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistBlend_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "How to interpolate twist along the length of the spline" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistBlend = { UE4CodeGen_Private::EPropertyClass::Struct, "TwistBlend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, TwistBlend), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistEnd_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The twist of the end bone. Twist is interpolated along the spline according to Twist Blend." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistEnd = { UE4CodeGen_Private::EPropertyClass::Float, "TwistEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, TwistEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistEnd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistStart_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The twist of the start bone. Twist is interpolated along the spline according to Twist Blend." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistStart = { UE4CodeGen_Private::EPropertyClass::Float, "TwistStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, TwistStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistStart_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Overall roll of the spline, applied on top of other rotations along the direction of the spline" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Roll = { UE4CodeGen_Private::EPropertyClass::Float, "Roll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, Roll), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Roll_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Roll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Transforms applied to spline points *" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints = { UE4CodeGen_Private::EPropertyClass::Array, "ControlPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000045, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, ControlPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ControlPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_PointCount_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ClampMin", "2" },
		{ "EditCondition", "!bAutoCalculateSpline" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "The number of points in the spline if we are not auto-calculating" },
		{ "UIMin", "2" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_PointCount = { UE4CodeGen_Private::EPropertyClass::Int, "PointCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, PointCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_PointCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_PointCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "The number of points in the spline if we are specifying it directly" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline_SetBit(void* Obj)
	{
		((FAnimNode_SplineIK*)Obj)->bAutoCalculateSpline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoCalculateSpline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SplineIK), &Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Axis of the controlled bone (ie the direction of the spline) to use as the direction for the curve." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis = { UE4CodeGen_Private::EPropertyClass::Enum, "BoneAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, BoneAxis), Z_Construct_UEnum_AnimGraphRuntime_ESplineBoneAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_EndBone_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Name of bone at the end of the spline chain. Bones after this will not be altered by the controller." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_EndBone = { UE4CodeGen_Private::EPropertyClass::Struct, "EndBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, EndBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_EndBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_EndBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_StartBone_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Name of root bone from which the spline extends *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_StartBone = { UE4CodeGen_Private::EPropertyClass::Struct, "StartBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_SplineIK, StartBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_StartBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_StartBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedOffsetRotations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedOffsetRotations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedBoneLengths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedBoneLengths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedBoneReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_CachedBoneReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_OriginalSplineLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Stretch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_TwistStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_Roll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_ControlPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_PointCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_bAutoCalculateSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_BoneAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_EndBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::NewProp_StartBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_SplineIK",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_SplineIK),
		alignof(FAnimNode_SplineIK),
		Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SplineIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SplineIK_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SplineIK"), sizeof(FAnimNode_SplineIK), Get_Z_Construct_UScriptStruct_FAnimNode_SplineIK_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_SplineIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SplineIK_CRC() { return 3485572470U; }
class UScriptStruct* FSplineIKCachedBoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSplineIKCachedBoneData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineIKCachedBoneData, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("SplineIKCachedBoneData"), sizeof(FSplineIKCachedBoneData), Get_Z_Construct_UScriptStruct_FSplineIKCachedBoneData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSplineIKCachedBoneData(FSplineIKCachedBoneData::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("SplineIKCachedBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFSplineIKCachedBoneData
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFSplineIKCachedBoneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SplineIKCachedBoneData")),new UScriptStruct::TCppStructOps<FSplineIKCachedBoneData>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFSplineIKCachedBoneData;
	struct Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefSkeletonIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RefSkeletonIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Data cached per bone in the chain" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineIKCachedBoneData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_RefSkeletonIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "Index of the bone in the reference skeleton" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_RefSkeletonIndex = { UE4CodeGen_Private::EPropertyClass::Int, "RefSkeletonIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSplineIKCachedBoneData, RefSkeletonIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_RefSkeletonIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_RefSkeletonIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_Bone_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SplineIK.h" },
		{ "ToolTip", "The bone we refer to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_Bone = { UE4CodeGen_Private::EPropertyClass::Struct, "Bone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSplineIKCachedBoneData, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_Bone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_Bone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_RefSkeletonIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::NewProp_Bone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"SplineIKCachedBoneData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSplineIKCachedBoneData),
		alignof(FSplineIKCachedBoneData),
		Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplineIKCachedBoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSplineIKCachedBoneData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SplineIKCachedBoneData"), sizeof(FSplineIKCachedBoneData), Get_Z_Construct_UScriptStruct_FSplineIKCachedBoneData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSplineIKCachedBoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSplineIKCachedBoneData_CRC() { return 3670585U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
