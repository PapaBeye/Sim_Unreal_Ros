// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Framework/Views/ITypedTableView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeITypedTableView() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETableViewMode();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ESelectionMode();
// End Cross Module References
	static UEnum* ETableViewMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_ETableViewMode, Z_Construct_UPackage__Script_Slate(), TEXT("ETableViewMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETableViewMode(ETableViewMode_StaticEnum, TEXT("/Script/Slate"), TEXT("ETableViewMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_ETableViewMode_CRC() { return 1046172216U; }
	UEnum* Z_Construct_UEnum_Slate_ETableViewMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETableViewMode"), 0, Get_Z_Construct_UEnum_Slate_ETableViewMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETableViewMode::List", (int64)ETableViewMode::List },
				{ "ETableViewMode::Tile", (int64)ETableViewMode::Tile },
				{ "ETableViewMode::Tree", (int64)ETableViewMode::Tree },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Framework/Views/ITypedTableView.h" },
				{ "ToolTip", "Lists can exist as regular lists or as backing widgets for a tree." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETableViewMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETableViewMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESelectionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_ESelectionMode, Z_Construct_UPackage__Script_Slate(), TEXT("ESelectionMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESelectionMode(ESelectionMode_StaticEnum, TEXT("/Script/Slate"), TEXT("ESelectionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_ESelectionMode_CRC() { return 2481010133U; }
	UEnum* Z_Construct_UEnum_Slate_ESelectionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESelectionMode"), 0, Get_Z_Construct_UEnum_Slate_ESelectionMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESelectionMode::None", (int64)ESelectionMode::None },
				{ "ESelectionMode::Single", (int64)ESelectionMode::Single },
				{ "ESelectionMode::SingleToggle", (int64)ESelectionMode::SingleToggle },
				{ "ESelectionMode::Multi", (int64)ESelectionMode::Multi },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Framework/Views/ITypedTableView.h" },
				{ "Multi.ToolTip", "Multiple items can be selected at the same time." },
				{ "None.ToolTip", "Nothing can be selected and there is no hover cue for selection.  You can still handle mouse button events though." },
				{ "Single.ToolTip", "A single item can be selected at once, or no item may be selected." },
				{ "SingleToggle.ToolTip", "A single item can be selected at once, or no item may be selected.  You can click the item to toggle selection on and off." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESelectionMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESelectionMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
