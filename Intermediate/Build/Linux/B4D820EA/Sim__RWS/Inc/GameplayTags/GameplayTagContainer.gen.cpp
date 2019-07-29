// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagContainer() {}
// Cross Module References
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType();
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagMatchType();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagReferenceHelper();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQuery_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQuery();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch();
// End Cross Module References
	static UEnum* EGameplayTagQueryExprType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType, Z_Construct_UPackage__Script_GameplayTags(), TEXT("EGameplayTagQueryExprType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayTagQueryExprType(EGameplayTagQueryExprType_StaticEnum, TEXT("/Script/GameplayTags"), TEXT("EGameplayTagQueryExprType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType_CRC() { return 1118529465U; }
	UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayTagQueryExprType"), 0, Get_Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayTagQueryExprType::Undefined", (int64)EGameplayTagQueryExprType::Undefined },
				{ "EGameplayTagQueryExprType::AnyTagsMatch", (int64)EGameplayTagQueryExprType::AnyTagsMatch },
				{ "EGameplayTagQueryExprType::AllTagsMatch", (int64)EGameplayTagQueryExprType::AllTagsMatch },
				{ "EGameplayTagQueryExprType::NoTagsMatch", (int64)EGameplayTagQueryExprType::NoTagsMatch },
				{ "EGameplayTagQueryExprType::AnyExprMatch", (int64)EGameplayTagQueryExprType::AnyExprMatch },
				{ "EGameplayTagQueryExprType::AllExprMatch", (int64)EGameplayTagQueryExprType::AllExprMatch },
				{ "EGameplayTagQueryExprType::NoExprMatch", (int64)EGameplayTagQueryExprType::NoExprMatch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "Enumerates the list of supported query expression types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayTags,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayTagQueryExprType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EGameplayTagQueryExprType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameplayContainerMatchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType, Z_Construct_UPackage__Script_GameplayTags(), TEXT("EGameplayContainerMatchType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayContainerMatchType(EGameplayContainerMatchType_StaticEnum, TEXT("/Script/GameplayTags"), TEXT("EGameplayContainerMatchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType_CRC() { return 3746901693U; }
	UEnum* Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayContainerMatchType"), 0, Get_Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayContainerMatchType::Any", (int64)EGameplayContainerMatchType::Any },
				{ "EGameplayContainerMatchType::All", (int64)EGameplayContainerMatchType::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.ToolTip", "Means the filter is populated by any tag matches in this container." },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayTags,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayContainerMatchType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGameplayContainerMatchType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGameplayTagMatchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagMatchType, Z_Construct_UPackage__Script_GameplayTags(), TEXT("EGameplayTagMatchType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayTagMatchType(EGameplayTagMatchType_StaticEnum, TEXT("/Script/GameplayTags"), TEXT("EGameplayTagMatchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayTags_EGameplayTagMatchType_CRC() { return 1390979567U; }
	UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagMatchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayTagMatchType"), 0, Get_Z_Construct_UEnum_GameplayTags_EGameplayTagMatchType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayTagMatchType::Explicit", (int64)EGameplayTagMatchType::Explicit },
				{ "EGameplayTagMatchType::IncludeParentTags", (int64)EGameplayTagMatchType::IncludeParentTags },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludeParentTags.ToolTip", "This will check for a match against just this tag" },
				{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
				{ "ToolTip", "DEPRECATED ENUMS" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayTags,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayTagMatchType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EGameplayTagMatchType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGameplayTagQuery::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagQuery_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagQuery, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagQuery"), sizeof(FGameplayTagQuery), Get_Z_Construct_UScriptStruct_FGameplayTagQuery_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagQuery(FGameplayTagQuery::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagQuery"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagQuery
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagQuery()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagQuery")),new UScriptStruct::TCppStructOps<FGameplayTagQuery>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagQuery;
	struct Z_Construct_UScriptStruct_FGameplayTagQuery_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AutoDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryTokenStream_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QueryTokenStream;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryTokenStream_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagDictionary_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TagDictionary;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagDictionary_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenStreamVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TokenStreamVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "An FGameplayTagQuery is a logical query that can be run against an FGameplayTagContainer.  A query that succeeds is said to \"match\".\nQueries are logical expressions that can test the intersection properties of another tag container (all, any, or none), or the matching state of a set of sub-expressions\n(all, any, or none). This allows queries to be arbitrarily recursive and very expressive.  For instance, if you wanted to test if a given tag container contained tags\n((A && B) || (C)) && (!D), you would construct your query in the form ALL( ANY( ALL(A,B), ALL(C) ), NONE(D) )\n\nYou can expose the query structs to Blueprints and edit them with a custom editor, or you can construct them natively in code.\n\nExample of how to build a query via code:\n    FGameplayTagQuery Q;\n    Q.BuildQuery(\n            FGameplayTagQueryExpression()\n            .AllTagsMatch()\n            .AddTag(FGameplayTag::RequestGameplayTag(FName(TEXT(\"Animal.Mammal.Dog.Corgi\"))))\n            .AddTag(FGameplayTag::RequestGameplayTag(FName(TEXT(\"Plant.Tree.Spruce\"))))\n            );\n\nQueries are internally represented as a byte stream that is memory-efficient and can be evaluated quickly at runtime.\nNote: these have an extensive details and graph pin customization for editing, so there is no need to expose the internals to Blueprints." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagQuery>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_AutoDescription_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "Auto-generated string describing the query" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_AutoDescription = { UE4CodeGen_Private::EPropertyClass::Str, "AutoDescription", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayTagQuery, AutoDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_AutoDescription_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_AutoDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_UserDescription_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "User-provided string describing the query" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_UserDescription = { UE4CodeGen_Private::EPropertyClass::Str, "UserDescription", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayTagQuery, UserDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_UserDescription_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_UserDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_QueryTokenStream_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "Stream representation of the actual hierarchical query" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_QueryTokenStream = { UE4CodeGen_Private::EPropertyClass::Array, "QueryTokenStream", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayTagQuery, QueryTokenStream), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_QueryTokenStream_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_QueryTokenStream_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_QueryTokenStream_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "QueryTokenStream", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TagDictionary_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "List of tags referenced by this entire query. Token stream stored indices into this list." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TagDictionary = { UE4CodeGen_Private::EPropertyClass::Array, "TagDictionary", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayTagQuery, TagDictionary), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TagDictionary_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TagDictionary_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TagDictionary_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TagDictionary", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TokenStreamVersion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "Versioning for future token stream protocol changes. See EGameplayTagQueryStreamVersion." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TokenStreamVersion = { UE4CodeGen_Private::EPropertyClass::Int, "TokenStreamVersion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FGameplayTagQuery, TokenStreamVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TokenStreamVersion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TokenStreamVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_AutoDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_UserDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_QueryTokenStream,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_QueryTokenStream_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TagDictionary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TagDictionary_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TokenStreamVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagQuery",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FGameplayTagQuery),
		alignof(FGameplayTagQuery),
		Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagQuery_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagQuery"), sizeof(FGameplayTagQuery), Get_Z_Construct_UScriptStruct_FGameplayTagQuery_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagQuery_CRC() { return 2771024075U; }
class UScriptStruct* FGameplayTagCreationWidgetHelper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagCreationWidgetHelper"), sizeof(FGameplayTagCreationWidgetHelper), Get_Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagCreationWidgetHelper(FGameplayTagCreationWidgetHelper::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagCreationWidgetHelper"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCreationWidgetHelper
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCreationWidgetHelper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagCreationWidgetHelper")),new UScriptStruct::TCppStructOps<FGameplayTagCreationWidgetHelper>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagCreationWidgetHelper;
	struct Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "Helper struct: drop this in another struct to get an embedded create new tag widget." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagCreationWidgetHelper>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagCreationWidgetHelper",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FGameplayTagCreationWidgetHelper),
		alignof(FGameplayTagCreationWidgetHelper),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagCreationWidgetHelper"), sizeof(FGameplayTagCreationWidgetHelper), Get_Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_CRC() { return 3528597115U; }
class UScriptStruct* FGameplayTagReferenceHelper::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagReferenceHelper, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagReferenceHelper"), sizeof(FGameplayTagReferenceHelper), Get_Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagReferenceHelper(FGameplayTagReferenceHelper::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagReferenceHelper"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagReferenceHelper
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagReferenceHelper()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagReferenceHelper")),new UScriptStruct::TCppStructOps<FGameplayTagReferenceHelper>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagReferenceHelper;
	struct Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "Helper struct for viewing tag references (assets that reference a tag). Drop this into a struct and set the OnGetgameplayStatName. A details customization\nwill display a tree view of assets referencing the tag" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagReferenceHelper>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagReferenceHelper",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FGameplayTagReferenceHelper),
		alignof(FGameplayTagReferenceHelper),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagReferenceHelper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagReferenceHelper"), sizeof(FGameplayTagReferenceHelper), Get_Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_CRC() { return 1720157861U; }
class UScriptStruct* FGameplayTagContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTagContainer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainer, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagContainer"), sizeof(FGameplayTagContainer), Get_Z_Construct_UScriptStruct_FGameplayTagContainer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTagContainer(FGameplayTagContainer::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTagContainer"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagContainer
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTagContainer")),new UScriptStruct::TCppStructOps<FGameplayTagContainer>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTagContainer;
	struct Z_Construct_UScriptStruct_FGameplayTagContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameplayTags_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer" },
		{ "HasNativeMake", "GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "A Tag Container holds a collection of FGameplayTags, tags are included explicitly by adding them, and implicitly from adding child tags" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_ParentTags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "Array of expanded parent tags, in addition to GameplayTags. Used to accelerate parent searches. May contain duplicates in some cases" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_ParentTags = { UE4CodeGen_Private::EPropertyClass::Array, "ParentTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(FGameplayTagContainer, ParentTags), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_ParentTags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_ParentTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_ParentTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ParentTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "Array of gameplay tags // Change to VisibleAnywhere after fixing up games" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_GameplayTags = { UE4CodeGen_Private::EPropertyClass::Array, "GameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000004, 1, nullptr, STRUCT_OFFSET(FGameplayTagContainer, GameplayTags), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_GameplayTags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_GameplayTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_GameplayTags_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GameplayTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_ParentTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_ParentTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_GameplayTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_GameplayTags_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagContainer",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FGameplayTagContainer),
		alignof(FGameplayTagContainer),
		Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTagContainer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTagContainer"), sizeof(FGameplayTagContainer), Get_Z_Construct_UScriptStruct_FGameplayTagContainer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTagContainer_CRC() { return 295256774U; }
class UScriptStruct* FGameplayTag::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGS_API uint32 Get_Z_Construct_UScriptStruct_FGameplayTag_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTag, Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTag"), sizeof(FGameplayTag), Get_Z_Construct_UScriptStruct_FGameplayTag_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayTag(FGameplayTag::StaticStruct, TEXT("/Script/GameplayTags"), TEXT("GameplayTag"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTag
{
	FScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTag()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayTag")),new UScriptStruct::TCppStructOps<FGameplayTag>);
	}
} ScriptStruct_GameplayTags_StaticRegisterNativesFGameplayTag;
	struct Z_Construct_UScriptStruct_FGameplayTag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TagName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTag_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "GameplayTags.BlueprintGameplayTagLibrary.GetTagName" },
		{ "HasNativeMake", "GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "A single gameplay tag, which represents a hierarchical name of the form x.y that is registered in the GameplayTagsManager" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTag>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTag_Statics::NewProp_TagName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "This Tags Name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTag_Statics::NewProp_TagName = { UE4CodeGen_Private::EPropertyClass::Name, "TagName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001020001, 1, nullptr, STRUCT_OFFSET(FGameplayTag, TagName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTag_Statics::NewProp_TagName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTag_Statics::NewProp_TagName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTag_Statics::NewProp_TagName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTag",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FGameplayTag),
		alignof(FGameplayTag),
		Z_Construct_UScriptStruct_FGameplayTag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTag_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTag_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayTag_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTags();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayTag"), sizeof(FGameplayTag), Get_Z_Construct_UScriptStruct_FGameplayTag_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayTag_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayTag_CRC() { return 1960371148U; }
	void UEditableGameplayTagQuery::StaticRegisterNativesUEditableGameplayTagQuery()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQuery_NoRegister()
	{
		return UEditableGameplayTagQuery::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagQueryExportText_Helper_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagQueryExportText_Helper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootExpression_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootExpression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQuery_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "This is an editor-only representation of a query, designed to be editable with a typical property window.\nTo edit a query in the editor, an FGameplayTagQuery is converted to a set of UObjects and edited,  When finished,\nthe query struct is rewritten and these UObjects are discarded.\nThis query representation is not intended for runtime use." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_TagQueryExportText_Helper_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "Property to hold a gameplay tag query so we can use the exporttext path to get a string representation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_TagQueryExportText_Helper = { UE4CodeGen_Private::EPropertyClass::Struct, "TagQueryExportText_Helper", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQuery, TagQueryExportText_Helper), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_TagQueryExportText_Helper_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_TagQueryExportText_Helper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_RootExpression_MetaData[] = {
		{ "Category", "Query" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "The base expression of this query." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_RootExpression = { UE4CodeGen_Private::EPropertyClass::Object, "RootExpression", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0012000000090009, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQuery, RootExpression), Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_RootExpression_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_RootExpression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_UserDescription_MetaData[] = {
		{ "Category", "Query" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "User-supplied description, shown in property details. Auto-generated description is shown if not supplied." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_UserDescription = { UE4CodeGen_Private::EPropertyClass::Str, "UserDescription", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQuery, UserDescription), METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_UserDescription_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_UserDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableGameplayTagQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_TagQueryExportText_Helper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_RootExpression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_UserDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQuery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQuery_Statics::ClassParams = {
		&UEditableGameplayTagQuery::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009030A8u,
		nullptr, 0,
		Z_Construct_UClass_UEditableGameplayTagQuery_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQuery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditableGameplayTagQuery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableGameplayTagQuery, 3613505196);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQuery(Z_Construct_UClass_UEditableGameplayTagQuery, &UEditableGameplayTagQuery::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQuery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQuery);
	void UEditableGameplayTagQueryExpression::StaticRegisterNativesUEditableGameplayTagQueryExpression()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister()
	{
		return UEditableGameplayTagQueryExpression::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQueryExpression>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics::ClassParams = {
		&UEditableGameplayTagQueryExpression::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001030A9u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableGameplayTagQueryExpression, 1987170077);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression(Z_Construct_UClass_UEditableGameplayTagQueryExpression, &UEditableGameplayTagQueryExpression::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQueryExpression"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression);
	void UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyTagsMatch()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Any Tags Match" },
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Expr" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::NewProp_Tags = { UE4CodeGen_Private::EPropertyClass::Struct, "Tags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_AnyTagsMatch, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::NewProp_Tags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::NewProp_Tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQueryExpression_AnyTagsMatch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::ClassParams = {
		&UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000030A8u,
		nullptr, 0,
		Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableGameplayTagQueryExpression_AnyTagsMatch, 842493926);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch, &UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQueryExpression_AnyTagsMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_AnyTagsMatch);
	void UEditableGameplayTagQueryExpression_AllTagsMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsMatch()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "All Tags Match" },
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Expr" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::NewProp_Tags = { UE4CodeGen_Private::EPropertyClass::Struct, "Tags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_AllTagsMatch, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::NewProp_Tags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::NewProp_Tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQueryExpression_AllTagsMatch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::ClassParams = {
		&UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000030A8u,
		nullptr, 0,
		Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableGameplayTagQueryExpression_AllTagsMatch, 2848680188);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch, &UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQueryExpression_AllTagsMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_AllTagsMatch);
	void UEditableGameplayTagQueryExpression_NoTagsMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_NoTagsMatch()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "No Tags Match" },
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Expr" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::NewProp_Tags = { UE4CodeGen_Private::EPropertyClass::Struct, "Tags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_NoTagsMatch, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::NewProp_Tags_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::NewProp_Tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQueryExpression_NoTagsMatch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::ClassParams = {
		&UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000030A8u,
		nullptr, 0,
		Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableGameplayTagQueryExpression_NoTagsMatch, 763352843);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch, &UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQueryExpression_NoTagsMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_NoTagsMatch);
	void UEditableGameplayTagQueryExpression_AnyExprMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyExprMatch()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Expressions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expressions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expressions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Any Expressions Match" },
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_MetaData[] = {
		{ "Category", "Expr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions = { UE4CodeGen_Private::EPropertyClass::Array, "Expressions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000009, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_AnyExprMatch, Expressions), METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_Inner_MetaData[] = {
		{ "Category", "Expr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Expressions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQueryExpression_AnyExprMatch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::ClassParams = {
		&UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008030A8u,
		nullptr, 0,
		Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableGameplayTagQueryExpression_AnyExprMatch, 700467975);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch, &UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQueryExpression_AnyExprMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_AnyExprMatch);
	void UEditableGameplayTagQueryExpression_AllExprMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_AllExprMatch()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Expressions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expressions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expressions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "All Expressions Match" },
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_MetaData[] = {
		{ "Category", "Expr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions = { UE4CodeGen_Private::EPropertyClass::Array, "Expressions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000009, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_AllExprMatch, Expressions), METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_Inner_MetaData[] = {
		{ "Category", "Expr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Expressions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQueryExpression_AllExprMatch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::ClassParams = {
		&UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008030A8u,
		nullptr, 0,
		Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableGameplayTagQueryExpression_AllExprMatch, 579519541);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_AllExprMatch(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch, &UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQueryExpression_AllExprMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_AllExprMatch);
	void UEditableGameplayTagQueryExpression_NoExprMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_NoExprMatch()
	{
	}
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Expressions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expressions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expressions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "No Expressions Match" },
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_MetaData[] = {
		{ "Category", "Expr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions = { UE4CodeGen_Private::EPropertyClass::Array, "Expressions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000009, 1, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_NoExprMatch, Expressions), METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_Inner_MetaData[] = {
		{ "Category", "Expr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Expressions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQueryExpression_NoExprMatch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::ClassParams = {
		&UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008030A8u,
		nullptr, 0,
		Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableGameplayTagQueryExpression_NoExprMatch, 2616942428);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableGameplayTagQueryExpression_NoExprMatch(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch, &UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass, TEXT("/Script/GameplayTags"), TEXT("UEditableGameplayTagQueryExpression_NoExprMatch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_NoExprMatch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
