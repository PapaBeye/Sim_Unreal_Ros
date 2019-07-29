// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DemoNetDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoNetDriver() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelNameAndTime();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
// End Cross Module References
class UScriptStruct* FRollbackNetStartupActorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo, Z_Construct_UPackage__Script_Engine(), TEXT("RollbackNetStartupActorInfo"), sizeof(FRollbackNetStartupActorInfo), Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRollbackNetStartupActorInfo(FRollbackNetStartupActorInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("RollbackNetStartupActorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRollbackNetStartupActorInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFRollbackNetStartupActorInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RollbackNetStartupActorInfo")),new UScriptStruct::TCppStructOps<FRollbackNetStartupActorInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRollbackNetStartupActorInfo;
	struct Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjReferences;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Archetype_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Archetype;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Information about net startup actors that need to be rolled back by being destroyed and re-created" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRollbackNetStartupActorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences = { UE4CodeGen_Private::EPropertyClass::Array, "ObjReferences", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRollbackNetStartupActorInfo, ObjReferences), METADATA_PARAMS(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ObjReferences", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Level = { UE4CodeGen_Private::EPropertyClass::Object, "Level", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRollbackNetStartupActorInfo, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Level_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype = { UE4CodeGen_Private::EPropertyClass::Object, "Archetype", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRollbackNetStartupActorInfo, Archetype), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RollbackNetStartupActorInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRollbackNetStartupActorInfo),
		alignof(FRollbackNetStartupActorInfo),
		Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RollbackNetStartupActorInfo"), sizeof(FRollbackNetStartupActorInfo), Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_CRC() { return 1125380813U; }
class UScriptStruct* FLevelNameAndTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLevelNameAndTime_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelNameAndTime, Z_Construct_UPackage__Script_Engine(), TEXT("LevelNameAndTime"), sizeof(FLevelNameAndTime), Get_Z_Construct_UScriptStruct_FLevelNameAndTime_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelNameAndTime(FLevelNameAndTime::StaticStruct, TEXT("/Script/Engine"), TEXT("LevelNameAndTime"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLevelNameAndTime
{
	FScriptStruct_Engine_StaticRegisterNativesFLevelNameAndTime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelNameAndTime")),new UScriptStruct::TCppStructOps<FLevelNameAndTime>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLevelNameAndTime;
	struct Z_Construct_UScriptStruct_FLevelNameAndTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelChangeTimeInMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LevelChangeTimeInMS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelNameAndTime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS = { UE4CodeGen_Private::EPropertyClass::UInt32, "LevelChangeTimeInMS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLevelNameAndTime, LevelChangeTimeInMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName = { UE4CodeGen_Private::EPropertyClass::Str, "LevelName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLevelNameAndTime, LevelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LevelNameAndTime",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FLevelNameAndTime),
		alignof(FLevelNameAndTime),
		Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelNameAndTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelNameAndTime_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelNameAndTime"), sizeof(FLevelNameAndTime), Get_Z_Construct_UScriptStruct_FLevelNameAndTime_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelNameAndTime_CRC() { return 626570219U; }
	void UDemoNetDriver::StaticRegisterNativesUDemoNetDriver()
	{
	}
	UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister()
	{
		return UDemoNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_UDemoNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocalReplay_MetaData[];
#endif
		static void NewProp_bIsLocalReplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocalReplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckpointSaveMaxMSPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CheckpointSaveMaxMSPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollbackNetStartupActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RollbackNetStartupActors;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RollbackNetStartupActors_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RollbackNetStartupActors_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemoNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/DemoNetDriver.h" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Simulated network driver for recording and playing back game sessions." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	void Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay_SetBit(void* Obj)
	{
		((UDemoNetDriver*)Obj)->bIsLocalReplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLocalReplay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UDemoNetDriver), &Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Maximum time allowed each frame to spend on saving a checkpoint. If 0, it will save the checkpoint in a single frame, regardless of how long it takes.\nSee also demo.CheckpointSaveMaxMSPerFrameOverride." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame = { UE4CodeGen_Private::EPropertyClass::Float, "CheckpointSaveMaxMSPerFrame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004000, 1, nullptr, STRUCT_OFFSET(UDemoNetDriver, CheckpointSaveMaxMSPerFrame), METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Net startup actors that need to be rolled back during scrubbing by being destroyed and re-spawned\nNOTE - DeletedNetStartupActors will take precedence here, and destroy the actor instead" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors = { UE4CodeGen_Private::EPropertyClass::Map, "RollbackNetStartupActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UDemoNetDriver, RollbackNetStartupActors), METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "RollbackNetStartupActors_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "RollbackNetStartupActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemoNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemoNetDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemoNetDriver_Statics::ClassParams = {
		&UDemoNetDriver::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000ACu,
		nullptr, 0,
		Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemoNetDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemoNetDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemoNetDriver, 2367498200);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemoNetDriver(Z_Construct_UClass_UDemoNetDriver, &UDemoNetDriver::StaticClass, TEXT("/Script/Engine"), TEXT("UDemoNetDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDemoNetDriver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
