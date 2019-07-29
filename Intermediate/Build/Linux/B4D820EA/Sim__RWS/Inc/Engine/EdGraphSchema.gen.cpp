// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/EdGraph/EdGraphSchema.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECanCreateConnectionResponse();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGraphType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ECanCreateConnectionResponse_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECanCreateConnectionResponse, Z_Construct_UPackage__Script_Engine(), TEXT("ECanCreateConnectionResponse"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECanCreateConnectionResponse(ECanCreateConnectionResponse_StaticEnum, TEXT("/Script/Engine"), TEXT("ECanCreateConnectionResponse"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECanCreateConnectionResponse_CRC() { return 456621762U; }
	UEnum* Z_Construct_UEnum_Engine_ECanCreateConnectionResponse()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECanCreateConnectionResponse"), 0, Get_Z_Construct_UEnum_Engine_ECanCreateConnectionResponse_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CONNECT_RESPONSE_MAKE", (int64)CONNECT_RESPONSE_MAKE },
				{ "CONNECT_RESPONSE_DISALLOW", (int64)CONNECT_RESPONSE_DISALLOW },
				{ "CONNECT_RESPONSE_BREAK_OTHERS_A", (int64)CONNECT_RESPONSE_BREAK_OTHERS_A },
				{ "CONNECT_RESPONSE_BREAK_OTHERS_B", (int64)CONNECT_RESPONSE_BREAK_OTHERS_B },
				{ "CONNECT_RESPONSE_BREAK_OTHERS_AB", (int64)CONNECT_RESPONSE_BREAK_OTHERS_AB },
				{ "CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE", (int64)CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE },
				{ "CONNECT_RESPONSE_MAX", (int64)CONNECT_RESPONSE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CONNECT_RESPONSE_BREAK_OTHERS_A.ToolTip", "Break all existing connections on A and make the new connection (it's exclusive); display the message string as a warning/notice." },
				{ "CONNECT_RESPONSE_BREAK_OTHERS_AB.ToolTip", "Break all existing connections on A and B, and make the new connection (it's exclusive); display the message string as a warning/notice." },
				{ "CONNECT_RESPONSE_BREAK_OTHERS_B.ToolTip", "Break all existing connections on B and make the new connection (it's exclusive); display the message string as a warning/notice." },
				{ "CONNECT_RESPONSE_DISALLOW.ToolTip", "Cannot make this connection; display the message string as an error." },
				{ "CONNECT_RESPONSE_MAKE.ToolTip", "Make the connection; there are no issues (message string is displayed if not empty)." },
				{ "CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE.ToolTip", "Make the connection via an intermediate cast node, or some other conversion node." },
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
				{ "ToolTip", "This is the type of response the graph editor should take when making a connection" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECanCreateConnectionResponse",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ECanCreateConnectionResponse",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGraphType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGraphType, Z_Construct_UPackage__Script_Engine(), TEXT("EGraphType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGraphType(EGraphType_StaticEnum, TEXT("/Script/Engine"), TEXT("EGraphType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EGraphType_CRC() { return 1804290655U; }
	UEnum* Z_Construct_UEnum_Engine_EGraphType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGraphType"), 0, Get_Z_Construct_UEnum_Engine_EGraphType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "GT_Function", (int64)GT_Function },
				{ "GT_Ubergraph", (int64)GT_Ubergraph },
				{ "GT_Macro", (int64)GT_Macro },
				{ "GT_Animation", (int64)GT_Animation },
				{ "GT_StateMachine", (int64)GT_StateMachine },
				{ "GT_MAX", (int64)GT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
				{ "ToolTip", "Distinguishes between different graph types. Graphs can have different properties; for example: functions have one entry point, ubergraphs can have multiples." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGraphType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EGraphType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEdGraphSchemaAction_NewNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode, Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphSchemaAction_NewNode"), sizeof(FEdGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction_NewNode(FEdGraphSchemaAction_NewNode::StaticStruct, TEXT("/Script/Engine"), TEXT("EdGraphSchemaAction_NewNode"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEdGraphSchemaAction_NewNode
{
	FScriptStruct_Engine_StaticRegisterNativesFEdGraphSchemaAction_NewNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction_NewNode")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_NewNode>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEdGraphSchemaAction_NewNode;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "Template of node we want to create" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::NewProp_NodeTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "NodeTemplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction_NewNode, NodeTemplate), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::NewProp_NodeTemplate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"EdGraphSchemaAction_NewNode",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FEdGraphSchemaAction_NewNode),
		alignof(FEdGraphSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction_NewNode"), sizeof(FEdGraphSchemaAction_NewNode), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_NewNode_CRC() { return 23757582U; }
class UScriptStruct* FEdGraphSchemaAction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphSchemaAction, Z_Construct_UPackage__Script_Engine(), TEXT("EdGraphSchemaAction"), sizeof(FEdGraphSchemaAction), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEdGraphSchemaAction(FEdGraphSchemaAction::StaticStruct, TEXT("/Script/Engine"), TEXT("EdGraphSchemaAction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEdGraphSchemaAction
{
	FScriptStruct_Engine_StaticRegisterNativesFEdGraphSchemaAction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EdGraphSchemaAction")),new UScriptStruct::TCppStructOps<FEdGraphSchemaAction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEdGraphSchemaAction;
	struct Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SearchText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedFullSearchCategoryArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedFullSearchCategoryArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedFullSearchCategoryArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedFullSearchKeywordsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedFullSearchKeywordsArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedFullSearchKeywordsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedFullSearchTitlesArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedFullSearchTitlesArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedFullSearchTitlesArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedMenuDescriptionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedMenuDescriptionArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedMenuDescriptionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullSearchCategoryArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FullSearchCategoryArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullSearchCategoryArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullSearchKeywordsArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FullSearchKeywordsArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullSearchKeywordsArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullSearchTitlesArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FullSearchTitlesArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FullSearchTitlesArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuDescriptionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MenuDescriptionArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MenuDescriptionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grouping_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Grouping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Keywords;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TooltipDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MenuDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "This structure represents a context dependent action, with sufficient information for the schema to perform it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdGraphSchemaAction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SearchText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SearchText = { UE4CodeGen_Private::EPropertyClass::Str, "SearchText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, SearchText), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SearchText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SearchText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchCategoryArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchCategoryArray = { UE4CodeGen_Private::EPropertyClass::Array, "LocalizedFullSearchCategoryArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, LocalizedFullSearchCategoryArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchCategoryArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchCategoryArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchCategoryArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "LocalizedFullSearchCategoryArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchKeywordsArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchKeywordsArray = { UE4CodeGen_Private::EPropertyClass::Array, "LocalizedFullSearchKeywordsArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, LocalizedFullSearchKeywordsArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchKeywordsArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchKeywordsArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchKeywordsArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "LocalizedFullSearchKeywordsArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchTitlesArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchTitlesArray = { UE4CodeGen_Private::EPropertyClass::Array, "LocalizedFullSearchTitlesArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, LocalizedFullSearchTitlesArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchTitlesArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchTitlesArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchTitlesArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "LocalizedFullSearchTitlesArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedMenuDescriptionArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedMenuDescriptionArray = { UE4CodeGen_Private::EPropertyClass::Array, "LocalizedMenuDescriptionArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, LocalizedMenuDescriptionArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedMenuDescriptionArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedMenuDescriptionArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedMenuDescriptionArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "LocalizedMenuDescriptionArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchCategoryArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchCategoryArray = { UE4CodeGen_Private::EPropertyClass::Array, "FullSearchCategoryArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, FullSearchCategoryArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchCategoryArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchCategoryArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchCategoryArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "FullSearchCategoryArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchKeywordsArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchKeywordsArray = { UE4CodeGen_Private::EPropertyClass::Array, "FullSearchKeywordsArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, FullSearchKeywordsArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchKeywordsArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchKeywordsArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchKeywordsArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "FullSearchKeywordsArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchTitlesArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchTitlesArray = { UE4CodeGen_Private::EPropertyClass::Array, "FullSearchTitlesArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, FullSearchTitlesArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchTitlesArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchTitlesArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchTitlesArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "FullSearchTitlesArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescriptionArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescriptionArray = { UE4CodeGen_Private::EPropertyClass::Array, "MenuDescriptionArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, MenuDescriptionArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescriptionArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescriptionArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescriptionArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "MenuDescriptionArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SectionID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "Section ID of the action list in which this action belongs." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SectionID = { UE4CodeGen_Private::EPropertyClass::Int, "SectionID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, SectionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SectionID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SectionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Grouping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "This is a priority number for overriding alphabetical order in the action list (higher value  == higher in the list)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Grouping = { UE4CodeGen_Private::EPropertyClass::Int, "Grouping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, Grouping), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Grouping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Grouping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Keywords_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "This is just an arbitrary dump of extra text that search will match on, in addition to the description and tooltip, e.g., Add might have the keyword Math." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Keywords = { UE4CodeGen_Private::EPropertyClass::Text, "Keywords", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, Keywords), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Keywords_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Keywords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "This is the UI centric category the action fits in (e.g., Functions, Variables). Use this instead of the NodeType.NodeCategory because multiple NodeCategories might visually belong together." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Category = { UE4CodeGen_Private::EPropertyClass::Text, "Category", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Category_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_TooltipDescription_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "The tooltip text that should be displayed for this node in the creation menu." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_TooltipDescription = { UE4CodeGen_Private::EPropertyClass::Text, "TooltipDescription", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, TooltipDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_TooltipDescription_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_TooltipDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescription_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
		{ "ToolTip", "The menu text that should be displayed for this node in the creation menu." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescription = { UE4CodeGen_Private::EPropertyClass::Text, "MenuDescription", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FEdGraphSchemaAction, MenuDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescription_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SearchText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchCategoryArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchCategoryArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchKeywordsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchKeywordsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchTitlesArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedFullSearchTitlesArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedMenuDescriptionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_LocalizedMenuDescriptionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchCategoryArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchCategoryArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchKeywordsArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchKeywordsArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchTitlesArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_FullSearchTitlesArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescriptionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescriptionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_SectionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Grouping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Keywords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_TooltipDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::NewProp_MenuDescription,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EdGraphSchemaAction",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FEdGraphSchemaAction),
		alignof(FEdGraphSchemaAction),
		Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EdGraphSchemaAction"), sizeof(FEdGraphSchemaAction), Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEdGraphSchemaAction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEdGraphSchemaAction_CRC() { return 2909126726U; }
	void UEdGraphSchema::StaticRegisterNativesUEdGraphSchema()
	{
	}
	UClass* Z_Construct_UClass_UEdGraphSchema_NoRegister()
	{
		return UEdGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraph/EdGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/EdGraph/EdGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_Statics::ClassParams = {
		&UEdGraphSchema::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdGraphSchema_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdGraphSchema, 3815204598);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdGraphSchema(Z_Construct_UClass_UEdGraphSchema, &UEdGraphSchema::StaticClass, TEXT("/Script/Engine"), TEXT("UEdGraphSchema"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
