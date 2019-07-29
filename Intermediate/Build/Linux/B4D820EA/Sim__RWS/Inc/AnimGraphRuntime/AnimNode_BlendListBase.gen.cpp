// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendListBase() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSampleData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_BlendListBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendListBase"), sizeof(FAnimNode_BlendListBase), Get_Z_Construct_UScriptStruct_FAnimNode_BlendListBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_BlendListBase(FAnimNode_BlendListBase::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_BlendListBase"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListBase
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_BlendListBase")),new UScriptStruct::TCppStructOps<FAnimNode_BlendListBase>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_BlendListBase;
	struct Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetChildOnActivation_MetaData[];
#endif
		static void NewProp_bResetChildOnActivation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetChildOnActivation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerBoneSampleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerBoneSampleData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerBoneSampleData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastActiveChildIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastActiveChildIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingBlendTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemainingBlendTimes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemainingBlendTimes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendWeights_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendWeights;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendWeights_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blends_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Blends;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Blends_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomBlendCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomBlendCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendPose;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendPose_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
		{ "ToolTip", "Blend list node; has many children" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendListBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_bResetChildOnActivation_MetaData[] = {
		{ "Category", "Option" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
		{ "ToolTip", "This reinitializes child pose when re-activated. For example, when active child changes" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_bResetChildOnActivation_SetBit(void* Obj)
	{
		((FAnimNode_BlendListBase*)Obj)->bResetChildOnActivation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_bResetChildOnActivation = { UE4CodeGen_Private::EPropertyClass::Bool, "bResetChildOnActivation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_BlendListBase), &Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_bResetChildOnActivation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_bResetChildOnActivation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_bResetChildOnActivation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_PerBoneSampleData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_PerBoneSampleData = { UE4CodeGen_Private::EPropertyClass::Array, "PerBoneSampleData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, PerBoneSampleData), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_PerBoneSampleData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_PerBoneSampleData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_PerBoneSampleData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PerBoneSampleData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlendSampleData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_LastActiveChildIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_LastActiveChildIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LastActiveChildIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, LastActiveChildIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_LastActiveChildIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_LastActiveChildIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_RemainingBlendTimes_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_RemainingBlendTimes = { UE4CodeGen_Private::EPropertyClass::Array, "RemainingBlendTimes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, RemainingBlendTimes), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_RemainingBlendTimes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_RemainingBlendTimes_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_RemainingBlendTimes_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "RemainingBlendTimes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendWeights = { UE4CodeGen_Private::EPropertyClass::Array, "BlendWeights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, BlendWeights), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendWeights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendWeights_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendWeights_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "BlendWeights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_Blends_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_Blends = { UE4CodeGen_Private::EPropertyClass::Array, "Blends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, Blends), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_Blends_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_Blends_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_Blends_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Blends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendProfile_MetaData[] = {
		{ "Category", "BlendType" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendProfile = { UE4CodeGen_Private::EPropertyClass::Object, "BlendProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendProfile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_CustomBlendCurve_MetaData[] = {
		{ "Category", "BlendType" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_CustomBlendCurve = { UE4CodeGen_Private::EPropertyClass::Object, "CustomBlendCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, CustomBlendCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_CustomBlendCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_CustomBlendCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendType_MetaData[] = {
		{ "Category", "BlendType" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendType = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, BlendType), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendTime = { UE4CodeGen_Private::EPropertyClass::Array, "BlendTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000045, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, BlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendTime_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendTime_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "BlendTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendPose = { UE4CodeGen_Private::EPropertyClass::Array, "BlendPose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000045, 1, nullptr, STRUCT_OFFSET(FAnimNode_BlendListBase, BlendPose), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendPose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendPose_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendPose_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BlendPose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_bResetChildOnActivation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_PerBoneSampleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_PerBoneSampleData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_LastActiveChildIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_RemainingBlendTimes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_RemainingBlendTimes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendWeights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendWeights_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_Blends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_Blends_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_CustomBlendCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendTime_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendPose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::NewProp_BlendPose_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_BlendListBase",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_BlendListBase),
		alignof(FAnimNode_BlendListBase),
		Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_BlendListBase"), sizeof(FAnimNode_BlendListBase), Get_Z_Construct_UScriptStruct_FAnimNode_BlendListBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_BlendListBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_BlendListBase_CRC() { return 2366730095U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
