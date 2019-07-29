// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavigationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationData() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSupportedAreaData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavDataConfig();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationDataInterface_NoRegister();
// End Cross Module References
	static UEnum* ERuntimeGenerationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType, Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ERuntimeGenerationType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeGenerationType(ERuntimeGenerationType_StaticEnum, TEXT("/Script/NavigationSystem"), TEXT("ERuntimeGenerationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_CRC() { return 2657484117U; }
	UEnum* Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NavigationSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeGenerationType"), 0, Get_Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERuntimeGenerationType::Static", (int64)ERuntimeGenerationType::Static },
				{ "ERuntimeGenerationType::DynamicModifiersOnly", (int64)ERuntimeGenerationType::DynamicModifiersOnly },
				{ "ERuntimeGenerationType::Dynamic", (int64)ERuntimeGenerationType::Dynamic },
				{ "ERuntimeGenerationType::LegacyGeneration", (int64)ERuntimeGenerationType::LegacyGeneration },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Dynamic.ToolTip", "Fully dynamic, supports geometry changes along with navigation modifiers" },
				{ "DynamicModifiersOnly.ToolTip", "Supports only navigation modifiers updates" },
				{ "LegacyGeneration.Hidden", "" },
				{ "LegacyGeneration.ToolTip", "Only for legacy loading don't use it!" },
				{ "ModuleRelativePath", "Public/NavigationData.h" },
				{ "Static.ToolTip", "No runtime generation, fully static navigation data" },
				{ "ToolTip", "Supported options for runtime navigation data generation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERuntimeGenerationType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERuntimeGenerationType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSupportedAreaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NAVIGATIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSupportedAreaData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSupportedAreaData, Z_Construct_UPackage__Script_NavigationSystem(), TEXT("SupportedAreaData"), sizeof(FSupportedAreaData), Get_Z_Construct_UScriptStruct_FSupportedAreaData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSupportedAreaData(FSupportedAreaData::StaticStruct, TEXT("/Script/NavigationSystem"), TEXT("SupportedAreaData"), false, nullptr, nullptr);
static struct FScriptStruct_NavigationSystem_StaticRegisterNativesFSupportedAreaData
{
	FScriptStruct_NavigationSystem_StaticRegisterNativesFSupportedAreaData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SupportedAreaData")),new UScriptStruct::TCppStructOps<FSupportedAreaData>);
	}
} ScriptStruct_NavigationSystem_StaticRegisterNativesFSupportedAreaData;
	struct Z_Construct_UScriptStruct_FSupportedAreaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AreaID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AreaClassName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSupportedAreaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSupportedAreaData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClass = { UE4CodeGen_Private::EPropertyClass::Class, "AreaClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FSupportedAreaData, AreaClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaID_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaID = { UE4CodeGen_Private::EPropertyClass::Int, "AreaID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSupportedAreaData, AreaID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClassName = { UE4CodeGen_Private::EPropertyClass::Str, "AreaClassName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSupportedAreaData, AreaClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClassName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClassName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSupportedAreaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClassName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSupportedAreaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
		nullptr,
		&NewStructOps,
		"SupportedAreaData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FSupportedAreaData),
		alignof(FSupportedAreaData),
		Z_Construct_UScriptStruct_FSupportedAreaData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSupportedAreaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSupportedAreaData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_NavigationSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SupportedAreaData"), sizeof(FSupportedAreaData), Get_Z_Construct_UScriptStruct_FSupportedAreaData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSupportedAreaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSupportedAreaData_CRC() { return 4144067180U; }
	void ANavigationData::StaticRegisterNativesANavigationData()
	{
	}
	UClass* Z_Construct_UClass_ANavigationData_NoRegister()
	{
		return ANavigationData::StaticClass();
	}
	struct Z_Construct_UClass_ANavigationData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedAreas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedAreas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SupportedAreas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DataVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObservedPathsTickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ObservedPathsTickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeGeneration_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RuntimeGeneration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RuntimeGeneration_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRebuildAtRuntime_MetaData[];
#endif
		static void NewProp_bRebuildAtRuntime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildAtRuntime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanSpawnOnRebuild_MetaData[];
#endif
		static void NewProp_bCanSpawnOnRebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanSpawnOnRebuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeMainNavData_MetaData[];
#endif
		static void NewProp_bCanBeMainNavData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeMainNavData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceRebuildOnLoad_MetaData[];
#endif
		static void NewProp_bForceRebuildOnLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildOnLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDrawing_MetaData[];
#endif
		static void NewProp_bEnableDrawing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDrawing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavDataConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavDataConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderingComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavigationData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavigationData.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "Represents abstract Navigation Data (sub-classed as NavMesh, NavGraph, etc)\nUsed as a common interface for all navigation types handled by NavigationSystem" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "serialized area class - ID mapping" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas = { UE4CodeGen_Private::EPropertyClass::Array, "SupportedAreas", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ANavigationData, SupportedAreas), METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SupportedAreas", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSupportedAreaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_DataVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "Navigation data versioning." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_DataVersion = { UE4CodeGen_Private::EPropertyClass::UInt32, "DataVersion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ANavigationData, DataVersion), METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_DataVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_DataVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_ObservedPathsTickInterval_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "all observed paths will be processed every ObservedPathsTickInterval seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_ObservedPathsTickInterval = { UE4CodeGen_Private::EPropertyClass::Float, "ObservedPathsTickInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004001, 1, nullptr, STRUCT_OFFSET(ANavigationData, ObservedPathsTickInterval), METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_ObservedPathsTickInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_ObservedPathsTickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "Navigation data runtime generation options" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration = { UE4CodeGen_Private::EPropertyClass::Enum, "RuntimeGeneration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004001, 1, nullptr, STRUCT_OFFSET(ANavigationData, RuntimeGeneration), Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "If true, the NavMesh can be dynamically rebuilt at runtime." },
	};
#endif
	void Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime_SetBit(void* Obj)
	{
		((ANavigationData*)Obj)->bRebuildAtRuntime_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuildAtRuntime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080020004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "If set, navigation data will be spawned in persistent level during rebuild if actor doesn't exist" },
	};
#endif
	void Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild_SetBit(void* Obj)
	{
		((ANavigationData*)Obj)->bCanSpawnOnRebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanSpawnOnRebuild", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c0000024001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "If set, navigation data can act as default one in navigation system's queries" },
	};
#endif
	void Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData_SetBit(void* Obj)
	{
		((ANavigationData*)Obj)->bCanBeMainNavData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanBeMainNavData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c0000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "By default navigation will skip the first update after being successfully loaded\nsetting bForceRebuildOnLoad to false can override this behavior" },
	};
