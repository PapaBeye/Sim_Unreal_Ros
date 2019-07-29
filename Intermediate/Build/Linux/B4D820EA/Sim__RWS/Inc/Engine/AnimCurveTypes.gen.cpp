// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/AnimCurveTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERawCurveTrackTypes();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAssetCurveFlags();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawCurveTracks();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveParam();
// End Cross Module References
	static UEnum* ERawCurveTrackTypes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERawCurveTrackTypes, Z_Construct_UPackage__Script_Engine(), TEXT("ERawCurveTrackTypes"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERawCurveTrackTypes(ERawCurveTrackTypes_StaticEnum, TEXT("/Script/Engine"), TEXT("ERawCurveTrackTypes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERawCurveTrackTypes_CRC() { return 1364454045U; }
	UEnum* Z_Construct_UEnum_Engine_ERawCurveTrackTypes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERawCurveTrackTypes"), 0, Get_Z_Construct_UEnum_Engine_ERawCurveTrackTypes_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERawCurveTrackTypes::RCT_Float", (int64)ERawCurveTrackTypes::RCT_Float },
				{ "ERawCurveTrackTypes::RCT_Vector", (int64)ERawCurveTrackTypes::RCT_Vector },
				{ "ERawCurveTrackTypes::RCT_Transform", (int64)ERawCurveTrackTypes::RCT_Transform },
				{ "ERawCurveTrackTypes::RCT_MAX", (int64)ERawCurveTrackTypes::RCT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
				{ "RCT_Float.DisplayName", "Float Curve" },
				{ "RCT_Transform.DisplayName", "Transformation Curve" },
				{ "RCT_Vector.DisplayName", "Vector Curve" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERawCurveTrackTypes",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERawCurveTrackTypes",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAnimAssetCurveFlags_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimAssetCurveFlags, Z_Construct_UPackage__Script_Engine(), TEXT("EAnimAssetCurveFlags"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnimAssetCurveFlags(EAnimAssetCurveFlags_StaticEnum, TEXT("/Script/Engine"), TEXT("EAnimAssetCurveFlags"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAnimAssetCurveFlags_CRC() { return 4061700800U; }
	UEnum* Z_Construct_UEnum_Engine_EAnimAssetCurveFlags()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnimAssetCurveFlags"), 0, Get_Z_Construct_UEnum_Engine_EAnimAssetCurveFlags_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AACF_DriveMorphTarget_DEPRECATED", (int64)AACF_DriveMorphTarget_DEPRECATED },
				{ "AACF_DriveAttribute_DEPRECATED", (int64)AACF_DriveAttribute_DEPRECATED },
				{ "AACF_Editable", (int64)AACF_Editable },
				{ "AACF_DriveMaterial_DEPRECATED", (int64)AACF_DriveMaterial_DEPRECATED },
				{ "AACF_Metadata", (int64)AACF_Metadata },
				{ "AACF_DriveTrack", (int64)AACF_DriveTrack },
				{ "AACF_Disabled", (int64)AACF_Disabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AACF_Disabled.Hidden", "" },
				{ "AACF_Disabled.ToolTip", "@Todo: remove?\ndisabled, right now it's used by track" },
				{ "AACF_DriveAttribute_DEPRECATED.Hidden", "" },
				{ "AACF_DriveAttribute_DEPRECATED.ToolTip", "This has moved to FAnimCurveType:bMorphTarget. Set per skeleton. DO NOT REMOVE UNTIL FrameworkObjectVersion.MoveCurveTypesToSkeleton expires.\nUsed as triggering event" },
				{ "AACF_DriveMaterial_DEPRECATED.Hidden", "" },
				{ "AACF_DriveMaterial_DEPRECATED.ToolTip", "per asset\nUsed as a material curve" },
				{ "AACF_DriveMorphTarget_DEPRECATED.Hidden", "" },
				{ "AACF_DriveMorphTarget_DEPRECATED.ToolTip", "Used as morph target curve" },
				{ "AACF_DriveTrack.Hidden", "" },
				{ "AACF_DriveTrack.ToolTip", "per asset\nmotifies bone track" },
				{ "AACF_Editable.DisplayName", "Editable" },
				{ "AACF_Editable.ToolTip", "Set per skeleton. DO NOT REMOVE UNTIL FrameworkObjectVersion.MoveCurveTypesToSkeleton expires.\nIs editable in Sequence Editor" },
				{ "AACF_Metadata.DisplayName", "Metadata" },
				{ "AACF_Metadata.ToolTip", "This has moved to FAnimCurveType:bMaterial. Set per skeleton. DO NOT REMOVE UNTIL FrameworkObjectVersion.MoveCurveTypesToSkeleton expires.\nIs a metadata 'curve'" },
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
				{ "ToolTip", "This is curve flags that are saved in asset and *" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAnimAssetCurveFlags",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EAnimAssetCurveFlags",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRawCurveTracks::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRawCurveTracks_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawCurveTracks, Z_Construct_UPackage__Script_Engine(), TEXT("RawCurveTracks"), sizeof(FRawCurveTracks), Get_Z_Construct_UScriptStruct_FRawCurveTracks_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRawCurveTracks(FRawCurveTracks::StaticStruct, TEXT("/Script/Engine"), TEXT("RawCurveTracks"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRawCurveTracks
{
	FScriptStruct_Engine_StaticRegisterNativesFRawCurveTracks()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RawCurveTracks")),new UScriptStruct::TCppStructOps<FRawCurveTracks>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRawCurveTracks;
	struct Z_Construct_UScriptStruct_FRawCurveTracks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TransformCurves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorCurves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorCurves_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatCurves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurves_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawCurveTracks_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Raw Curve data for serialization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawCurveTracks>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "@note : TransformCurves are used to edit additive animation in editor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves = { UE4CodeGen_Private::EPropertyClass::Array, "TransformCurves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FRawCurveTracks, TransformCurves), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TransformCurves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransformCurve, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "@note : Currently VectorCurves are not evaluated or used for anything else but transient data for modifying bone track\n                     Note that it doesn't have UPROPERTY tag yet. In the future, we'd like this to be serialized, but not for now" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves = { UE4CodeGen_Private::EPropertyClass::Array, "VectorCurves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, STRUCT_OFFSET(FRawCurveTracks, VectorCurves), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorCurves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVectorCurve, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves = { UE4CodeGen_Private::EPropertyClass::Array, "FloatCurves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRawCurveTracks, FloatCurves), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FloatCurves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFloatCurve, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawCurveTracks_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_TransformCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_VectorCurves_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawCurveTracks_Statics::NewProp_FloatCurves_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawCurveTracks_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RawCurveTracks",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRawCurveTracks),
		alignof(FRawCurveTracks),
		Z_Construct_UScriptStruct_FRawCurveTracks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRawCurveTracks_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawCurveTracks()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRawCurveTracks_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RawCurveTracks"), sizeof(FRawCurveTracks), Get_Z_Construct_UScriptStruct_FRawCurveTracks_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRawCurveTracks_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRawCurveTracks_CRC() { return 1256652196U; }
class UScriptStruct* FTransformCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTransformCurve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformCurve, Z_Construct_UPackage__Script_Engine(), TEXT("TransformCurve"), sizeof(FTransformCurve), Get_Z_Construct_UScriptStruct_FTransformCurve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTransformCurve(FTransformCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("TransformCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTransformCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFTransformCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TransformCurve")),new UScriptStruct::TCppStructOps<FTransformCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTransformCurve;
	struct Z_Construct_UScriptStruct_FTransformCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslationCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_ScaleCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_ScaleCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTransformCurve, ScaleCurve), Z_Construct_UScriptStruct_FVectorCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_ScaleCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_ScaleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_RotationCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Rotation curve - right now we use euler because quat also doesn't provide linear interpolation - curve editor can't handle quat interpolation\nIf you hit gimbal lock, you should add extra key to fix it. This will cause gimbal lock.\n@TODO: Eventually we'll need FRotationCurve that would contain rotation curve - that will interpolate as slerp or as quaternion" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_RotationCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTransformCurve, RotationCurve), Z_Construct_UScriptStruct_FVectorCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_RotationCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_RotationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_TranslationCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Curve data for each transform." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_TranslationCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "TranslationCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTransformCurve, TranslationCurve), Z_Construct_UScriptStruct_FVectorCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_TranslationCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_TranslationCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_ScaleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_RotationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformCurve_Statics::NewProp_TranslationCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimCurveBase,
		&NewStructOps,
		"TransformCurve",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTransformCurve),
		alignof(FTransformCurve),
		Z_Construct_UScriptStruct_FTransformCurve_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCurve_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformCurve_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTransformCurve_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TransformCurve"), sizeof(FTransformCurve), Get_Z_Construct_UScriptStruct_FTransformCurve_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTransformCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTransformCurve_CRC() { return 2968575790U; }
class UScriptStruct* FVectorCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FVectorCurve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorCurve, Z_Construct_UPackage__Script_Engine(), TEXT("VectorCurve"), sizeof(FVectorCurve), Get_Z_Construct_UScriptStruct_FVectorCurve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVectorCurve(FVectorCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("VectorCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFVectorCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFVectorCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VectorCurve")),new UScriptStruct::TCppStructOps<FVectorCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFVectorCurve;
	struct Z_Construct_UScriptStruct_FVectorCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVectorCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorCurve_Statics::NewProp_FloatCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Curve data for float." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorCurve_Statics::NewProp_FloatCurves = { UE4CodeGen_Private::EPropertyClass::Struct, "FloatCurves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, CPP_ARRAY_DIM(FloatCurves, FVectorCurve), nullptr, STRUCT_OFFSET(FVectorCurve, FloatCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorCurve_Statics::NewProp_FloatCurves_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorCurve_Statics::NewProp_FloatCurves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorCurve_Statics::NewProp_FloatCurves,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimCurveBase,
		&NewStructOps,
		"VectorCurve",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FVectorCurve),
		alignof(FVectorCurve),
		Z_Construct_UScriptStruct_FVectorCurve_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorCurve_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorCurve_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVectorCurve_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VectorCurve"), sizeof(FVectorCurve), Get_Z_Construct_UScriptStruct_FVectorCurve_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVectorCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVectorCurve_CRC() { return 414019654U; }
class UScriptStruct* FFloatCurve::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFloatCurve_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatCurve, Z_Construct_UPackage__Script_Engine(), TEXT("FloatCurve"), sizeof(FFloatCurve), Get_Z_Construct_UScriptStruct_FFloatCurve_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFloatCurve(FFloatCurve::StaticStruct, TEXT("/Script/Engine"), TEXT("FloatCurve"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFloatCurve
{
	FScriptStruct_Engine_StaticRegisterNativesFFloatCurve()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FloatCurve")),new UScriptStruct::TCppStructOps<FFloatCurve>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFloatCurve;
	struct Z_Construct_UScriptStruct_FFloatCurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloatCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatCurve>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatCurve_Statics::NewProp_FloatCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Curve data for float." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatCurve_Statics::NewProp_FloatCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "FloatCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFloatCurve, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatCurve_Statics::NewProp_FloatCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCurve_Statics::NewProp_FloatCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatCurve_Statics::NewProp_FloatCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimCurveBase,
		&NewStructOps,
		"FloatCurve",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFloatCurve),
		alignof(FFloatCurve),
		Z_Construct_UScriptStruct_FFloatCurve_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCurve_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatCurve_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloatCurve()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFloatCurve_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FloatCurve"), sizeof(FFloatCurve), Get_Z_Construct_UScriptStruct_FFloatCurve_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFloatCurve_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFloatCurve_CRC() { return 4216937007U; }
class UScriptStruct* FAnimCurveBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimCurveBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimCurveBase, Z_Construct_UPackage__Script_Engine(), TEXT("AnimCurveBase"), sizeof(FAnimCurveBase), Get_Z_Construct_UScriptStruct_FAnimCurveBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimCurveBase(FAnimCurveBase::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimCurveBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimCurveBase
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimCurveBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimCurveBase")),new UScriptStruct::TCppStructOps<FAnimCurveBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimCurveBase;
	struct Z_Construct_UScriptStruct_FAnimCurveBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveTypeFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurveTypeFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastObservedName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LastObservedName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Float curve data for one track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimCurveBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_CurveTypeFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Curve Type Flags" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_CurveTypeFlags = { UE4CodeGen_Private::EPropertyClass::Int, "CurveTypeFlags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FAnimCurveBase, CurveTypeFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_CurveTypeFlags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_CurveTypeFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Struct, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimCurveBase, Name), Z_Construct_UScriptStruct_FSmartName, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_LastObservedName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "Last observed name of the curve. We store this so we can recover from situations that\nmean the skeleton doesn't have a mapped name for our UID (such as a user saving the an\nanimation but not the skeleton)." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_LastObservedName = { UE4CodeGen_Private::EPropertyClass::Name, "LastObservedName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimCurveBase, LastObservedName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_LastObservedName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_LastObservedName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimCurveBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_CurveTypeFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveBase_Statics::NewProp_LastObservedName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimCurveBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimCurveBase",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimCurveBase),
		alignof(FAnimCurveBase),
		Z_Construct_UScriptStruct_FAnimCurveBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimCurveBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimCurveBase"), sizeof(FAnimCurveBase), Get_Z_Construct_UScriptStruct_FAnimCurveBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimCurveBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimCurveBase_CRC() { return 3469421392U; }
class UScriptStruct* FAnimCurveParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimCurveParam_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimCurveParam, Z_Construct_UPackage__Script_Engine(), TEXT("AnimCurveParam"), sizeof(FAnimCurveParam), Get_Z_Construct_UScriptStruct_FAnimCurveParam_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimCurveParam(FAnimCurveParam::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimCurveParam"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimCurveParam
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimCurveParam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimCurveParam")),new UScriptStruct::TCppStructOps<FAnimCurveParam>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimCurveParam;
	struct Z_Construct_UScriptStruct_FAnimCurveParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveParam_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
		{ "ToolTip", "UI Curve Parameter type\nThis gets name, and cached UID and use it when needed\nAlso it contains curve types" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimCurveParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FAnimCurveParam" },
		{ "ModuleRelativePath", "Public/Animation/AnimCurveTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimCurveParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimCurveParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCurveParam_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimCurveParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimCurveParam",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimCurveParam),
		alignof(FAnimCurveParam),
		Z_Construct_UScriptStruct_FAnimCurveParam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveParam_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveParam_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimCurveParam_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimCurveParam"), sizeof(FAnimCurveParam), Get_Z_Construct_UScriptStruct_FAnimCurveParam_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimCurveParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimCurveParam_CRC() { return 438795245U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
