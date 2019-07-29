// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/BTFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTFunctionLibrary() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTFunctionLibrary_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent();
// End Cross Module References
	void UBTFunctionLibrary::StaticRegisterNativesUBTFunctionLibrary()
	{
		UClass* Class = UBTFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearBlackboardValue", &UBTFunctionLibrary::execClearBlackboardValue },
			{ "ClearBlackboardValueAsVector", &UBTFunctionLibrary::execClearBlackboardValueAsVector },
			{ "GetBlackboardValueAsActor", &UBTFunctionLibrary::execGetBlackboardValueAsActor },
			{ "GetBlackboardValueAsBool", &UBTFunctionLibrary::execGetBlackboardValueAsBool },
			{ "GetBlackboardValueAsClass", &UBTFunctionLibrary::execGetBlackboardValueAsClass },
			{ "GetBlackboardValueAsEnum", &UBTFunctionLibrary::execGetBlackboardValueAsEnum },
			{ "GetBlackboardValueAsFloat", &UBTFunctionLibrary::execGetBlackboardValueAsFloat },
			{ "GetBlackboardValueAsInt", &UBTFunctionLibrary::execGetBlackboardValueAsInt },
			{ "GetBlackboardValueAsName", &UBTFunctionLibrary::execGetBlackboardValueAsName },
			{ "GetBlackboardValueAsObject", &UBTFunctionLibrary::execGetBlackboardValueAsObject },
			{ "GetBlackboardValueAsRotator", &UBTFunctionLibrary::execGetBlackboardValueAsRotator },
			{ "GetBlackboardValueAsString", &UBTFunctionLibrary::execGetBlackboardValueAsString },
			{ "GetBlackboardValueAsVector", &UBTFunctionLibrary::execGetBlackboardValueAsVector },
			{ "GetOwnerComponent", &UBTFunctionLibrary::execGetOwnerComponent },
			{ "GetOwnersBlackboard", &UBTFunctionLibrary::execGetOwnersBlackboard },
			{ "SetBlackboardValueAsBool", &UBTFunctionLibrary::execSetBlackboardValueAsBool },
			{ "SetBlackboardValueAsClass", &UBTFunctionLibrary::execSetBlackboardValueAsClass },
			{ "SetBlackboardValueAsEnum", &UBTFunctionLibrary::execSetBlackboardValueAsEnum },
			{ "SetBlackboardValueAsFloat", &UBTFunctionLibrary::execSetBlackboardValueAsFloat },
			{ "SetBlackboardValueAsInt", &UBTFunctionLibrary::execSetBlackboardValueAsInt },
			{ "SetBlackboardValueAsName", &UBTFunctionLibrary::execSetBlackboardValueAsName },
			{ "SetBlackboardValueAsObject", &UBTFunctionLibrary::execSetBlackboardValueAsObject },
			{ "SetBlackboardValueAsRotator", &UBTFunctionLibrary::execSetBlackboardValueAsRotator },
			{ "SetBlackboardValueAsString", &UBTFunctionLibrary::execSetBlackboardValueAsString },
			{ "SetBlackboardValueAsVector", &UBTFunctionLibrary::execSetBlackboardValueAsVector },
			{ "StartUsingExternalEvent", &UBTFunctionLibrary::execStartUsingExternalEvent },
			{ "StopUsingExternalEvent", &UBTFunctionLibrary::execStopUsingExternalEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics
	{
		struct BTFunctionLibrary_eventClearBlackboardValue_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventClearBlackboardValue_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventClearBlackboardValue_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
		{ "ToolTip", "Resets indicated value to \"not set\" value, based on values type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "ClearBlackboardValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventClearBlackboardValue_Parms), Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics
	{
		struct BTFunctionLibrary_eventClearBlackboardValueAsVector_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventClearBlackboardValueAsVector_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventClearBlackboardValueAsVector_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use ClearBlackboardValue instead." },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
		{ "ToolTip", "(DEPRECATED) Use ClearBlackboardValue instead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "ClearBlackboardValueAsVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventClearBlackboardValueAsVector_Parms), Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsActor_Parms), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms), &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsBool_Parms), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsClass_Parms), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsEnum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsEnum_Parms), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsFloat_Parms), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsInt_Parms), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsName_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsName_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsName_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsName_Parms), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsObject_Parms), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsRotator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsRotator_Parms), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsString_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsString_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsString_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsString_Parms), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics
	{
		struct BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetBlackboardValueAsVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(BTFunctionLibrary_eventGetBlackboardValueAsVector_Parms), Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics
	{
		struct BTFunctionLibrary_eventGetOwnerComponent_Parms
		{
			UBTNode* NodeOwner;
			UBehaviorTreeComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetOwnerComponent_Parms, ReturnValue), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetOwnerComponent_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetOwnerComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BTFunctionLibrary_eventGetOwnerComponent_Parms), Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics
	{
		struct BTFunctionLibrary_eventGetOwnersBlackboard_Parms
		{
			UBTNode* NodeOwner;
			UBlackboardComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetOwnersBlackboard_Parms, ReturnValue), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventGetOwnersBlackboard_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "GetOwnersBlackboard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(BTFunctionLibrary_eventGetOwnersBlackboard_Parms), Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Bool, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms), &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsBool_Parms), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			UClass* Value;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Class, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms, Value), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsClass_Parms), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			uint8 Value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Byte, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms, Value), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsEnum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsEnum_Parms), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsFloat_Parms), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsInt_Parms), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsName_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FName Value;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Name, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsName_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsName_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsName_Parms), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			UObject* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Object, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsObject_Parms), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FRotator Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsRotator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsRotator_Parms), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsString_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FString Value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsString_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsString_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsString_Parms), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics
	{
		struct BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FVector Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "SetBlackboardValueAsVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(BTFunctionLibrary_eventSetBlackboardValueAsVector_Parms), Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics
	{
		struct BTFunctionLibrary_eventStartUsingExternalEvent_Parms
		{
			UBTNode* NodeOwner;
			AActor* OwningActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::NewProp_OwningActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwningActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventStartUsingExternalEvent_Parms, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventStartUsingExternalEvent_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::NewProp_OwningActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "No longer needed" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
		{ "ToolTip", "Initialize variables marked as \"instance memory\" and set owning actor for blackboard operations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "StartUsingExternalEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(BTFunctionLibrary_eventStartUsingExternalEvent_Parms), Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics
	{
		struct BTFunctionLibrary_eventStopUsingExternalEvent_Parms
		{
			UBTNode* NodeOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::NewProp_NodeOwner = { UE4CodeGen_Private::EPropertyClass::Object, "NodeOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTFunctionLibrary_eventStopUsingExternalEvent_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::NewProp_NodeOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "No longer needed" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
		{ "ToolTip", "Save variables marked as \"instance memory\" and clear owning actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTFunctionLibrary, "StopUsingExternalEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(BTFunctionLibrary_eventStopUsingExternalEvent_Parms), Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBTFunctionLibrary_NoRegister()
	{
		return UBTFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBTFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBTFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValue, "ClearBlackboardValue" }, // 138115058
		{ &Z_Construct_UFunction_UBTFunctionLibrary_ClearBlackboardValueAsVector, "ClearBlackboardValueAsVector" }, // 2062326279
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsActor, "GetBlackboardValueAsActor" }, // 541253094
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsBool, "GetBlackboardValueAsBool" }, // 2044199083
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsClass, "GetBlackboardValueAsClass" }, // 2341603388
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsEnum, "GetBlackboardValueAsEnum" }, // 4142578578
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsFloat, "GetBlackboardValueAsFloat" }, // 1845626562
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsInt, "GetBlackboardValueAsInt" }, // 211756573
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsName, "GetBlackboardValueAsName" }, // 2187043361
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsObject, "GetBlackboardValueAsObject" }, // 3784513684
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsRotator, "GetBlackboardValueAsRotator" }, // 1795313555
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsString, "GetBlackboardValueAsString" }, // 3971753027
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetBlackboardValueAsVector, "GetBlackboardValueAsVector" }, // 1743973574
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetOwnerComponent, "GetOwnerComponent" }, // 165349868
		{ &Z_Construct_UFunction_UBTFunctionLibrary_GetOwnersBlackboard, "GetOwnersBlackboard" }, // 606860835
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsBool, "SetBlackboardValueAsBool" }, // 1490256872
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsClass, "SetBlackboardValueAsClass" }, // 4150319468
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsEnum, "SetBlackboardValueAsEnum" }, // 3852694727
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsFloat, "SetBlackboardValueAsFloat" }, // 3992476749
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsInt, "SetBlackboardValueAsInt" }, // 1112619082
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsName, "SetBlackboardValueAsName" }, // 447857965
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsObject, "SetBlackboardValueAsObject" }, // 956748029
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsRotator, "SetBlackboardValueAsRotator" }, // 26278911
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsString, "SetBlackboardValueAsString" }, // 696809768
		{ &Z_Construct_UFunction_UBTFunctionLibrary_SetBlackboardValueAsVector, "SetBlackboardValueAsVector" }, // 3152891205
		{ &Z_Construct_UFunction_UBTFunctionLibrary_StartUsingExternalEvent, "StartUsingExternalEvent" }, // 2495102023
		{ &Z_Construct_UFunction_UBTFunctionLibrary_StopUsingExternalEvent, "StopUsingExternalEvent" }, // 3541942458
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/BTFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTFunctionLibrary.h" },
		{ "RestrictedToClasses", "BTNode" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTFunctionLibrary_Statics::ClassParams = {
		&UBTFunctionLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBTFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTFunctionLibrary, 1587319995);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTFunctionLibrary(Z_Construct_UClass_UBTFunctionLibrary, &UBTFunctionLibrary::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
