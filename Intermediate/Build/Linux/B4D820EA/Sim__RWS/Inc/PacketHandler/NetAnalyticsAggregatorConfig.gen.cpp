// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PacketHandler/Classes/NetAnalyticsAggregatorConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetAnalyticsAggregatorConfig() {}
// Cross Module References
	PACKETHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FNetAnalyticsDataConfig();
	UPackage* Z_Construct_UPackage__Script_PacketHandler();
	PACKETHANDLER_API UClass* Z_Construct_UClass_UNetAnalyticsAggregatorConfig_NoRegister();
	PACKETHANDLER_API UClass* Z_Construct_UClass_UNetAnalyticsAggregatorConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FNetAnalyticsDataConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PACKETHANDLER_API uint32 Get_Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig, Z_Construct_UPackage__Script_PacketHandler(), TEXT("NetAnalyticsDataConfig"), sizeof(FNetAnalyticsDataConfig), Get_Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNetAnalyticsDataConfig(FNetAnalyticsDataConfig::StaticStruct, TEXT("/Script/PacketHandler"), TEXT("NetAnalyticsDataConfig"), false, nullptr, nullptr);
static struct FScriptStruct_PacketHandler_StaticRegisterNativesFNetAnalyticsDataConfig
{
	FScriptStruct_PacketHandler_StaticRegisterNativesFNetAnalyticsDataConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NetAnalyticsDataConfig")),new UScriptStruct::TCppStructOps<FNetAnalyticsDataConfig>);
	}
} ScriptStruct_PacketHandler_StaticRegisterNativesFNetAnalyticsDataConfig;
	struct Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DataName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NetAnalyticsAggregatorConfig.h" },
		{ "ToolTip", "Configuration for FNetAnalyticsData - enabling/disabling analytics data, based on DataName" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetAnalyticsDataConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NetAnalyticsAggregatorConfig.h" },
		{ "ToolTip", "Whether or not the specified analytics data type, is enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FNetAnalyticsDataConfig*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FNetAnalyticsDataConfig), &Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_DataName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NetAnalyticsAggregatorConfig.h" },
		{ "ToolTip", "The name of the analytics data type (should match analytics stat name)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_DataName = { UE4CodeGen_Private::EPropertyClass::Name, "DataName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(FNetAnalyticsDataConfig, DataName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_DataName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_DataName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::NewProp_DataName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PacketHandler,
		nullptr,
		&NewStructOps,
		"NetAnalyticsDataConfig",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FNetAnalyticsDataConfig),
		alignof(FNetAnalyticsDataConfig),
		Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetAnalyticsDataConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_PacketHandler();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NetAnalyticsDataConfig"), sizeof(FNetAnalyticsDataConfig), Get_Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNetAnalyticsDataConfig_CRC() { return 3604983025U; }
	void UNetAnalyticsAggregatorConfig::StaticRegisterNativesUNetAnalyticsAggregatorConfig()
	{
	}
	UClass* Z_Construct_UClass_UNetAnalyticsAggregatorConfig_NoRegister()
	{
		return UNetAnalyticsAggregatorConfig::StaticClass();
	}
	struct Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetAnalyticsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NetAnalyticsData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NetAnalyticsData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PacketHandler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NetAnalyticsAggregatorConfig.h" },
		{ "ModuleRelativePath", "Classes/NetAnalyticsAggregatorConfig.h" },
		{ "ToolTip", "Configuration for FNetAnalyticsAggregator - loaded PerObjectConfig, for each NetDriverName" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NetAnalyticsAggregatorConfig.h" },
		{ "ToolTip", "Registers FNetAnalyticsData data holders, by DataName - and specifies whether they are enabled or disabled" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData = { UE4CodeGen_Private::EPropertyClass::Array, "NetAnalyticsData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UNetAnalyticsAggregatorConfig, NetAnalyticsData), METADATA_PARAMS(Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "NetAnalyticsData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNetAnalyticsDataConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::NewProp_NetAnalyticsData_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetAnalyticsAggregatorConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::ClassParams = {
		&UNetAnalyticsAggregatorConfig::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000004A4u,
		nullptr, 0,
		Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetAnalyticsAggregatorConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetAnalyticsAggregatorConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetAnalyticsAggregatorConfig, 313471131);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetAnalyticsAggregatorConfig(Z_Construct_UClass_UNetAnalyticsAggregatorConfig, &UNetAnalyticsAggregatorConfig::StaticClass, TEXT("/Script/PacketHandler"), TEXT("UNetAnalyticsAggregatorConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetAnalyticsAggregatorConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
