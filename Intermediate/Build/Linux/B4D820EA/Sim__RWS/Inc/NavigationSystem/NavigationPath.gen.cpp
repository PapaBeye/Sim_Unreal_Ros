// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavigationPath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationPath() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavPathEvent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPath_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationOptionFlag();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationPath_GetDebugString();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationPath_GetPathCost();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationPath_GetPathLength();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationPath_IsPartial();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationPath_IsStringPulled();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UFunction_UNavigationPath_IsValid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics
	{
		struct _Script_NavigationSystem_eventOnNavigationPathUpdated_Parms
		{
			UNavigationPath* AffectedPath;
			TEnumAsByte<ENavPathEvent::Type> PathEvent;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PathEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AffectedPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::NewProp_PathEvent = { UE4CodeGen_Private::EPropertyClass::Byte, "PathEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_NavigationSystem_eventOnNavigationPathUpdated_Parms, PathEvent), Z_Construct_UEnum_Engine_ENavPathEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::NewProp_AffectedPath = { UE4CodeGen_Private::EPropertyClass::Object, "AffectedPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_NavigationSystem_eventOnNavigationPathUpdated_Parms, AffectedPath), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::NewProp_PathEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::NewProp_AffectedPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem, "OnNavigationPathUpdated__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_NavigationSystem_eventOnNavigationPathUpdated_Parms), Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UNavigationPath::StaticRegisterNativesUNavigationPath()
	{
		UClass* Class = UNavigationPath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableDebugDrawing", &UNavigationPath::execEnableDebugDrawing },
			{ "EnableRecalculationOnInvalidation", &UNavigationPath::execEnableRecalculationOnInvalidation },
			{ "GetDebugString", &UNavigationPath::execGetDebugString },
			{ "GetPathCost", &UNavigationPath::execGetPathCost },
			{ "GetPathLength", &UNavigationPath::execGetPathLength },
			{ "IsPartial", &UNavigationPath::execIsPartial },
			{ "IsStringPulled", &UNavigationPath::execIsStringPulled },
			{ "IsValid", &UNavigationPath::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics
	{
		struct NavigationPath_eventEnableDebugDrawing_Parms
		{
			bool bShouldDrawDebugData;
			FLinearColor PathColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathColor;
		static void NewProp_bShouldDrawDebugData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDrawDebugData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_PathColor = { UE4CodeGen_Private::EPropertyClass::Struct, "PathColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationPath_eventEnableDebugDrawing_Parms, PathColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_bShouldDrawDebugData_SetBit(void* Obj)
	{
		((NavigationPath_eventEnableDebugDrawing_Parms*)Obj)->bShouldDrawDebugData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_bShouldDrawDebugData = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldDrawDebugData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationPath_eventEnableDebugDrawing_Parms), &Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_bShouldDrawDebugData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_PathColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_bShouldDrawDebugData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Debug" },
		{ "CPP_Default_PathColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "EnableDebugDrawing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(NavigationPath_eventEnableDebugDrawing_Parms), Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics
	{
		struct NavigationPath_eventEnableRecalculationOnInvalidation_Parms
		{
			TEnumAsByte<ENavigationOptionFlag::Type> DoRecalculation;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DoRecalculation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::NewProp_DoRecalculation = { UE4CodeGen_Private::EPropertyClass::Byte, "DoRecalculation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavigationPath_eventEnableRecalculationOnInvalidation_Parms, DoRecalculation), Z_Construct_UEnum_Engine_ENavigationOptionFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::NewProp_DoRecalculation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
		{ "ToolTip", "if enabled path will request recalculation if it gets invalidated due to a change to underlying navigation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "EnableRecalculationOnInvalidation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavigationPath_eventEnableRecalculationOnInvalidation_Parms), Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics
	{
		struct NavigationPath_eventGetDebugString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationPath_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Debug" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
		{ "ToolTip", "UObject end" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "GetDebugString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavigationPath_eventGetDebugString_Parms), Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_GetDebugString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics
	{
		struct NavigationPath_eventGetPathCost_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationPath_eventGetPathCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "GetPathCost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavigationPath_eventGetPathCost_Parms), Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_GetPathCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics
	{
		struct NavigationPath_eventGetPathLength_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavigationPath_eventGetPathLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "GetPathLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavigationPath_eventGetPathLength_Parms), Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_GetPathLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationPath_IsPartial_Statics
	{
		struct NavigationPath_eventIsPartial_Parms
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
	void Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationPath_eventIsPartial_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationPath_eventIsPartial_Parms), &Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "IsPartial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavigationPath_eventIsPartial_Parms), Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_IsPartial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics
	{
		struct NavigationPath_eventIsStringPulled_Parms
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
	void Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationPath_eventIsStringPulled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationPath_eventIsStringPulled_Parms), &Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "IsStringPulled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavigationPath_eventIsStringPulled_Parms), Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_IsStringPulled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationPath_IsValid_Statics
	{
		struct NavigationPath_eventIsValid_Parms
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
	void Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationPath_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavigationPath_eventIsValid_Parms), &Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationPath_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, "IsValid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(NavigationPath_eventIsValid_Parms), Z_Construct_UFunction_UNavigationPath_IsValid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsValid_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationPath_IsValid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationPath_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationPath_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavigationPath_NoRegister()
	{
		return UNavigationPath::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecalculateOnInvalidation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RecalculateOnInvalidation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathUpdatedNotifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PathUpdatedNotifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNavigationPath_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing, "EnableDebugDrawing" }, // 1691742363
		{ &Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation, "EnableRecalculationOnInvalidation" }, // 930831206
		{ &Z_Construct_UFunction_UNavigationPath_GetDebugString, "GetDebugString" }, // 157797374
		{ &Z_Construct_UFunction_UNavigationPath_GetPathCost, "GetPathCost" }, // 2962854827
		{ &Z_Construct_UFunction_UNavigationPath_GetPathLength, "GetPathLength" }, // 3641348865
		{ &Z_Construct_UFunction_UNavigationPath_IsPartial, "IsPartial" }, // 4030577653
		{ &Z_Construct_UFunction_UNavigationPath_IsStringPulled, "IsStringPulled" }, // 2710499112
		{ &Z_Construct_UFunction_UNavigationPath_IsValid, "IsValid" }, // 289973367
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationPath_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NavigationPath.h" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
		{ "ToolTip", "UObject wrapper for FNavigationPath" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationPath_Statics::NewProp_RecalculateOnInvalidation_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavigationPath_Statics::NewProp_RecalculateOnInvalidation = { UE4CodeGen_Private::EPropertyClass::Byte, "RecalculateOnInvalidation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UNavigationPath, RecalculateOnInvalidation), Z_Construct_UEnum_Engine_ENavigationOptionFlag, METADATA_PARAMS(Z_Construct_UClass_UNavigationPath_Statics::NewProp_RecalculateOnInvalidation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationPath_Statics::NewProp_RecalculateOnInvalidation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints = { UE4CodeGen_Private::EPropertyClass::Array, "PathPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UNavigationPath, PathPoints), METADATA_PARAMS(Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PathPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathUpdatedNotifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathUpdatedNotifier = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "PathUpdatedNotifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UNavigationPath, PathUpdatedNotifier), Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathUpdatedNotifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathUpdatedNotifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationPath_Statics::NewProp_RecalculateOnInvalidation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathUpdatedNotifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationPath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationPath_Statics::ClassParams = {
		&UNavigationPath::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UNavigationPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UNavigationPath_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationPath_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavigationPath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationPath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationPath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationPath, 1179523490);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationPath(Z_Construct_UClass_UNavigationPath, &UNavigationPath::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavigationPath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationPath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
