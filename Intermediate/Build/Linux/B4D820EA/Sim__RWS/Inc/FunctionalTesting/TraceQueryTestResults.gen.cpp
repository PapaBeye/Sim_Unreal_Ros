// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTesting/Classes/TraceQueryTestResults.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTraceQueryTestResults() {}
// Cross Module References
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestResultsInner();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestNames();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTraceQueryTestResults_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTraceQueryTestResults();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UTraceQueryTestResults_ToString();
// End Cross Module References
class UScriptStruct* FTraceQueryTestResultsInner::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUNCTIONALTESTING_API uint32 Get_Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner, Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("TraceQueryTestResultsInner"), sizeof(FTraceQueryTestResultsInner), Get_Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTraceQueryTestResultsInner(FTraceQueryTestResultsInner::StaticStruct, TEXT("/Script/FunctionalTesting"), TEXT("TraceQueryTestResultsInner"), false, nullptr, nullptr);
static struct FScriptStruct_FunctionalTesting_StaticRegisterNativesFTraceQueryTestResultsInner
{
	FScriptStruct_FunctionalTesting_StaticRegisterNativesFTraceQueryTestResultsInner()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TraceQueryTestResultsInner")),new UScriptStruct::TCppStructOps<FTraceQueryTestResultsInner>);
	}
} ScriptStruct_FunctionalTesting_StaticRegisterNativesFTraceQueryTestResultsInner;
	struct Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceQueryTestResultsInner>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_BoxResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The results associated with the box" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_BoxResults = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000005, 1, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInner, BoxResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_BoxResults_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_BoxResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_CapsuleResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The results associated with the capsule" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_CapsuleResults = { UE4CodeGen_Private::EPropertyClass::Struct, "CapsuleResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000005, 1, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInner, CapsuleResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_CapsuleResults_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_CapsuleResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_SphereResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The results associated with the sphere" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_SphereResults = { UE4CodeGen_Private::EPropertyClass::Struct, "SphereResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000005, 1, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInner, SphereResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_SphereResults_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_SphereResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_LineResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The results associated with the line trace" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_LineResults = { UE4CodeGen_Private::EPropertyClass::Struct, "LineResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000005, 1, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInner, LineResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_LineResults_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_LineResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_BoxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_CapsuleResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_SphereResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::NewProp_LineResults,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		&NewStructOps,
		"TraceQueryTestResultsInner",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FTraceQueryTestResultsInner),
		alignof(FTraceQueryTestResultsInner),
		Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestResultsInner()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FunctionalTesting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TraceQueryTestResultsInner"), sizeof(FTraceQueryTestResultsInner), Get_Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_CRC() { return 1491712930U; }
class UScriptStruct* FTraceQueryTestResultsInnerMost::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUNCTIONALTESTING_API uint32 Get_Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost, Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("TraceQueryTestResultsInnerMost"), sizeof(FTraceQueryTestResultsInnerMost), Get_Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTraceQueryTestResultsInnerMost(FTraceQueryTestResultsInnerMost::StaticStruct, TEXT("/Script/FunctionalTesting"), TEXT("TraceQueryTestResultsInnerMost"), false, nullptr, nullptr);
static struct FScriptStruct_FunctionalTesting_StaticRegisterNativesFTraceQueryTestResultsInnerMost
{
	FScriptStruct_FunctionalTesting_StaticRegisterNativesFTraceQueryTestResultsInnerMost()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TraceQueryTestResultsInnerMost")),new UScriptStruct::TCppStructOps<FTraceQueryTestResultsInnerMost>);
	}
} ScriptStruct_FunctionalTesting_StaticRegisterNativesFTraceQueryTestResultsInnerMost;
	struct Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiResult_MetaData[];
#endif
		static void NewProp_bMultiResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MultiNames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MultiNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiHits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MultiHits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MultiHits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSingleResult_MetaData[];
#endif
		static void NewProp_bSingleResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSingleResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SingleNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SingleHit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceQueryTestResultsInnerMost>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The true/false value returned from the multi sweep" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult_SetBit(void* Obj)
	{
		((FTraceQueryTestResultsInnerMost*)Obj)->bMultiResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult = { UE4CodeGen_Private::EPropertyClass::Bool, "bMultiResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTraceQueryTestResultsInnerMost), &Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Names found from doing a multi sweep" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames = { UE4CodeGen_Private::EPropertyClass::Array, "MultiNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInnerMost, MultiNames), METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MultiNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTraceQueryTestNames, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Result from doing a multi sweep" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits = { UE4CodeGen_Private::EPropertyClass::Array, "MultiHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000005, 1, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInnerMost, MultiHits), METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MultiHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "The true/false value returned from the single sweep" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult_SetBit(void* Obj)
	{
		((FTraceQueryTestResultsInnerMost*)Obj)->bSingleResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult = { UE4CodeGen_Private::EPropertyClass::Bool, "bSingleResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTraceQueryTestResultsInnerMost), &Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleNames_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Names found from doing a single sweep" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleNames = { UE4CodeGen_Private::EPropertyClass::Struct, "SingleNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInnerMost, SingleNames), Z_Construct_UScriptStruct_FTraceQueryTestNames, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleNames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleHit_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Result from doing a single sweep" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleHit = { UE4CodeGen_Private::EPropertyClass::Struct, "SingleHit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000005, 1, nullptr, STRUCT_OFFSET(FTraceQueryTestResultsInnerMost, SingleHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleHit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleHit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bMultiResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_MultiHits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_bSingleResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::NewProp_SingleHit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		&NewStructOps,
		"TraceQueryTestResultsInnerMost",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FTraceQueryTestResultsInnerMost),
		alignof(FTraceQueryTestResultsInnerMost),
		Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FunctionalTesting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TraceQueryTestResultsInnerMost"), sizeof(FTraceQueryTestResultsInnerMost), Get_Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_CRC() { return 825219164U; }
class UScriptStruct* FTraceQueryTestNames::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUNCTIONALTESTING_API uint32 Get_Z_Construct_UScriptStruct_FTraceQueryTestNames_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceQueryTestNames, Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("TraceQueryTestNames"), sizeof(FTraceQueryTestNames), Get_Z_Construct_UScriptStruct_FTraceQueryTestNames_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTraceQueryTestNames(FTraceQueryTestNames::StaticStruct, TEXT("/Script/FunctionalTesting"), TEXT("TraceQueryTestNames"), false, nullptr, nullptr);
static struct FScriptStruct_FunctionalTesting_StaticRegisterNativesFTraceQueryTestNames
{
	FScriptStruct_FunctionalTesting_StaticRegisterNativesFTraceQueryTestNames()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TraceQueryTestNames")),new UScriptStruct::TCppStructOps<FTraceQueryTestNames>);
	}
} ScriptStruct_FunctionalTesting_StaticRegisterNativesFTraceQueryTestNames;
	struct Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PhysicalMaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ComponentName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceQueryTestNames>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ActorName_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ActorName = { UE4CodeGen_Private::EPropertyClass::Name, "ActorName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTraceQueryTestNames, ActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ActorName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ActorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_PhysicalMaterialName_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_PhysicalMaterialName = { UE4CodeGen_Private::EPropertyClass::Name, "PhysicalMaterialName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTraceQueryTestNames, PhysicalMaterialName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_PhysicalMaterialName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_PhysicalMaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ComponentName = { UE4CodeGen_Private::EPropertyClass::Name, "ComponentName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTraceQueryTestNames, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ComponentName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ComponentName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ActorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_PhysicalMaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::NewProp_ComponentName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		&NewStructOps,
		"TraceQueryTestNames",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FTraceQueryTestNames),
		alignof(FTraceQueryTestNames),
		Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTraceQueryTestNames()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTraceQueryTestNames_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FunctionalTesting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TraceQueryTestNames"), sizeof(FTraceQueryTestNames), Get_Z_Construct_UScriptStruct_FTraceQueryTestNames_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTraceQueryTestNames_CRC() { return 1717907297U; }
class UScriptStruct* FTraceChannelTestBatchOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FUNCTIONALTESTING_API uint32 Get_Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions, Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("TraceChannelTestBatchOptions"), sizeof(FTraceChannelTestBatchOptions), Get_Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTraceChannelTestBatchOptions(FTraceChannelTestBatchOptions::StaticStruct, TEXT("/Script/FunctionalTesting"), TEXT("TraceChannelTestBatchOptions"), false, nullptr, nullptr);
static struct FScriptStruct_FunctionalTesting_StaticRegisterNativesFTraceChannelTestBatchOptions
{
	FScriptStruct_FunctionalTesting_StaticRegisterNativesFTraceChannelTestBatchOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TraceChannelTestBatchOptions")),new UScriptStruct::TCppStructOps<FTraceChannelTestBatchOptions>);
	}
} ScriptStruct_FunctionalTesting_StaticRegisterNativesFTraceChannelTestBatchOptions;
	struct Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProfileTrace_MetaData[];
#endif
		static void NewProp_bProfileTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProfileTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bObjectsTrace_MetaData[];
#endif
		static void NewProp_bObjectsTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bObjectsTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChannelTrace_MetaData[];
#endif
		static void NewProp_bChannelTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChannelTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBoxTrace_MetaData[];
#endif
		static void NewProp_bBoxTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBoxTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCapsuleTrace_MetaData[];
#endif
		static void NewProp_bCapsuleTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCapsuleTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSphereTrace_MetaData[];
#endif
		static void NewProp_bSphereTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSphereTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLineTrace_MetaData[];
#endif
		static void NewProp_bLineTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLineTrace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceChannelTestBatchOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do profile traces" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace_SetBit(void* Obj)
	{
		((FTraceChannelTestBatchOptions*)Obj)->bProfileTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace = { UE4CodeGen_Private::EPropertyClass::Bool, "bProfileTrace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do object traces" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace_SetBit(void* Obj)
	{
		((FTraceChannelTestBatchOptions*)Obj)->bObjectsTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace = { UE4CodeGen_Private::EPropertyClass::Bool, "bObjectsTrace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do channel traces" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace_SetBit(void* Obj)
	{
		((FTraceChannelTestBatchOptions*)Obj)->bChannelTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace = { UE4CodeGen_Private::EPropertyClass::Bool, "bChannelTrace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do box traces" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace_SetBit(void* Obj)
	{
		((FTraceChannelTestBatchOptions*)Obj)->bBoxTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace = { UE4CodeGen_Private::EPropertyClass::Bool, "bBoxTrace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do capsule traces" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace_SetBit(void* Obj)
	{
		((FTraceChannelTestBatchOptions*)Obj)->bCapsuleTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace = { UE4CodeGen_Private::EPropertyClass::Bool, "bCapsuleTrace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do sphere traces" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace_SetBit(void* Obj)
	{
		((FTraceChannelTestBatchOptions*)Obj)->bSphereTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace = { UE4CodeGen_Private::EPropertyClass::Bool, "bSphereTrace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Whether to do line traces" },
	};
#endif
	void Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace_SetBit(void* Obj)
	{
		((FTraceChannelTestBatchOptions*)Obj)->bLineTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace = { UE4CodeGen_Private::EPropertyClass::Bool, "bLineTrace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTraceChannelTestBatchOptions), &Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bProfileTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bObjectsTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bChannelTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bBoxTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bCapsuleTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bSphereTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::NewProp_bLineTrace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		&NewStructOps,
		"TraceChannelTestBatchOptions",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FTraceChannelTestBatchOptions),
		alignof(FTraceChannelTestBatchOptions),
		Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FunctionalTesting();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TraceChannelTestBatchOptions"), sizeof(FTraceChannelTestBatchOptions), Get_Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_CRC() { return 1286844154U; }
	void UTraceQueryTestResults::StaticRegisterNativesUTraceQueryTestResults()
	{
		UClass* Class = UTraceQueryTestResults::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToString", &UTraceQueryTestResults::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics
	{
		struct TraceQueryTestResults_eventToString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TraceQueryTestResults_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Output string value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraceQueryTestResults, "ToString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TraceQueryTestResults_eventToString_Parms), Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTraceQueryTestResults_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTraceQueryTestResults_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTraceQueryTestResults_NoRegister()
	{
		return UTraceQueryTestResults::StaticClass();
	}
	struct Z_Construct_UClass_UTraceQueryTestResults_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatchOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BatchOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChannelResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTraceQueryTestResults_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTraceQueryTestResults_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTraceQueryTestResults_ToString, "ToString" }, // 2992271692
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceQueryTestResults_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TraceQueryTestResults.h" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_BatchOptions_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_BatchOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "BatchOptions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UTraceQueryTestResults, BatchOptions), Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions, METADATA_PARAMS(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_BatchOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_BatchOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ProfileResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Results for profile trace" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ProfileResults = { UE4CodeGen_Private::EPropertyClass::Struct, "ProfileResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000005, 1, nullptr, STRUCT_OFFSET(UTraceQueryTestResults, ProfileResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInner, METADATA_PARAMS(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ProfileResults_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ProfileResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ObjectResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Results for object trace" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ObjectResults = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000005, 1, nullptr, STRUCT_OFFSET(UTraceQueryTestResults, ObjectResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInner, METADATA_PARAMS(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ObjectResults_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ObjectResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ChannelResults_MetaData[] = {
		{ "Category", "Utility|Collision" },
		{ "ModuleRelativePath", "Classes/TraceQueryTestResults.h" },
		{ "ToolTip", "Results for channel trace" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ChannelResults = { UE4CodeGen_Private::EPropertyClass::Struct, "ChannelResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000005, 1, nullptr, STRUCT_OFFSET(UTraceQueryTestResults, ChannelResults), Z_Construct_UScriptStruct_FTraceQueryTestResultsInner, METADATA_PARAMS(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ChannelResults_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ChannelResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTraceQueryTestResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_BatchOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ProfileResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ObjectResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTraceQueryTestResults_Statics::NewProp_ChannelResults,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTraceQueryTestResults_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTraceQueryTestResults>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTraceQueryTestResults_Statics::ClassParams = {
		&UTraceQueryTestResults::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UTraceQueryTestResults_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTraceQueryTestResults_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTraceQueryTestResults_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTraceQueryTestResults()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTraceQueryTestResults_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTraceQueryTestResults, 94701533);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTraceQueryTestResults(Z_Construct_UClass_UTraceQueryTestResults, &UTraceQueryTestResults::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("UTraceQueryTestResults"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTraceQueryTestResults);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
