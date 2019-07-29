// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/AssetManagerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetManagerSettings() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetManagerRedirect();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManagerSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManagerSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo();
// End Cross Module References
class UScriptStruct* FPrimaryAssetRulesOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride, Z_Construct_UPackage__Script_Engine(), TEXT("PrimaryAssetRulesOverride"), sizeof(FPrimaryAssetRulesOverride), Get_Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPrimaryAssetRulesOverride(FPrimaryAssetRulesOverride::StaticStruct, TEXT("/Script/Engine"), TEXT("PrimaryAssetRulesOverride"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetRulesOverride
{
	FScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetRulesOverride()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PrimaryAssetRulesOverride")),new UScriptStruct::TCppStructOps<FPrimaryAssetRulesOverride>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPrimaryAssetRulesOverride;
	struct Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rules;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Simple structure to allow overriding asset rules for a specific primary asset. This can be used to set chunks" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrimaryAssetRulesOverride>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "AssetRedirect" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "What to overrides the rules with" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_Rules = { UE4CodeGen_Private::EPropertyClass::Struct, "Rules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPrimaryAssetRulesOverride, Rules), Z_Construct_UScriptStruct_FPrimaryAssetRules, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_Rules_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_Rules_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_PrimaryAssetId_MetaData[] = {
		{ "Category", "AssetRedirect" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Which primary asset to override the rules for" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_PrimaryAssetId = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryAssetId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPrimaryAssetRulesOverride, PrimaryAssetId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_PrimaryAssetId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_PrimaryAssetId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_Rules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::NewProp_PrimaryAssetId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PrimaryAssetRulesOverride",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPrimaryAssetRulesOverride),
		alignof(FPrimaryAssetRulesOverride),
		Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PrimaryAssetRulesOverride"), sizeof(FPrimaryAssetRulesOverride), Get_Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride_CRC() { return 104080044U; }
class UScriptStruct* FAssetManagerRedirect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAssetManagerRedirect_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetManagerRedirect, Z_Construct_UPackage__Script_Engine(), TEXT("AssetManagerRedirect"), sizeof(FAssetManagerRedirect), Get_Z_Construct_UScriptStruct_FAssetManagerRedirect_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetManagerRedirect(FAssetManagerRedirect::StaticStruct, TEXT("/Script/Engine"), TEXT("AssetManagerRedirect"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAssetManagerRedirect
{
	FScriptStruct_Engine_StaticRegisterNativesFAssetManagerRedirect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetManagerRedirect")),new UScriptStruct::TCppStructOps<FAssetManagerRedirect>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAssetManagerRedirect;
	struct Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_New_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_New;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Old_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Old;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Simple structure for redirecting an old asset name/path to a new one" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetManagerRedirect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_New_MetaData[] = {
		{ "Category", "AssetRedirect" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_New = { UE4CodeGen_Private::EPropertyClass::Str, "New", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAssetManagerRedirect, New), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_New_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_New_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_Old_MetaData[] = {
		{ "Category", "AssetRedirect" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_Old = { UE4CodeGen_Private::EPropertyClass::Str, "Old", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAssetManagerRedirect, Old), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_Old_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_Old_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_New,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::NewProp_Old,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AssetManagerRedirect",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAssetManagerRedirect),
		alignof(FAssetManagerRedirect),
		Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetManagerRedirect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetManagerRedirect_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetManagerRedirect"), sizeof(FAssetManagerRedirect), Get_Z_Construct_UScriptStruct_FAssetManagerRedirect_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetManagerRedirect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetManagerRedirect_CRC() { return 4100387153U; }
	void UAssetManagerSettings::StaticRegisterNativesUAssetManagerSettings()
	{
	}
	UClass* Z_Construct_UClass_UAssetManagerSettings_NoRegister()
	{
		return UAssetManagerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAssetManagerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataTagsForAssetRegistry_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_MetaDataTagsForAssetRegistry;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MetaDataTagsForAssetRegistry_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPathRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetPathRedirects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetPathRedirects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetTypeRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetTypeRedirects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetTypeRedirects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetIdRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetIdRedirects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetIdRedirects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldAcquireMissingChunksOnLoad_MetaData[];
#endif
		static void NewProp_bShouldAcquireMissingChunksOnLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAcquireMissingChunksOnLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldGuessTypeAndNameInEditor_MetaData[];
#endif
		static void NewProp_bShouldGuessTypeAndNameInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldGuessTypeAndNameInEditor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldManagerDetermineTypeAndName_MetaData[];
#endif
		static void NewProp_bShouldManagerDetermineTypeAndName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldManagerDetermineTypeAndName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyCookProductionAssets_MetaData[];
#endif
		static void NewProp_bOnlyCookProductionAssets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyCookProductionAssets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetRules;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetRules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoriesToExclude_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DirectoriesToExclude;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectoriesToExclude_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetTypesToScan_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetTypesToScan;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetTypesToScan_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetManagerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Asset Manager" },
		{ "IncludePath", "Engine/AssetManagerSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Settings for the Asset Management framework, which can be used to discover, load, and audit game-specific asset types" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_MetaData[] = {
		{ "Category", "Asset Registry" },
		{ "DisplayName", "Metadata Tags For Asset Registry" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "The metadata tags to be transferred to the Asset Registry." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry = { UE4CodeGen_Private::EPropertyClass::Set, "MetaDataTagsForAssetRegistry", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UAssetManagerSettings, MetaDataTagsForAssetRegistry), METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_ElementProp = { UE4CodeGen_Private::EPropertyClass::Name, "MetaDataTagsForAssetRegistry", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects_MetaData[] = {
		{ "Category", "Redirects" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Redirect from /game/assetpath to /game/assetpathnew" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects = { UE4CodeGen_Private::EPropertyClass::Array, "AssetPathRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAssetManagerSettings, AssetPathRedirects), METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AssetPathRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAssetManagerRedirect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects_MetaData[] = {
		{ "Category", "Redirects" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Redirect from Type to TypeNew" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects = { UE4CodeGen_Private::EPropertyClass::Array, "PrimaryAssetTypeRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAssetManagerSettings, PrimaryAssetTypeRedirects), METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryAssetTypeRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAssetManagerRedirect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects_MetaData[] = {
		{ "Category", "Redirects" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "Redirect from Type:Name to Type:NameNew" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects = { UE4CodeGen_Private::EPropertyClass::Array, "PrimaryAssetIdRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAssetManagerSettings, PrimaryAssetIdRedirects), METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryAssetIdRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAssetManagerRedirect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "If true, this will query the platform chunk install interface to request missing chunks for any requested primary asset loads" },
	};
#endif
	void Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_SetBit(void* Obj)
	{
		((UAssetManagerSettings*)Obj)->bShouldAcquireMissingChunksOnLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldAcquireMissingChunksOnLoad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetManagerSettings), &Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "If true, PrimaryAsset Type/Name will be implied for assets in the editor even if bShouldManagerDetermineTypeAndName is false.\nThis guesses the correct id for content that hasn't been resaved after GetPrimaryAssetId was implemented" },
	};
#endif
	void Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor_SetBit(void* Obj)
	{
		((UAssetManagerSettings*)Obj)->bShouldGuessTypeAndNameInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldGuessTypeAndNameInEditor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetManagerSettings), &Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "If true, the asset manager will determine the type and name for Primary Assets that do not implement GetPrimaryAssetId, by calling DeterminePrimaryAssetIdForObject and using the ini settings.\nThis works in both cooked and uncooked builds but is slower than directly implementing GetPrimaryAssetId on the native asset" },
	};
#endif
	void Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName_SetBit(void* Obj)
	{
		((UAssetManagerSettings*)Obj)->bShouldManagerDetermineTypeAndName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldManagerDetermineTypeAndName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetManagerSettings), &Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "If true, DevelopmentCook assets will error when they are cooked, you should enable this on production branches" },
	};
#endif
	void Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets_SetBit(void* Obj)
	{
		((UAssetManagerSettings*)Obj)->bOnlyCookProductionAssets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlyCookProductionAssets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAssetManagerSettings), &Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "List of specific asset rule overrides" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules = { UE4CodeGen_Private::EPropertyClass::Array, "PrimaryAssetRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAssetManagerSettings, PrimaryAssetRules), METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryAssetRules", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPrimaryAssetRulesOverride, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "List of directories to exclude from scanning for Primary Assets, useful to exclude test assets" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude = { UE4CodeGen_Private::EPropertyClass::Array, "DirectoriesToExclude", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAssetManagerSettings, DirectoriesToExclude), METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "DirectoriesToExclude", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan_MetaData[] = {
		{ "Category", "Asset Manager" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManagerSettings.h" },
		{ "ToolTip", "List of asset types to scan at startup" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan = { UE4CodeGen_Private::EPropertyClass::Array, "PrimaryAssetTypesToScan", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UAssetManagerSettings, PrimaryAssetTypesToScan), METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryAssetTypesToScan", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetManagerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_AssetPathRedirects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypeRedirects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetIdRedirects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldAcquireMissingChunksOnLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldGuessTypeAndNameInEditor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bShouldManagerDetermineTypeAndName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_bOnlyCookProductionAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetRules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_DirectoriesToExclude_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManagerSettings_Statics::NewProp_PrimaryAssetTypesToScan_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetManagerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetManagerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAssetManagerSettings_Statics::ClassParams = {
		&UAssetManagerSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001002A6u,
		nullptr, 0,
		Z_Construct_UClass_UAssetManagerSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAssetManagerSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAssetManagerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetManagerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAssetManagerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAssetManagerSettings, 2589511896);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAssetManagerSettings(Z_Construct_UClass_UAssetManagerSettings, &UAssetManagerSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UAssetManagerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetManagerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
