// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceHierarchy() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
class UScriptStruct* FMovieSceneSequenceHierarchy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceHierarchy"), sizeof(FMovieSceneSequenceHierarchy), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequenceHierarchy(FMovieSceneSequenceHierarchy::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequenceHierarchy"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceHierarchy
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceHierarchy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSequenceHierarchy")),new UScriptStruct::TCppStructOps<FMovieSceneSequenceHierarchy>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceHierarchy;
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Hierarchy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hierarchy_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hierarchy_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SubSequences;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubSequences_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubSequences_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Structure that stores hierarchical information pertaining to all sequences contained within a master sequence" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceHierarchy>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Structural information describing the structure of the sequence" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy = { UE4CodeGen_Private::EPropertyClass::Map, "Hierarchy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequenceHierarchy, Hierarchy), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Hierarchy_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Hierarchy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Map of all (recursive) sub sequences found in this template, keyed on sequence ID" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences = { UE4CodeGen_Private::EPropertyClass::Map, "SubSequences", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequenceHierarchy, SubSequences), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Struct, "SubSequences_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "SubSequences", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneSubSequenceData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceHierarchy",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneSequenceHierarchy),
		alignof(FMovieSceneSequenceHierarchy),
		Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequenceHierarchy"), sizeof(FMovieSceneSequenceHierarchy), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_CRC() { return 3491908907U; }
class UScriptStruct* FMovieSceneSequenceHierarchyNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceHierarchyNode"), sizeof(FMovieSceneSequenceHierarchyNode), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSequenceHierarchyNode(FMovieSceneSequenceHierarchyNode::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSequenceHierarchyNode"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceHierarchyNode
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceHierarchyNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSequenceHierarchyNode")),new UScriptStruct::TCppStructOps<FMovieSceneSequenceHierarchyNode>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSequenceHierarchyNode;
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Simple structure specifying parent and child sequence IDs for any given sequences" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceHierarchyNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Array of child sequences contained within this sequence" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children = { UE4CodeGen_Private::EPropertyClass::Array, "Children", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequenceHierarchyNode, Children), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Children", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_ParentID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Movie scene sequence ID of this node's parent sequence" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_ParentID = { UE4CodeGen_Private::EPropertyClass::Struct, "ParentID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSequenceHierarchyNode, ParentID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_ParentID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_ParentID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_ParentID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceHierarchyNode",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneSequenceHierarchyNode),
		alignof(FMovieSceneSequenceHierarchyNode),
		Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSequenceHierarchyNode"), sizeof(FMovieSceneSequenceHierarchyNode), Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_CRC() { return 880463078U; }
class UScriptStruct* FMovieSceneSubSequenceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSubSequenceData"), sizeof(FMovieSceneSubSequenceData), Get_Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSubSequenceData(FMovieSceneSubSequenceData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSubSequenceData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSequenceData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSequenceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSubSequenceData")),new UScriptStruct::TCppStructOps<FMovieSceneSubSequenceData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSequenceData;
	struct Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterToInnerTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OuterToInnerTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSectionSignature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubSectionSignature;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionPath;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HierarchicalBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HierarchicalBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostRollRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostRollRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreRollRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreRollRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeterministicSequenceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeterministicSequenceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootToSequenceTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootToSequenceTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Sub sequence data that is stored within an evaluation template as a backreference to the originating sequence, and section" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSubSequenceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_OuterToInnerTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The transform from this sub sequence's parent to its own play space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_OuterToInnerTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "OuterToInnerTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, OuterToInnerTransform), Z_Construct_UScriptStruct_FMovieSceneSequenceTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_OuterToInnerTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_OuterToInnerTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SubSectionSignature_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The sub section's signature at the time this structure was populated." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SubSectionSignature = { UE4CodeGen_Private::EPropertyClass::Struct, "SubSectionSignature", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, SubSectionSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SubSectionSignature_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SubSectionSignature_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SectionPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "This sequence's path within its movie scene" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SectionPath = { UE4CodeGen_Private::EPropertyClass::Name, "SectionPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, SectionPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SectionPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SectionPath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_InstanceData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Instance data that should be used for any tracks contained immediately within this sub sequence" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_InstanceData = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, InstanceData), Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_InstanceData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_InstanceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_HierarchicalBias_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The accumulated hierarchical bias of this sequence. Higher bias will take precedence" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_HierarchicalBias = { UE4CodeGen_Private::EPropertyClass::Int, "HierarchicalBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, HierarchicalBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_HierarchicalBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_HierarchicalBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PostRollRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The sequence postroll range considering the start offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PostRollRange = { UE4CodeGen_Private::EPropertyClass::Struct, "PostRollRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, PostRollRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PostRollRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PostRollRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PreRollRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The sequence preroll range considering the start offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PreRollRange = { UE4CodeGen_Private::EPropertyClass::Struct, "PreRollRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, PreRollRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PreRollRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PreRollRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PlayRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "This sub sequence's playback range according to its parent sub section. Clamped recursively during template generation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PlayRange = { UE4CodeGen_Private::EPropertyClass::Struct, "PlayRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, PlayRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PlayRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PlayRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_DeterministicSequenceID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "This sequence's deterministic sequence ID. Used in editor to reduce the risk of collisions on recompilation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_DeterministicSequenceID = { UE4CodeGen_Private::EPropertyClass::Struct, "DeterministicSequenceID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, DeterministicSequenceID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_DeterministicSequenceID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_DeterministicSequenceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_TickResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The tick resolution of the inner sequence." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_TickResolution = { UE4CodeGen_Private::EPropertyClass::Struct, "TickResolution", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, TickResolution), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_TickResolution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_TickResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_RootToSequenceTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Transform that transforms a given time from the sequences outer space, to its authored space." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_RootToSequenceTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "RootToSequenceTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, RootToSequenceTransform), Z_Construct_UScriptStruct_FMovieSceneSequenceTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_RootToSequenceTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_RootToSequenceTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_Sequence_MetaData[] = {
		{ "AllowedClasses", "MovieSceneSequence" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The sequence that the sub section references" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_Sequence = { UE4CodeGen_Private::EPropertyClass::Struct, "Sequence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSequenceData, Sequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_Sequence_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_Sequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_OuterToInnerTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SubSectionSignature,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SectionPath,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_InstanceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_HierarchicalBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PostRollRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PreRollRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PlayRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_DeterministicSequenceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_TickResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_RootToSequenceTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_Sequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSubSequenceData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneSubSequenceData),
		alignof(FMovieSceneSubSequenceData),
		Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSubSequenceData"), sizeof(FMovieSceneSubSequenceData), Get_Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_CRC() { return 1256926016U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
