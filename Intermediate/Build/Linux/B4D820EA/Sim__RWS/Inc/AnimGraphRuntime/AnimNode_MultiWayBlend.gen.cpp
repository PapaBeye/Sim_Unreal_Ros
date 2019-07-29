// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_MultiWayBlend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_MultiWayBlend() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_MultiWayBlend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_MultiWayBlend"), sizeof(FAnimNode_MultiWayBlend), Get_Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_MultiWayBlend(FAnimNode_MultiWayBlend::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_MultiWayBlend"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MultiWayBlend
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MultiWayBlend()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_MultiWayBlend")),new UScriptStruct::TCppStructOps<FAnimNode_MultiWayBlend>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_MultiWayBlend;
	struct Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNormalizeAlpha_MetaData[];
#endif
		static void NewProp_bNormalizeAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNormalizeAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdditiveNode_MetaData[];
#endif
		static void NewProp_bAdditiveNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdditiveNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredAlphas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DesiredAlphas;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredAlphas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Poses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Poses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Poses_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
		{ "ToolTip", "This represents a baked transition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MultiWayBlend>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_AlphaScaleBias = { UE4CodeGen_Private::EPropertyClass::Struct, "AlphaScaleBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_MultiWayBlend, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_AlphaScaleBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_AlphaScaleBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha_SetBit(void* Obj)
	{
		((FAnimNode_MultiWayBlend*)Obj)->bNormalizeAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha = { UE4CodeGen_Private::EPropertyClass::Bool, "bNormalizeAlpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_MultiWayBlend), &Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode_SetBit(void* Obj)
	{
		((FAnimNode_MultiWayBlend*)Obj)->bAdditiveNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode = { UE4CodeGen_Private::EPropertyClass::Bool, "bAdditiveNode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_MultiWayBlend), &Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas = { UE4CodeGen_Private::EPropertyClass::Array, "DesiredAlphas", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_MultiWayBlend, DesiredAlphas), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "DesiredAlphas", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses = { UE4CodeGen_Private::EPropertyClass::Array, "Poses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_MultiWayBlend, Poses), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Poses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_AlphaScaleBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_MultiWayBlend",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_MultiWayBlend),
		alignof(FAnimNode_MultiWayBlend),
		Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_MultiWayBlend"), sizeof(FAnimNode_MultiWayBlend), Get_Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_CRC() { return 2264168460U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
