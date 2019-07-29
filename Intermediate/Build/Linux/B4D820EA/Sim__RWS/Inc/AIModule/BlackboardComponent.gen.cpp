// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_ClearValue();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsName();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsString();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsName();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsString();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
// End Cross Module References
	void UBlackboardComponent::StaticRegisterNativesUBlackboardComponent()
	{
		UClass* Class = UBlackboardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearValue", &UBlackboardComponent::execClearValue },
			{ "GetLocationFromEntry", &UBlackboardComponent::execGetLocationFromEntry },
			{ "GetRotationFromEntry", &UBlackboardComponent::execGetRotationFromEntry },
			{ "GetValueAsBool", &UBlackboardComponent::execGetValueAsBool },
			{ "GetValueAsClass", &UBlackboardComponent::execGetValueAsClass },
			{ "GetValueAsEnum", &UBlackboardComponent::execGetValueAsEnum },
			{ "GetValueAsFloat", &UBlackboardComponent::execGetValueAsFloat },
			{ "GetValueAsInt", &UBlackboardComponent::execGetValueAsInt },
			{ "GetValueAsName", &UBlackboardComponent::execGetValueAsName },
			{ "GetValueAsObject", &UBlackboardComponent::execGetValueAsObject },
			{ "GetValueAsRotator", &UBlackboardComponent::execGetValueAsRotator },
			{ "GetValueAsString", &UBlackboardComponent::execGetValueAsString },
			{ "GetValueAsVector", &UBlackboardComponent::execGetValueAsVector },
			{ "IsVectorValueSet", &UBlackboardComponent::execIsVectorValueSet },
			{ "SetValueAsBool", &UBlackboardComponent::execSetValueAsBool },
			{ "SetValueAsClass", &UBlackboardComponent::execSetValueAsClass },
			{ "SetValueAsEnum", &UBlackboardComponent::execSetValueAsEnum },
			{ "SetValueAsFloat", &UBlackboardComponent::execSetValueAsFloat },
			{ "SetValueAsInt", &UBlackboardComponent::execSetValueAsInt },
			{ "SetValueAsName", &UBlackboardComponent::execSetValueAsName },
			{ "SetValueAsObject", &UBlackboardComponent::execSetValueAsObject },
			{ "SetValueAsRotator", &UBlackboardComponent::execSetValueAsRotator },
			{ "SetValueAsString", &UBlackboardComponent::execSetValueAsString },
			{ "SetValueAsVector", &UBlackboardComponent::execSetValueAsVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics
	{
		struct BlackboardComponent_eventClearValue_Parms
		{
			FName KeyName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventClearValue_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "ClearValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventClearValue_Parms), Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_ClearValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics
	{
		struct BlackboardComponent_eventGetLocationFromEntry_Parms
		{
			FName KeyName;
			FVector ResultLocation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlackboardComponent_eventGetLocationFromEntry_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlackboardComponent_eventGetLocationFromEntry_Parms), &Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ResultLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ResultLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetLocationFromEntry_Parms, ResultLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetLocationFromEntry_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ResultLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ToolTip", "return false if call failed (most probably no such entry in BB)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetLocationFromEntry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(BlackboardComponent_eventGetLocationFromEntry_Parms), Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics
	{
		struct BlackboardComponent_eventGetRotationFromEntry_Parms
		{
			FName KeyName;
			FRotator ResultRotation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlackboardComponent_eventGetRotationFromEntry_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlackboardComponent_eventGetRotationFromEntry_Parms), &Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ResultRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "ResultRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetRotationFromEntry_Parms, ResultRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetRotationFromEntry_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ResultRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ToolTip", "return false if call failed (most probably no such entry in BB)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetRotationFromEntry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(BlackboardComponent_eventGetRotationFromEntry_Parms), Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics
	{
		struct BlackboardComponent_eventGetValueAsBool_Parms
		{
			FName KeyName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlackboardComponent_eventGetValueAsBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlackboardComponent_eventGetValueAsBool_Parms), &Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsBool_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsBool_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics
	{
		struct BlackboardComponent_eventGetValueAsClass_Parms
		{
			FName KeyName;
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsClass_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsClass_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics
	{
		struct BlackboardComponent_eventGetValueAsEnum_Parms
		{
			FName KeyName;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsEnum_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsEnum_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsEnum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsEnum_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics
	{
		struct BlackboardComponent_eventGetValueAsFloat_Parms
		{
			FName KeyName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsFloat_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsFloat_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics
	{
		struct BlackboardComponent_eventGetValueAsInt_Parms
		{
			FName KeyName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsInt_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsInt_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics
	{
		struct BlackboardComponent_eventGetValueAsName_Parms
		{
			FName KeyName;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsName_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsName_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics
	{
		struct BlackboardComponent_eventGetValueAsObject_Parms
		{
			FName KeyName;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsObject_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsObject_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics
	{
		struct BlackboardComponent_eventGetValueAsRotator_Parms
		{
			FName KeyName;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsRotator_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsRotator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(BlackboardComponent_eventGetValueAsRotator_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics
	{
		struct BlackboardComponent_eventGetValueAsString_Parms
		{
			FName KeyName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsString_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventGetValueAsString_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics
	{
		struct BlackboardComponent_eventGetValueAsVector_Parms
		{
			FName KeyName;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsVector_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "GetValueAsVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(BlackboardComponent_eventGetValueAsVector_Parms), Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics
	{
		struct BlackboardComponent_eventIsVectorValueSet_Parms
		{
			FName KeyName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlackboardComponent_eventIsVectorValueSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlackboardComponent_eventIsVectorValueSet_Parms), &Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventIsVectorValueSet_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "Tooltip", "If the vector value has been set (and not cleared), this function returns true (indicating that the value should be valid).  If it's not set, the vector value is invalid and this function will return false.  (Also returns false if the key specified does not hold a vector.)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "IsVectorValueSet", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(BlackboardComponent_eventIsVectorValueSet_Parms), Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics
	{
		struct BlackboardComponent_eventSetValueAsBool_Parms
		{
			FName KeyName;
			bool BoolValue;
		};
		static void NewProp_BoolValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((BlackboardComponent_eventSetValueAsBool_Parms*)Obj)->BoolValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_BoolValue = { UE4CodeGen_Private::EPropertyClass::Bool, "BoolValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlackboardComponent_eventSetValueAsBool_Parms), &Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsBool_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_BoolValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsBool_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics
	{
		struct BlackboardComponent_eventSetValueAsClass_Parms
		{
			FName KeyName;
			UClass* ClassValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_ClassValue = { UE4CodeGen_Private::EPropertyClass::Class, "ClassValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsClass_Parms, ClassValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsClass_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_ClassValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsClass_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics
	{
		struct BlackboardComponent_eventSetValueAsEnum_Parms
		{
			FName KeyName;
			uint8 EnumValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_EnumValue = { UE4CodeGen_Private::EPropertyClass::Byte, "EnumValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsEnum_Parms, EnumValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsEnum_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_EnumValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsEnum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsEnum_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics
	{
		struct BlackboardComponent_eventSetValueAsFloat_Parms
		{
			FName KeyName;
			float FloatValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_FloatValue = { UE4CodeGen_Private::EPropertyClass::Float, "FloatValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsFloat_Parms, FloatValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsFloat_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_FloatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsFloat_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics
	{
		struct BlackboardComponent_eventSetValueAsInt_Parms
		{
			FName KeyName;
			int32 IntValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_IntValue = { UE4CodeGen_Private::EPropertyClass::Int, "IntValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsInt_Parms, IntValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsInt_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_IntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsInt_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics
	{
		struct BlackboardComponent_eventSetValueAsName_Parms
		{
			FName KeyName;
			FName NameValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_NameValue = { UE4CodeGen_Private::EPropertyClass::Name, "NameValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsName_Parms, NameValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsName_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_NameValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsName_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics
	{
		struct BlackboardComponent_eventSetValueAsObject_Parms
		{
			FName KeyName;
			UObject* ObjectValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_ObjectValue = { UE4CodeGen_Private::EPropertyClass::Object, "ObjectValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsObject_Parms, ObjectValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsObject_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_ObjectValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsObject_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics
	{
		struct BlackboardComponent_eventSetValueAsRotator_Parms
		{
			FName KeyName;
			FRotator VectorValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_VectorValue = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsRotator_Parms, VectorValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsRotator_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_VectorValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsRotator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(BlackboardComponent_eventSetValueAsRotator_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics
	{
		struct BlackboardComponent_eventSetValueAsString_Parms
		{
			FName KeyName;
			FString StringValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_StringValue = { UE4CodeGen_Private::EPropertyClass::Str, "StringValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsString_Parms, StringValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsString_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_StringValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(BlackboardComponent_eventSetValueAsString_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics
	{
		struct BlackboardComponent_eventSetValueAsVector_Parms
		{
			FName KeyName;
			FVector VectorValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_VectorValue = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsVector_Parms, VectorValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsVector_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_VectorValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_KeyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, "SetValueAsVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(BlackboardComponent_eventSetValueAsVector_Parms), Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister()
	{
		return UBlackboardComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KeyInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrainComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BrainComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlackboardComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlackboardComponent_ClearValue, "ClearValue" }, // 3271862686
		{ &Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry, "GetLocationFromEntry" }, // 2444164643
		{ &Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry, "GetRotationFromEntry" }, // 2900299693
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool, "GetValueAsBool" }, // 1587301963
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass, "GetValueAsClass" }, // 1443275087
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum, "GetValueAsEnum" }, // 3741692656
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat, "GetValueAsFloat" }, // 1100510063
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt, "GetValueAsInt" }, // 2891784669
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsName, "GetValueAsName" }, // 3109264339
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject, "GetValueAsObject" }, // 4252271409
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator, "GetValueAsRotator" }, // 1778349137
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsString, "GetValueAsString" }, // 639600569
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector, "GetValueAsVector" }, // 2407356504
		{ &Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet, "IsVectorValueSet" }, // 2570418130
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool, "SetValueAsBool" }, // 2607267918
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass, "SetValueAsClass" }, // 1288977867
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum, "SetValueAsEnum" }, // 3248065807
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat, "SetValueAsFloat" }, // 2845997432
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt, "SetValueAsInt" }, // 1241947129
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsName, "SetValueAsName" }, // 535648456
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject, "SetValueAsObject" }, // 2711059416
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator, "SetValueAsRotator" }, // 1265545808
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsString, "SetValueAsString" }, // 3967565512
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector, "SetValueAsVector" }, // 2708272679
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "BehaviorTree/BlackboardComponent.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ToolTip", "instanced keys with custom data allocations" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances = { UE4CodeGen_Private::EPropertyClass::Array, "KeyInstances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UBlackboardComponent, KeyInstances), METADATA_PARAMS(Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "KeyInstances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UBlackboardKeyType_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BlackboardAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ToolTip", "data asset defining entries" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BlackboardAsset = { UE4CodeGen_Private::EPropertyClass::Object, "BlackboardAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UBlackboardComponent, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BlackboardAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BlackboardAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BrainComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ToolTip", "cached behavior tree component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BrainComp = { UE4CodeGen_Private::EPropertyClass::Object, "BrainComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000082008, 1, nullptr, STRUCT_OFFSET(UBlackboardComponent, BrainComp), Z_Construct_UClass_UBrainComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BrainComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BrainComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackboardComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BlackboardAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BrainComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardComponent_Statics::ClassParams = {
		&UBlackboardComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UBlackboardComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBlackboardComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlackboardComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlackboardComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlackboardComponent, 1613274225);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackboardComponent(Z_Construct_UClass_UBlackboardComponent, &UBlackboardComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UBlackboardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
