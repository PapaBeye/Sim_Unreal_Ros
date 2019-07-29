// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AIPerceptionSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPerceptionSystem() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent();
// End Cross Module References
	void UAIPerceptionSystem::StaticRegisterNativesUAIPerceptionSystem()
	{
		UClass* Class = UAIPerceptionSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSenseClassForStimulus", &UAIPerceptionSystem::execGetSenseClassForStimulus },
			{ "OnPerceptionStimuliSourceEndPlay", &UAIPerceptionSystem::execOnPerceptionStimuliSourceEndPlay },
			{ "RegisterPerceptionStimuliSource", &UAIPerceptionSystem::execRegisterPerceptionStimuliSource },
			{ "ReportEvent", &UAIPerceptionSystem::execReportEvent },
			{ "ReportPerceptionEvent", &UAIPerceptionSystem::execReportPerceptionEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics
	{
		struct AIPerceptionSystem_eventGetSenseClassForStimulus_Parms
		{
			UObject* WorldContextObject;
			FAIStimulus Stimulus;
			TSubclassOf<UAISense>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stimulus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventGetSenseClassForStimulus_Parms, ReturnValue), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_Stimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_Stimulus = { UE4CodeGen_Private::EPropertyClass::Struct, "Stimulus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventGetSenseClassForStimulus_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_Stimulus_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_Stimulus_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventGetSenseClassForStimulus_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_Stimulus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, "GetSenseClassForStimulus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AIPerceptionSystem_eventGetSenseClassForStimulus_Parms), Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics
	{
		struct AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::NewProp_EndPlayReason = { UE4CodeGen_Private::EPropertyClass::Byte, "EndPlayReason", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::NewProp_EndPlayReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, "OnPerceptionStimuliSourceEndPlay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(AIPerceptionSystem_eventOnPerceptionStimuliSourceEndPlay_Parms), Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics
	{
		struct AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UAISense>  Sense;
			AActor* Target;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Sense;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms), &Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_Sense = { UE4CodeGen_Private::EPropertyClass::Class, "Sense", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms, Sense), Z_Construct_UClass_UAISense_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_Sense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, "RegisterPerceptionStimuliSource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AIPerceptionSystem_eventRegisterPerceptionStimuliSource_Parms), Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics
	{
		struct AIPerceptionSystem_eventReportEvent_Parms
		{
			UAISenseEvent* PerceptionEvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::NewProp_PerceptionEvent = { UE4CodeGen_Private::EPropertyClass::Object, "PerceptionEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventReportEvent_Parms, PerceptionEvent), Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::NewProp_PerceptionEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, "ReportEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AIPerceptionSystem_eventReportEvent_Parms), Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics
	{
		struct AIPerceptionSystem_eventReportPerceptionEvent_Parms
		{
			UObject* WorldContextObject;
			UAISenseEvent* PerceptionEvent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::NewProp_PerceptionEvent = { UE4CodeGen_Private::EPropertyClass::Object, "PerceptionEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventReportPerceptionEvent_Parms, PerceptionEvent), Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AIPerceptionSystem_eventReportPerceptionEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::NewProp_PerceptionEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIPerceptionSystem, "ReportPerceptionEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AIPerceptionSystem_eventReportPerceptionEvent_Parms), Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister()
	{
		return UAIPerceptionSystem::StaticClass();
	}
	struct Z_Construct_UClass_UAIPerceptionSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionAgingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerceptionAgingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Senses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Senses;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Senses_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIPerceptionSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIPerceptionSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIPerceptionSystem_GetSenseClassForStimulus, "GetSenseClassForStimulus" }, // 3430641274
		{ &Z_Construct_UFunction_UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay, "OnPerceptionStimuliSourceEndPlay" }, // 1128613625
		{ &Z_Construct_UFunction_UAIPerceptionSystem_RegisterPerceptionStimuliSource, "RegisterPerceptionStimuliSource" }, // 1413554697
		{ &Z_Construct_UFunction_UAIPerceptionSystem_ReportEvent, "ReportEvent" }, // 3447034092
		{ &Z_Construct_UFunction_UAIPerceptionSystem_ReportPerceptionEvent, "ReportPerceptionEvent" }, // 3041862246
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionSystem_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AIPerceptionSystem.h" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "By design checks perception between hostile teams" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_PerceptionAgingRate_MetaData[] = {
		{ "Category", "Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_PerceptionAgingRate = { UE4CodeGen_Private::EPropertyClass::Float, "PerceptionAgingRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004001, 1, nullptr, STRUCT_OFFSET(UAIPerceptionSystem, PerceptionAgingRate), METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_PerceptionAgingRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_PerceptionAgingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AIPerceptionSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses = { UE4CodeGen_Private::EPropertyClass::Array, "Senses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UAIPerceptionSystem, Senses), METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Senses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UAISense_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIPerceptionSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_PerceptionAgingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIPerceptionSystem_Statics::NewProp_Senses_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIPerceptionSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIPerceptionSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIPerceptionSystem_Statics::ClassParams = {
		&UAIPerceptionSystem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A6u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAIPerceptionSystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionSystem_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAIPerceptionSystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIPerceptionSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIPerceptionSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIPerceptionSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIPerceptionSystem, 485875439);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIPerceptionSystem(Z_Construct_UClass_UAIPerceptionSystem, &UAIPerceptionSystem::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIPerceptionSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPerceptionSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
