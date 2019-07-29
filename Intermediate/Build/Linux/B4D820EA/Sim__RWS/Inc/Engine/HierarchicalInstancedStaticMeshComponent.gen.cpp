// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHierarchicalInstancedStaticMeshComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClusterNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClusterNode_DEPRECATED();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
// End Cross Module References
class UScriptStruct* FClusterNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FClusterNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterNode, Z_Construct_UPackage__Script_Engine(), TEXT("ClusterNode"), sizeof(FClusterNode), Get_Z_Construct_UScriptStruct_FClusterNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClusterNode(FClusterNode::StaticStruct, TEXT("/Script/Engine"), TEXT("ClusterNode"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFClusterNode
{
	FScriptStruct_Engine_StaticRegisterNativesFClusterNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClusterNode")),new UScriptStruct::TCppStructOps<FClusterNode>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFClusterNode;
	struct Z_Construct_UScriptStruct_FClusterNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInstanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxInstanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInstanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinInstanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastChild_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastChild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstChild_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstChild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundMin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClusterNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale = { UE4CodeGen_Private::EPropertyClass::Struct, "MaxInstanceScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode, MaxInstanceScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale = { UE4CodeGen_Private::EPropertyClass::Struct, "MinInstanceScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode, MinInstanceScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance = { UE4CodeGen_Private::EPropertyClass::Int, "LastInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode, LastInstance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance = { UE4CodeGen_Private::EPropertyClass::Int, "FirstInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode, FirstInstance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild = { UE4CodeGen_Private::EPropertyClass::Int, "LastChild", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode, LastChild), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode, BoundMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild = { UE4CodeGen_Private::EPropertyClass::Int, "FirstChild", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode, FirstChild), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode, BoundMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MaxInstanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_MinInstanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_LastChild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_FirstChild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_Statics::NewProp_BoundMin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ClusterNode",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FClusterNode),
		alignof(FClusterNode),
		Z_Construct_UScriptStruct_FClusterNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClusterNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClusterNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClusterNode"), sizeof(FClusterNode), Get_Z_Construct_UScriptStruct_FClusterNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClusterNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClusterNode_CRC() { return 274074600U; }
class UScriptStruct* FClusterNode_DEPRECATED::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED, Z_Construct_UPackage__Script_Engine(), TEXT("ClusterNode_DEPRECATED"), sizeof(FClusterNode_DEPRECATED), Get_Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClusterNode_DEPRECATED(FClusterNode_DEPRECATED::StaticStruct, TEXT("/Script/Engine"), TEXT("ClusterNode_DEPRECATED"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFClusterNode_DEPRECATED
{
	FScriptStruct_Engine_StaticRegisterNativesFClusterNode_DEPRECATED()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClusterNode_DEPRECATED")),new UScriptStruct::TCppStructOps<FClusterNode_DEPRECATED>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFClusterNode_DEPRECATED;
	struct Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastChild_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastChild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstChild_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstChild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoundMin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Due to BulkSerialize we can't edit the struct, so we must deprecated this one and create a new one" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterNode_DEPRECATED>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance = { UE4CodeGen_Private::EPropertyClass::Int, "LastInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode_DEPRECATED, LastInstance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance = { UE4CodeGen_Private::EPropertyClass::Int, "FirstInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode_DEPRECATED, FirstInstance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild = { UE4CodeGen_Private::EPropertyClass::Int, "LastChild", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode_DEPRECATED, LastChild), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode_DEPRECATED, BoundMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild = { UE4CodeGen_Private::EPropertyClass::Int, "FirstChild", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode_DEPRECATED, FirstChild), METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin = { UE4CodeGen_Private::EPropertyClass::Struct, "BoundMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClusterNode_DEPRECATED, BoundMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_LastChild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_FirstChild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::NewProp_BoundMin,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ClusterNode_DEPRECATED",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FClusterNode_DEPRECATED),
		alignof(FClusterNode_DEPRECATED),
		Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClusterNode_DEPRECATED()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClusterNode_DEPRECATED"), sizeof(FClusterNode_DEPRECATED), Get_Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClusterNode_DEPRECATED_CRC() { return 4236142191U; }
	void UHierarchicalInstancedStaticMeshComponent::StaticRegisterNativesUHierarchicalInstancedStaticMeshComponent()
	{
		UClass* Class = UHierarchicalInstancedStaticMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveInstances", &UHierarchicalInstancedStaticMeshComponent::execRemoveInstances },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics
	{
		struct HierarchicalInstancedStaticMeshComponent_eventRemoveInstances_Parms
		{
			TArray<int32> InstancesToRemove;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancesToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancesToRemove;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstancesToRemove_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HierarchicalInstancedStaticMeshComponent_eventRemoveInstances_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HierarchicalInstancedStaticMeshComponent_eventRemoveInstances_Parms), &Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove = { UE4CodeGen_Private::EPropertyClass::Array, "InstancesToRemove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(HierarchicalInstancedStaticMeshComponent_eventRemoveInstances_Parms, InstancesToRemove), METADATA_PARAMS(Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "InstancesToRemove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::NewProp_InstancesToRemove_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Removes all the instances with indices specified in the InstancesToRemove array. Returns true on success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent, "RemoveInstances", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(HierarchicalInstancedStaticMeshComponent_eventRemoveInstances_Parms), Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister()
	{
		return UHierarchicalInstancedStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceCountToRender_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceCountToRender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[];
#endif
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheMeshExtendedBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CacheMeshExtendedBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionLayerNumNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OcclusionLayerNumNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDensityScaling_MetaData[];
#endif
		static void NewProp_bEnableDensityScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDensityScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnbuiltInstanceBoundsList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnbuiltInstanceBoundsList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnbuiltInstanceBoundsList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnbuiltInstanceBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnbuiltInstanceBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuiltInstanceBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuiltInstanceBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBuiltInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBuiltInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortedInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortedInstances;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortedInstances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInstancedStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHierarchicalInstancedStaticMeshComponent_RemoveInstances, "RemoveInstances" }, // 3901921714
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Instances to render (including removed one until the build is complete)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender = { UE4CodeGen_Private::EPropertyClass::Int, "InstanceCountToRender", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, InstanceCountToRender), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((UHierarchicalInstancedStaticMeshComponent*)Obj)->bDisableCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UHierarchicalInstancedStaticMeshComponent), &Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "The last mesh bounds that was cache" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "CacheMeshExtendedBounds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, CacheMeshExtendedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "The number of nodes in the occlusion layer" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes = { UE4CodeGen_Private::EPropertyClass::Int, "OcclusionLayerNumNodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, OcclusionLayerNumNodes), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Enable for detail meshes that don't really affect the game. Disable for anything important.\nTypically, this will be enabled for small meshes without collision (e.g. grass) and disabled for large meshes with collision (e.g. trees)" },
	};
#endif
	void Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_SetBit(void* Obj)
	{
		((UHierarchicalInstancedStaticMeshComponent*)Obj)->bEnableDensityScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDensityScaling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UHierarchicalInstancedStaticMeshComponent), &Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Bounds of each individual unbuilt instance, used for LOD calculation" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList = { UE4CodeGen_Private::EPropertyClass::Array, "UnbuiltInstanceBoundsList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, UnbuiltInstanceBoundsList), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UnbuiltInstanceBoundsList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Bounding box of any unbuilt instances" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "UnbuiltInstanceBounds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, UnbuiltInstanceBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Bounding box of any built instances (cached from the ClusterTree)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "BuiltInstanceBounds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, BuiltInstanceBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "The number of instances in the ClusterTree. Subsequent instances will always be rendered." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances = { UE4CodeGen_Private::EPropertyClass::Int, "NumBuiltInstances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, NumBuiltInstances), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/HierarchicalInstancedStaticMeshComponent.h" },
		{ "ToolTip", "Table for remaping instances from cluster tree to PerInstanceSMData order" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances = { UE4CodeGen_Private::EPropertyClass::Array, "SortedInstances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UHierarchicalInstancedStaticMeshComponent, SortedInstances), METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "SortedInstances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_InstanceCountToRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bDisableCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_CacheMeshExtendedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_OcclusionLayerNumNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_bEnableDensityScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBoundsList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_UnbuiltInstanceBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_BuiltInstanceBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_NumBuiltInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::NewProp_SortedInstances_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHierarchicalInstancedStaticMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::ClassParams = {
		&UHierarchicalInstancedStaticMeshComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHierarchicalInstancedStaticMeshComponent, 1791664709);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHierarchicalInstancedStaticMeshComponent(Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent, &UHierarchicalInstancedStaticMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UHierarchicalInstancedStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHierarchicalInstancedStaticMeshComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UHierarchicalInstancedStaticMeshComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