#endif
	void Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad_SetBit(void* Obj)
	{
		((ANavigationData*)Obj)->bForceRebuildOnLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceRebuildOnLoad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "if set to true then this navigation data will be drawing itself when requested as part of \"show navigation\"" },
	};
#endif
	void Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing_SetBit(void* Obj)
	{
		((ANavigationData*)Obj)->bEnableDrawing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDrawing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_NavDataConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_NavDataConfig = { UE4CodeGen_Private::EPropertyClass::Struct, "NavDataConfig", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ANavigationData, NavDataConfig), Z_Construct_UScriptStruct_FNavDataConfig, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_NavDataConfig_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_NavDataConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_RenderingComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_RenderingComp = { UE4CodeGen_Private::EPropertyClass::Object, "RenderingComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000282008, 1, nullptr, STRUCT_OFFSET(ANavigationData, RenderingComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_RenderingComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_RenderingComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavigationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_DataVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_ObservedPathsTickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_NavDataConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_RenderingComp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavigationData_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavigationDataInterface_NoRegister, (int32)VTABLE_OFFSET(ANavigationData, INavigationDataInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavigationData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavigationData_Statics::ClassParams = {
		&ANavigationData::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A7u,
		nullptr, 0,
		Z_Construct_UClass_ANavigationData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavigationData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavigationData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavigationData, 339604179);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavigationData(Z_Construct_UClass_ANavigationData, &ANavigationData::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("ANavigationData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
