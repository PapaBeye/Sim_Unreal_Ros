// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleConstructionScript() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USCS_Node_NoRegister();
// End Cross Module References
	void USimpleConstructionScript::StaticRegisterNativesUSimpleConstructionScript()
	{
	}
	UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister()
	{
		return USimpleConstructionScript::StaticClass();
	}
	struct Z_Construct_UClass_USimpleConstructionScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorComponentNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorComponentNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorComponentNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNode;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRootNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRootNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNodes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleConstructionScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/SimpleConstructionScript.h" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "(DEPRECATED) Actor Component based nodes are stored here.  They cannot be in the tree hierarchy" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes = { UE4CodeGen_Private::EPropertyClass::Array, "ActorComponentNodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000820000000, 1, nullptr, STRUCT_OFFSET(USimpleConstructionScript, ActorComponentNodes_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorComponentNodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000820000000, 1, nullptr, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "(DEPRECATED) Root node of the construction script" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode = { UE4CodeGen_Private::EPropertyClass::Object, "RootNode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000820000000, 1, nullptr, STRUCT_OFFSET(USimpleConstructionScript, RootNode_DEPRECATED), Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "Default scene root node; used when no other nodes are available to use as the root" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSceneRootNode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USimpleConstructionScript, DefaultSceneRootNode), Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "All nodes that exist in the hierarchy of this SimpleConstructionScript" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes = { UE4CodeGen_Private::EPropertyClass::Array, "AllNodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USimpleConstructionScript, AllNodes), METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AllNodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "Root nodes of the construction script" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes = { UE4CodeGen_Private::EPropertyClass::Array, "RootNodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USimpleConstructionScript, RootNodes), METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "RootNodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleConstructionScript_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleConstructionScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleConstructionScript>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimpleConstructionScript_Statics::ClassParams = {
		&USimpleConstructionScript::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_USimpleConstructionScript_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleConstructionScript()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimpleConstructionScript_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimpleConstructionScript, 2970741213);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimpleConstructionScript(Z_Construct_UClass_USimpleConstructionScript, &USimpleConstructionScript::StaticClass, TEXT("/Script/Engine"), TEXT("USimpleConstructionScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleConstructionScript);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USimpleConstructionScript)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
