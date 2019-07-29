// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/PawnSensingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnSensingComponent() {}
// Cross Module References
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval();
	AIMODULE_API UFunction* Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics
	{
		struct PawnSensingComponent_eventHearNoiseDelegate_Parms
		{
			APawn* Instigator;
			FVector Location;
			float Volume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Volume = { UE4CodeGen_Private::EPropertyClass::Float, "Volume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventHearNoiseDelegate_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventHearNoiseDelegate_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Instigator = { UE4CodeGen_Private::EPropertyClass::Object, "Instigator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventHearNoiseDelegate_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, "HearNoiseDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00D30000, sizeof(PawnSensingComponent_eventHearNoiseDelegate_Parms), Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics
	{
		struct PawnSensingComponent_eventSeePawnDelegate_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::NewProp_Pawn = { UE4CodeGen_Private::EPropertyClass::Object, "Pawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventSeePawnDelegate_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, "SeePawnDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(PawnSensingComponent_eventSeePawnDelegate_Parms), Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UPawnSensingComponent::StaticRegisterNativesUPawnSensingComponent()
	{
		UClass* Class = UPawnSensingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPeripheralVisionAngle", &UPawnSensingComponent::execGetPeripheralVisionAngle },
			{ "GetPeripheralVisionCosine", &UPawnSensingComponent::execGetPeripheralVisionCosine },
			{ "SetPeripheralVisionAngle", &UPawnSensingComponent::execSetPeripheralVisionAngle },
			{ "SetSensingInterval", &UPawnSensingComponent::execSetSensingInterval },
			{ "SetSensingUpdatesEnabled", &UPawnSensingComponent::execSetSensingUpdatesEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics
	{
		struct PawnSensingComponent_eventGetPeripheralVisionAngle_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventGetPeripheralVisionAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PawnSensing" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, "GetPeripheralVisionAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PawnSensingComponent_eventGetPeripheralVisionAngle_Parms), Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics
	{
		struct PawnSensingComponent_eventGetPeripheralVisionCosine_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventGetPeripheralVisionCosine_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PawnSensing" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, "GetPeripheralVisionCosine", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PawnSensingComponent_eventGetPeripheralVisionCosine_Parms), Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics
	{
		struct PawnSensingComponent_eventSetPeripheralVisionAngle_Parms
		{
			float NewPeripheralVisionAngle;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPeripheralVisionAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPeripheralVisionAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::NewProp_NewPeripheralVisionAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::NewProp_NewPeripheralVisionAngle = { UE4CodeGen_Private::EPropertyClass::Float, "NewPeripheralVisionAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventSetPeripheralVisionAngle_Parms, NewPeripheralVisionAngle), METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::NewProp_NewPeripheralVisionAngle_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::NewProp_NewPeripheralVisionAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::NewProp_NewPeripheralVisionAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PawnSensing" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Sets PeripheralVisionAngle. Calculates PeripheralVisionCosine from PeripheralVisionAngle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, "SetPeripheralVisionAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020404, sizeof(PawnSensingComponent_eventSetPeripheralVisionAngle_Parms), Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics
	{
		struct PawnSensingComponent_eventSetSensingInterval_Parms
		{
			float NewSensingInterval;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSensingInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSensingInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::NewProp_NewSensingInterval_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::NewProp_NewSensingInterval = { UE4CodeGen_Private::EPropertyClass::Float, "NewSensingInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(PawnSensingComponent_eventSetSensingInterval_Parms, NewSensingInterval), METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::NewProp_NewSensingInterval_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::NewProp_NewSensingInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::NewProp_NewSensingInterval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PawnSensing" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Changes the SensingInterval.\nIf we are currently waiting for an interval, this can either extend or shorten that interval.\nA value <= 0 prevents any updates." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, "SetSensingInterval", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020404, sizeof(PawnSensingComponent_eventSetSensingInterval_Parms), Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics
	{
		struct PawnSensingComponent_eventSetSensingUpdatesEnabled_Parms
		{
			bool bEnabled;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((PawnSensingComponent_eventSetSensingUpdatesEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PawnSensingComponent_eventSetSensingUpdatesEnabled_Parms), &Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PawnSensing" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Enables or disables sensing updates. The timer is reset in either case." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, "SetSensingUpdatesEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020404, sizeof(PawnSensingComponent_eventSetSensingUpdatesEnabled_Parms), Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister()
	{
		return UPawnSensingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPawnSensingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionCosine_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionCosine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnHearNoise_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHearNoise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSeePawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeePawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHearNoises_MetaData[];
#endif
		static void NewProp_bHearNoises_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHearNoises;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSeePawns_MetaData[];
#endif
		static void NewProp_bSeePawns_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSeePawns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlySensePlayers_MetaData[];
#endif
		static void NewProp_bOnlySensePlayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlySensePlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSensingUpdates_MetaData[];
#endif
		static void NewProp_bEnableSensingUpdates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSensingUpdates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HearingMaxSoundAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HearingMaxSoundAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SensingInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SensingInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LOSHearingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LOSHearingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HearingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HearingThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnSensingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPawnSensingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle, "GetPeripheralVisionAngle" }, // 3712396194
		{ &Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine, "GetPeripheralVisionCosine" }, // 1059289879
		{ &Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature, "HearNoiseDelegate__DelegateSignature" }, // 395617553
		{ &Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature, "SeePawnDelegate__DelegateSignature" }, // 4276140071
		{ &Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle, "SetPeripheralVisionAngle" }, // 3711370312
		{ &Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval, "SetSensingInterval" }, // 3191785874
		{ &Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled, "SetSensingUpdatesEnabled" }, // 2571728400
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "HideCategories", "Activation Components|Activation Collision" },
		{ "IncludePath", "Perception/PawnSensingComponent.h" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "SensingComponent encapsulates sensory (ie sight and hearing) settings and functionality for an Actor,\nallowing the actor to see/hear Pawns in the world. It does nothing on network clients." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionCosine_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Cosine of limits of peripheral vision. Computed from PeripheralVisionAngle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionCosine = { UE4CodeGen_Private::EPropertyClass::Float, "PeripheralVisionCosine", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UPawnSensingComponent, PeripheralVisionCosine), METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionCosine_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionCosine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionAngle_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionAngle = { UE4CodeGen_Private::EPropertyClass::Float, "PeripheralVisionAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UPawnSensingComponent, PeripheralVisionAngle), METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnHearNoise_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Delegate to execute when we hear a noise from a Pawn's PawnNoiseEmitterComponent." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnHearNoise = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnHearNoise", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPawnSensingComponent, OnHearNoise), Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnHearNoise_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnHearNoise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnSeePawn_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Delegate to execute when we see a Pawn." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnSeePawn = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSeePawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPawnSensingComponent, OnSeePawn), Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnSeePawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnSeePawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "If true, we will perform audibility tests and will be notified when a Pawn makes a noise that can be heard. Default: true\nIMPORTANT NOTE: If we can see pawns (bSeePawns is true), and the pawn is visible, noise notifications are not triggered." },
	};
#endif
	void Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises_SetBit(void* Obj)
	{
		((UPawnSensingComponent*)Obj)->bHearNoises = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises = { UE4CodeGen_Private::EPropertyClass::Bool, "bHearNoises", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnSensingComponent), &Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "If true, we will perform visibility tests and will trigger notifications when a Pawn is visible. Default: true" },
	};
#endif
	void Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns_SetBit(void* Obj)
	{
		((UPawnSensingComponent*)Obj)->bSeePawns = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns = { UE4CodeGen_Private::EPropertyClass::Bool, "bSeePawns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnSensingComponent), &Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "If true, will only sense player-controlled pawns in the world. Default: true" },
	};
#endif
	void Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers_SetBit(void* Obj)
	{
		((UPawnSensingComponent*)Obj)->bOnlySensePlayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlySensePlayers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnSensingComponent), &Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "If true, component will perform sensing updates. At runtime change this using SetSensingUpdatesEnabled()." },
	};
#endif
	void Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates_SetBit(void* Obj)
	{
		((UPawnSensingComponent*)Obj)->bEnableSensingUpdates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSensingUpdates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPawnSensingComponent), &Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingMaxSoundAge_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Max age of sounds we can hear. Should be greater than SensingInterval, or you might miss hearing some sounds!" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingMaxSoundAge = { UE4CodeGen_Private::EPropertyClass::Float, "HearingMaxSoundAge", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPawnSensingComponent, HearingMaxSoundAge), METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingMaxSoundAge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingMaxSoundAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SensingInterval_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Amount of time between pawn sensing updates. Use SetSensingInterval() to adjust this at runtime. A value <= 0 prevents any updates." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SensingInterval = { UE4CodeGen_Private::EPropertyClass::Float, "SensingInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPawnSensingComponent, SensingInterval), METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SensingInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SensingInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Maximum sight distance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SightRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SightRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPawnSensingComponent, SightRadius), METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SightRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_LOSHearingThreshold_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Max distance at which a makenoise(1.0) loudness sound can be heard if unoccluded (LOSHearingThreshold should be > HearingThreshold)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_LOSHearingThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "LOSHearingThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPawnSensingComponent, LOSHearingThreshold), METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_LOSHearingThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_LOSHearingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingThreshold_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Max distance at which a makenoise(1.0) loudness sound can be heard, regardless of occlusion" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "HearingThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPawnSensingComponent, HearingThreshold), METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnSensingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionCosine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnHearNoise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnSeePawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingMaxSoundAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SensingInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_LOSHearingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnSensingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnSensingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnSensingComponent_Statics::ClassParams = {
		&UPawnSensingComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UPawnSensingComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPawnSensingComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnSensingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnSensingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnSensingComponent, 4024794012);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnSensingComponent(Z_Construct_UClass_UPawnSensingComponent, &UPawnSensingComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UPawnSensingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnSensingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
