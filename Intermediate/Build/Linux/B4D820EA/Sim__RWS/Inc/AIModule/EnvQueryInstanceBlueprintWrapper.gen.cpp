// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryInstanceBlueprintWrapper() {}
// Cross Module References
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryStatus();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics
	{
		struct EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms
		{
			UEnvQueryInstanceBlueprintWrapper* QueryInstance;
			TEnumAsByte<EEnvQueryStatus::Type> QueryStatus;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryStatus;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::NewProp_QueryStatus = { UE4CodeGen_Private::EPropertyClass::Byte, "QueryStatus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms, QueryStatus), Z_Construct_UEnum_AIModule_EEnvQueryStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::NewProp_QueryInstance = { UE4CodeGen_Private::EPropertyClass::Object, "QueryInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms, QueryInstance), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::NewProp_QueryStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::NewProp_QueryInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, "EQSQueryDoneSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms), Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UEnvQueryInstanceBlueprintWrapper::StaticRegisterNativesUEnvQueryInstanceBlueprintWrapper()
	{
		UClass* Class = UEnvQueryInstanceBlueprintWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemScore", &UEnvQueryInstanceBlueprintWrapper::execGetItemScore },
			{ "GetResultsAsActors", &UEnvQueryInstanceBlueprintWrapper::execGetResultsAsActors },
			{ "GetResultsAsLocations", &UEnvQueryInstanceBlueprintWrapper::execGetResultsAsLocations },
			{ "SetNamedParam", &UEnvQueryInstanceBlueprintWrapper::execSetNamedParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics
	{
		struct EnvQueryInstanceBlueprintWrapper_eventGetItemScore_Parms
		{
			int32 ItemIndex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventGetItemScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::NewProp_ItemIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ItemIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventGetItemScore_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::NewProp_ItemIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, "GetItemScore", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(EnvQueryInstanceBlueprintWrapper_eventGetItemScore_Parms), Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics
	{
		struct EnvQueryInstanceBlueprintWrapper_eventGetResultsAsActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventGetResultsAsActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
		{ "ToolTip", "return an array filled with resulting actors. Note that it makes sense only if ItemType is a EnvQueryItemType_ActorBase-derived type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, "GetResultsAsActors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(EnvQueryInstanceBlueprintWrapper_eventGetResultsAsActors_Parms), Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics
	{
		struct EnvQueryInstanceBlueprintWrapper_eventGetResultsAsLocations_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventGetResultsAsLocations_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
		{ "ToolTip", "returns an array of locations generated by the query. If the query generated Actors the the array is filled with their locations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, "GetResultsAsLocations", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(EnvQueryInstanceBlueprintWrapper_eventGetResultsAsLocations_Parms), Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics
	{
		struct EnvQueryInstanceBlueprintWrapper_eventSetNamedParam_Parms
		{
			FName ParamName;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventSetNamedParam_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::NewProp_ParamName = { UE4CodeGen_Private::EPropertyClass::Name, "ParamName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventSetNamedParam_Parms, ParamName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::NewProp_ParamName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, "SetNamedParam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EnvQueryInstanceBlueprintWrapper_eventSetNamedParam_Parms), Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister()
	{
		return UEnvQueryInstanceBlueprintWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryFinishedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryFinishedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature, "EQSQueryDoneSignature__DelegateSignature" }, // 512953275
		{ &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore, "GetItemScore" }, // 1952761592
		{ &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors, "GetResultsAsActors" }, // 963890771
		{ &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations, "GetResultsAsLocations" }, // 1832362114
		{ &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam, "SetNamedParam" }, // 3151642122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "EQS Query Instance" },
		{ "IncludePath", "EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OnQueryFinishedEvent_MetaData[] = {
		{ "Category", "AI|EQS" },
		{ "DisplayName", "OnQueryFinished" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OnQueryFinishedEvent = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnQueryFinishedEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UEnvQueryInstanceBlueprintWrapper, OnQueryFinishedEvent), Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OnQueryFinishedEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OnQueryFinishedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OptionIndex_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
		{ "ToolTip", "index of query option, that generated items" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OptionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OptionIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UEnvQueryInstanceBlueprintWrapper, OptionIndex), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OptionIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OptionIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_ItemType = { UE4CodeGen_Private::EPropertyClass::Class, "ItemType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000014, 1, nullptr, STRUCT_OFFSET(UEnvQueryInstanceBlueprintWrapper, ItemType), Z_Construct_UClass_UEnvQueryItemType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_ItemType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_QueryID_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_QueryID = { UE4CodeGen_Private::EPropertyClass::Int, "QueryID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UEnvQueryInstanceBlueprintWrapper, QueryID), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_QueryID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_QueryID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OnQueryFinishedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OptionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_QueryID,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister, (int32)VTABLE_OFFSET(UEnvQueryInstanceBlueprintWrapper, IEQSQueryResultSourceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryInstanceBlueprintWrapper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::ClassParams = {
		&UEnvQueryInstanceBlueprintWrapper::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryInstanceBlueprintWrapper, 882545795);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryInstanceBlueprintWrapper(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, &UEnvQueryInstanceBlueprintWrapper::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQueryInstanceBlueprintWrapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryInstanceBlueprintWrapper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
