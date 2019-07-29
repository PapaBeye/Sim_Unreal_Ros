// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AssetMappingTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetMappingTable() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetMapping();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetMappingTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetMappingTable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FAssetMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAssetMapping_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetMapping, Z_Construct_UPackage__Script_Engine(), TEXT("AssetMapping"), sizeof(FAssetMapping), Get_Z_Construct_UScriptStruct_FAssetMapping_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetMapping(FAssetMapping::StaticStruct, TEXT("/Script/Engine"), TEXT("AssetMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAssetMapping
{
	FScriptStruct_Engine_StaticRegisterNativesFAssetMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetMapping")),new UScriptStruct::TCppStructOps<FAssetMapping>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAssetMapping;
	struct Z_Construct_UScriptStruct_FAssetMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
		{ "ToolTip", "This defines one asset mapping" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_TargetAsset_MetaData[] = {
		{ "Category", "FAssetMapping" },
		{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
		{ "ToolTip", "source asset *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_TargetAsset = { UE4CodeGen_Private::EPropertyClass::Object, "TargetAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAssetMapping, TargetAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_TargetAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_TargetAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_SourceAsset_MetaData[] = {
		{ "Category", "FAssetMapping" },
		{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
		{ "ToolTip", "source asset *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_SourceAsset = { UE4CodeGen_Private::EPropertyClass::Object, "SourceAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAssetMapping, SourceAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_SourceAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_SourceAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_TargetAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_SourceAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AssetMapping",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAssetMapping),
		alignof(FAssetMapping),
		Z_Construct_UScriptStruct_FAssetMapping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMapping_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetMapping_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetMapping"), sizeof(FAssetMapping), Get_Z_Construct_UScriptStruct_FAssetMapping_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetMapping_CRC() { return 645251535U; }
	void UAssetMappingTable::StaticRegisterNativesUAssetMappingTable()
	{
	}
	UClass* Z_Construct_UClass_UAssetMappingTable_NoRegister()
	{
		return UAssetMappingTable::StaticClass();
	}
	struct Z_Construct_UClass_UAssetMappingTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappedAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MappedAssets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MappedAssets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetMappingTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetMappingTable_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AssetMappingTable.h" },
		{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
		{ "ToolTip", "UAssetMappingTable : that has AssetMappingTableging data\n        - used for retargeting\n        - support to share different animations" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets_MetaData[] = {
		{ "Category", "AssetMappingTable" },
		{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
		{ "ToolTip", "Mappin of asset between source and target *" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets = { UE4CodeGen_Private::EPropertyClass::Array, "MappedAssets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000020041, 1, nullptr, STRUCT_OFFSET(UAssetMappingTable, MappedAssets), METADATA_PARAMS(Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MappedAssets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAssetMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetMappingTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetMappingTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetMappingTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetMappingTable_Statics::ClassParams = {
		&UAssetMappingTable::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_UAssetMappingTable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAssetMappingTable_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAssetMappingTable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAssetMappingTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetMappingTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetMappingTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetMappingTable, 2359285588);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetMappingTable(Z_Construct_UClass_UAssetMappingTable, &UAssetMappingTable::StaticClass, TEXT("/Script/Engine"), TEXT("UAssetMappingTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetMappingTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
