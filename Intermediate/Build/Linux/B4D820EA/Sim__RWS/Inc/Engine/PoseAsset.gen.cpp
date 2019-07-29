// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/PoseAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseAsset() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseDataContainer();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FPoseDataContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPoseDataContainer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseDataContainer, Z_Construct_UPackage__Script_Engine(), TEXT("PoseDataContainer"), sizeof(FPoseDataContainer), Get_Z_Construct_UScriptStruct_FPoseDataContainer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPoseDataContainer(FPoseDataContainer::StaticStruct, TEXT("/Script/Engine"), TEXT("PoseDataContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPoseDataContainer
{
	FScriptStruct_Engine_StaticRegisterNativesFPoseDataContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PoseDataContainer")),new UScriptStruct::TCppStructOps<FPoseDataContainer>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPoseDataContainer;
	struct Z_Construct_UScriptStruct_FPoseDataContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Curves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Poses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Poses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Poses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrackMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackMap_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tracks;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PoseNames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoseNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Pose data container\n\nContains animation and curve for all poses" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseDataContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "curve meta data # of Curve UIDs should match with Poses.CurveValues.Num" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves = { UE4CodeGen_Private::EPropertyClass::Array, "Curves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FPoseDataContainer, Curves), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Curves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimCurveBase, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "this is list of poses" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses = { UE4CodeGen_Private::EPropertyClass::Array, "Poses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FPoseDataContainer, Poses), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Poses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPoseData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "cache for the track names to skeleton index" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap = { UE4CodeGen_Private::EPropertyClass::Map, "TrackMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(FPoseDataContainer, TrackMap), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "TrackMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TrackMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "this is list of tracks - vertical data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks = { UE4CodeGen_Private::EPropertyClass::Array, "Tracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FPoseDataContainer, Tracks), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "Tracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "pose names - horizontal data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames = { UE4CodeGen_Private::EPropertyClass::Array, "PoseNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FPoseDataContainer, PoseNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PoseNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSmartName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseDataContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Curves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Poses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_TrackMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_Tracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewProp_PoseNames_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseDataContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PoseDataContainer",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FPoseDataContainer),
		alignof(FPoseDataContainer),
		Z_Construct_UScriptStruct_FPoseDataContainer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDataContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseDataContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPoseDataContainer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PoseDataContainer"), sizeof(FPoseDataContainer), Get_Z_Construct_UScriptStruct_FPoseDataContainer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPoseDataContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPoseDataContainer_CRC() { return 2914591616U; }
class UScriptStruct* FPoseData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPoseData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseData, Z_Construct_UPackage__Script_Engine(), TEXT("PoseData"), sizeof(FPoseData), Get_Z_Construct_UScriptStruct_FPoseData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPoseData(FPoseData::StaticStruct, TEXT("/Script/Engine"), TEXT("PoseData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPoseData
{
	FScriptStruct_Engine_StaticRegisterNativesFPoseData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PoseData")),new UScriptStruct::TCppStructOps<FPoseData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPoseData;
	struct Z_Construct_UScriptStruct_FPoseData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurveData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackToBufferIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrackToBufferIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackToBufferIndex_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TrackToBufferIndex_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalSpacePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalSpacePose;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalSpacePose_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceCurveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceCurveData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceCurveData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLocalSpacePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceLocalSpacePose;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceLocalSpacePose_Inner;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Pose data\n\nThis is one pose data structure\nThis will let us blend poses quickly easily\nAll poses within this asset should contain same number of tracks,\nso that we can blend quickly" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "# of array match with # of Curves in PoseDataContainer\ncurve data is not compressed" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData = { UE4CodeGen_Private::EPropertyClass::Array, "CurveData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPoseData, CurveData), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "CurveData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "this is PoseContainer.Tracks to Buffer Index of LocalSpacePose" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex = { UE4CodeGen_Private::EPropertyClass::Map, "TrackToBufferIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPoseData, TrackToBufferIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TrackToBufferIndex_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TrackToBufferIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "local space pose, # of array match with # of TrackToBufferIndex\nit only saves the one with delta as base pose or ref pose if full pose" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose = { UE4CodeGen_Private::EPropertyClass::Array, "LocalSpacePose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPoseData, LocalSpacePose), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalSpacePose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "source curve data that is full value" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData = { UE4CodeGen_Private::EPropertyClass::Array, "SourceCurveData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FPoseData, SourceCurveData), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "SourceCurveData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "source local space pose, this pose is always full pose\nthe size this array matches Tracks in the pose container" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose = { UE4CodeGen_Private::EPropertyClass::Array, "SourceLocalSpacePose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FPoseData, SourceLocalSpacePose), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceLocalSpacePose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_CurveData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_TrackToBufferIndex_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_LocalSpacePose_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceCurveData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseData_Statics::NewProp_SourceLocalSpacePose_Inner,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PoseData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FPoseData),
		alignof(FPoseData),
		Z_Construct_UScriptStruct_FPoseData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPoseData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PoseData"), sizeof(FPoseData), Get_Z_Construct_UScriptStruct_FPoseData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPoseData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPoseData_CRC() { return 2399140481U; }
	void UPoseAsset::StaticRegisterNativesUPoseAsset()
	{
	}
	UClass* Z_Construct_UClass_UPoseAsset_NoRegister()
	{
		return UPoseAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPoseAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceAnimation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetargetSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RetargetSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePoseIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BasePoseIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdditivePose_MetaData[];
#endif
		static void NewProp_bAdditivePose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdditivePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoseContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Animation/PoseAsset.h" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "* Pose Asset that can be blended by weight of curves" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "SourceAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UPoseAsset, SourceAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Base pose to use when retargeting" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource = { UE4CodeGen_Private::EPropertyClass::Name, "RetargetSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPoseAsset, RetargetSource), METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "if -1, use ref pose" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BasePoseIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UPoseAsset, BasePoseIndex), METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Whether or not Additive Pose or not - these are property that needs post process, so" },
	};
#endif
	void Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_SetBit(void* Obj)
	{
		((UPoseAsset*)Obj)->bAdditivePose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose = { UE4CodeGen_Private::EPropertyClass::Bool, "bAdditivePose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPoseAsset), &Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PoseAsset.h" },
		{ "ToolTip", "Animation Pose Data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer = { UE4CodeGen_Private::EPropertyClass::Struct, "PoseContainer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UPoseAsset, PoseContainer), Z_Construct_UScriptStruct_FPoseDataContainer, METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_SourceAnimation,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_RetargetSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_BasePoseIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAsset_Statics::NewProp_PoseContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPoseAsset_Statics::ClassParams = {
		&UPoseAsset::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		nullptr, 0,
		Z_Construct_UClass_UPoseAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPoseAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPoseAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPoseAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPoseAsset, 3559054590);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPoseAsset(Z_Construct_UClass_UPoseAsset, &UPoseAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UPoseAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
