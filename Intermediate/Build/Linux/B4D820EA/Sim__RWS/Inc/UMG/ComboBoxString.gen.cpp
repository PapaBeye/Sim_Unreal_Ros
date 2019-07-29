// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/ComboBoxString.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboBoxString() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_AddOption();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_ClearOptions();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_ClearSelection();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_FindOptionIndex();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_GetOptionCount();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_GetSelectedOption();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_RefreshOptions();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_RemoveOption();
	UMG_API UFunction* Z_Construct_UFunction_UComboBoxString_SetSelectedOption();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboBoxStyle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "OnOpeningEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics
	{
		struct ComboBoxString_eventOnSelectionChangedEvent_Parms
		{
			FString SelectedItem;
			TEnumAsByte<ESelectInfo::Type> SelectionType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectionType = { UE4CodeGen_Private::EPropertyClass::Byte, "SelectionType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventOnSelectionChangedEvent_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectedItem = { UE4CodeGen_Private::EPropertyClass::Str, "SelectedItem", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventOnSelectionChangedEvent_Parms, SelectedItem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::NewProp_SelectedItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "OnSelectionChangedEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(ComboBoxString_eventOnSelectionChangedEvent_Parms), Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UComboBoxString::StaticRegisterNativesUComboBoxString()
	{
		UClass* Class = UComboBoxString::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOption", &UComboBoxString::execAddOption },
			{ "ClearOptions", &UComboBoxString::execClearOptions },
			{ "ClearSelection", &UComboBoxString::execClearSelection },
			{ "FindOptionIndex", &UComboBoxString::execFindOptionIndex },
			{ "GetOptionAtIndex", &UComboBoxString::execGetOptionAtIndex },
			{ "GetOptionCount", &UComboBoxString::execGetOptionCount },
			{ "GetSelectedOption", &UComboBoxString::execGetSelectedOption },
			{ "RefreshOptions", &UComboBoxString::execRefreshOptions },
			{ "RemoveOption", &UComboBoxString::execRemoveOption },
			{ "SetSelectedOption", &UComboBoxString::execSetSelectedOption },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboBoxString_AddOption_Statics
	{
		struct ComboBoxString_eventAddOption_Parms
		{
			FString Option;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Option;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxString_AddOption_Statics::NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComboBoxString_AddOption_Statics::NewProp_Option = { UE4CodeGen_Private::EPropertyClass::Str, "Option", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventAddOption_Parms, Option), METADATA_PARAMS(Z_Construct_UFunction_UComboBoxString_AddOption_Statics::NewProp_Option_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_AddOption_Statics::NewProp_Option_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_AddOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_AddOption_Statics::NewProp_Option,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxString_AddOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_AddOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "AddOption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ComboBoxString_eventAddOption_Parms), Z_Construct_UFunction_UComboBoxString_AddOption_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_AddOption_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxString_AddOption_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_AddOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxString_AddOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxString_AddOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxString_ClearOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxString_ClearOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_ClearOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "ClearOptions", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxString_ClearOptions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_ClearOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxString_ClearOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxString_ClearOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxString_ClearSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxString_ClearSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_ClearSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "ClearSelection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxString_ClearSelection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_ClearSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxString_ClearSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxString_ClearSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics
	{
		struct ComboBoxString_eventFindOptionIndex_Parms
		{
			FString Option;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Option;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventFindOptionIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::NewProp_Option = { UE4CodeGen_Private::EPropertyClass::Str, "Option", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventFindOptionIndex_Parms, Option), METADATA_PARAMS(Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::NewProp_Option_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::NewProp_Option_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::NewProp_Option,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "FindOptionIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ComboBoxString_eventFindOptionIndex_Parms), Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxString_FindOptionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxString_FindOptionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics
	{
		struct ComboBoxString_eventGetOptionAtIndex_Parms
		{
			int32 Index;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventGetOptionAtIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::NewProp_Index = { UE4CodeGen_Private::EPropertyClass::Int, "Index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventGetOptionAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "GetOptionAtIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ComboBoxString_eventGetOptionAtIndex_Parms), Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics
	{
		struct ComboBoxString_eventGetOptionCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventGetOptionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "@return The number of options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "GetOptionCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ComboBoxString_eventGetOptionCount_Parms), Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxString_GetOptionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxString_GetOptionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics
	{
		struct ComboBoxString_eventGetSelectedOption_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventGetSelectedOption_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "GetSelectedOption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(ComboBoxString_eventGetSelectedOption_Parms), Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxString_GetSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxString_GetSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxString_RefreshOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxString_RefreshOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "Refreshes the list of options.  If you added new ones, and want to update the list even if it's\ncurrently being displayed use this." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_RefreshOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "RefreshOptions", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxString_RefreshOptions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_RefreshOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxString_RefreshOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxString_RefreshOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics
	{
		struct ComboBoxString_eventRemoveOption_Parms
		{
			FString Option;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Option;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComboBoxString_eventRemoveOption_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ComboBoxString_eventRemoveOption_Parms), &Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::NewProp_Option = { UE4CodeGen_Private::EPropertyClass::Str, "Option", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventRemoveOption_Parms, Option), METADATA_PARAMS(Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::NewProp_Option_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::NewProp_Option_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::NewProp_Option,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "RemoveOption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ComboBoxString_eventRemoveOption_Parms), Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxString_RemoveOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxString_RemoveOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics
	{
		struct ComboBoxString_eventSetSelectedOption_Parms
		{
			FString Option;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Option;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::NewProp_Option = { UE4CodeGen_Private::EPropertyClass::Str, "Option", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ComboBoxString_eventSetSelectedOption_Parms, Option), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::NewProp_Option,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "ComboBox" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxString, "SetSelectedOption", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ComboBoxString_eventSetSelectedOption_Parms), Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxString_SetSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxString_SetSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComboBoxString_NoRegister()
	{
		return UComboBoxString::StaticClass();
	}
	struct Z_Construct_UClass_UComboBoxString_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOpening_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOpening;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGenerateWidgetEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnGenerateWidgetEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFocusable_MetaData[];
#endif
		static void NewProp_bIsFocusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFocusable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableGamepadNavigationMode_MetaData[];
#endif
		static void NewProp_EnableGamepadNavigationMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableGamepadNavigationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasDownArrow_MetaData[];
#endif
		static void NewProp_HasDownArrow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasDownArrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxListHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxListHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultOptions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultOptions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboBoxString_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboBoxString_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboBoxString_AddOption, "AddOption" }, // 647278180
		{ &Z_Construct_UFunction_UComboBoxString_ClearOptions, "ClearOptions" }, // 4257497294
		{ &Z_Construct_UFunction_UComboBoxString_ClearSelection, "ClearSelection" }, // 1254186794
		{ &Z_Construct_UFunction_UComboBoxString_FindOptionIndex, "FindOptionIndex" }, // 982666349
		{ &Z_Construct_UFunction_UComboBoxString_GetOptionAtIndex, "GetOptionAtIndex" }, // 1712917291
		{ &Z_Construct_UFunction_UComboBoxString_GetOptionCount, "GetOptionCount" }, // 592007325
		{ &Z_Construct_UFunction_UComboBoxString_GetSelectedOption, "GetSelectedOption" }, // 834729283
		{ &Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature, "OnOpeningEvent__DelegateSignature" }, // 2377554325
		{ &Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature, "OnSelectionChangedEvent__DelegateSignature" }, // 1269136589
		{ &Z_Construct_UFunction_UComboBoxString_RefreshOptions, "RefreshOptions" }, // 1474143316
		{ &Z_Construct_UFunction_UComboBoxString_RemoveOption, "RemoveOption" }, // 4226258780
		{ &Z_Construct_UFunction_UComboBoxString_SetSelectedOption, "SetSelectedOption" }, // 385621139
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxString_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "ComboBox (String)" },
		{ "IncludePath", "Components/ComboBoxString.h" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The combobox allows you to display a list of options to the user in a dropdown menu for them to select one." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnOpening_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "Called when the combobox is opening" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnOpening = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnOpening", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UComboBoxString, OnOpening), Z_Construct_UDelegateFunction_UComboBoxString_OnOpeningEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnOpening_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnOpening_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnSelectionChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "Called when a new item is selected in the combobox." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnSelectionChanged = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSelectionChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UComboBoxString, OnSelectionChanged), Z_Construct_UDelegateFunction_UComboBoxString_OnSelectionChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnSelectionChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnSelectionChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnGenerateWidgetEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "Called when the widget is needed for the item." },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnGenerateWidgetEvent = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnGenerateWidgetEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080001, 1, nullptr, STRUCT_OFFSET(UComboBoxString, OnGenerateWidgetEvent), Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForString__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnGenerateWidgetEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnGenerateWidgetEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxString_Statics::NewProp_bIsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif
	void Z_Construct_UClass_UComboBoxString_Statics::NewProp_bIsFocusable_SetBit(void* Obj)
	{
		((UComboBoxString*)Obj)->bIsFocusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_bIsFocusable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFocusable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UComboBoxString), &Z_Construct_UClass_UComboBoxString_Statics::NewProp_bIsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UComboBoxString_Statics::NewProp_bIsFocusable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::NewProp_bIsFocusable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxString_Statics::NewProp_ForegroundColor_MetaData[] = {
		{ "Category", "Style" },
		{ "DesignerRebuild", "" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The foreground color to pass through the hierarchy." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_ForegroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ForegroundColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UComboBoxString, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UComboBoxString_Statics::NewProp_ForegroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::NewProp_ForegroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxString_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The default font to use in the combobox, only applies if you're not implementing OnGenerateWidgetEvent\nto factory each new entry." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_Font = { UE4CodeGen_Private::EPropertyClass::Struct, "Font", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UComboBoxString, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UComboBoxString_Statics::NewProp_Font_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxString_Statics::NewProp_EnableGamepadNavigationMode_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "When false, directional keys will change the selection. When true, ComboBox\nmust be activated and will only capture arrow input while activated." },
	};
#endif
	void Z_Construct_UClass_UComboBoxString_Statics::NewProp_EnableGamepadNavigationMode_SetBit(void* Obj)
	{
		((UComboBoxString*)Obj)->EnableGamepadNavigationMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_EnableGamepadNavigationMode = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableGamepadNavigationMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UComboBoxString), &Z_Construct_UClass_UComboBoxString_Statics::NewProp_EnableGamepadNavigationMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UComboBoxString_Statics::NewProp_EnableGamepadNavigationMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::NewProp_EnableGamepadNavigationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxString_Statics::NewProp_HasDownArrow_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "When false, the down arrow is not generated and it is up to the API consumer\nto make their own visual hint that this is a drop down." },
	};
#endif
	void Z_Construct_UClass_UComboBoxString_Statics::NewProp_HasDownArrow_SetBit(void* Obj)
	{
		((UComboBoxString*)Obj)->HasDownArrow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_HasDownArrow = { UE4CodeGen_Private::EPropertyClass::Bool, "HasDownArrow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UComboBoxString), &Z_Construct_UClass_UComboBoxString_Statics::NewProp_HasDownArrow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UComboBoxString_Statics::NewProp_HasDownArrow_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::NewProp_HasDownArrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxString_Statics::NewProp_MaxListHeight_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The max height of the combobox list that opens" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_MaxListHeight = { UE4CodeGen_Private::EPropertyClass::Float, "MaxListHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UComboBoxString, MaxListHeight), METADATA_PARAMS(Z_Construct_UClass_UComboBoxString_Statics::NewProp_MaxListHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::NewProp_MaxListHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxString_Statics::NewProp_ContentPadding_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_ContentPadding = { UE4CodeGen_Private::EPropertyClass::Struct, "ContentPadding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UComboBoxString, ContentPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UComboBoxString_Statics::NewProp_ContentPadding_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::NewProp_ContentPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxString_Statics::NewProp_ItemStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The item row style." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_ItemStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ItemStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UComboBoxString, ItemStyle), Z_Construct_UScriptStruct_FTableRowStyle, METADATA_PARAMS(Z_Construct_UClass_UComboBoxString_Statics::NewProp_ItemStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::NewProp_ItemStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxString_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The style." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UComboBoxString, WidgetStyle), Z_Construct_UScriptStruct_FComboBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UComboBoxString_Statics::NewProp_WidgetStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::NewProp_WidgetStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxString_Statics::NewProp_SelectedOption_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The item in the combobox to select by default" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_SelectedOption = { UE4CodeGen_Private::EPropertyClass::Str, "SelectedOption", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UComboBoxString, SelectedOption), METADATA_PARAMS(Z_Construct_UClass_UComboBoxString_Statics::NewProp_SelectedOption_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::NewProp_SelectedOption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxString_Statics::NewProp_DefaultOptions_MetaData[] = {
		{ "Category", "Content" },
		{ "ModuleRelativePath", "Public/Components/ComboBoxString.h" },
		{ "ToolTip", "The default list of items to be displayed on the combobox." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_DefaultOptions = { UE4CodeGen_Private::EPropertyClass::Array, "DefaultOptions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UComboBoxString, DefaultOptions), METADATA_PARAMS(Z_Construct_UClass_UComboBoxString_Statics::NewProp_DefaultOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::NewProp_DefaultOptions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UComboBoxString_Statics::NewProp_DefaultOptions_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "DefaultOptions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboBoxString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnOpening,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnSelectionChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_OnGenerateWidgetEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_bIsFocusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_ForegroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_EnableGamepadNavigationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_HasDownArrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_MaxListHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_ContentPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_ItemStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_WidgetStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_SelectedOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_DefaultOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxString_Statics::NewProp_DefaultOptions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboBoxString_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboBoxString>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComboBoxString_Statics::ClassParams = {
		&UComboBoxString::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UComboBoxString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UComboBoxString_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UComboBoxString_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComboBoxString()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComboBoxString_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComboBoxString, 4036747829);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComboBoxString(Z_Construct_UClass_UComboBoxString, &UComboBoxString::StaticClass, TEXT("/Script/UMG"), TEXT("UComboBoxString"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBoxString);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
