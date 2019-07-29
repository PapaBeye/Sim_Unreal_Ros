// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimCompositeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompositeBase() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSegment();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionExtractionStep();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase();
// End Cross Module References
class UScriptStruct* FAnimTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimTrack, Z_Construct_UPackage__Script_Engine(), TEXT("AnimTrack"), sizeof(FAnimTrack), Get_Z_Construct_UScriptStruct_FAnimTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimTrack(FAnimTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimTrack")),new UScriptStruct::TCppStructOps<FAnimTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimTrack;
	struct Z_Construct_UScriptStruct_FAnimTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSegments_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimSegments;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimSegments_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "This is list of anim segments for this track\nFor now this is only one TArray, but in the future\nwe should define more transition/blending behaviors" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments_MetaData[] = {
		{ "Category", "AnimTrack" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments = { UE4CodeGen_Private::EPropertyClass::Array, "AnimSegments", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000041, 1, nullptr, STRUCT_OFFSET(FAnimTrack, AnimSegments), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimSegments", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimSegment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimTrack_Statics::NewProp_AnimSegments_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimTrack",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimTrack),
		alignof(FAnimTrack),
		Z_Construct_UScriptStruct_FAnimTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTrack_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimTrack"), sizeof(FAnimTrack), Get_Z_Construct_UScriptStruct_FAnimTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimTrack_CRC() { return 4210779124U; }
class UScriptStruct* FAnimSegment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimSegment_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSegment, Z_Construct_UPackage__Script_Engine(), TEXT("AnimSegment"), sizeof(FAnimSegment), Get_Z_Construct_UScriptStruct_FAnimSegment_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimSegment(FAnimSegment::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimSegment"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimSegment
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimSegment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimSegment")),new UScriptStruct::TCppStructOps<FAnimSegment>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimSegment;
	struct Z_Construct_UScriptStruct_FAnimSegment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopingCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopingCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSegment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "this is anim segment that defines what animation and how *" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSegment>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_LoopingCount_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_LoopingCount = { UE4CodeGen_Private::EPropertyClass::Int, "LoopingCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimSegment, LoopingCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_LoopingCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_LoopingCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimPlayRate_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Playback speed of this animation. If you'd like to reverse, set -1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "AnimPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimSegment, AnimPlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimPlayRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimEndTime_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Time to end playing the AnimSequence at." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimEndTime = { UE4CodeGen_Private::EPropertyClass::Float, "AnimEndTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimSegment, AnimEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimEndTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimStartTime_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Time to start playing AnimSequence at." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "AnimStartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimSegment, AnimStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimStartTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_StartPos_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Start Pos within this AnimCompositeBase" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_StartPos = { UE4CodeGen_Private::EPropertyClass::Float, "StartPos", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FAnimSegment, StartPos), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_StartPos_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_StartPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimReference_MetaData[] = {
		{ "Category", "AnimSegment" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Anim Reference to play - only allow AnimSequence or AnimComposite *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimReference = { UE4CodeGen_Private::EPropertyClass::Object, "AnimReference", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimSegment, AnimReference), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimReference_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_LoopingCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_StartPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSegment_Statics::NewProp_AnimReference,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimSegment",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimSegment),
		alignof(FAnimSegment),
		Z_Construct_UScriptStruct_FAnimSegment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSegment_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSegment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimSegment_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimSegment"), sizeof(FAnimSegment), Get_Z_Construct_UScriptStruct_FAnimSegment_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimSegment_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimSegment_CRC() { return 3996813743U; }
class UScriptStruct* FRootMotionExtractionStep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionExtractionStep_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionExtractionStep, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionExtractionStep"), sizeof(FRootMotionExtractionStep), Get_Z_Construct_UScriptStruct_FRootMotionExtractionStep_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionExtractionStep(FRootMotionExtractionStep::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionExtractionStep"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionExtractionStep
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionExtractionStep()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootMotionExtractionStep")),new UScriptStruct::TCppStructOps<FRootMotionExtractionStep>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionExtractionStep;
	struct Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Struct defining a RootMotionExtractionStep.\nWhen extracting RootMotion we can encounter looping animations (wrap around), or different animations.\nWe break those up into different steps, to help with RootMotion extraction,\nas we can only extract a contiguous range per AnimSequence." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionExtractionStep>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_EndPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "End position to extract root motion to." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_EndPosition = { UE4CodeGen_Private::EPropertyClass::Float, "EndPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionExtractionStep, EndPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_EndPosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_EndPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_StartPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "Start position to extract root motion from." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_StartPosition = { UE4CodeGen_Private::EPropertyClass::Float, "StartPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionExtractionStep, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_StartPosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
		{ "ToolTip", "AnimSequence ref" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_AnimSequence = { UE4CodeGen_Private::EPropertyClass::Object, "AnimSequence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionExtractionStep, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_AnimSequence_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_AnimSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_EndPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_StartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::NewProp_AnimSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RootMotionExtractionStep",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRootMotionExtractionStep),
		alignof(FRootMotionExtractionStep),
		Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionExtractionStep()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionExtractionStep_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionExtractionStep"), sizeof(FRootMotionExtractionStep), Get_Z_Construct_UScriptStruct_FRootMotionExtractionStep_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootMotionExtractionStep_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionExtractionStep_CRC() { return 1372811193U; }
	void UAnimCompositeBase::StaticRegisterNativesUAnimCompositeBase()
	{
	}
	UClass* Z_Construct_UClass_UAnimCompositeBase_NoRegister()
	{
		return UAnimCompositeBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompositeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompositeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimSequenceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompositeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimCompositeBase.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompositeBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompositeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompositeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompositeBase_Statics::ClassParams = {
		&UAnimCompositeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompositeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimCompositeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompositeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimCompositeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimCompositeBase, 3500614711);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimCompositeBase(Z_Construct_UClass_UAnimCompositeBase, &UAnimCompositeBase::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimCompositeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompositeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
