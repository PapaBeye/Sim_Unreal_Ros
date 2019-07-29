// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/KismetInternationalizationLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetInternationalizationLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UKismetInternationalizationLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetInternationalizationLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale();
// End Cross Module References
	void UKismetInternationalizationLibrary::StaticRegisterNativesUKismetInternationalizationLibrary()
	{
		UClass* Class = UKismetInternationalizationLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCurrentAssetGroupCulture", &UKismetInternationalizationLibrary::execClearCurrentAssetGroupCulture },
			{ "GetCurrentAssetGroupCulture", &UKismetInternationalizationLibrary::execGetCurrentAssetGroupCulture },
			{ "GetCurrentCulture", &UKismetInternationalizationLibrary::execGetCurrentCulture },
			{ "GetCurrentLanguage", &UKismetInternationalizationLibrary::execGetCurrentLanguage },
			{ "GetCurrentLocale", &UKismetInternationalizationLibrary::execGetCurrentLocale },
			{ "SetCurrentAssetGroupCulture", &UKismetInternationalizationLibrary::execSetCurrentAssetGroupCulture },
			{ "SetCurrentCulture", &UKismetInternationalizationLibrary::execSetCurrentCulture },
			{ "SetCurrentLanguage", &UKismetInternationalizationLibrary::execSetCurrentLanguage },
			{ "SetCurrentLanguageAndLocale", &UKismetInternationalizationLibrary::execSetCurrentLanguageAndLocale },
			{ "SetCurrentLocale", &UKismetInternationalizationLibrary::execSetCurrentLocale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms
		{
			FName AssetGroup;
			bool SaveToConfig;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms*)Obj)->SaveToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "SaveToConfig", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup = { UE4CodeGen_Private::EPropertyClass::Name, "AssetGroup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms, AssetGroup), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::NewProp_AssetGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Clear the given asset group category culture.\n@param AssetGroup The asset group to clear the culture for.\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "ClearCurrentAssetGroupCulture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetInternationalizationLibrary_eventClearCurrentAssetGroupCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms
		{
			FName AssetGroup;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup = { UE4CodeGen_Private::EPropertyClass::Name, "AssetGroup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms, AssetGroup), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the given asset group category culture.\n@note Returns the current language if the group category doesn't have a culture override.\n@param AssetGroup The asset group to get the culture for.\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "GetCurrentAssetGroupCulture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetInternationalizationLibrary_eventGetCurrentAssetGroupCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventGetCurrentCulture_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentCulture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the current culture as an IETF language tag:\n - A two-letter ISO 639-1 language code (eg, \"zh\").\n - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n@note This function exists for legacy API parity with SetCurrentCulture and is equivalent to GetCurrentLanguage.\n@return The culture as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "GetCurrentCulture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetInternationalizationLibrary_eventGetCurrentCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics
	{
		struct KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the current language (for localization) as an IETF language tag:\n - A two-letter ISO 639-1 language code (eg, \"zh\").\n - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n@return The language as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "GetCurrentLanguage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetInternationalizationLibrary_eventGetCurrentLanguage_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics
	{
		struct KismetInternationalizationLibrary_eventGetCurrentLocale_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventGetCurrentLocale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Internationalization" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Get the current locale (for internationalization) as an IETF language tag:\n - A two-letter ISO 639-1 language code (eg, \"zh\").\n - An optional four-letter ISO 15924 script code (eg, \"Hans\").\n - An optional two-letter ISO 3166-1 country code (eg, \"CN\").\n@return The locale as an IETF language tag (eg, \"zh-Hans-CN\")." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "GetCurrentLocale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetInternationalizationLibrary_eventGetCurrentLocale_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms
		{
			FName AssetGroup;
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms*)Obj)->SaveToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "SaveToConfig", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture = { UE4CodeGen_Private::EPropertyClass::Str, "Culture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup = { UE4CodeGen_Private::EPropertyClass::Name, "AssetGroup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms, AssetGroup), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_SaveToConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_Culture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::NewProp_AssetGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Utilities|Internationalization" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set the given asset group category culture from an IETF language tag (eg, \"zh-Hans-CN\").\n@param AssetGroup The asset group to set the culture for.\n@param Culture The culture to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the culture was set, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "SetCurrentAssetGroupCulture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetInternationalizationLibrary_eventSetCurrentAssetGroupCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics
	{
		struct KismetInternationalizationLibrary_eventSetCurrentCulture_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentCulture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentCulture_Parms*)Obj)->SaveToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "SaveToConfig", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture = { UE4CodeGen_Private::EPropertyClass::Str, "Culture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_SaveToConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::NewProp_Culture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set the current culture.\n@note This function is a sledgehammer, and will set both the language and locale, as well as clear out any asset group cultures that may be set.\n@param Culture The culture to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the culture was set, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "SetCurrentCulture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetInternationalizationLibrary_eventSetCurrentCulture_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics
	{
		struct KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms*)Obj)->SaveToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "SaveToConfig", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture = { UE4CodeGen_Private::EPropertyClass::Str, "Culture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_SaveToConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::NewProp_Culture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set *only* the current language (for localization).\n@note Unless you're doing something advanced, you likely want SetCurrentLanguageAndLocale or SetCurrentCulture instead.\n@param Culture The language to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the language was set, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "SetCurrentLanguage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguage_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics
	{
		struct KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms*)Obj)->SaveToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "SaveToConfig", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture = { UE4CodeGen_Private::EPropertyClass::Str, "Culture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_SaveToConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::NewProp_Culture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set the current language (for localization) and locale (for internationalization).\n@param Culture The language and locale to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the language and locale were set, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "SetCurrentLanguageAndLocale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetInternationalizationLibrary_eventSetCurrentLanguageAndLocale_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics
	{
		struct KismetInternationalizationLibrary_eventSetCurrentLocale_Parms
		{
			FString Culture;
			bool SaveToConfig;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveToConfig_MetaData[];
#endif
		static void NewProp_SaveToConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SaveToConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Culture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLocale_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_SetBit(void* Obj)
	{
		((KismetInternationalizationLibrary_eventSetCurrentLocale_Parms*)Obj)->SaveToConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "SaveToConfig", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms), &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture = { UE4CodeGen_Private::EPropertyClass::Str, "Culture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms, Culture), METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_SaveToConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::NewProp_Culture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Internationalization" },
		{ "CPP_Default_SaveToConfig", "false" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ToolTip", "Set *only* the current locale (for internationalization).\n@note Unless you're doing something advanced, you likely want SetCurrentLanguageAndLocale or SetCurrentCulture instead.\n@param Culture The locale to set, as an IETF language tag (eg, \"zh-Hans-CN\").\n@param SaveToConfig If true, save the new setting to the users' \"GameUserSettings\" config so that it persists after a reload.\n@return True if the locale was set, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInternationalizationLibrary, "SetCurrentLocale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(KismetInternationalizationLibrary_eventSetCurrentLocale_Parms), Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetInternationalizationLibrary_NoRegister()
	{
		return UKismetInternationalizationLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetInternationalizationLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_ClearCurrentAssetGroupCulture, "ClearCurrentAssetGroupCulture" }, // 3051730628
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentAssetGroupCulture, "GetCurrentAssetGroupCulture" }, // 430003795
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentCulture, "GetCurrentCulture" }, // 3016684030
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLanguage, "GetCurrentLanguage" }, // 4158842378
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_GetCurrentLocale, "GetCurrentLocale" }, // 1478956090
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentAssetGroupCulture, "SetCurrentAssetGroupCulture" }, // 2075756069
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentCulture, "SetCurrentCulture" }, // 3533576933
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguage, "SetCurrentLanguage" }, // 1941043076
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLanguageAndLocale, "SetCurrentLanguageAndLocale" }, // 875313094
		{ &Z_Construct_UFunction_UKismetInternationalizationLibrary_SetCurrentLocale, "SetCurrentLocale" }, // 3408180862
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "Kismet/KismetInternationalizationLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInternationalizationLibrary.h" },
		{ "ScriptName", "InternationalizationLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetInternationalizationLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::ClassParams = {
		&UKismetInternationalizationLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetInternationalizationLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKismetInternationalizationLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetInternationalizationLibrary, 4114123501);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetInternationalizationLibrary(Z_Construct_UClass_UKismetInternationalizationLibrary, &UKismetInternationalizationLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetInternationalizationLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetInternationalizationLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
