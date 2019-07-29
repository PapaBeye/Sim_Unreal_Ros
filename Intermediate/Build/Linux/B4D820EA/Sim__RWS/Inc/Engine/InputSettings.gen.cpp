// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/InputSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInputSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_AddActionMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_AddAxisMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_GetActionMappingByName();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_GetActionNames();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_GetAxisMappingByName();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_GetAxisNames();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_GetInputSettings();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_RemoveActionMapping();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_RemoveAxisMapping();
	ENGINE_API UFunction* Z_Construct_UFunction_UInputSettings_SaveKeyMappings();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseLockMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisConfigEntry();
// End Cross Module References
	void UInputSettings::StaticRegisterNativesUInputSettings()
	{
		UClass* Class = UInputSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActionMapping", &UInputSettings::execAddActionMapping },
			{ "AddAxisMapping", &UInputSettings::execAddAxisMapping },
			{ "ForceRebuildKeymaps", &UInputSettings::execForceRebuildKeymaps },
			{ "GetActionMappingByName", &UInputSettings::execGetActionMappingByName },
			{ "GetActionNames", &UInputSettings::execGetActionNames },
			{ "GetAxisMappingByName", &UInputSettings::execGetAxisMappingByName },
			{ "GetAxisNames", &UInputSettings::execGetAxisNames },
			{ "GetInputSettings", &UInputSettings::execGetInputSettings },
			{ "RemoveActionMapping", &UInputSettings::execRemoveActionMapping },
			{ "RemoveAxisMapping", &UInputSettings::execRemoveAxisMapping },
			{ "SaveKeyMappings", &UInputSettings::execSaveKeyMappings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics
	{
		struct InputSettings_eventAddActionMapping_Parms
		{
			FInputActionKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
		static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
	{
		((InputSettings_eventAddActionMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceRebuildKeymaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputSettings_eventAddActionMapping_Parms), &Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InputSettings_eventAddActionMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically add an action mapping to the project defaults" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "AddActionMapping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(InputSettings_eventAddActionMapping_Parms), Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_AddActionMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics
	{
		struct InputSettings_eventAddAxisMapping_Parms
		{
			FInputAxisKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
		static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
	{
		((InputSettings_eventAddAxisMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceRebuildKeymaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputSettings_eventAddAxisMapping_Parms), &Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InputSettings_eventAddAxisMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically add an axis mapping to the project defaults" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "AddAxisMapping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(InputSettings_eventAddAxisMapping_Parms), Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_AddAxisMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "When changes are made to the default mappings, push those changes out to PlayerInput key maps" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "ForceRebuildKeymaps", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics
	{
		struct InputSettings_eventGetActionMappingByName_Parms
		{
			FName InActionName;
			TArray<FInputActionKeyMapping> OutMappings;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings = { UE4CodeGen_Private::EPropertyClass::Array, "OutMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputSettings_eventGetActionMappingByName_Parms, OutMappings), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName = { UE4CodeGen_Private::EPropertyClass::Name, "InActionName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(InputSettings_eventGetActionMappingByName_Parms, InActionName), METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "GetActionMappingByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(InputSettings_eventGetActionMappingByName_Parms), Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_GetActionMappingByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_GetActionNames_Statics
	{
		struct InputSettings_eventGetActionNames_Parms
		{
			TArray<FName> ActionNames;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames = { UE4CodeGen_Private::EPropertyClass::Array, "ActionNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputSettings_eventGetActionNames_Parms, ActionNames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ActionNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Populate a list of all defined action names" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "GetActionNames", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(InputSettings_eventGetActionNames_Parms), Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_GetActionNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics
	{
		struct InputSettings_eventGetAxisMappingByName_Parms
		{
			FName InAxisName;
			TArray<FInputAxisKeyMapping> OutMappings;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InAxisName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings = { UE4CodeGen_Private::EPropertyClass::Array, "OutMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputSettings_eventGetAxisMappingByName_Parms, OutMappings), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName = { UE4CodeGen_Private::EPropertyClass::Name, "InAxisName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(InputSettings_eventGetAxisMappingByName_Parms, InAxisName), METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Retrieve all axis mappings by a certain name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "GetAxisMappingByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(InputSettings_eventGetAxisMappingByName_Parms), Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_GetAxisMappingByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics
	{
		struct InputSettings_eventGetAxisNames_Parms
		{
			TArray<FName> AxisNames;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisNames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames = { UE4CodeGen_Private::EPropertyClass::Array, "AxisNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InputSettings_eventGetAxisNames_Parms, AxisNames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "AxisNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Populate a list of all defined axis names" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "GetAxisNames", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(InputSettings_eventGetAxisNames_Parms), Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_GetAxisNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics
	{
		struct InputSettings_eventGetInputSettings_Parms
		{
			UInputSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InputSettings_eventGetInputSettings_Parms, ReturnValue), Z_Construct_UClass_UInputSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Returns the game local input settings (action mappings, axis mappings, etc...)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "GetInputSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(InputSettings_eventGetInputSettings_Parms), Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_GetInputSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics
	{
		struct InputSettings_eventRemoveActionMapping_Parms
		{
			FInputActionKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
		static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
	{
		((InputSettings_eventRemoveActionMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceRebuildKeymaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputSettings_eventRemoveActionMapping_Parms), &Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InputSettings_eventRemoveActionMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically remove an action mapping to the project defaults" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "RemoveActionMapping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(InputSettings_eventRemoveActionMapping_Parms), Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_RemoveActionMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics
	{
		struct InputSettings_eventRemoveAxisMapping_Parms
		{
			FInputAxisKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
		static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
	{
		((InputSettings_eventRemoveAxisMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceRebuildKeymaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InputSettings_eventRemoveAxisMapping_Parms), &Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyMapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InputSettings_eventRemoveAxisMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically remove an axis mapping to the project defaults" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "RemoveAxisMapping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(InputSettings_eventRemoveAxisMapping_Parms), Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_RemoveAxisMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Flush the current mapping values to the config file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, "SaveKeyMappings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_SaveKeyMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInputSettings_NoRegister()
	{
		return UInputSettings::StaticClass();
	}
	struct Z_Construct_UClass_UInputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConsoleKeys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConsoleKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConsoleKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTouchInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultTouchInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleClickTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DoubleClickTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOVScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultViewportMouseLockMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultViewportMouseLockMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultViewportMouseLockMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultViewportMouseCaptureMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultViewportMouseCaptureMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultViewportMouseCaptureMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedAutocorrectDeviceModels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludedAutocorrectDeviceModels;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExcludedAutocorrectDeviceModels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedAutocorrectCultures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludedAutocorrectCultures;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExcludedAutocorrectCultures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedAutocorrectOS_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludedAutocorrectOS;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExcludedAutocorrectOS_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAutocorrect_MetaData[];
#endif
		static void NewProp_bUseAutocorrect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAutocorrect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableGestureRecognizer_MetaData[];
#endif
		static void NewProp_bEnableGestureRecognizer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableGestureRecognizer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowConsoleOnFourFingerTap_MetaData[];
#endif
		static void NewProp_bShowConsoleOnFourFingerTap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowConsoleOnFourFingerTap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowTouchInterface_MetaData[];
#endif
		static void NewProp_bAlwaysShowTouchInterface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowTouchInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultViewportMouseLock_MetaData[];
#endif
		static void NewProp_bDefaultViewportMouseLock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultViewportMouseLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureMouseOnLaunch_MetaData[];
#endif
		static void NewProp_bCaptureMouseOnLaunch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureMouseOnLaunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableFOVScaling_MetaData[];
#endif
		static void NewProp_bEnableFOVScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFOVScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMouseSmoothing_MetaData[];
#endif
		static void NewProp_bEnableMouseSmoothing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMouseSmoothing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMouseForTouch_MetaData[];
#endif
		static void NewProp_bUseMouseForTouch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMouseForTouch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bF11TogglesFullscreen_MetaData[];
#endif
		static void NewProp_bF11TogglesFullscreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bF11TogglesFullscreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAltEnterTogglesFullscreen_MetaData[];
#endif
		static void NewProp_bAltEnterTogglesFullscreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAltEnterTogglesFullscreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisConfig;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisConfig_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputSettings_AddActionMapping, "AddActionMapping" }, // 990194645
		{ &Z_Construct_UFunction_UInputSettings_AddAxisMapping, "AddAxisMapping" }, // 1267797054
		{ &Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps, "ForceRebuildKeymaps" }, // 592012864
		{ &Z_Construct_UFunction_UInputSettings_GetActionMappingByName, "GetActionMappingByName" }, // 3161089859
		{ &Z_Construct_UFunction_UInputSettings_GetActionNames, "GetActionNames" }, // 543364353
		{ &Z_Construct_UFunction_UInputSettings_GetAxisMappingByName, "GetAxisMappingByName" }, // 127586298
		{ &Z_Construct_UFunction_UInputSettings_GetAxisNames, "GetAxisNames" }, // 2667967616
		{ &Z_Construct_UFunction_UInputSettings_GetInputSettings, "GetInputSettings" }, // 1444728474
		{ &Z_Construct_UFunction_UInputSettings_RemoveActionMapping, "RemoveActionMapping" }, // 2033168152
		{ &Z_Construct_UFunction_UInputSettings_RemoveAxisMapping, "RemoveAxisMapping" }, // 3375641624
		{ &Z_Construct_UFunction_UInputSettings_SaveKeyMappings, "SaveKeyMappings" }, // 376422263
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFramework/InputSettings.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Project wide settings for input handling\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_MetaData[] = {
		{ "Category", "Console" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The keys which open the console." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys = { UE4CodeGen_Private::EPropertyClass::Array, "ConsoleKeys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, ConsoleKeys), METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ConsoleKeys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The key which opens the console." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKey = { UE4CodeGen_Private::EPropertyClass::Struct, "ConsoleKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020004000, 1, nullptr, STRUCT_OFFSET(UInputSettings, ConsoleKey_DEPRECATED), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface_MetaData[] = {
		{ "AllowedClasses", "TouchInterface" },
		{ "Category", "Mobile" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The default on-screen touch input interface for the game (can be null to disable the onscreen interface)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultTouchInterface", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, DefaultTouchInterface), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "List of Axis Mappings" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings = { UE4CodeGen_Private::EPropertyClass::Array, "AxisMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, AxisMappings), METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AxisMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "List of Action Mappings" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings = { UE4CodeGen_Private::EPropertyClass::Array, "ActionMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, ActionMappings), METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActionMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If a key is pressed twice in this amount of time it is considered a \"double click\"" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime = { UE4CodeGen_Private::EPropertyClass::Float, "DoubleClickTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, DoubleClickTime), METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "editcondition", "bEnableFOVScaling" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The scaling value to multiply the field of view by" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale = { UE4CodeGen_Private::EPropertyClass::Float, "FOVScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, FOVScale), METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_MetaData[] = {
		{ "Category", "ViewportProperties" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The default mouse lock state behavior when the viewport acquires capture" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode = { UE4CodeGen_Private::EPropertyClass::Enum, "DefaultViewportMouseLockMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, DefaultViewportMouseLockMode), Z_Construct_UEnum_Engine_EMouseLockMode, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_MetaData[] = {
		{ "Category", "ViewportProperties" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The default mouse capture mode for the game viewport" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode = { UE4CodeGen_Private::EPropertyClass::Enum, "DefaultViewportMouseCaptureMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, DefaultViewportMouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Disables autocorrect for these device models, even if autocorrect is turned in. Model IDs listed here will match against the start of the device's\nmodel (e.g., \"SM-\" will match all device model IDs that start with \"SM-\"). This is currently only supported on Android devices." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels = { UE4CodeGen_Private::EPropertyClass::Array, "ExcludedAutocorrectDeviceModels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, ExcludedAutocorrectDeviceModels), METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ExcludedAutocorrectDeviceModels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Disables autocorrect for these cultures, even if autocorrect is turned on. These should be ISO-compliant language and country codes, such as \"en\" or \"en-US\"." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures = { UE4CodeGen_Private::EPropertyClass::Array, "ExcludedAutocorrectCultures", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, ExcludedAutocorrectCultures), METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ExcludedAutocorrectCultures", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Disables autocorrect for these operating systems, even if autocorrect is enabled. Use the format \"[platform] [osversion]\"\n(e.g., \"iOS 11.2\" or \"Android 6\"). More specific versions will disable autocorrect for fewer devices (\"iOS 11\" will disable\nautocorrect for all devices running iOS 11, but \"iOS 11.2.2\" will not disable autocorrect for devices running 11.2.1)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS = { UE4CodeGen_Private::EPropertyClass::Array, "ExcludedAutocorrectOS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UInputSettings, ExcludedAutocorrectOS), METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ExcludedAutocorrectOS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If enabled, virtual keyboards will have autocorrect enabled. Currently only supported on mobile devices." },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bUseAutocorrect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAutocorrect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Whether or not to use the gesture recognition system to convert touches in to gestures that can be bound and queried" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bEnableGestureRecognizer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableGestureRecognizer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Whether or not to show the console on 4 finger tap, on mobile platforms" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bShowConsoleOnFourFingerTap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowConsoleOnFourFingerTap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Should the touch input interface be shown always, or only when the platform has a touch screen?" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bAlwaysShowTouchInterface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysShowTouchInterface", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bDefaultViewportMouseLock_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The default mouse lock state when the viewport acquires capture" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bDefaultViewportMouseLock_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bDefaultViewportMouseLock_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bDefaultViewportMouseLock = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefaultViewportMouseLock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bDefaultViewportMouseLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bDefaultViewportMouseLock_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bDefaultViewportMouseLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_MetaData[] = {
		{ "Category", "ViewportProperties" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Controls if the viewport will capture the mouse on Launch of the application" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bCaptureMouseOnLaunch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch = { UE4CodeGen_Private::EPropertyClass::Bool, "bCaptureMouseOnLaunch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Scale the mouse based on the player camera manager's field of view" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bEnableFOVScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableFOVScaling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Mouse smoothing control" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bEnableMouseSmoothing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableMouseSmoothing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Allow mouse to be used for touch" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bUseMouseForTouch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseMouseForTouch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bF11TogglesFullscreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen = { UE4CodeGen_Private::EPropertyClass::Bool, "bF11TogglesFullscreen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bAltEnterTogglesFullscreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen = { UE4CodeGen_Private::EPropertyClass::Bool, "bAltEnterTogglesFullscreen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "List of Axis Properties" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig = { UE4CodeGen_Private::EPropertyClass::Array, "AxisConfig", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004041, 1, nullptr, STRUCT_OFFSET(UInputSettings, AxisConfig), METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AxisConfig", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInputAxisConfigEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bDefaultViewportMouseLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputSettings_Statics::ClassParams = {
		&UInputSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A6u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UInputSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::PropPointers),
		"Input",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputSettings, 3141519196);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputSettings(Z_Construct_UClass_UInputSettings, &UInputSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UInputSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
