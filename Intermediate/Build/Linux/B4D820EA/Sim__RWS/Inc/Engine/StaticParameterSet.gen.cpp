// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/StaticParameterSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticParameterSet() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticParameterSet();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMaterialLayersParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticComponentMaskParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticSwitchParameter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
// End Cross Module References
class UScriptStruct* FStaticParameterSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticParameterSet_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticParameterSet, Z_Construct_UPackage__Script_Engine(), TEXT("StaticParameterSet"), sizeof(FStaticParameterSet), Get_Z_Construct_UScriptStruct_FStaticParameterSet_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticParameterSet(FStaticParameterSet::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticParameterSet"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticParameterSet
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticParameterSet()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StaticParameterSet")),new UScriptStruct::TCppStructOps<FStaticParameterSet>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticParameterSet;
	struct Z_Construct_UScriptStruct_FStaticParameterSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialLayersParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialLayersParameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialLayersParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrainLayerWeightParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TerrainLayerWeightParameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TerrainLayerWeightParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticComponentMaskParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticComponentMaskParameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticComponentMaskParameters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticSwitchParameters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticSwitchParameters_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "Contains all the information needed to identify a single permutation of static parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticParameterSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayersParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "An array of function call parameters in this set" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayersParameters = { UE4CodeGen_Private::EPropertyClass::Array, "MaterialLayersParameters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticParameterSet, MaterialLayersParameters), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayersParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayersParameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayersParameters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MaterialLayersParameters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStaticMaterialLayersParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_TerrainLayerWeightParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "An array of terrain layer weight parameters in this set" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_TerrainLayerWeightParameters = { UE4CodeGen_Private::EPropertyClass::Array, "TerrainLayerWeightParameters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticParameterSet, TerrainLayerWeightParameters), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_TerrainLayerWeightParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_TerrainLayerWeightParameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_TerrainLayerWeightParameters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TerrainLayerWeightParameters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticComponentMaskParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "An array of static component mask parameters in this set" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticComponentMaskParameters = { UE4CodeGen_Private::EPropertyClass::Array, "StaticComponentMaskParameters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticParameterSet, StaticComponentMaskParameters), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticComponentMaskParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticComponentMaskParameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticComponentMaskParameters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StaticComponentMaskParameters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStaticComponentMaskParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticSwitchParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "An array of static switch parameters in this set" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticSwitchParameters = { UE4CodeGen_Private::EPropertyClass::Array, "StaticSwitchParameters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticParameterSet, StaticSwitchParameters), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticSwitchParameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticSwitchParameters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticSwitchParameters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "StaticSwitchParameters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStaticSwitchParameter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticParameterSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayersParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayersParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_TerrainLayerWeightParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_TerrainLayerWeightParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticComponentMaskParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticComponentMaskParameters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticSwitchParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticSwitchParameters_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticParameterSet",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStaticParameterSet),
		alignof(FStaticParameterSet),
		Z_Construct_UScriptStruct_FStaticParameterSet_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticParameterSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticParameterSet_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticParameterSet"), sizeof(FStaticParameterSet), Get_Z_Construct_UScriptStruct_FStaticParameterSet_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticParameterSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticParameterSet_CRC() { return 4063814687U; }
class UScriptStruct* FStaticMaterialLayersParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMaterialLayersParameter"), sizeof(FStaticMaterialLayersParameter), Get_Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMaterialLayersParameter(FStaticMaterialLayersParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticMaterialLayersParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticMaterialLayersParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticMaterialLayersParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StaticMaterialLayersParameter")),new UScriptStruct::TCppStructOps<FStaticMaterialLayersParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticMaterialLayersParameter;
	struct Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[];
#endif
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "Holds the information for a static material layers parameter" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMaterialLayersParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticMaterialLayersParameter, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_bOverride_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((FStaticMaterialLayersParameter*)Obj)->bOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_bOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStaticMaterialLayersParameter), &Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_bOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_bOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticMaterialLayersParameter, Value), Z_Construct_UScriptStruct_FMaterialLayersFunctions, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_ParameterInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "ParameterInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticMaterialLayersParameter, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_ParameterInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_ParameterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_ExpressionGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_bOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_ParameterInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticMaterialLayersParameter",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStaticMaterialLayersParameter),
		alignof(FStaticMaterialLayersParameter),
		Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMaterialLayersParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMaterialLayersParameter"), sizeof(FStaticMaterialLayersParameter), Get_Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_CRC() { return 536438063U; }
