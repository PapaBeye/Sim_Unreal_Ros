// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTesting/Public/AutomationBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationBlueprintFunctionLibrary() {}
// Cross Module References
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotOptions();
	FUNCTIONALTESTING_API UEnum* Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI();
// End Cross Module References
	void UAutomationBlueprintFunctionLibrary::StaticRegisterNativesUAutomationBlueprintFunctionLibrary()
	{
		UClass* Class = UAutomationBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreAutomatedTestsRunning", &UAutomationBlueprintFunctionLibrary::execAreAutomatedTestsRunning },
			{ "DisableStatGroup", &UAutomationBlueprintFunctionLibrary::execDisableStatGroup },
			{ "EnableStatGroup", &UAutomationBlueprintFunctionLibrary::execEnableStatGroup },
			{ "GetDefaultScreenshotOptionsForGameplay", &UAutomationBlueprintFunctionLibrary::execGetDefaultScreenshotOptionsForGameplay },
			{ "GetDefaultScreenshotOptionsForRendering", &UAutomationBlueprintFunctionLibrary::execGetDefaultScreenshotOptionsForRendering },
			{ "GetStatCallCount", &UAutomationBlueprintFunctionLibrary::execGetStatCallCount },
			{ "GetStatExcAverage", &UAutomationBlueprintFunctionLibrary::execGetStatExcAverage },
			{ "GetStatExcMax", &UAutomationBlueprintFunctionLibrary::execGetStatExcMax },
			{ "GetStatIncAverage", &UAutomationBlueprintFunctionLibrary::execGetStatIncAverage },
			{ "GetStatIncMax", &UAutomationBlueprintFunctionLibrary::execGetStatIncMax },
			{ "SetScalabilityQualityLevelRelativeToMax", &UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityLevelRelativeToMax },
			{ "SetScalabilityQualityToEpic", &UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityToEpic },
			{ "SetScalabilityQualityToLow", &UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityToLow },
			{ "TakeAutomationScreenshot", &UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshot },
			{ "TakeAutomationScreenshotAtCamera", &UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshotAtCamera },
			{ "TakeAutomationScreenshotOfUI", &UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshotOfUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventAreAutomatedTestsRunning_Parms
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
	void Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutomationBlueprintFunctionLibrary_eventAreAutomatedTestsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AutomationBlueprintFunctionLibrary_eventAreAutomatedTestsRunning_Parms), &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Lets you know if any automated tests are running, or are about to run and the automation system is spinning up tests." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "AreAutomatedTestsRunning", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(AutomationBlueprintFunctionLibrary_eventAreAutomatedTestsRunning_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventDisableStatGroup_Parms
		{
			UObject* WorldContextObject;
			FName GroupName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::NewProp_GroupName = { UE4CodeGen_Private::EPropertyClass::Name, "GroupName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventDisableStatGroup_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventDisableStatGroup_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "DisableStatGroup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AutomationBlueprintFunctionLibrary_eventDisableStatGroup_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventEnableStatGroup_Parms
		{
			UObject* WorldContextObject;
			FName GroupName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::NewProp_GroupName = { UE4CodeGen_Private::EPropertyClass::Name, "GroupName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventEnableStatGroup_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventEnableStatGroup_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "EnableStatGroup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AutomationBlueprintFunctionLibrary_eventEnableStatGroup_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForGameplay_Parms
		{
			EComparisonTolerance Tolerance;
			float Delay;
			FAutomationScreenshotOptions ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Tolerance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Tolerance_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForGameplay_Parms, ReturnValue), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Delay = { UE4CodeGen_Private::EPropertyClass::Float, "Delay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForGameplay_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Tolerance = { UE4CodeGen_Private::EPropertyClass::Enum, "Tolerance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForGameplay_Parms, Tolerance), Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Tolerance_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Tolerance_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "CPP_Default_Delay", "0.200000" },
		{ "CPP_Default_Tolerance", "Low" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "GetDefaultScreenshotOptionsForGameplay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForGameplay_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForRendering_Parms
		{
			EComparisonTolerance Tolerance;
			float Delay;
			FAutomationScreenshotOptions ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Tolerance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Tolerance_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForRendering_Parms, ReturnValue), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Delay = { UE4CodeGen_Private::EPropertyClass::Float, "Delay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForRendering_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Tolerance = { UE4CodeGen_Private::EPropertyClass::Enum, "Tolerance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForRendering_Parms, Tolerance), Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Tolerance_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Tolerance_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "CPP_Default_Delay", "0.200000" },
		{ "CPP_Default_Tolerance", "Low" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "GetDefaultScreenshotOptionsForRendering", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForRendering_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetStatCallCount_Parms
		{
			FName StatName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatCallCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::NewProp_StatName = { UE4CodeGen_Private::EPropertyClass::Name, "StatName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatCallCount_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::NewProp_StatName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "GetStatCallCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AutomationBlueprintFunctionLibrary_eventGetStatCallCount_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetStatExcAverage_Parms
		{
			FName StatName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatExcAverage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::NewProp_StatName = { UE4CodeGen_Private::EPropertyClass::Name, "StatName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatExcAverage_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::NewProp_StatName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "GetStatExcAverage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AutomationBlueprintFunctionLibrary_eventGetStatExcAverage_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetStatExcMax_Parms
		{
			FName StatName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatExcMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::NewProp_StatName = { UE4CodeGen_Private::EPropertyClass::Name, "StatName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatExcMax_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::NewProp_StatName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "GetStatExcMax", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AutomationBlueprintFunctionLibrary_eventGetStatExcMax_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetStatIncAverage_Parms
		{
			FName StatName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatIncAverage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::NewProp_StatName = { UE4CodeGen_Private::EPropertyClass::Name, "StatName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatIncAverage_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::NewProp_StatName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "GetStatIncAverage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AutomationBlueprintFunctionLibrary_eventGetStatIncAverage_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetStatIncMax_Parms
		{
			FName StatName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatIncMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::NewProp_StatName = { UE4CodeGen_Private::EPropertyClass::Name, "StatName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatIncMax_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::NewProp_StatName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "GetStatIncMax", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AutomationBlueprintFunctionLibrary_eventGetStatIncMax_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityLevelRelativeToMax_Parms
		{
			UObject* WorldContextObject;
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityLevelRelativeToMax_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityLevelRelativeToMax_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "CPP_Default_Value", "1" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Sets all other settings based on an overall value\n@param Value 0:Cinematic, 1:Epic...etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "SetScalabilityQualityLevelRelativeToMax", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityLevelRelativeToMax_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToEpic_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToEpic_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "SetScalabilityQualityToEpic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToEpic_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToLow_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToLow_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "SetScalabilityQualityToLow", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToLow_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString Name;
			FString Notes;
			FAutomationScreenshotOptions Options;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Notes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Options = { UE4CodeGen_Private::EPropertyClass::Struct, "Options", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms, Options), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Options_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Notes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Notes = { UE4CodeGen_Private::EPropertyClass::Str, "Notes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms, Notes), METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Notes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Notes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_LatentInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "LatentInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Notes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "Name", "" },
		{ "ToolTip", "Takes a screenshot of the game's viewport.  Does not capture any UI." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "TakeAutomationScreenshot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			ACameraActor* Camera;
			FString NameOverride;
			FString Notes;
			FAutomationScreenshotOptions Options;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Notes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameOverride;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Options = { UE4CodeGen_Private::EPropertyClass::Struct, "Options", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, Options), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Options_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Notes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Notes = { UE4CodeGen_Private::EPropertyClass::Str, "Notes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, Notes), METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Notes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Notes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_NameOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_NameOverride = { UE4CodeGen_Private::EPropertyClass::Str, "NameOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, NameOverride), METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_NameOverride_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_NameOverride_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, Camera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_LatentInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "LatentInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Notes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_NameOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "NameOverride", "" },
		{ "ToolTip", "Takes a screenshot of the game's viewport, from a particular camera actors POV.  Does not capture any UI." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "TakeAutomationScreenshotAtCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString Name;
			FAutomationScreenshotOptions Options;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Options = { UE4CodeGen_Private::EPropertyClass::Struct, "Options", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms, Options), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Options_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_LatentInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "LatentInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "NameOverride", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, "TakeAutomationScreenshotOfUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_NoRegister()
	{
		return UAutomationBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning, "AreAutomatedTestsRunning" }, // 2121945020
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup, "DisableStatGroup" }, // 1727478609
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup, "EnableStatGroup" }, // 2399956963
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay, "GetDefaultScreenshotOptionsForGameplay" }, // 404981
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering, "GetDefaultScreenshotOptionsForRendering" }, // 2285043904
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount, "GetStatCallCount" }, // 21085376
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage, "GetStatExcAverage" }, // 2309855683
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax, "GetStatExcMax" }, // 4211528643
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage, "GetStatIncAverage" }, // 3589112955
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax, "GetStatIncMax" }, // 2841076014
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax, "SetScalabilityQualityLevelRelativeToMax" }, // 2361833547
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic, "SetScalabilityQualityToEpic" }, // 3105639930
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow, "SetScalabilityQualityToLow" }, // 1017589044
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot, "TakeAutomationScreenshot" }, // 446256987
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera, "TakeAutomationScreenshotAtCamera" }, // 3808614779
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI, "TakeAutomationScreenshotOfUI" }, // 1805697923
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutomationBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ScriptName", "AutomationLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::ClassParams = {
		&UAutomationBlueprintFunctionLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomationBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutomationBlueprintFunctionLibrary, 1270060172);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutomationBlueprintFunctionLibrary(Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, &UAutomationBlueprintFunctionLibrary::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("UAutomationBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
