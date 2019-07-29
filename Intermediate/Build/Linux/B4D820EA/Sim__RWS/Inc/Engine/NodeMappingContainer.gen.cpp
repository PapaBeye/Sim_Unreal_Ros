// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/NodeMappingContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeMappingContainer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeItem();
// End Cross Module References
	void UNodeMappingContainer::StaticRegisterNativesUNodeMappingContainer()
	{
	}
	UClass* Z_Construct_UClass_UNodeMappingContainer_NoRegister()
	{
		return UNodeMappingContainer::StaticClass();
	}
	struct Z_Construct_UClass_UNodeMappingContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TargetAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SourceAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceToTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SourceToTarget;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceToTarget_Key_KeyProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceToTarget_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetItems;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetItems_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetItems_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SourceItems;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceItems_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceItems_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNodeMappingContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeMappingContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Animation" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/NodeMappingContainer.h" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
		{ "ToolTip", "Node Mapping Container Class\n* This saves source items, and target items, and mapping between\n* Used by Retargeting, Control Rig mapping. Will need to improve interface better" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetAsset_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
		{ "ToolTip", "source asset that is used to create target\nshould be UNodeMappingProviderInterface" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetAsset = { UE4CodeGen_Private::EPropertyClass::SoftObject, "TargetAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000001, 1, nullptr, STRUCT_OFFSET(UNodeMappingContainer, TargetAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceAsset_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
		{ "ToolTip", "source asset that is used to create source\nshould be UNodeMappingProviderInterface" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceAsset = { UE4CodeGen_Private::EPropertyClass::SoftObject, "SourceAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000001, 1, nullptr, STRUCT_OFFSET(UNodeMappingContainer, SourceAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget = { UE4CodeGen_Private::EPropertyClass::Map, "SourceToTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UNodeMappingContainer, SourceToTarget), METADATA_PARAMS(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "SourceToTarget_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_ValueProp = { UE4CodeGen_Private::EPropertyClass::Name, "SourceToTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems = { UE4CodeGen_Private::EPropertyClass::Map, "TargetItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(UNodeMappingContainer, TargetItems), METADATA_PARAMS(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "TargetItems_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020001, 1, nullptr, 1, Z_Construct_UScriptStruct_FNodeItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems = { UE4CodeGen_Private::EPropertyClass::Map, "SourceItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020001, 1, nullptr, STRUCT_OFFSET(UNodeMappingContainer, SourceItems), METADATA_PARAMS(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "SourceItems_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020001, 1, nullptr, 1, Z_Construct_UScriptStruct_FNodeItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNodeMappingContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNodeMappingContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNodeMappingContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNodeMappingContainer_Statics::ClassParams = {
		&UNodeMappingContainer::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UNodeMappingContainer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNodeMappingContainer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNodeMappingContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNodeMappingContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNodeMappingContainer, 3189306502);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNodeMappingContainer(Z_Construct_UClass_UNodeMappingContainer, &UNodeMappingContainer::StaticClass, TEXT("/Script/Engine"), TEXT("UNodeMappingContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNodeMappingContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
