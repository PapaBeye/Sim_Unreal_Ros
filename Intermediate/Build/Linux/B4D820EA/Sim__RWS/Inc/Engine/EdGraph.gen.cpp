// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/EdGraph/EdGraph.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraph() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FGraphReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGraphReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphReference, Z_Construct_UPackage__Script_Engine(), TEXT("GraphReference"), sizeof(FGraphReference), Get_Z_Construct_UScriptStruct_FGraphReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGraphReference(FGraphReference::StaticStruct, TEXT("/Script/Engine"), TEXT("GraphReference"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGraphReference
{
	FScriptStruct_Engine_StaticRegisterNativesFGraphReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GraphReference")),new UScriptStruct::TCppStructOps<FGraphReference>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGraphReference;
	struct Z_Construct_UScriptStruct_FGraphReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MacroGraph;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGraphReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "The graph GUID so we can refind it if it has been renamed" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "GraphGuid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FGraphReference, GraphGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphGuid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphBlueprint_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "The blueprint the graph is contained within" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphBlueprint = { UE4CodeGen_Private::EPropertyClass::Object, "GraphBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FGraphReference, GraphBlueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphBlueprint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_MacroGraph_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "Reference to the actual graph" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_MacroGraph = { UE4CodeGen_Private::EPropertyClass::Object, "MacroGraph", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(FGraphReference, MacroGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_MacroGraph_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_MacroGraph_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGraphReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_GraphBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphReference_Statics::NewProp_MacroGraph,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GraphReference",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FGraphReference),
		alignof(FGraphReference),
		Z_Construct_UScriptStruct_FGraphReference_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphReference_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGraphReference_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGraphReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGraphReference_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GraphReference"), sizeof(FGraphReference), Get_Z_Construct_UScriptStruct_FGraphReference_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGraphReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGraphReference_CRC() { return 1206060722U; }
	void UEdGraph::StaticRegisterNativesUEdGraph()
	{
	}
	UClass* Z_Construct_UClass_UEdGraph_NoRegister()
	{
		return UEdGraph::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterfaceGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterfaceGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubGraphs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubGraphs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubGraphs_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRenaming_MetaData[];
#endif
		static void NewProp_bAllowRenaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRenaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDeletion_MetaData[];
#endif
		static void NewProp_bAllowDeletion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDeletion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditable_MetaData[];
#endif
		static void NewProp_bEditable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Schema_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Schema;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/EdGraph.h" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "SerializeToFArchive", "WITH_EDITORONLY_DATA" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_InterfaceGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "Guid of interface graph this graph comes from (used for conforming)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_InterfaceGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "InterfaceGuid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEdGraph, InterfaceGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_InterfaceGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_InterfaceGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_GraphGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "Guid for this graph" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_GraphGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "GraphGuid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEdGraph, GraphGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_GraphGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_GraphGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "Child graphs that are a part of this graph; the separation is purely visual" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs = { UE4CodeGen_Private::EPropertyClass::Array, "SubGraphs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEdGraph, SubGraphs), METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SubGraphs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "If true, graph can be renamed; Note: Graph can also be renamed if bAllowDeletion is true currently" },
	};
#endif
	void Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming_SetBit(void* Obj)
	{
		((UEdGraph*)Obj)->bAllowRenaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowRenaming", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraph), &Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "If true, graph can be deleted from the whatever container it is in. For FunctionGraphs\nthis flag is reset to false on load (unless the function is the construction script or\nAnimGraph)" },
	};
#endif
	void Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion_SetBit(void* Obj)
	{
		((UEdGraph*)Obj)->bAllowDeletion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowDeletion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraph), &Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "If true, graph can be edited by the user" },
	};
#endif
	void Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable_SetBit(void* Obj)
	{
		((UEdGraph*)Obj)->bEditable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEditable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UEdGraph), &Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "Set of all nodes in this graph" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes = { UE4CodeGen_Private::EPropertyClass::Array, "Nodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraph, Nodes), METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Nodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_Statics::NewProp_Schema_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraph.h" },
		{ "ToolTip", "The schema that this graph obeys" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEdGraph_Statics::NewProp_Schema = { UE4CodeGen_Private::EPropertyClass::Class, "Schema", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(UEdGraph, Schema), Z_Construct_UClass_UEdGraphSchema_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::NewProp_Schema_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::NewProp_Schema_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraph_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_InterfaceGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_GraphGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_SubGraphs_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowRenaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_bAllowDeletion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_bEditable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_Nodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_Statics::NewProp_Schema,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdGraph_Statics::ClassParams = {
		&UEdGraph::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UEdGraph_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdGraph, 320772083);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraph(Z_Construct_UClass_UEdGraph, &UEdGraph::StaticClass, TEXT("/Script/Engine"), TEXT("UEdGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraph);
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEdGraph)
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
