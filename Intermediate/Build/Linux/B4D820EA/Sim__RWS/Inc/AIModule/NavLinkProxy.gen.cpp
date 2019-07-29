// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Navigation/NavLinkProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkProxy() {}
// Cross Module References
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	AIMODULE_API UFunction* Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents();
	AIMODULE_API UFunction* Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled();
	AIMODULE_API UFunction* Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached();
	AIMODULE_API UFunction* Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing();
	AIMODULE_API UFunction* Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationSegmentLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkHostInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics
	{
		struct _Script_AIModule_eventSmartLinkReachedSignature_Parms
		{
			AActor* MovingActor;
			FVector DestinationPoint;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestinationPoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_DestinationPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_DestinationPoint = { UE4CodeGen_Private::EPropertyClass::Struct, "DestinationPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_AIModule_eventSmartLinkReachedSignature_Parms, DestinationPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_DestinationPoint_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_DestinationPoint_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_MovingActor = { UE4CodeGen_Private::EPropertyClass::Object, "MovingActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_AIModule_eventSmartLinkReachedSignature_Parms, MovingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_DestinationPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_MovingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, "SmartLinkReachedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_AIModule_eventSmartLinkReachedSignature_Parms), Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_ANavLinkProxy_ReceiveSmartLinkReached = FName(TEXT("ReceiveSmartLinkReached"));
	void ANavLinkProxy::ReceiveSmartLinkReached(AActor* Agent, FVector const& Destination)
	{
		NavLinkProxy_eventReceiveSmartLinkReached_Parms Parms;
		Parms.Agent=Agent;
		Parms.Destination=Destination;
		ProcessEvent(FindFunctionChecked(NAME_ANavLinkProxy_ReceiveSmartLinkReached),&Parms);
	}
	void ANavLinkProxy::StaticRegisterNativesANavLinkProxy()
	{
		UClass* Class = ANavLinkProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasMovingAgents", &ANavLinkProxy::execHasMovingAgents },
			{ "IsSmartLinkEnabled", &ANavLinkProxy::execIsSmartLinkEnabled },
			{ "ResumePathFollowing", &ANavLinkProxy::execResumePathFollowing },
			{ "SetSmartLinkEnabled", &ANavLinkProxy::execSetSmartLinkEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics
	{
		struct NavLinkProxy_eventHasMovingAgents_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavLinkProxy_eventHasMovingAgents_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLinkProxy_eventHasMovingAgents_Parms), &Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "check if any agent is moving through smart link right now" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, "HasMovingAgents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavLinkProxy_eventHasMovingAgents_Parms), Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics
	{
		struct NavLinkProxy_eventIsSmartLinkEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavLinkProxy_eventIsSmartLinkEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLinkProxy_eventIsSmartLinkEnabled_Parms), &Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "check if smart link is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, "IsSmartLinkEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavLinkProxy_eventIsSmartLinkEnabled_Parms), Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Destination = { UE4CodeGen_Private::EPropertyClass::Struct, "Destination", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavLinkProxy_eventReceiveSmartLinkReached_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Destination_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Destination_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Agent = { UE4CodeGen_Private::EPropertyClass::Object, "Agent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLinkProxy_eventReceiveSmartLinkReached_Parms, Agent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Agent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "called when agent reaches smart link during path following, use ResumePathFollowing() to give control back" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, "ReceiveSmartLinkReached", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08C20800, sizeof(NavLinkProxy_eventReceiveSmartLinkReached_Parms), Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics
	{
		struct NavLinkProxy_eventResumePathFollowing_Parms
		{
			AActor* Agent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::NewProp_Agent = { UE4CodeGen_Private::EPropertyClass::Object, "Agent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLinkProxy_eventResumePathFollowing_Parms, Agent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::NewProp_Agent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "resume normal path following" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, "ResumePathFollowing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavLinkProxy_eventResumePathFollowing_Parms), Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics
	{
		struct NavLinkProxy_eventSetSmartLinkEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((NavLinkProxy_eventSetSmartLinkEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLinkProxy_eventSetSmartLinkEnabled_Parms), &Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "change state of smart link" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, "SetSmartLinkEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavLinkProxy_eventSetSmartLinkEnabled_Parms), Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANavLinkProxy_NoRegister()
	{
		return ANavLinkProxy::StaticClass();
	}
	struct Z_Construct_UClass_ANavLinkProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSmartLinkReached_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSmartLinkReached;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdRenderComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EdRenderComp;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmartLinkIsRelevant_MetaData[];
#endif
		static void NewProp_bSmartLinkIsRelevant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmartLinkIsRelevant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmartLinkComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SmartLinkComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SegmentLinks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SegmentLinks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointLinks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointLinks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavLinkProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANavLinkProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents, "HasMovingAgents" }, // 521904083
		{ &Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled, "IsSmartLinkEnabled" }, // 790770610
		{ &Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached, "ReceiveSmartLinkReached" }, // 387046788
		{ &Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing, "ResumePathFollowing" }, // 3286577055
		{ &Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled, "SetSmartLinkEnabled" }, // 3725528518
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "SmartLink Actor" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Navigation/NavLinkProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_OnSmartLinkReached_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_OnSmartLinkReached = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSmartLinkReached", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(ANavLinkProxy, OnSmartLinkReached), Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_OnSmartLinkReached_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_OnSmartLinkReached_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SpriteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ANavLinkProxy, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SpriteComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_EdRenderComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Editor Preview" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_EdRenderComp = { UE4CodeGen_Private::EPropertyClass::Object, "EdRenderComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ANavLinkProxy, EdRenderComp), Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_EdRenderComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_EdRenderComp_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Smart link: toggle relevancy" },
	};
#endif
	void Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant_SetBit(void* Obj)
	{
		((ANavLinkProxy*)Obj)->bSmartLinkIsRelevant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant = { UE4CodeGen_Private::EPropertyClass::Bool, "bSmartLinkIsRelevant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ANavLinkProxy), &Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SmartLinkComp_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Smart link: can affect path following" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SmartLinkComp = { UE4CodeGen_Private::EPropertyClass::Object, "SmartLinkComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ANavLinkProxy, SmartLinkComp), Z_Construct_UClass_UNavLinkCustomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SmartLinkComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SmartLinkComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Navigation links (segment to segment) added to navigation data\n     @todo hidden from use until we fix segment links. Not really working now" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks = { UE4CodeGen_Private::EPropertyClass::Array, "SegmentLinks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ANavLinkProxy, SegmentLinks), METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SegmentLinks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNavigationSegmentLink, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks_MetaData[] = {
		{ "Category", "SimpleLink" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Navigation links (point to point) added to navigation data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks = { UE4CodeGen_Private::EPropertyClass::Array, "PointLinks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ANavLinkProxy, PointLinks), METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PointLinks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavLinkProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_OnSmartLinkReached,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SpriteComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_EdRenderComp,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SmartLinkComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavLinkProxy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavLinkHostInterface_NoRegister, (int32)VTABLE_OFFSET(ANavLinkProxy, INavLinkHostInterface), false },
			{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(ANavLinkProxy, INavRelevantInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavLinkProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavLinkProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANavLinkProxy_Statics::ClassParams = {
		&ANavLinkProxy::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ANavLinkProxy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavLinkProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANavLinkProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANavLinkProxy, 3805240047);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANavLinkProxy(Z_Construct_UClass_ANavLinkProxy, &ANavLinkProxy::StaticClass, TEXT("/Script/AIModule"), TEXT("ANavLinkProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavLinkProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
