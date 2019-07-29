// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_RotationMultiplier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RotationMultiplier() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_RotationMultiplier::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RotationMultiplier"), sizeof(FAnimNode_RotationMultiplier), Get_Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_RotationMultiplier(FAnimNode_RotationMultiplier::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_RotationMultiplier"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RotationMultiplier
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RotationMultiplier()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_RotationMultiplier")),new UScriptStruct::TCppStructOps<FAnimNode_RotationMultiplier>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RotationMultiplier;
	struct Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAdditive_MetaData[];
#endif
		static void NewProp_bIsAdditive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAdditive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationAxisToRefer_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationAxisToRefer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RotationMultiplier.h" },
		{ "ToolTip", "Simple controller that multiplies scalar value to the translation/rotation/scale of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RotationMultiplier>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_bIsAdditive_MetaData[] = {
		{ "Category", "Multiplier" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RotationMultiplier.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_bIsAdditive_SetBit(void* Obj)
	{
		((FAnimNode_RotationMultiplier*)Obj)->bIsAdditive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_bIsAdditive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAdditive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_RotationMultiplier), &Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_bIsAdditive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_bIsAdditive_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_bIsAdditive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_RotationAxisToRefer_MetaData[] = {
		{ "Category", "Multiplier" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RotationMultiplier.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_RotationAxisToRefer = { UE4CodeGen_Private::EPropertyClass::Byte, "RotationAxisToRefer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_RotationMultiplier, RotationAxisToRefer), Z_Construct_UEnum_Engine_EBoneAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_RotationAxisToRefer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_RotationAxisToRefer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "Multiplier" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RotationMultiplier.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "To make these to be easily pin-hookable, I'm not making it struct, but each variable\n0.f is invalid, and default" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_Multiplier = { UE4CodeGen_Private::EPropertyClass::Float, "Multiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_RotationMultiplier, Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_Multiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_SourceBone_MetaData[] = {
		{ "Category", "Multiplier" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RotationMultiplier.h" },
		{ "ToolTip", "Source to get transform from" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_SourceBone = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_RotationMultiplier, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_SourceBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_SourceBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_TargetBone_MetaData[] = {
		{ "Category", "Multiplier" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RotationMultiplier.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_TargetBone = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_RotationMultiplier, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_TargetBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_TargetBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_bIsAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_RotationAxisToRefer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_Multiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_SourceBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::NewProp_TargetBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_RotationMultiplier",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_RotationMultiplier),
		alignof(FAnimNode_RotationMultiplier),
		Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_RotationMultiplier"), sizeof(FAnimNode_RotationMultiplier), Get_Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RotationMultiplier_CRC() { return 1842720624U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
