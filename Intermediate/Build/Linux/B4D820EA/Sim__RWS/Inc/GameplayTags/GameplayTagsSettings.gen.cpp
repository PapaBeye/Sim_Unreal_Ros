// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTags/Classes/GameplayTagsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagsSettings() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FRestrictedConfigInfo();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagCategoryRemap();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRedirect();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsList_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsList();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagTableRow();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_URestrictedGameplayTagsList();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsSettings_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings();
// End Cross Module References
class UScriptStruct* FRestrictedConfigInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FRestrictedConfigInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRestrictedConfigInfo, Z_Construct_UPackage__Script_GameplayTags(), TEXT("RestrictedConfigInfo"), sizeof(FRestrictedConfigInfo), Get_Z_Construct_UScriptStruct_FRestrictedConfigInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRestrictedConfigInfo(FRestrictedConfigInfo::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("RestrictedConfigInfo"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFRestrictedConfigInfo
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFRestrictedConfigInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RestrictedConfigInfo")),new UScriptStruct::TCppStructOps<FRestrictedConfigInfo>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFRestrictedConfigInfo;
	struct Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Owners;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Owners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestrictedConfigName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RestrictedConfigName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRestrictedConfigInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners = { UE4CodeGen_Private::EPropertyClass::Array, "Owners", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(FRestrictedConfigInfo, Owners), METADATA_PARAMS(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Owners", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_RestrictedConfigName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Allows new tags to be saved into their own INI file. This is make merging easier for non technical developers by setting up their own ini file." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_RestrictedConfigName = { UE4CodeGen_Private::EPropertyClass::Str, "RestrictedConfigName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(FRestrictedConfigInfo, RestrictedConfigName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_RestrictedConfigName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_RestrictedConfigName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_Owners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::NewProp_RestrictedConfigName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"RestrictedConfigInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FRestrictedConfigInfo),
		alignof(FRestrictedConfigInfo),
		Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRestrictedConfigInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRestrictedConfigInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RestrictedConfigInfo"), sizeof(FRestrictedConfigInfo), Get_Z_Construct_UScriptStruct_FRestrictedConfigInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRestrictedConfigInfo_CRC() { return 837774549U; }
class UScriptStruct* FGameplayTagCategoryRemap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagCategoryRemap"), sizeof(FGameplayTagCategoryRemap), Get_Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagCategoryRemap(FGameplayTagCategoryRemap::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagCategoryRemap"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCategoryRemap
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCategoryRemap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagCategoryRemap")),new UScriptStruct::TCppStructOps<FGameplayTagCategoryRemap>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCategoryRemap;
	struct Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemapCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemapCategories;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemapCategories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BaseCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Category remapping. This allows base engine tag category meta data to remap to multiple project-specific categories." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagCategoryRemap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories = { UE4CodeGen_Private::EPropertyClass::Array, "RemapCategories", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameplayTagCategoryRemap, RemapCategories), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "RemapCategories", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_BaseCategory_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_BaseCategory = { UE4CodeGen_Private::EPropertyClass::Str, "BaseCategory", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameplayTagCategoryRemap, BaseCategory), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_BaseCategory_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_BaseCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_RemapCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::NewProp_BaseCategory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagCategoryRemap",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FGameplayTagCategoryRemap),
		alignof(FGameplayTagCategoryRemap),
		Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagCategoryRemap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagCategoryRemap"), sizeof(FGameplayTagCategoryRemap), Get_Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_CRC() { return 3148637824U; }
class UScriptStruct* FGameplayTagRedirect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagRedirect, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagRedirect"), sizeof(FGameplayTagRedirect), Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagRedirect(FGameplayTagRedirect::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagRedirect"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagRedirect
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagRedirect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagRedirect")),new UScriptStruct::TCppStructOps<FGameplayTagRedirect>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagRedirect;
	struct Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewTagName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldTagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldTagName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "A single redirect from a deleted tag to the new tag that should replace it" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagRedirect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName = { UE4CodeGen_Private::EPropertyClass::Name, "NewTagName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameplayTagRedirect, NewTagName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName = { UE4CodeGen_Private::EPropertyClass::Name, "OldTagName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameplayTagRedirect, OldTagName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagRedirect",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FGameplayTagRedirect),
		alignof(FGameplayTagRedirect),
		Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRedirect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagRedirect"), sizeof(FGameplayTagRedirect), Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagRedirect_CRC() { return 2578219145U; }
	void UGameplayTagsList::StaticRegisterNativesUGameplayTagsList()
	{
	}
	UClass* Z_Construct_UClass_UGameplayTagsList_NoRegister()
	{
		return UGameplayTagsList::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTagsList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayTagList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTagsList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTagsSettings.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Base class for storing a list of gameplay tags as an ini list. This is used for both the central list and additional lists" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "List of tags saved to this file" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList = { UE4CodeGen_Private::EPropertyClass::Array, "GameplayTagList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsList, GameplayTagList), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTagList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTagTableRow, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_ConfigFileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Relative path to the ini file that is backing this list" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_ConfigFileName = { UE4CodeGen_Private::EPropertyClass::Str, "ConfigFileName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UGameplayTagsList, ConfigFileName), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_ConfigFileName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_ConfigFileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_GameplayTagList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsList_Statics::NewProp_ConfigFileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTagsList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsList_Statics::ClassParams = {
		&UGameplayTagsList::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001002A4u,
		nullptr, 0,
		Z_Construct_UClass_UGameplayTagsList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsList_Statics::PropPointers),
		"GameplayTagsList",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsList_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTagsList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayTagsList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTagsList, 1865190646);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTagsList(Z_Construct_UClass_UGameplayTagsList, &UGameplayTagsList::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UGameplayTagsList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsList);
	void URestrictedGameplayTagsList::StaticRegisterNativesURestrictedGameplayTagsList()
	{
	}
	UClass* Z_Construct_UClass_URestrictedGameplayTagsList_NoRegister()
	{
		return URestrictedGameplayTagsList::StaticClass();
	}
	struct Z_Construct_UClass_URestrictedGameplayTagsList_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestrictedGameplayTagList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RestrictedGameplayTagList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RestrictedGameplayTagList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigFileName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URestrictedGameplayTagsList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestrictedGameplayTagsList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTagsSettings.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Base class for storing a list of restricted gameplay tags as an ini list. This is used for both the central list and additional lists" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "List of restricted tags saved to this file" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList = { UE4CodeGen_Private::EPropertyClass::Array, "RestrictedGameplayTagList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URestrictedGameplayTagsList, RestrictedGameplayTagList), METADATA_PARAMS(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList_MetaData, ARRAY_COUNT(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RestrictedGameplayTagList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_ConfigFileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Relative path to the ini file that is backing this list" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_ConfigFileName = { UE4CodeGen_Private::EPropertyClass::Str, "ConfigFileName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(URestrictedGameplayTagsList, ConfigFileName), METADATA_PARAMS(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_ConfigFileName_MetaData, ARRAY_COUNT(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_ConfigFileName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URestrictedGameplayTagsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_RestrictedGameplayTagList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestrictedGameplayTagsList_Statics::NewProp_ConfigFileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URestrictedGameplayTagsList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URestrictedGameplayTagsList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URestrictedGameplayTagsList_Statics::ClassParams = {
		&URestrictedGameplayTagsList::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001002A4u,
		nullptr, 0,
		Z_Construct_UClass_URestrictedGameplayTagsList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::PropPointers),
		"GameplayTags",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URestrictedGameplayTagsList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URestrictedGameplayTagsList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URestrictedGameplayTagsList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URestrictedGameplayTagsList, 3460507260);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URestrictedGameplayTagsList(Z_Construct_UClass_URestrictedGameplayTagsList, &URestrictedGameplayTagsList::StaticClass, TEXT("/Script/GameplayTags"), TEXT("URestrictedGameplayTagsList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URestrictedGameplayTagsList);
	void UGameplayTagsSettings::StaticRegisterNativesUGameplayTagsSettings()
	{
	}
	UClass* Z_Construct_UClass_UGameplayTagsSettings_NoRegister()
	{
		return UGameplayTagsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTagsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestrictedTagList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RestrictedTagList;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestrictedConfigFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RestrictedConfigFiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RestrictedConfigFiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetIndexFirstBitSegment_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NetIndexFirstBitSegment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumBitsForContainerSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumBitsForContainerSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonlyReplicatedTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CommonlyReplicatedTags;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CommonlyReplicatedTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagRedirects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayTagRedirects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagRedirects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTagTableList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayTagTableList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTagTableList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastReplication_MetaData[];
#endif
		static void NewProp_FastReplication_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FastReplication;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryRemapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CategoryRemapping;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryRemapping_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarnOnInvalidTags_MetaData[];
#endif
		static void NewProp_WarnOnInvalidTags_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WarnOnInvalidTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportTagsFromConfig_MetaData[];
#endif
		static void NewProp_ImportTagsFromConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ImportTagsFromConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTagsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTagsList,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTagsSettings.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Class for importing GameplayTags directly from a config file.\nFGameplayTagsEditorModule::StartupModule adds this class to the Project Settings menu to be edited.\nEditing this in Project Settings will output changes to Config/DefaultGameplayTags.ini.\n\nPrimary advantages of this approach are:\n-Adding new tags doesn't require checking out external and editing file (CSV or xls) then reimporting.\n-New tags are mergeable since .ini are text and non exclusive checkout.\n\nTo do:\n-Better support could be added for adding new tags. We could match existing tags and autocomplete subtags as\nthe user types (e.g, autocomplete 'Damage.Physical' as the user is adding a 'Damage.Physical.Slash' tag)." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedTagList_MetaData[] = {
		{ "Category", "Advanced Gameplay Tags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Dummy parameter used to hook the editor UI" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedTagList = { UE4CodeGen_Private::EPropertyClass::Str, "RestrictedTagList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040800002001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, RestrictedTagList), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedTagList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedTagList_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles_MetaData[] = {
		{ "Category", "Advanced Gameplay Tags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Allows new tags to be saved into their own INI file." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles = { UE4CodeGen_Private::EPropertyClass::Array, "RestrictedConfigFiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, RestrictedConfigFiles), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "RestrictedConfigFiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRestrictedConfigInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NetIndexFirstBitSegment_MetaData[] = {
		{ "Category", "Advanced Replication" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "The length in bits of the first segment when net serializing tags. We will serialize NetIndexFirstBitSegment + 1 bit to indicate \"more\", which is slower to replicate" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NetIndexFirstBitSegment = { UE4CodeGen_Private::EPropertyClass::Int, "NetIndexFirstBitSegment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, NetIndexFirstBitSegment), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NetIndexFirstBitSegment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NetIndexFirstBitSegment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NumBitsForContainerSize_MetaData[] = {
		{ "Category", "Advanced Replication" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Numbers of bits to use for replicating container size, set this based on how large your containers tend to be" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NumBitsForContainerSize = { UE4CodeGen_Private::EPropertyClass::Int, "NumBitsForContainerSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, NumBitsForContainerSize), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NumBitsForContainerSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NumBitsForContainerSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags_MetaData[] = {
		{ "Category", "Advanced Replication" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "List of tags most frequently replicated" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags = { UE4CodeGen_Private::EPropertyClass::Array, "CommonlyReplicatedTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, CommonlyReplicatedTags), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "CommonlyReplicatedTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "List of active tag redirects" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects = { UE4CodeGen_Private::EPropertyClass::Array, "GameplayTagRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, GameplayTagRedirects), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTagRedirects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTagRedirect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList_MetaData[] = {
		{ "AllowedClasses", "DataTable" },
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "List of data tables to load tags from" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList = { UE4CodeGen_Private::EPropertyClass::Array, "GameplayTagTableList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, GameplayTagTableList), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTagTableList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication_MetaData[] = {
		{ "Category", "Advanced Replication" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "If true, will replicate gameplay tags by index instead of name. For this to work, tags must be identical on client and server" },
	};
#endif
	void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication_SetBit(void* Obj)
	{
		((UGameplayTagsSettings*)Obj)->FastReplication = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication = { UE4CodeGen_Private::EPropertyClass::Bool, "FastReplication", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping = { UE4CodeGen_Private::EPropertyClass::Array, "CategoryRemapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsSettings, CategoryRemapping), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CategoryRemapping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTagCategoryRemap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "If true, will give load warnings when reading invalid tags off disk" },
	};
#endif
	void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags_SetBit(void* Obj)
	{
		((UGameplayTagsSettings*)Obj)->WarnOnInvalidTags = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags = { UE4CodeGen_Private::EPropertyClass::Bool, "WarnOnInvalidTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "If true, will import tags from ini files in the config/tags folder" },
	};
#endif
	void Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig_SetBit(void* Obj)
	{
		((UGameplayTagsSettings*)Obj)->ImportTagsFromConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig = { UE4CodeGen_Private::EPropertyClass::Bool, "ImportTagsFromConfig", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGameplayTagsSettings), &Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedTagList,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_RestrictedConfigFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NetIndexFirstBitSegment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_NumBitsForContainerSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CommonlyReplicatedTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagRedirects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_GameplayTagTableList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_FastReplication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_CategoryRemapping_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_WarnOnInvalidTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsSettings_Statics::NewProp_ImportTagsFromConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTagsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsSettings_Statics::ClassParams = {
		&UGameplayTagsSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001002A6u,
		nullptr, 0,
		Z_Construct_UClass_UGameplayTagsSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::PropPointers),
		"GameplayTags",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTagsSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayTagsSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTagsSettings, 51067046);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTagsSettings(Z_Construct_UClass_UGameplayTagsSettings, &UGameplayTagsSettings::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UGameplayTagsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsSettings);
	void UGameplayTagsDeveloperSettings::StaticRegisterNativesUGameplayTagsDeveloperSettings()
	{
	}
	UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings_NoRegister()
	{
		return UGameplayTagsDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeveloperConfigName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeveloperConfigName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTagsSettings.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_DeveloperConfigName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagsSettings.h" },
		{ "ToolTip", "Allows new tags to be saved into their own INI file. This is make merging easier for non technical developers by setting up their own ini file." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_DeveloperConfigName = { UE4CodeGen_Private::EPropertyClass::Str, "DeveloperConfigName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayTagsDeveloperSettings, DeveloperConfigName), METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_DeveloperConfigName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_DeveloperConfigName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::NewProp_DeveloperConfigName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTagsDeveloperSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::ClassParams = {
		&UGameplayTagsDeveloperSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001002A4u,
		nullptr, 0,
		Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::PropPointers),
		"GameplayTags",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTagsDeveloperSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTagsDeveloperSettings, 1053784659);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTagsDeveloperSettings(Z_Construct_UClass_UGameplayTagsDeveloperSettings, &UGameplayTagsDeveloperSettings::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UGameplayTagsDeveloperSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTagsDeveloperSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