class UScriptStruct* FStaticTerrainLayerWeightParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter, Z_Construct_UPackage__Script_Engine(), TEXT("StaticTerrainLayerWeightParameter"), sizeof(FStaticTerrainLayerWeightParameter), Get_Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticTerrainLayerWeightParameter(FStaticTerrainLayerWeightParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticTerrainLayerWeightParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticTerrainLayerWeightParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticTerrainLayerWeightParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StaticTerrainLayerWeightParameter")),new UScriptStruct::TCppStructOps<FStaticTerrainLayerWeightParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticTerrainLayerWeightParameter;
	struct Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWeightBasedBlend_MetaData[];
#endif
		static void NewProp_bWeightBasedBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWeightBasedBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeightmapIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[];
#endif
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "Holds the information for a static switch parameter" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticTerrainLayerWeightParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bWeightBasedBlend_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bWeightBasedBlend_SetBit(void* Obj)
	{
		((FStaticTerrainLayerWeightParameter*)Obj)->bWeightBasedBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bWeightBasedBlend = { UE4CodeGen_Private::EPropertyClass::Bool, "bWeightBasedBlend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStaticTerrainLayerWeightParameter), &Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bWeightBasedBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bWeightBasedBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bWeightBasedBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_WeightmapIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_WeightmapIndex = { UE4CodeGen_Private::EPropertyClass::Int, "WeightmapIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticTerrainLayerWeightParameter, WeightmapIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_WeightmapIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_WeightmapIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticTerrainLayerWeightParameter, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bOverride_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((FStaticTerrainLayerWeightParameter*)Obj)->bOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStaticTerrainLayerWeightParameter), &Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ParameterInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "ParameterInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticTerrainLayerWeightParameter, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ParameterInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ParameterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bWeightBasedBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_WeightmapIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ExpressionGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ParameterInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticTerrainLayerWeightParameter",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStaticTerrainLayerWeightParameter),
		alignof(FStaticTerrainLayerWeightParameter),
		Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticTerrainLayerWeightParameter"), sizeof(FStaticTerrainLayerWeightParameter), Get_Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_CRC() { return 1536640181U; }
class UScriptStruct* FStaticComponentMaskParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticComponentMaskParameter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticComponentMaskParameter, Z_Construct_UPackage__Script_Engine(), TEXT("StaticComponentMaskParameter"), sizeof(FStaticComponentMaskParameter), Get_Z_Construct_UScriptStruct_FStaticComponentMaskParameter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticComponentMaskParameter(FStaticComponentMaskParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticComponentMaskParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticComponentMaskParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticComponentMaskParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StaticComponentMaskParameter")),new UScriptStruct::TCppStructOps<FStaticComponentMaskParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticComponentMaskParameter;
	struct Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[];
#endif
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[];
#endif
		static void NewProp_G_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_G;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static void NewProp_R_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "Holds the information for a static component mask parameter" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticComponentMaskParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticComponentMaskParameter, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_bOverride_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((FStaticComponentMaskParameter*)Obj)->bOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_bOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStaticComponentMaskParameter), &Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_bOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_bOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FStaticComponentMaskParameter*)Obj)->A = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_A = { UE4CodeGen_Private::EPropertyClass::Bool, "A", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStaticComponentMaskParameter), &Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FStaticComponentMaskParameter*)Obj)->B = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_B = { UE4CodeGen_Private::EPropertyClass::Bool, "B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStaticComponentMaskParameter), &Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_G_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_G_SetBit(void* Obj)
	{
		((FStaticComponentMaskParameter*)Obj)->G = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_G = { UE4CodeGen_Private::EPropertyClass::Bool, "G", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStaticComponentMaskParameter), &Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_G_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_G_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_G_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_R_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_R_SetBit(void* Obj)
	{
		((FStaticComponentMaskParameter*)Obj)->R = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_R = { UE4CodeGen_Private::EPropertyClass::Bool, "R", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStaticComponentMaskParameter), &Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_R_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_R_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_ParameterInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "ParameterInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticComponentMaskParameter, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_ParameterInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_ParameterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_ExpressionGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_bOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_G,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_ParameterInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticComponentMaskParameter",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStaticComponentMaskParameter),
		alignof(FStaticComponentMaskParameter),
		Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticComponentMaskParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticComponentMaskParameter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticComponentMaskParameter"), sizeof(FStaticComponentMaskParameter), Get_Z_Construct_UScriptStruct_FStaticComponentMaskParameter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticComponentMaskParameter_CRC() { return 172883026U; }
class UScriptStruct* FStaticSwitchParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStaticSwitchParameter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticSwitchParameter, Z_Construct_UPackage__Script_Engine(), TEXT("StaticSwitchParameter"), sizeof(FStaticSwitchParameter), Get_Z_Construct_UScriptStruct_FStaticSwitchParameter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticSwitchParameter(FStaticSwitchParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("StaticSwitchParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStaticSwitchParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFStaticSwitchParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StaticSwitchParameter")),new UScriptStruct::TCppStructOps<FStaticSwitchParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStaticSwitchParameter;
	struct Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[];
#endif
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "Holds the information for a static switch parameter" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticSwitchParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_ExpressionGUID = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpressionGUID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticSwitchParameter, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_ExpressionGUID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_bOverride_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((FStaticSwitchParameter*)Obj)->bOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_bOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStaticSwitchParameter), &Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_bOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_bOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FStaticSwitchParameter*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Bool, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStaticSwitchParameter), &Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_ParameterInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "ParameterInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStaticSwitchParameter, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_ParameterInfo_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_ParameterInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_ExpressionGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_bOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_ParameterInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticSwitchParameter",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStaticSwitchParameter),
		alignof(FStaticSwitchParameter),
		Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticSwitchParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticSwitchParameter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticSwitchParameter"), sizeof(FStaticSwitchParameter), Get_Z_Construct_UScriptStruct_FStaticSwitchParameter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticSwitchParameter_CRC() { return 2178324988U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
