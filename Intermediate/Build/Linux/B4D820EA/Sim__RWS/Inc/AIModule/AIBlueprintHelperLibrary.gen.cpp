// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBlueprintHelperLibrary() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIBlueprintHelperLibrary_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIBlueprintHelperLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject();
	AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPath_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation();
// End Cross Module References
	void UAIBlueprintHelperLibrary::StaticRegisterNativesUAIBlueprintHelperLibrary()
	{
		UClass* Class = UAIBlueprintHelperLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMoveToProxyObject", &UAIBlueprintHelperLibrary::execCreateMoveToProxyObject },
			{ "GetAIController", &UAIBlueprintHelperLibrary::execGetAIController },
			{ "GetBlackboard", &UAIBlueprintHelperLibrary::execGetBlackboard },
			{ "GetCurrentPath", &UAIBlueprintHelperLibrary::execGetCurrentPath },
			{ "IsValidAIDirection", &UAIBlueprintHelperLibrary::execIsValidAIDirection },
			{ "IsValidAILocation", &UAIBlueprintHelperLibrary::execIsValidAILocation },
			{ "IsValidAIRotation", &UAIBlueprintHelperLibrary::execIsValidAIRotation },
			{ "LockAIResourcesWithAnimation", &UAIBlueprintHelperLibrary::execLockAIResourcesWithAnimation },
			{ "SendAIMessage", &UAIBlueprintHelperLibrary::execSendAIMessage },
			{ "SimpleMoveToActor", &UAIBlueprintHelperLibrary::execSimpleMoveToActor },
			{ "SimpleMoveToLocation", &UAIBlueprintHelperLibrary::execSimpleMoveToLocation },
			{ "SpawnAIFromClass", &UAIBlueprintHelperLibrary::execSpawnAIFromClass },
			{ "UnlockAIResourcesWithAnimation", &UAIBlueprintHelperLibrary::execUnlockAIResourcesWithAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics
	{
		struct AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms
		{
			UObject* WorldContextObject;
			APawn* Pawn;
			FVector Destination;
			AActor* TargetActor;
			float AcceptanceRadius;
			bool bStopOnOverlap;
			UAIAsyncTaskBlueprintProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bStopOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, ReturnValue), Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_bStopOnOverlap_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms*)Obj)->bStopOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_bStopOnOverlap = { UE4CodeGen_Private::EPropertyClass::Bool, "bStopOnOverlap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_bStopOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_AcceptanceRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AcceptanceRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, AcceptanceRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_TargetActor = { UE4CodeGen_Private::EPropertyClass::Object, "TargetActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_Destination = { UE4CodeGen_Private::EPropertyClass::Struct, "Destination", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_Pawn = { UE4CodeGen_Private::EPropertyClass::Object, "Pawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_bStopOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_AcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "CPP_Default_AcceptanceRadius", "5.000000" },
		{ "CPP_Default_bStopOnOverlap", "false" },
		{ "CPP_Default_TargetActor", "None" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "CreateMoveToProxyObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(AIBlueprintHelperLibrary_eventCreateMoveToProxyObject_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics
	{
		struct AIBlueprintHelperLibrary_eventGetAIController_Parms
		{
			AActor* ControlledActor;
			AAIController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetAIController_Parms, ReturnValue), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::NewProp_ControlledActor = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetAIController_Parms, ControlledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::NewProp_ControlledActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "DefaultToSelf", "ControlledObject" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
		{ "ToolTip", "The way it works exactly is if the actor passed in is a pawn, then the function retrieves\n    pawn's controller cast to AIController. Otherwise the function returns actor cast to AIController." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "GetAIController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(AIBlueprintHelperLibrary_eventGetAIController_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics
	{
		struct AIBlueprintHelperLibrary_eventGetBlackboard_Parms
		{
			AActor* Target;
			UBlackboardComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetBlackboard_Parms, ReturnValue), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetBlackboard_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "GetBlackboard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(AIBlueprintHelperLibrary_eventGetBlackboard_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics
	{
		struct AIBlueprintHelperLibrary_eventGetCurrentPath_Parms
		{
			AController* Controller;
			UNavigationPath* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetCurrentPath_Parms, ReturnValue), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventGetCurrentPath_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
		{ "ToolTip", "Returns a copy of navigation path given controller is currently using.\n    The result being a copy means you won't be able to influence agent's pathfollowing\n    by manipulating received path" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "GetCurrentPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(AIBlueprintHelperLibrary_eventGetCurrentPath_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics
	{
		struct AIBlueprintHelperLibrary_eventIsValidAIDirection_Parms
		{
			FVector DirectionVector;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventIsValidAIDirection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventIsValidAIDirection_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::NewProp_DirectionVector = { UE4CodeGen_Private::EPropertyClass::Struct, "DirectionVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventIsValidAIDirection_Parms, DirectionVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::NewProp_DirectionVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "IsValidAIDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(AIBlueprintHelperLibrary_eventIsValidAIDirection_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics
	{
		struct AIBlueprintHelperLibrary_eventIsValidAILocation_Parms
		{
			FVector Location;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventIsValidAILocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventIsValidAILocation_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventIsValidAILocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "IsValidAILocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(AIBlueprintHelperLibrary_eventIsValidAILocation_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics
	{
		struct AIBlueprintHelperLibrary_eventIsValidAIRotation_Parms
		{
			FRotator Rotation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventIsValidAIRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventIsValidAIRotation_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventIsValidAIRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "IsValidAIRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(AIBlueprintHelperLibrary_eventIsValidAIRotation_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics
	{
		struct AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms
		{
			UAnimInstance* AnimInstance;
			bool bLockMovement;
			bool LockAILogic;
		};
		static void NewProp_LockAILogic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockAILogic;
		static void NewProp_bLockMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockMovement;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_LockAILogic_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms*)Obj)->LockAILogic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_LockAILogic = { UE4CodeGen_Private::EPropertyClass::Bool, "LockAILogic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_LockAILogic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_bLockMovement_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms*)Obj)->bLockMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_bLockMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_bLockMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_AnimInstance = { UE4CodeGen_Private::EPropertyClass::Object, "AnimInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_LockAILogic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_bLockMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::NewProp_AnimInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "DefaultToSelf", "AnimInstance" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
		{ "ToolTip", "locks indicated AI resources of animated pawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "LockAIResourcesWithAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022405, sizeof(AIBlueprintHelperLibrary_eventLockAIResourcesWithAnimation_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics
	{
		struct AIBlueprintHelperLibrary_eventSendAIMessage_Parms
		{
			APawn* Target;
			FName Message;
			UObject* MessageSource;
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MessageSource;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventSendAIMessage_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventSendAIMessage_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_MessageSource = { UE4CodeGen_Private::EPropertyClass::Object, "MessageSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSendAIMessage_Parms, MessageSource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_Message = { UE4CodeGen_Private::EPropertyClass::Name, "Message", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSendAIMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSendAIMessage_Parms, Target), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_MessageSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "CPP_Default_bSuccess", "true" },
		{ "DefaultToSelf", "MessageSource" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "SendAIMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AIBlueprintHelperLibrary_eventSendAIMessage_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics
	{
		struct AIBlueprintHelperLibrary_eventSimpleMoveToActor_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::NewProp_Goal = { UE4CodeGen_Private::EPropertyClass::Object, "Goal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSimpleMoveToActor_Parms, Goal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::NewProp_Goal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::NewProp_Goal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSimpleMoveToActor_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "SimpleMoveToActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AIBlueprintHelperLibrary_eventSimpleMoveToActor_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics
	{
		struct AIBlueprintHelperLibrary_eventSimpleMoveToLocation_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::NewProp_Goal = { UE4CodeGen_Private::EPropertyClass::Struct, "Goal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSimpleMoveToLocation_Parms, Goal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::NewProp_Goal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::NewProp_Goal_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSimpleMoveToLocation_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::NewProp_Goal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "SimpleMoveToLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(AIBlueprintHelperLibrary_eventSimpleMoveToLocation_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics
	{
		struct AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<APawn>  PawnClass;
			UBehaviorTree* BehaviorTree;
			FVector Location;
			FRotator Rotation;
			bool bNoCollisionFail;
			APawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bNoCollisionFail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoCollisionFail;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PawnClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_bNoCollisionFail_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms*)Obj)->bNoCollisionFail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_bNoCollisionFail = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoCollisionFail", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_bNoCollisionFail_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_BehaviorTree = { UE4CodeGen_Private::EPropertyClass::Object, "BehaviorTree", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_PawnClass = { UE4CodeGen_Private::EPropertyClass::Class, "PawnClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, PawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_bNoCollisionFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_BehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_PawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "CPP_Default_bNoCollisionFail", "false" },
		{ "CPP_Default_Rotation", "" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "SpawnAIFromClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(AIBlueprintHelperLibrary_eventSpawnAIFromClass_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics
	{
		struct AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms
		{
			UAnimInstance* AnimInstance;
			bool bUnlockMovement;
			bool UnlockAILogic;
		};
		static void NewProp_UnlockAILogic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UnlockAILogic;
		static void NewProp_bUnlockMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnlockMovement;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_UnlockAILogic_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms*)Obj)->UnlockAILogic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_UnlockAILogic = { UE4CodeGen_Private::EPropertyClass::Bool, "UnlockAILogic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_UnlockAILogic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_bUnlockMovement_SetBit(void* Obj)
	{
		((AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms*)Obj)->bUnlockMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_bUnlockMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bUnlockMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms), &Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_bUnlockMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_AnimInstance = { UE4CodeGen_Private::EPropertyClass::Object, "AnimInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_UnlockAILogic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_bUnlockMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::NewProp_AnimInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "DefaultToSelf", "AnimInstance" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
		{ "ToolTip", "unlocks indicated AI resources of animated pawn. Will unlock only animation-locked resources" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueprintHelperLibrary, "UnlockAIResourcesWithAnimation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022405, sizeof(AIBlueprintHelperLibrary_eventUnlockAIResourcesWithAnimation_Parms), Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIBlueprintHelperLibrary_NoRegister()
	{
		return UAIBlueprintHelperLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_CreateMoveToProxyObject, "CreateMoveToProxyObject" }, // 2415338247
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetAIController, "GetAIController" }, // 3104617007
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetBlackboard, "GetBlackboard" }, // 742037826
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_GetCurrentPath, "GetCurrentPath" }, // 1091531513
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIDirection, "IsValidAIDirection" }, // 870191954
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAILocation, "IsValidAILocation" }, // 1630840748
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_IsValidAIRotation, "IsValidAIRotation" }, // 2986766647
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation, "LockAIResourcesWithAnimation" }, // 1503107226
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SendAIMessage, "SendAIMessage" }, // 2272636351
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToActor, "SimpleMoveToActor" }, // 1150932913
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SimpleMoveToLocation, "SimpleMoveToLocation" }, // 2055499539
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_SpawnAIFromClass, "SpawnAIFromClass" }, // 2629303074
		{ &Z_Construct_UFunction_UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation, "UnlockAIResourcesWithAnimation" }, // 1842067047
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/AIBlueprintHelperLibrary.h" },
		{ "ModuleRelativePath", "Classes/Blueprint/AIBlueprintHelperLibrary.h" },
		{ "ScriptName", "AIHelperLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIBlueprintHelperLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::ClassParams = {
		&UAIBlueprintHelperLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIBlueprintHelperLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIBlueprintHelperLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIBlueprintHelperLibrary, 1889711476);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIBlueprintHelperLibrary(Z_Construct_UClass_UAIBlueprintHelperLibrary, &UAIBlueprintHelperLibrary::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIBlueprintHelperLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIBlueprintHelperLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
