// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_LegIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LegIK() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LegIK();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKData();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKDefinition();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIKChain();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIKChainLink();
// End Cross Module References
class UScriptStruct* FAnimNode_LegIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LegIK_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LegIK, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_LegIK"), sizeof(FAnimNode_LegIK), Get_Z_Construct_UScriptStruct_FAnimNode_LegIK_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LegIK(FAnimNode_LegIK::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_LegIK"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LegIK
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LegIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_LegIK")),new UScriptStruct::TCppStructOps<FAnimNode_LegIK>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LegIK;
	struct Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LegsData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LegsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegsDefinition_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LegsDefinition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LegsDefinition_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachPrecision_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReachPrecision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LegIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsData = { UE4CodeGen_Private::EPropertyClass::Array, "LegsData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNode_LegIK, LegsData), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LegsData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimLegIKData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition = { UE4CodeGen_Private::EPropertyClass::Array, "LegsDefinition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_LegIK, LegsDefinition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LegsDefinition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimLegIKDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Max Number of Iterations." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations = { UE4CodeGen_Private::EPropertyClass::Int, "MaxIterations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_LegIK, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Tolerance for reaching IK Target, in unreal units." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision = { UE4CodeGen_Private::EPropertyClass::Float, "ReachPrecision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_LegIK, ReachPrecision), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_LegIK",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_LegIK),
		alignof(FAnimNode_LegIK),
		Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LegIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LegIK_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LegIK"), sizeof(FAnimNode_LegIK), Get_Z_Construct_UScriptStruct_FAnimNode_LegIK_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LegIK_CRC() { return 2656891784U; }
class UScriptStruct* FAnimLegIKData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimLegIKData, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimLegIKData"), sizeof(FAnimLegIKData), Get_Z_Construct_UScriptStruct_FAnimLegIKData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimLegIKData(FAnimLegIKData::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimLegIKData"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKData
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimLegIKData")),new UScriptStruct::TCppStructOps<FAnimLegIKData>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKData;
	struct Z_Construct_UScriptStruct_FAnimLegIKData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Runtime foot data after validation, we guarantee these bones to exist" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimLegIKData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimLegIKData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimLegIKData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"AnimLegIKData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimLegIKData),
		alignof(FAnimLegIKData),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimLegIKData"), sizeof(FAnimLegIKData), Get_Z_Construct_UScriptStruct_FAnimLegIKData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimLegIKData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKData_CRC() { return 236298032U; }
class UScriptStruct* FAnimLegIKDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKDefinition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimLegIKDefinition, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimLegIKDefinition"), sizeof(FAnimLegIKDefinition), Get_Z_Construct_UScriptStruct_FAnimLegIKDefinition_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimLegIKDefinition(FAnimLegIKDefinition::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimLegIKDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKDefinition
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimLegIKDefinition")),new UScriptStruct::TCppStructOps<FAnimLegIKDefinition>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimLegIKDefinition;
	struct Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableKneeTwistCorrection_MetaData[];
#endif
		static void NewProp_bEnableKneeTwistCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableKneeTwistCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRotationAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRotationAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRotationLimit_MetaData[];
#endif
		static void NewProp_bEnableRotationLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRotationLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HingeRotationAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HingeRotationAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootBoneForwardAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FootBoneForwardAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBonesInLimb_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBonesInLimb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FKFootBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FKFootBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKFootBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKFootBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Per foot definitions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimLegIKDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Enable Knee Twist correction, by comparing Foot FK with Foot IK orientation." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_SetBit(void* Obj)
	{
		((FAnimLegIKDefinition*)Obj)->bEnableKneeTwistCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableKneeTwistCorrection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimLegIKDefinition), &Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Only used if bEnableRotationLimit is enabled. Prevents the leg from folding onto itself,\nand forces at least this angle between Parent and Child bone." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle = { UE4CodeGen_Private::EPropertyClass::Float, "MinRotationAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, MinRotationAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "If enabled, we prevent the leg from bending backwards and enforce a min compression angle" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_SetBit(void* Obj)
	{
		((FAnimLegIKDefinition*)Obj)->bEnableRotationLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableRotationLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimLegIKDefinition), &Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Hinge Bones Rotation Axis. This is essentially the plane normal for (hip - knee - foot)." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "HingeRotationAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, HingeRotationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Forward Axis for Foot bone." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "FootBoneForwardAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, FootBoneForwardAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb = { UE4CodeGen_Private::EPropertyClass::Int, "NumBonesInLimb", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, NumBonesInLimb), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone = { UE4CodeGen_Private::EPropertyClass::Struct, "FKFootBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, FKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone = { UE4CodeGen_Private::EPropertyClass::Struct, "IKFootBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, IKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"AnimLegIKDefinition",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimLegIKDefinition),
		alignof(FAnimLegIKDefinition),
		Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKDefinition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimLegIKDefinition"), sizeof(FAnimLegIKDefinition), Get_Z_Construct_UScriptStruct_FAnimLegIKDefinition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimLegIKDefinition_CRC() { return 875087939U; }
class UScriptStruct* FIKChain::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FIKChain_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKChain, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("IKChain"), sizeof(FIKChain), Get_Z_Construct_UScriptStruct_FIKChain_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIKChain(FIKChain::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("IKChain"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChain
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChain()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IKChain")),new UScriptStruct::TCppStructOps<FIKChain>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChain;
	struct Z_Construct_UScriptStruct_FIKChain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKChain_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIKChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKChain>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"IKChain",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FIKChain),
		alignof(FIKChain),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIKChain_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FIKChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIKChain()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIKChain_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IKChain"), sizeof(FIKChain), Get_Z_Construct_UScriptStruct_FIKChain_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIKChain_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIKChain_CRC() { return 90589816U; }
class UScriptStruct* FIKChainLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FIKChainLink_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKChainLink, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("IKChainLink"), sizeof(FIKChainLink), Get_Z_Construct_UScriptStruct_FIKChainLink_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIKChainLink(FIKChainLink::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("IKChainLink"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChainLink
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChainLink()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IKChainLink")),new UScriptStruct::TCppStructOps<FIKChainLink>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFIKChainLink;
	struct Z_Construct_UScriptStruct_FIKChainLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKChainLink_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIKChainLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKChainLink>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKChainLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"IKChainLink",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FIKChainLink),
		alignof(FIKChainLink),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIKChainLink_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FIKChainLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIKChainLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIKChainLink_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IKChainLink"), sizeof(FIKChainLink), Get_Z_Construct_UScriptStruct_FIKChainLink_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIKChainLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIKChainLink_CRC() { return 1207680429U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
