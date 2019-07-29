// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/PerPlatformProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerPlatformProperties() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
// End Cross Module References
class UScriptStruct* FPerPlatformFloat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPerPlatformFloat_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformFloat, Z_Construct_UPackage__Script_Engine(), TEXT("PerPlatformFloat"), sizeof(FPerPlatformFloat), Get_Z_Construct_UScriptStruct_FPerPlatformFloat_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerPlatformFloat(FPerPlatformFloat::StaticStruct, TEXT("/Script/Engine"), TEXT("PerPlatformFloat"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPerPlatformFloat
{
	FScriptStruct_Engine_StaticRegisterNativesFPerPlatformFloat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerPlatformFloat")),new UScriptStruct::TCppStructOps<FPerPlatformFloat>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPerPlatformFloat;
	struct Z_Construct_UScriptStruct_FPerPlatformFloat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PerPlatform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PerPlatform_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerPlatform_ValueProp;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Default;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
		{ "ToolTip", "FPerPlatformFloat - float property with per-platform overrides" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerPlatformFloat>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform = { UE4CodeGen_Private::EPropertyClass::Map, "PerPlatform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000001, 1, nullptr, STRUCT_OFFSET(FPerPlatformFloat, PerPlatform), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "PerPlatform_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_ValueProp = { UE4CodeGen_Private::EPropertyClass::Float, "PerPlatform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default = { UE4CodeGen_Private::EPropertyClass::Float, "Default", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPerPlatformFloat, Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_PerPlatform_ValueProp,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewProp_Default,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerPlatformFloat",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FPerPlatformFloat),
		alignof(FPerPlatformFloat),
		Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerPlatformFloat_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerPlatformFloat"), sizeof(FPerPlatformFloat), Get_Z_Construct_UScriptStruct_FPerPlatformFloat_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerPlatformFloat_CRC() { return 2493310512U; }
class UScriptStruct* FPerPlatformInt::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPerPlatformInt_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformInt, Z_Construct_UPackage__Script_Engine(), TEXT("PerPlatformInt"), sizeof(FPerPlatformInt), Get_Z_Construct_UScriptStruct_FPerPlatformInt_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerPlatformInt(FPerPlatformInt::StaticStruct, TEXT("/Script/Engine"), TEXT("PerPlatformInt"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPerPlatformInt
{
	FScriptStruct_Engine_StaticRegisterNativesFPerPlatformInt()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerPlatformInt")),new UScriptStruct::TCppStructOps<FPerPlatformInt>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPerPlatformInt;
	struct Z_Construct_UScriptStruct_FPerPlatformInt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PerPlatform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PerPlatform_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerPlatform_ValueProp;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Default;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformInt_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
		{ "ToolTip", "FPerPlatformInt - int32 property with per-platform overrides" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerPlatformInt>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform = { UE4CodeGen_Private::EPropertyClass::Map, "PerPlatform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000001, 1, nullptr, STRUCT_OFFSET(FPerPlatformInt, PerPlatform), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "PerPlatform_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "PerPlatform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default_MetaData[] = {
		{ "Category", "PerPlatform" },
		{ "ModuleRelativePath", "Public/PerPlatformProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default = { UE4CodeGen_Private::EPropertyClass::Int, "Default", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPerPlatformInt, Default), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerPlatformInt_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_PerPlatform_ValueProp,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewProp_Default,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerPlatformInt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerPlatformInt",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FPerPlatformInt),
		alignof(FPerPlatformInt),
		Z_Construct_UScriptStruct_FPerPlatformInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformInt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerPlatformInt_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerPlatformInt"), sizeof(FPerPlatformInt), Get_Z_Construct_UScriptStruct_FPerPlatformInt_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerPlatformInt_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerPlatformInt_CRC() { return 3237173209U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
