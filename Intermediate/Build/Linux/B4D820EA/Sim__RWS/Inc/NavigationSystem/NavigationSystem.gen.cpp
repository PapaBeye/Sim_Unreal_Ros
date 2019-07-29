// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavigationSystem.h"
#include "Engine/Classes/Engine/World.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationSystem() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationSystemV1_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationSystemV1();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemBase();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPath_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_GetPathCost();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationQueryResult();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_GetPathLength();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_FNavigationSystemRunMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavDataConfig();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UCrowdManagerBase_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationSystemModuleConfig_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationSystemModuleConfig();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics
	{
		struct _Script_NavigationSystem_eventOnNavDataGenericEvent_Parms
		{
			ANavigationData* NavData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_NavigationSystem_eventOnNavDataGenericEvent_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::NewProp_NavData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Delegate to let interested parties know that Nav Data has been registered" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem, "OnNavDataGenericEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_NavigationSystem_eventOnNavDataGenericEvent_Parms), Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UNavigationSystemV1::StaticRegisterNativesUNavigationSystemV1()
	{
		UClass* Class = UNavigationSystemV1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindPathToActorSynchronously", &UNavigationSystemV1::execFindPathToActorSynchronously },
			{ "FindPathToLocationSynchronously", &UNavigationSystemV1::execFindPathToLocationSynchronously },
			{ "GetNavigationSystem", &UNavigationSystemV1::execGetNavigationSystem },
			{ "GetPathCost", &UNavigationSystemV1::execGetPathCost },
			{ "GetPathLength", &UNavigationSystemV1::execGetPathLength },
			{ "GetRandomPointInNavigableRadius", &UNavigationSystemV1::execGetRandomPointInNavigableRadius },
			{ "GetRandomReachablePointInRadius", &UNavigationSystemV1::execGetRandomReachablePointInRadius },
			{ "IsNavigationBeingBuilt", &UNavigationSystemV1::execIsNavigationBeingBuilt },
			{ "IsNavigationBeingBuiltOrLocked", &UNavigationSystemV1::execIsNavigationBeingBuiltOrLocked },
			{ "K2_GetRandomPointInNavigableRadius", &UNavigationSystemV1::execK2_GetRandomPointInNavigableRadius },
			{ "K2_GetRandomReachablePointInRadius", &UNavigationSystemV1::execK2_GetRandomReachablePointInRadius },
			{ "K2_ProjectPointToNavigation", &UNavigationSystemV1::execK2_ProjectPointToNavigation },
			{ "NavigationRaycast", &UNavigationSystemV1::execNavigationRaycast },
			{ "OnNavigationBoundsUpdated", &UNavigationSystemV1::execOnNavigationBoundsUpdated },
			{ "ProjectPointToNavigation", &UNavigationSystemV1::execProjectPointToNavigation },
			{ "RegisterNavigationInvoker", &UNavigationSystemV1::execRegisterNavigationInvoker },
			{ "ResetMaxSimultaneousTileGenerationJobsCount", &UNavigationSystemV1::execResetMaxSimultaneousTileGenerationJobsCount },
			{ "SetGeometryGatheringMode", &UNavigationSystemV1::execSetGeometryGatheringMode },
			{ "SetMaxSimultaneousTileGenerationJobsCount", &UNavigationSystemV1::execSetMaxSimultaneousTileGenerationJobsCount },
			{ "SimpleMoveToActor", &UNavigationSystemV1::execSimpleMoveToActor },
			{ "SimpleMoveToLocation", &UNavigationSystemV1::execSimpleMoveToLocation },
			{ "UnregisterNavigationInvoker", &UNavigationSystemV1::execUnregisterNavigationInvoker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics
	{
		struct NavigationSystemV1_eventFindPathToActorSynchronously_Parms
		{
			UObject* WorldContextObject;
			FVector PathStart;
			AActor* GoalActor;
			float TetherDistance;
			AActor* PathfindingContext;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			UNavigationPath* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathfindingContext;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TetherDistance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GoalActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathStart;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToActorSynchronously_Parms, ReturnValue), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToActorSynchronously_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_PathfindingContext = { UE4CodeGen_Private::EPropertyClass::Object, "PathfindingContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToActorSynchronously_Parms, PathfindingContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_TetherDistance = { UE4CodeGen_Private::EPropertyClass::Float, "TetherDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToActorSynchronously_Parms, TetherDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_GoalActor = { UE4CodeGen_Private::EPropertyClass::Object, "GoalActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToActorSynchronously_Parms, GoalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_PathStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_PathStart = { UE4CodeGen_Private::EPropertyClass::Struct, "PathStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToActorSynchronously_Parms, PathStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_PathStart_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_PathStart_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToActorSynchronously_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_PathfindingContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_TetherDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_GoalActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_PathStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_PathfindingContext", "None" },
		{ "CPP_Default_TetherDistance", "50.000000" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Finds path instantly, in a FindPath Synchronously. Main advantage over FindPathToLocationSynchronously is that\n    the resulting path will automatically get updated if goal actor moves more than TetherDistance away from last path node\n    @param PathfindingContext could be one of following: NavigationData (like Navmesh actor), Pawn or Controller. This parameter determines parameters of specific pathfinding query" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "FindPathToActorSynchronously", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavigationSystemV1_eventFindPathToActorSynchronously_Parms), Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics
	{
		struct NavigationSystemV1_eventFindPathToLocationSynchronously_Parms
		{
			UObject* WorldContextObject;
			FVector PathStart;
			FVector PathEnd;
			AActor* PathfindingContext;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			UNavigationPath* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathfindingContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathStart;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToLocationSynchronously_Parms, ReturnValue), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToLocationSynchronously_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathfindingContext = { UE4CodeGen_Private::EPropertyClass::Object, "PathfindingContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToLocationSynchronously_Parms, PathfindingContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "PathEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToLocationSynchronously_Parms, PathEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathEnd_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathStart = { UE4CodeGen_Private::EPropertyClass::Struct, "PathStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToLocationSynchronously_Parms, PathStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathStart_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathStart_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToLocationSynchronously_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathfindingContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_PathfindingContext", "None" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Finds path instantly, in a FindPath Synchronously.\n    @param PathfindingContext could be one of following: NavigationData (like Navmesh actor), Pawn or Controller. This parameter determines parameters of specific pathfinding query" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "FindPathToLocationSynchronously", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavigationSystemV1_eventFindPathToLocationSynchronously_Parms), Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics
	{
		struct NavigationSystemV1_eventGetNavigationSystem_Parms
		{
			UObject* WorldContextObject;
			UNavigationSystemV1* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetNavigationSystem_Parms, ReturnValue), Z_Construct_UClass_UNavigationSystemV1_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetNavigationSystem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Blueprint functions" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "GetNavigationSystem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(NavigationSystemV1_eventGetNavigationSystem_Parms), Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics
	{
		struct NavigationSystemV1_eventGetPathCost_Parms
		{
			UObject* WorldContextObject;
			FVector PathStart;
			FVector PathEnd;
			float PathCost;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			TEnumAsByte<ENavigationQueryResult::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathCost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathStart;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathCost_Parms, ReturnValue), Z_Construct_UEnum_Engine_ENavigationQueryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathCost_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathCost_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathCost = { UE4CodeGen_Private::EPropertyClass::Float, "PathCost", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathCost_Parms, PathCost), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "PathEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathCost_Parms, PathEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathEnd_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathStart = { UE4CodeGen_Private::EPropertyClass::Struct, "PathStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathCost_Parms, PathStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathStart_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathStart_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathCost_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_NavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathCost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_NavData", "None" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Potentially expensive. Use with caution. Consider using UPathFollowingComponent::GetRemainingPathCost instead" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "GetPathCost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystemV1_eventGetPathCost_Parms), Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_GetPathCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics
	{
		struct NavigationSystemV1_eventGetPathLength_Parms
		{
			UObject* WorldContextObject;
			FVector PathStart;
			FVector PathEnd;
			float PathLength;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			TEnumAsByte<ENavigationQueryResult::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathStart;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathLength_Parms, ReturnValue), Z_Construct_UEnum_Engine_ENavigationQueryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathLength_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathLength_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathLength = { UE4CodeGen_Private::EPropertyClass::Float, "PathLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathLength_Parms, PathLength), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "PathEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathLength_Parms, PathEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathEnd_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathStart = { UE4CodeGen_Private::EPropertyClass::Struct, "PathStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathLength_Parms, PathStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathStart_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathStart_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathLength_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_NavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_NavData", "None" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Potentially expensive. Use with caution" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "GetPathLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystemV1_eventGetPathLength_Parms), Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_GetPathLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics
	{
		struct NavigationSystemV1_eventGetRandomPointInNavigableRadius_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			float Radius;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetRandomPointInNavigableRadius_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetRandomPointInNavigableRadius_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetRandomPointInNavigableRadius_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetRandomPointInNavigableRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::NewProp_Origin = { UE4CodeGen_Private::EPropertyClass::Struct, "Origin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetRandomPointInNavigableRadius_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::NewProp_Origin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetRandomPointInNavigableRadius_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::NewProp_NavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_NavData", "None" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This version of GetRandomPointInNavigableRadius is deprecated. Please use the new version" },
		{ "DisplayName", "GetRandomPointInNavigableRadius_DEPRECATED" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ScriptNoExport", "" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "GetRandomPointInNavigableRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystemV1_eventGetRandomPointInNavigableRadius_Parms), Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics
	{
		struct NavigationSystemV1_eventGetRandomReachablePointInRadius_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			float Radius;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetRandomReachablePointInRadius_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetRandomReachablePointInRadius_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetRandomReachablePointInRadius_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetRandomReachablePointInRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::NewProp_Origin = { UE4CodeGen_Private::EPropertyClass::Struct, "Origin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetRandomReachablePointInRadius_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::NewProp_Origin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetRandomReachablePointInRadius_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::NewProp_NavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_NavData", "None" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This version of GetRandomReachablePointInRadius is deprecated. Please use the new version" },
		{ "DisplayName", "GetRandomReachablePointInRadius_DEPRECATED" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ScriptNoExport", "" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "GetRandomReachablePointInRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystemV1_eventGetRandomReachablePointInRadius_Parms), Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics
	{
		struct NavigationSystemV1_eventIsNavigationBeingBuilt_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationSystemV1_eventIsNavigationBeingBuilt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationSystemV1_eventIsNavigationBeingBuilt_Parms), &Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventIsNavigationBeingBuilt_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "IsNavigationBeingBuilt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(NavigationSystemV1_eventIsNavigationBeingBuilt_Parms), Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics
	{
		struct NavigationSystemV1_eventIsNavigationBeingBuiltOrLocked_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationSystemV1_eventIsNavigationBeingBuiltOrLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationSystemV1_eventIsNavigationBeingBuiltOrLocked_Parms), &Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventIsNavigationBeingBuiltOrLocked_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "IsNavigationBeingBuiltOrLocked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(NavigationSystemV1_eventIsNavigationBeingBuiltOrLocked_Parms), Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics
	{
		struct NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			FVector RandomLocation;
			float Radius;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms), &Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_RandomLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "RandomLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms, RandomLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_Origin = { UE4CodeGen_Private::EPropertyClass::Struct, "Origin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_Origin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_NavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_RandomLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_NavData", "None" },
		{ "DisplayName", "GetRandomPointInNavigableRadius" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ScriptName", "GetRandomPointInNavigableRadius" },
		{ "ToolTip", "Generates a random location in navigable space within given radius of Origin.\n    @return Return Value represents if the call was successful" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "K2_GetRandomPointInNavigableRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms), Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics
	{
		struct NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			FVector RandomLocation;
			float Radius;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RandomLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms), &Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_RandomLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "RandomLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms, RandomLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_Origin = { UE4CodeGen_Private::EPropertyClass::Struct, "Origin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_Origin_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_Origin_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_NavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_RandomLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_NavData", "None" },
		{ "DisplayName", "GetRandomReachablePointInRadius" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ScriptName", "GetRandomReachablePointInRadius" },
		{ "ToolTip", "Generates a random location reachable from given Origin location.\n    @return Return Value represents if the call was successful" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "K2_GetRandomReachablePointInRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms), Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics
	{
		struct NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms
		{
			UObject* WorldContextObject;
			FVector Point;
			FVector ProjectedLocation;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			FVector QueryExtent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryExtent;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectedLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms), &Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_QueryExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_QueryExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "QueryExtent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms, QueryExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_QueryExtent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_QueryExtent_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_ProjectedLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ProjectedLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms, ProjectedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_Point = { UE4CodeGen_Private::EPropertyClass::Struct, "Point", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_Point_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_QueryExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_NavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_ProjectedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_QueryExtent", "" },
		{ "DisplayName", "ProjectPointToNavigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ScriptName", "ProjectPointToNavigation" },
		{ "ToolTip", "Project a point onto the NavigationData" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "K2_ProjectPointToNavigation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms), Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics
	{
		struct NavigationSystemV1_eventNavigationRaycast_Parms
		{
			UObject* WorldContextObject;
			FVector RayStart;
			FVector RayEnd;
			FVector HitLocation;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			AController* Querier;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Querier;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RayEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RayStart;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationSystemV1_eventNavigationRaycast_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationSystemV1_eventNavigationRaycast_Parms), &Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_Querier = { UE4CodeGen_Private::EPropertyClass::Object, "Querier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventNavigationRaycast_Parms, Querier), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventNavigationRaycast_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_HitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "HitLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventNavigationRaycast_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "RayEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventNavigationRaycast_Parms, RayEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayEnd_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayStart = { UE4CodeGen_Private::EPropertyClass::Struct, "RayStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventNavigationRaycast_Parms, RayStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayStart_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayStart_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventNavigationRaycast_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_Querier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_Querier", "None" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Performs navigation raycast on NavigationData appropriate for given Querier.\n    @param Querier if not passed default navigation data will be used\n    @param HitLocation if line was obstructed this will be set to hit location. Otherwise it contains SegmentEnd\n    @return true if line from RayStart to RayEnd was obstructed. Also, true when no navigation data present" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "NavigationRaycast", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavigationSystemV1_eventNavigationRaycast_Parms), Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics
	{
		struct NavigationSystemV1_eventOnNavigationBoundsUpdated_Parms
		{
			ANavMeshBoundsVolume* NavVolume;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::NewProp_NavVolume = { UE4CodeGen_Private::EPropertyClass::Object, "NavVolume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventOnNavigationBoundsUpdated_Parms, NavVolume), Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::NewProp_NavVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "OnNavigationBoundsUpdated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavigationSystemV1_eventOnNavigationBoundsUpdated_Parms), Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics
	{
		struct NavigationSystemV1_eventProjectPointToNavigation_Parms
		{
			UObject* WorldContextObject;
			FVector Point;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			FVector QueryExtent;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QueryExtent;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventProjectPointToNavigation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_QueryExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_QueryExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "QueryExtent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventProjectPointToNavigation_Parms, QueryExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_QueryExtent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_QueryExtent_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_FilterClass = { UE4CodeGen_Private::EPropertyClass::Class, "FilterClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventProjectPointToNavigation_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_NavData = { UE4CodeGen_Private::EPropertyClass::Object, "NavData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventProjectPointToNavigation_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_Point = { UE4CodeGen_Private::EPropertyClass::Struct, "Point", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventProjectPointToNavigation_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_Point_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventProjectPointToNavigation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_QueryExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_NavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_NavData", "None" },
		{ "CPP_Default_QueryExtent", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This version of ProjectPointToNavigation is deprecated. Please use the new version" },
		{ "DisplayName", "ProjectPointToNavigation_DEPRECATED" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ScriptNoExport", "" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "ProjectPointToNavigation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(NavigationSystemV1_eventProjectPointToNavigation_Parms), Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics
	{
		struct NavigationSystemV1_eventRegisterNavigationInvoker_Parms
		{
			AActor* Invoker;
			float TileGenerationRadius;
			float TileRemovalRadius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileRemovalRadius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileGenerationRadius;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Invoker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::NewProp_TileRemovalRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TileRemovalRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventRegisterNavigationInvoker_Parms, TileRemovalRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::NewProp_TileGenerationRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TileGenerationRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventRegisterNavigationInvoker_Parms, TileGenerationRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::NewProp_Invoker = { UE4CodeGen_Private::EPropertyClass::Object, "Invoker", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventRegisterNavigationInvoker_Parms, Invoker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::NewProp_TileRemovalRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::NewProp_TileGenerationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::NewProp_Invoker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_TileGenerationRadius", "3000.000000" },
		{ "CPP_Default_TileRemovalRadius", "5000.000000" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Registers given actor as a \"navigation enforcer\" which means navigation system will\n    make sure navigation is being generated in specified radius around it.\n    @note: you need NavigationSystem's GenerateNavigationOnlyAroundNavigationInvokers to be set to true\n            to take advantage of this feature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "RegisterNavigationInvoker", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavigationSystemV1_eventRegisterNavigationInvoker_Parms), Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Brings limit of simultaneous navmesh tile generation jobs back to Project Setting's default value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "ResetMaxSimultaneousTileGenerationJobsCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics
	{
		struct NavigationSystemV1_eventSetGeometryGatheringMode_Parms
		{
			ENavDataGatheringModeConfig NewMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::NewProp_NewMode = { UE4CodeGen_Private::EPropertyClass::Enum, "NewMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventSetGeometryGatheringMode_Parms, NewMode), Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::NewProp_NewMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::NewProp_NewMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::NewProp_NewMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation|Generation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "SetGeometryGatheringMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavigationSystemV1_eventSetGeometryGatheringMode_Parms), Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics
	{
		struct NavigationSystemV1_eventSetMaxSimultaneousTileGenerationJobsCount_Parms
		{
			int32 MaxNumberOfJobs;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfJobs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::NewProp_MaxNumberOfJobs = { UE4CodeGen_Private::EPropertyClass::Int, "MaxNumberOfJobs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventSetMaxSimultaneousTileGenerationJobsCount_Parms, MaxNumberOfJobs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::NewProp_MaxNumberOfJobs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "will limit the number of simultaneously running navmesh tile generation jobs to specified number.\n    @param MaxNumberOfJobs gets trimmed to be at least 1. You cannot use this function to pause navmesh generation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "SetMaxSimultaneousTileGenerationJobsCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavigationSystemV1_eventSetMaxSimultaneousTileGenerationJobsCount_Parms), Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics
	{
		struct NavigationSystemV1_eventSimpleMoveToActor_Parms
		{
			AController* Controller;
			const AActor* Goal;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Goal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics::NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics::NewProp_Goal = { UE4CodeGen_Private::EPropertyClass::Object, "Goal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventSimpleMoveToActor_Parms, Goal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics::NewProp_Goal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics::NewProp_Goal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics::NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventSimpleMoveToActor_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "SimpleMoveToActor is deprecated. Use AIBlueprintHelperLibrary::SimpleMoveToActor instead" },
		{ "DisplayName", "SimpleMoveToActor_DEPRECATED" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ScriptNoExport", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "SimpleMoveToActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(NavigationSystemV1_eventSimpleMoveToActor_Parms), Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics
	{
		struct NavigationSystemV1_eventSimpleMoveToLocation_Parms
		{
			AController* Controller;
			FVector Goal;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Goal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics::NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics::NewProp_Goal = { UE4CodeGen_Private::EPropertyClass::Struct, "Goal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventSimpleMoveToLocation_Parms, Goal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics::NewProp_Goal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics::NewProp_Goal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics::NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventSimpleMoveToLocation_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "SimpleMoveToLocation is deprecated. Use AIBlueprintHelperLibrary::SimpleMoveToLocation instead" },
		{ "DisplayName", "SimpleMoveToLocation_DEPRECATED" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ScriptNoExport", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "SimpleMoveToLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavigationSystemV1_eventSimpleMoveToLocation_Parms), Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics
	{
		struct NavigationSystemV1_eventUnregisterNavigationInvoker_Parms
		{
			AActor* Invoker;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Invoker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::NewProp_Invoker = { UE4CodeGen_Private::EPropertyClass::Object, "Invoker", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventUnregisterNavigationInvoker_Parms, Invoker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::NewProp_Invoker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Removes given actor from the list of active navigation enforcers.\n    @see RegisterNavigationInvoker for more details" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, "UnregisterNavigationInvoker", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavigationSystemV1_eventUnregisterNavigationInvoker_Parms), Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavigationSystemV1_NoRegister()
	{
		return UNavigationSystemV1::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationSystemV1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OperationMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OperationMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNavigationGenerationFinishedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNavigationGenerationFinishedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnNavDataRegisteredEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNavDataRegisteredEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavDataRegistrationQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavDataRegistrationQueue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavDataRegistrationQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavDataSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NavDataSet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavDataSet_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtyAreasUpdateFreq_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirtyAreasUpdateFreq;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedAgents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedAgents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SupportedAgents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTilesUpdateInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActiveTilesUpdateInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_MetaData[];
#endif
		static void NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateNavigationOnlyAroundNavigationInvokers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataGatheringMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataGatheringMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataGatheringMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipAgentHeightCheckWhenPickingNavData_MetaData[];
#endif
		static void NewProp_bSkipAgentHeightCheckWhenPickingNavData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipAgentHeightCheckWhenPickingNavData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitialBuildingLocked_MetaData[];
#endif
		static void NewProp_bInitialBuildingLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitialBuildingLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportRebuilding_MetaData[];
#endif
		static void NewProp_bSupportRebuilding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportRebuilding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickWhilePaused_MetaData[];
#endif
		static void NewProp_bTickWhilePaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickWhilePaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldDiscardSubLevelNavData_MetaData[];
#endif
		static void NewProp_bShouldDiscardSubLevelNavData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDiscardSubLevelNavData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowClientSideNavigation_MetaData[];
#endif
		static void NewProp_bAllowClientSideNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowClientSideNavigation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnNavDataInNavBoundsLevel_MetaData[];
#endif
		static void NewProp_bSpawnNavDataInNavBoundsLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnNavDataInNavBoundsLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCreateNavigationData_MetaData[];
#endif
		static void NewProp_bAutoCreateNavigationData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCreateNavigationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CrowdManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbstractNavData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbstractNavData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainNavData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainNavData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationSystemV1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationSystemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNavigationSystemV1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously, "FindPathToActorSynchronously" }, // 841630669
		{ &Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously, "FindPathToLocationSynchronously" }, // 861481081
		{ &Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem, "GetNavigationSystem" }, // 546689658
		{ &Z_Construct_UFunction_UNavigationSystemV1_GetPathCost, "GetPathCost" }, // 2859877032
		{ &Z_Construct_UFunction_UNavigationSystemV1_GetPathLength, "GetPathLength" }, // 4176974198
		{ &Z_Construct_UFunction_UNavigationSystemV1_GetRandomPointInNavigableRadius, "GetRandomPointInNavigableRadius" }, // 358930446
		{ &Z_Construct_UFunction_UNavigationSystemV1_GetRandomReachablePointInRadius, "GetRandomReachablePointInRadius" }, // 3871885434
		{ &Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt, "IsNavigationBeingBuilt" }, // 239859769
		{ &Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked, "IsNavigationBeingBuiltOrLocked" }, // 2255879325
		{ &Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius, "K2_GetRandomPointInNavigableRadius" }, // 2875970118
		{ &Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius, "K2_GetRandomReachablePointInRadius" }, // 3499531231
		{ &Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation, "K2_ProjectPointToNavigation" }, // 41751994
		{ &Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast, "NavigationRaycast" }, // 2973361204
		{ &Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated, "OnNavigationBoundsUpdated" }, // 1263507478
		{ &Z_Construct_UFunction_UNavigationSystemV1_ProjectPointToNavigation, "ProjectPointToNavigation" }, // 2145523583
		{ &Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker, "RegisterNavigationInvoker" }, // 1532565210
		{ &Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount, "ResetMaxSimultaneousTileGenerationJobsCount" }, // 3524733196
		{ &Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode, "SetGeometryGatheringMode" }, // 3210215043
		{ &Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount, "SetMaxSimultaneousTileGenerationJobsCount" }, // 4020399177
		{ &Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToActor, "SimpleMoveToActor" }, // 2994698347
		{ &Z_Construct_UFunction_UNavigationSystemV1_SimpleMoveToLocation, "SimpleMoveToLocation" }, // 1634797226
		{ &Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker, "UnregisterNavigationInvoker" }, // 2640795366
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavigationSystem.h" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OperationMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OperationMode = { UE4CodeGen_Private::EPropertyClass::Enum, "OperationMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UNavigationSystemV1, OperationMode), Z_Construct_UEnum_Engine_FNavigationSystemRunMode, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OperationMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OperationMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OperationMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavigationGenerationFinishedDelegate_MetaData[] = {
		{ "displayname", "OnNavigationGenerationFinished" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavigationGenerationFinishedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnNavigationGenerationFinishedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010082000, 1, nullptr, STRUCT_OFFSET(UNavigationSystemV1, OnNavigationGenerationFinishedDelegate), Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavigationGenerationFinishedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavigationGenerationFinishedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavDataRegisteredEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "BlueprintAssignable," },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavDataRegisteredEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnNavDataRegisteredEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000082000, 1, nullptr, STRUCT_OFFSET(UNavigationSystemV1, OnNavDataRegisteredEvent), Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavDataRegisteredEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavDataRegisteredEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataRegistrationQueue_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataRegistrationQueue = { UE4CodeGen_Private::EPropertyClass::Array, "NavDataRegistrationQueue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UNavigationSystemV1, NavDataRegistrationQueue), METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataRegistrationQueue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataRegistrationQueue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataRegistrationQueue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "NavDataRegistrationQueue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataSet = { UE4CodeGen_Private::EPropertyClass::Array, "NavDataSet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNavigationSystemV1, NavDataSet), METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataSet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataSet_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "NavDataSet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DirtyAreasUpdateFreq_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "update frequency for dirty areas on navmesh" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DirtyAreasUpdateFreq = { UE4CodeGen_Private::EPropertyClass::Float, "DirtyAreasUpdateFreq", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UNavigationSystemV1, DirtyAreasUpdateFreq), METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DirtyAreasUpdateFreq_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DirtyAreasUpdateFreq_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgents_MetaData[] = {
		{ "Category", "Agents" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgents = { UE4CodeGen_Private::EPropertyClass::Array, "SupportedAgents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UNavigationSystemV1, SupportedAgents), METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SupportedAgents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNavDataConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_ActiveTilesUpdateInterval_MetaData[] = {
		{ "Category", "Navigation Enforcing" },
		{ "ClampMin", "0.1" },
		{ "EditCondition", "bGenerateNavigationOnlyAroundNavigationInvokers" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Minimal time, in seconds, between active tiles set update" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_ActiveTilesUpdateInterval = { UE4CodeGen_Private::EPropertyClass::Float, "ActiveTilesUpdateInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UNavigationSystemV1, ActiveTilesUpdateInterval), METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_ActiveTilesUpdateInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_ActiveTilesUpdateInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_MetaData[] = {
		{ "Category", "Navigation Enforcing" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "If set to true navigation will be generated only around registered \"navigation enforcers\"\n     This has a range of consequences (including how navigation octree operates) so it needs to\n     be a conscious decision.\n     Once enabled results in whole world being navigable.\n     @see RegisterNavigationInvoker" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bGenerateNavigationOnlyAroundNavigationInvokers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bGenerateNavigationOnlyAroundNavigationInvokers = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateNavigationOnlyAroundNavigationInvokers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000014001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DataGatheringMode_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DataGatheringMode = { UE4CodeGen_Private::EPropertyClass::Enum, "DataGatheringMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000014001, 1, nullptr, STRUCT_OFFSET(UNavigationSystemV1, DataGatheringMode), Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DataGatheringMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DataGatheringMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DataGatheringMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSkipAgentHeightCheckWhenPickingNavData_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "false by default, if set to true will result in not caring about nav agent height\n    when trying to match navigation data to passed in nav agent" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSkipAgentHeightCheckWhenPickingNavData_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bSkipAgentHeightCheckWhenPickingNavData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSkipAgentHeightCheckWhenPickingNavData = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipAgentHeightCheckWhenPickingNavData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSkipAgentHeightCheckWhenPickingNavData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSkipAgentHeightCheckWhenPickingNavData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSkipAgentHeightCheckWhenPickingNavData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bInitialBuildingLocked_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "if set to true will result navigation system not rebuild navigation until\n    a call to ReleaseInitialBuildingLock() is called. Does not influence\n    editor-time generation (i.e. does influence PIE and Game).\n    Defaults to false." },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bInitialBuildingLocked_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bInitialBuildingLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bInitialBuildingLocked = { UE4CodeGen_Private::EPropertyClass::Bool, "bInitialBuildingLocked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bInitialBuildingLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bInitialBuildingLocked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bInitialBuildingLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSupportRebuilding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "gets set to true if gathering navigation data (like in navoctree) is required due to the need of navigation generation\n    Is always true in Editor Mode. In other modes it depends on bRebuildAtRuntime of every required NavigationData class' CDO" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSupportRebuilding_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bSupportRebuilding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSupportRebuilding = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportRebuilding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSupportRebuilding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSupportRebuilding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSupportRebuilding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bTickWhilePaused_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bTickWhilePaused_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bTickWhilePaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bTickWhilePaused = { UE4CodeGen_Private::EPropertyClass::Bool, "bTickWhilePaused", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bTickWhilePaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bTickWhilePaused_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bTickWhilePaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bShouldDiscardSubLevelNavData_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bShouldDiscardSubLevelNavData_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bShouldDiscardSubLevelNavData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bShouldDiscardSubLevelNavData = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldDiscardSubLevelNavData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bShouldDiscardSubLevelNavData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bShouldDiscardSubLevelNavData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bShouldDiscardSubLevelNavData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAllowClientSideNavigation_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAllowClientSideNavigation_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bAllowClientSideNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAllowClientSideNavigation = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowClientSideNavigation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAllowClientSideNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAllowClientSideNavigation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAllowClientSideNavigation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bSpawnNavDataInNavBoundsLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSpawnNavDataInNavBoundsLevel = { UE4CodeGen_Private::EPropertyClass::Bool, "bSpawnNavDataInNavBoundsLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAutoCreateNavigationData_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Should navigation system spawn default Navigation Data when there's none and there are navigation bounds present?" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAutoCreateNavigationData_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bAutoCreateNavigationData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAutoCreateNavigationData = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoCreateNavigationData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAutoCreateNavigationData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAutoCreateNavigationData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAutoCreateNavigationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_CrowdManagerClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_CrowdManagerClass = { UE4CodeGen_Private::EPropertyClass::Class, "CrowdManagerClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000004015, 1, nullptr, STRUCT_OFFSET(UNavigationSystemV1, CrowdManagerClass), Z_Construct_UClass_UCrowdManagerBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_CrowdManagerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_CrowdManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_AbstractNavData_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "special navigation data for managing direct paths, not part of NavDataSet!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_AbstractNavData = { UE4CodeGen_Private::EPropertyClass::Object, "AbstractNavData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UNavigationSystemV1, AbstractNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_AbstractNavData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_AbstractNavData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_MainNavData_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_MainNavData = { UE4CodeGen_Private::EPropertyClass::Object, "MainNavData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNavigationSystemV1, MainNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_MainNavData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_MainNavData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationSystemV1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OperationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OperationMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavigationGenerationFinishedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavDataRegisteredEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataRegistrationQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataRegistrationQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataSet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DirtyAreasUpdateFreq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_ActiveTilesUpdateInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bGenerateNavigationOnlyAroundNavigationInvokers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DataGatheringMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DataGatheringMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSkipAgentHeightCheckWhenPickingNavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bInitialBuildingLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSupportRebuilding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bTickWhilePaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bShouldDiscardSubLevelNavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAllowClientSideNavigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSpawnNavDataInNavBoundsLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAutoCreateNavigationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_CrowdManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_AbstractNavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_MainNavData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationSystemV1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationSystemV1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationSystemV1_Statics::ClassParams = {
		&UNavigationSystemV1::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000AEu,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UNavigationSystemV1_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationSystemV1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationSystemV1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationSystemV1, 3615287743);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationSystemV1(Z_Construct_UClass_UNavigationSystemV1, &UNavigationSystemV1::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavigationSystemV1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationSystemV1);
	void UNavigationSystemModuleConfig::StaticRegisterNativesUNavigationSystemModuleConfig()
	{
	}
	UClass* Z_Construct_UClass_UNavigationSystemModuleConfig_NoRegister()
	{
		return UNavigationSystemModuleConfig::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationSystemModuleConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnNavDataInNavBoundsLevel_MetaData[];
#endif
		static void NewProp_bSpawnNavDataInNavBoundsLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnNavDataInNavBoundsLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSpawnMissingNavData_MetaData[];
#endif
		static void NewProp_bAutoSpawnMissingNavData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSpawnMissingNavData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateOnClient_MetaData[];
#endif
		static void NewProp_bCreateOnClient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateOnClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStrictlyStatic_MetaData[];
#endif
		static void NewProp_bStrictlyStatic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStrictlyStatic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationSystemConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavigationSystem.h" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_SetBit(void* Obj)
	{
		((UNavigationSystemModuleConfig*)Obj)->bSpawnNavDataInNavBoundsLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bSpawnNavDataInNavBoundsLevel = { UE4CodeGen_Private::EPropertyClass::Bool, "bSpawnNavDataInNavBoundsLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystemModuleConfig), &Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bAutoSpawnMissingNavData_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bAutoSpawnMissingNavData_SetBit(void* Obj)
	{
		((UNavigationSystemModuleConfig*)Obj)->bAutoSpawnMissingNavData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bAutoSpawnMissingNavData = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoSpawnMissingNavData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystemModuleConfig), &Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bAutoSpawnMissingNavData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bAutoSpawnMissingNavData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bAutoSpawnMissingNavData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bCreateOnClient_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bCreateOnClient_SetBit(void* Obj)
	{
		((UNavigationSystemModuleConfig*)Obj)->bCreateOnClient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bCreateOnClient = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateOnClient", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystemModuleConfig), &Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bCreateOnClient_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bCreateOnClient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bCreateOnClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bStrictlyStatic_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Whether at game runtime we expect any kind of dynamic navigation generation" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bStrictlyStatic_SetBit(void* Obj)
	{
		((UNavigationSystemModuleConfig*)Obj)->bStrictlyStatic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bStrictlyStatic = { UE4CodeGen_Private::EPropertyClass::Bool, "bStrictlyStatic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavigationSystemModuleConfig), &Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bStrictlyStatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bStrictlyStatic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bStrictlyStatic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bSpawnNavDataInNavBoundsLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bAutoSpawnMissingNavData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bCreateOnClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bStrictlyStatic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationSystemModuleConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::ClassParams = {
		&UNavigationSystemModuleConfig::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001030A2u,
		nullptr, 0,
		Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationSystemModuleConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationSystemModuleConfig, 1899323990);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationSystemModuleConfig(Z_Construct_UClass_UNavigationSystemModuleConfig, &UNavigationSystemModuleConfig::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavigationSystemModuleConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationSystemModuleConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
