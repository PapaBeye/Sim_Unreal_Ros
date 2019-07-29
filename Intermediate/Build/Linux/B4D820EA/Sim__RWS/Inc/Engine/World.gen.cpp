// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/World.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorld() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelCollection();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStartAsyncSimulationFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEndPhysicsTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStartPhysicsTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelViewportInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_UWorld_HandleTimelineScrubbed();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPSCPool();
	ENGINE_API UClass* Z_Construct_UClass_UWorldComposition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAvoidanceManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAISystemBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AParticleEventManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameNetworkManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULineBatchComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULayer_NoRegister();
// End Cross Module References
class UScriptStruct* FLevelCollection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLevelCollection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelCollection, Z_Construct_UPackage__Script_Engine(), TEXT("LevelCollection"), sizeof(FLevelCollection), Get_Z_Construct_UScriptStruct_FLevelCollection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelCollection(FLevelCollection::StaticStruct, TEXT("/Script/Engine"), TEXT("LevelCollection"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLevelCollection
{
	FScriptStruct_Engine_StaticRegisterNativesFLevelCollection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelCollection")),new UScriptStruct::TCppStructOps<FLevelCollection>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLevelCollection;
	struct Z_Construct_UScriptStruct_FLevelCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Levels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Levels_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistentLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PersistentLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DemoNetDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DemoNetDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelCollection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Contains a group of levels of a particular ELevelCollectionType within a UWorld\nand the context required to properly tick/update those levels. This object is move-only." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelCollection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_Levels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "All the levels in this collection." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_Levels = { UE4CodeGen_Private::EPropertyClass::Set, "Levels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FLevelCollection, Levels), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_Levels_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_Levels_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_Levels_ElementProp = { UE4CodeGen_Private::EPropertyClass::Object, "Levels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_PersistentLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The persistent level associated with this collection.\nThe source collection and the duplicated collection will have their own instances." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_PersistentLevel = { UE4CodeGen_Private::EPropertyClass::Object, "PersistentLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FLevelCollection, PersistentLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_PersistentLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_PersistentLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_DemoNetDriver_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The demo network driver associated with this collection.\nThe source collection and the duplicated collection will have their own instances." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_DemoNetDriver = { UE4CodeGen_Private::EPropertyClass::Object, "DemoNetDriver", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FLevelCollection, DemoNetDriver), Z_Construct_UClass_UDemoNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_DemoNetDriver_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_DemoNetDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_NetDriver_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The network driver associated with this collection.\nThe source collection and the duplicated collection will have their own instances." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_NetDriver = { UE4CodeGen_Private::EPropertyClass::Object, "NetDriver", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FLevelCollection, NetDriver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_NetDriver_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_NetDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_GameState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The GameState associated with this collection. This may be different than the UWorld's GameState\nsince the source collection and the duplicated collection will have their own instances." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_GameState = { UE4CodeGen_Private::EPropertyClass::Object, "GameState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FLevelCollection, GameState), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_GameState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_GameState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_Levels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_Levels_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_PersistentLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_DemoNetDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_NetDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelCollection_Statics::NewProp_GameState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LevelCollection",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FLevelCollection),
		alignof(FLevelCollection),
		Z_Construct_UScriptStruct_FLevelCollection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelCollection_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelCollection_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelCollection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelCollection_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelCollection"), sizeof(FLevelCollection), Get_Z_Construct_UScriptStruct_FLevelCollection_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelCollection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelCollection_CRC() { return 1975375449U; }
class UScriptStruct* FStartAsyncSimulationFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStartAsyncSimulationFunction, Z_Construct_UPackage__Script_Engine(), TEXT("StartAsyncSimulationFunction"), sizeof(FStartAsyncSimulationFunction), Get_Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStartAsyncSimulationFunction(FStartAsyncSimulationFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("StartAsyncSimulationFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStartAsyncSimulationFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFStartAsyncSimulationFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StartAsyncSimulationFunction")),new UScriptStruct::TCppStructOps<FStartAsyncSimulationFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStartAsyncSimulationFunction;
	struct Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Tick function that starts the cloth tick" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStartAsyncSimulationFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"StartAsyncSimulationFunction",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStartAsyncSimulationFunction),
		alignof(FStartAsyncSimulationFunction),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStartAsyncSimulationFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StartAsyncSimulationFunction"), sizeof(FStartAsyncSimulationFunction), Get_Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_CRC() { return 849829380U; }
class UScriptStruct* FEndPhysicsTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEndPhysicsTickFunction_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEndPhysicsTickFunction, Z_Construct_UPackage__Script_Engine(), TEXT("EndPhysicsTickFunction"), sizeof(FEndPhysicsTickFunction), Get_Z_Construct_UScriptStruct_FEndPhysicsTickFunction_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEndPhysicsTickFunction(FEndPhysicsTickFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("EndPhysicsTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEndPhysicsTickFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFEndPhysicsTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EndPhysicsTickFunction")),new UScriptStruct::TCppStructOps<FEndPhysicsTickFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEndPhysicsTickFunction;
	struct Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Tick function that ends the physics tick" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEndPhysicsTickFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"EndPhysicsTickFunction",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FEndPhysicsTickFunction),
		alignof(FEndPhysicsTickFunction),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEndPhysicsTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEndPhysicsTickFunction_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EndPhysicsTickFunction"), sizeof(FEndPhysicsTickFunction), Get_Z_Construct_UScriptStruct_FEndPhysicsTickFunction_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEndPhysicsTickFunction_CRC() { return 292261526U; }
class UScriptStruct* FStartPhysicsTickFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStartPhysicsTickFunction_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStartPhysicsTickFunction, Z_Construct_UPackage__Script_Engine(), TEXT("StartPhysicsTickFunction"), sizeof(FStartPhysicsTickFunction), Get_Z_Construct_UScriptStruct_FStartPhysicsTickFunction_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStartPhysicsTickFunction(FStartPhysicsTickFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("StartPhysicsTickFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStartPhysicsTickFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFStartPhysicsTickFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StartPhysicsTickFunction")),new UScriptStruct::TCppStructOps<FStartPhysicsTickFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStartPhysicsTickFunction;
	struct Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Tick function that starts the physics tick" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStartPhysicsTickFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"StartPhysicsTickFunction",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStartPhysicsTickFunction),
		alignof(FStartPhysicsTickFunction),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStartPhysicsTickFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStartPhysicsTickFunction_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StartPhysicsTickFunction"), sizeof(FStartPhysicsTickFunction), Get_Z_Construct_UScriptStruct_FStartPhysicsTickFunction_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStartPhysicsTickFunction_CRC() { return 3705206259U; }
class UScriptStruct* FLevelViewportInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLevelViewportInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelViewportInfo, Z_Construct_UPackage__Script_Engine(), TEXT("LevelViewportInfo"), sizeof(FLevelViewportInfo), Get_Z_Construct_UScriptStruct_FLevelViewportInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelViewportInfo(FLevelViewportInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("LevelViewportInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLevelViewportInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFLevelViewportInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelViewportInfo")),new UScriptStruct::TCppStructOps<FLevelViewportInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLevelViewportInfo;
	struct Z_Construct_UScriptStruct_FLevelViewportInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamUpdated_MetaData[];
#endif
		static void NewProp_CamUpdated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CamUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamOrthoZoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CamOrthoZoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Saved editor viewport state information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelViewportInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Whether camera settings have been systematically changed since the last level viewport update." },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamUpdated_SetBit(void* Obj)
	{
		((FLevelViewportInfo*)Obj)->CamUpdated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamUpdated = { UE4CodeGen_Private::EPropertyClass::Bool, "CamUpdated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FLevelViewportInfo), &Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamUpdated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamUpdated_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamOrthoZoom_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The zoom value  for orthographic mode." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamOrthoZoom = { UE4CodeGen_Private::EPropertyClass::Float, "CamOrthoZoom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLevelViewportInfo, CamOrthoZoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamOrthoZoom_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamOrthoZoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The camera's position within the viewport." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "CamRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLevelViewportInfo, CamRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Where the camera is positioned within the viewport." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "CamPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLevelViewportInfo, CamPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamPosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamOrthoZoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::NewProp_CamPosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LevelViewportInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FLevelViewportInfo),
		alignof(FLevelViewportInfo),
		Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelViewportInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelViewportInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelViewportInfo"), sizeof(FLevelViewportInfo), Get_Z_Construct_UScriptStruct_FLevelViewportInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelViewportInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelViewportInfo_CRC() { return 1186375264U; }
	void UWorld::StaticRegisterNativesUWorld()
	{
		UClass* Class = UWorld::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleTimelineScrubbed", &UWorld::execHandleTimelineScrubbed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorld_HandleTimelineScrubbed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorld_HandleTimelineScrubbed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Called from DemoNetDriver when playing back a replay and the timeline is successfully scrubbed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorld_HandleTimelineScrubbed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorld, "HandleTimelineScrubbed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorld_HandleTimelineScrubbed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWorld_HandleTimelineScrubbed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorld_HandleTimelineScrubbed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorld_HandleTimelineScrubbed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWorld_NoRegister()
	{
		return UWorld::StaticClass();
	}
	struct Z_Construct_UClass_UWorld_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSCPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PSCPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAreConstraintsDirty_MetaData[];
#endif
		static void NewProp_bAreConstraintsDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAreConstraintsDirty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldComposition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldComposition;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedLevels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorViews_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorViews;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorViews_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasForDrawMaterialToRenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanvasForDrawMaterialToRenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanvasForRenderingToTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CanvasForRenderingToTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterCollectionInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParameterCollectionInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParameterCollectionInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningGameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningGameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelCollections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelCollections;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelCollections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Levels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Levels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AvoidanceManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AISystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthorityGameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuthorityGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavigationSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysicsVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultPhysicsVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyParticleEventManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyParticleEventManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DemoNetDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DemoNetDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelPendingInvisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentLevelPendingInvisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelPendingVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentLevelPendingVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingLevelsPrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StreamingLevelsPrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingLevelsToConsider_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_StreamingLevelsToConsider;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreamingLevelsToConsider_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StreamingLevels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreamingLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerModuleDataObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerModuleDataObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerModuleDataObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraReferencedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtraReferencedObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExtraReferencedObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsCollisionHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsCollisionHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetworkManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundLineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForegroundLineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistentLineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PersistentLineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineBatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LineBatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistentLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PersistentLevel;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveGroupActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveGroupActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveGroupActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Layers_Inner;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorld_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorld_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorld_HandleTimelineScrubbed, "HandleTimelineScrubbed" }, // 503600325
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/World.h" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "The World is the top level object representing a map or a sandbox in which Actors and Components will exist and be rendered.\n\nA World can be a single Persistent Level with an optional list of streaming levels that are loaded and unloaded via volumes and blueprint functions\nor it can be a collection of levels organized with a World Composition.\n\nIn a standalone game, generally only a single World exists except during seamless area transitions when both a destination and current world exists.\nIn the editor many Worlds exist: The level being edited, each PIE instance, each editor tool which has an interactive rendered viewport, and many more." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_PSCPool_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_PSCPool = { UE4CodeGen_Private::EPropertyClass::Struct, "PSCPool", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000000, 1, nullptr, STRUCT_OFFSET(UWorld, PSCPool), Z_Construct_UScriptStruct_FWorldPSCPool, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_PSCPool_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_PSCPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_bAreConstraintsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Keeps track whether actors moved via PostEditMove and therefore constraint syncup should be performed." },
	};
#endif
	void Z_Construct_UClass_UWorld_Statics::NewProp_bAreConstraintsDirty_SetBit(void* Obj)
	{
		((UWorld*)Obj)->bAreConstraintsDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_bAreConstraintsDirty = { UE4CodeGen_Private::EPropertyClass::Bool, "bAreConstraintsDirty", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UWorld), &Z_Construct_UClass_UWorld_Statics::NewProp_bAreConstraintsDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_bAreConstraintsDirty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_bAreConstraintsDirty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_WorldComposition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "All levels information from which our world is composed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_WorldComposition = { UE4CodeGen_Private::EPropertyClass::Object, "WorldComposition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UWorld, WorldComposition), Z_Construct_UClass_UWorldComposition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_WorldComposition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_WorldComposition_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_SelectedLevels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Array of selected levels currently in this world. Not serialized to disk to avoid hard references." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_SelectedLevels = { UE4CodeGen_Private::EPropertyClass::Array, "SelectedLevels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800002000, 1, nullptr, STRUCT_OFFSET(UWorld, SelectedLevels), METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_SelectedLevels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_SelectedLevels_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_SelectedLevels_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SelectedLevels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_EditorViews_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Saved editor viewport states - one for each view type. Indexed using ELevelViewportType from UnrealEdTypes.h." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_EditorViews = { UE4CodeGen_Private::EPropertyClass::Array, "EditorViews", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000c00000000, 1, nullptr, STRUCT_OFFSET(UWorld, EditorViews), METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_EditorViews_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_EditorViews_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_EditorViews_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EditorViews", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLevelViewportInfo, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForDrawMaterialToRenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForDrawMaterialToRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "CanvasForDrawMaterialToRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, CanvasForDrawMaterialToRenderTarget), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForDrawMaterialToRenderTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForDrawMaterialToRenderTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForRenderingToTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Canvas object used for drawing to render targets from blueprint functions eg DrawMaterialToRenderTarget.\nThis is cached as UCanvas creation takes >100ms." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForRenderingToTarget = { UE4CodeGen_Private::EPropertyClass::Object, "CanvasForRenderingToTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, CanvasForRenderingToTarget), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForRenderingToTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForRenderingToTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_ParameterCollectionInstances_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Parameter collection instances that hold parameter overrides for this world." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ParameterCollectionInstances = { UE4CodeGen_Private::EPropertyClass::Array, "ParameterCollectionInstances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, ParameterCollectionInstances), METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_ParameterCollectionInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_ParameterCollectionInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ParameterCollectionInstances_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ParameterCollectionInstances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_OwningGameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_OwningGameInstance = { UE4CodeGen_Private::EPropertyClass::Object, "OwningGameInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, OwningGameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_OwningGameInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_OwningGameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Pointer to the current level being edited. Level has to be in the Levels array and == PersistentLevel in the game." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevel = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, CurrentLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_LevelCollections_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Array of level collections currently in this world." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_LevelCollections = { UE4CodeGen_Private::EPropertyClass::Array, "LevelCollections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000400002000, 1, nullptr, STRUCT_OFFSET(UWorld, LevelCollections), METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_LevelCollections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_LevelCollections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_LevelCollections_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LevelCollections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLevelCollection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_Levels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Array of levels currently in this world. Not serialized to disk to avoid hard references." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_Levels = { UE4CodeGen_Private::EPropertyClass::Array, "Levels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, Levels), METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_Levels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_Levels_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_Levels_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Levels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_AvoidanceManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "RVO avoidance manager used by game" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_AvoidanceManager = { UE4CodeGen_Private::EPropertyClass::Object, "AvoidanceManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, AvoidanceManager), Z_Construct_UClass_UAvoidanceManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_AvoidanceManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_AvoidanceManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_AISystem_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The AI System handles generating pathing information and AI behavior" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_AISystem = { UE4CodeGen_Private::EPropertyClass::Object, "AISystem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, AISystem), Z_Construct_UClass_UAISystemBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_AISystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_AISystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_GameState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The replicated actor which contains game state information that can be accessible to clients. Direct access is not allowed, use GetGameState<>()" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_GameState = { UE4CodeGen_Private::EPropertyClass::Object, "GameState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, GameState), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_GameState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_GameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_AuthorityGameMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The current GameMode, valid only on the server" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_AuthorityGameMode = { UE4CodeGen_Private::EPropertyClass::Object, "AuthorityGameMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, AuthorityGameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_AuthorityGameMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_AuthorityGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_NavigationSystem_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The world's navigation data manager" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_NavigationSystem = { UE4CodeGen_Private::EPropertyClass::Object, "NavigationSystem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, NavigationSystem), Z_Construct_UClass_UNavigationSystemBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_NavigationSystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_NavigationSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_DefaultPhysicsVolume_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "DefaultPhysicsVolume used for whole game *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_DefaultPhysicsVolume = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultPhysicsVolume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UWorld, DefaultPhysicsVolume), Z_Construct_UClass_APhysicsVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_DefaultPhysicsVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_DefaultPhysicsVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_MyParticleEventManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Particle event manager *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_MyParticleEventManager = { UE4CodeGen_Private::EPropertyClass::Object, "MyParticleEventManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UWorld, MyParticleEventManager), Z_Construct_UClass_AParticleEventManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_MyParticleEventManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_MyParticleEventManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_DemoNetDriver_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Fake NetDriver for capturing network traffic to record demos" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_DemoNetDriver = { UE4CodeGen_Private::EPropertyClass::Object, "DemoNetDriver", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UWorld, DemoNetDriver), Z_Construct_UClass_UDemoNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_DemoNetDriver_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_DemoNetDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingInvisibility_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Pointer to the current level in the queue to be made invisible, NULL if none are pending." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingInvisibility = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentLevelPendingInvisibility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, CurrentLevelPendingInvisibility), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingInvisibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingInvisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingVisibility_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Pointer to the current level in the queue to be made visible, NULL if none are pending." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingVisibility = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentLevelPendingVisibility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, CurrentLevelPendingVisibility), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingVisibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsPrefix_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Prefix we used to rename streaming levels, non empty in PIE and standalone preview" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsPrefix = { UE4CodeGen_Private::EPropertyClass::Str, "StreamingLevelsPrefix", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UWorld, StreamingLevelsPrefix), METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsPrefix_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsPrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsToConsider_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "This is the list of streaming levels that are actively being considered for what their state should be. It will be a subset of StreamingLevels" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsToConsider = { UE4CodeGen_Private::EPropertyClass::Set, "StreamingLevelsToConsider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000202000, 1, nullptr, STRUCT_OFFSET(UWorld, StreamingLevelsToConsider), METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsToConsider_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsToConsider_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsToConsider_ElementProp = { UE4CodeGen_Private::EPropertyClass::Object, "StreamingLevelsToConsider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Level collection. ULevels are referenced by FName (Package name) to avoid serialized references. Also contains offsets in world units" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevels = { UE4CodeGen_Private::EPropertyClass::Array, "StreamingLevels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, StreamingLevels), METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevels_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevels_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "StreamingLevels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_PerModuleDataObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "External modules can have additional data associated with this UWorld.\nThis is a list of per module world data objects. These aren't\nloaded/saved by default." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_PerModuleDataObjects = { UE4CodeGen_Private::EPropertyClass::Array, "PerModuleDataObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, PerModuleDataObjects), METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_PerModuleDataObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_PerModuleDataObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_PerModuleDataObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "PerModuleDataObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_ExtraReferencedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Array of any additional objects that need to be referenced by this world, to make sure they aren't GC'd" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ExtraReferencedObjects = { UE4CodeGen_Private::EPropertyClass::Array, "ExtraReferencedObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, ExtraReferencedObjects), METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_ExtraReferencedObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_ExtraReferencedObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ExtraReferencedObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ExtraReferencedObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_PhysicsCollisionHandler_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Instance of this world's game-specific physics collision handler" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_PhysicsCollisionHandler = { UE4CodeGen_Private::EPropertyClass::Object, "PhysicsCollisionHandler", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, PhysicsCollisionHandler), Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_PhysicsCollisionHandler_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_PhysicsCollisionHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_NetworkManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Instance of this world's game-specific networking management" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_NetworkManager = { UE4CodeGen_Private::EPropertyClass::Object, "NetworkManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, NetworkManager), Z_Construct_UClass_AGameNetworkManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_NetworkManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_NetworkManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_ForegroundLineBatcher_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Foreground Line Batchers. This can't be Persistent." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ForegroundLineBatcher = { UE4CodeGen_Private::EPropertyClass::Object, "ForegroundLineBatcher", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000082008, 1, nullptr, STRUCT_OFFSET(UWorld, ForegroundLineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_ForegroundLineBatcher_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_ForegroundLineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLineBatcher_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Persistent Line Batchers. They don't get flushed every frame." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLineBatcher = { UE4CodeGen_Private::EPropertyClass::Object, "PersistentLineBatcher", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000082008, 1, nullptr, STRUCT_OFFSET(UWorld, PersistentLineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLineBatcher_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_LineBatcher_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Line Batchers. All lines to be drawn in the world." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_LineBatcher = { UE4CodeGen_Private::EPropertyClass::Object, "LineBatcher", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000082008, 1, nullptr, STRUCT_OFFSET(UWorld, LineBatcher), Z_Construct_UClass_ULineBatchComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_LineBatcher_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_LineBatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_NetDriver_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "The NAME_GameNetDriver game connection(s) for client/server communication" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_NetDriver = { UE4CodeGen_Private::EPropertyClass::Object, "NetDriver", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, NetDriver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_NetDriver_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_NetDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Persistent level containing the world info, default brush and actors spawned during gameplay among other things" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLevel = { UE4CodeGen_Private::EPropertyClass::Object, "PersistentLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UWorld, PersistentLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLevel_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ThumbnailInfo = { UE4CodeGen_Private::EPropertyClass::Object, "ThumbnailInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(UWorld, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_ThumbnailInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_ActiveGroupActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "Group actors currently \"active\"" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ActiveGroupActors = { UE4CodeGen_Private::EPropertyClass::Array, "ActiveGroupActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UWorld, ActiveGroupActors), METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_ActiveGroupActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_ActiveGroupActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_ActiveGroupActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActiveGroupActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorld_Statics::NewProp_Layers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/World.h" },
		{ "ToolTip", "List of all the layers referenced by the world's actors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_Layers = { UE4CodeGen_Private::EPropertyClass::Array, "Layers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UWorld, Layers), METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::NewProp_Layers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::NewProp_Layers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWorld_Statics::NewProp_Layers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Layers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_ULayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_PSCPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_bAreConstraintsDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_WorldComposition,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_SelectedLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_SelectedLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_EditorViews,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_EditorViews_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForDrawMaterialToRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_CanvasForRenderingToTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ParameterCollectionInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ParameterCollectionInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_OwningGameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_LevelCollections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_LevelCollections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_Levels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_Levels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_AvoidanceManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_AISystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_GameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_AuthorityGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_NavigationSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_DefaultPhysicsVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_MyParticleEventManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_DemoNetDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingInvisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_CurrentLevelPendingVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsToConsider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevelsToConsider_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_StreamingLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_PerModuleDataObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_PerModuleDataObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ExtraReferencedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ExtraReferencedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_PhysicsCollisionHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_NetworkManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ForegroundLineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_LineBatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_NetDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_PersistentLevel,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ThumbnailInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ActiveGroupActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_ActiveGroupActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_Layers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorld_Statics::NewProp_Layers_Inner,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorld>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorld_Statics::ClassParams = {
		&UWorld::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UWorld_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWorld_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWorld_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorld()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorld_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorld, 3411982054);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorld(Z_Construct_UClass_UWorld, &UWorld::StaticClass, TEXT("/Script/Engine"), TEXT("UWorld"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorld);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWorld)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
