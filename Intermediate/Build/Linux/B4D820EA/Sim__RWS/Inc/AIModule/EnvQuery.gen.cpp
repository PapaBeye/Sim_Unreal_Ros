// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQuery() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryOption_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
// End Cross Module References
	void UEnvQuery::StaticRegisterNativesUEnvQuery()
	{
	}
	UClass* Z_Construct_UClass_UEnvQuery_NoRegister()
	{
		return UEnvQuery::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_QueryName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EdGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EdGraph;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQuery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnvironmentQuery/EnvQuery.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options = { UE4CodeGen_Private::EPropertyClass::Array, "Options", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UEnvQuery, Options), METADATA_PARAMS(Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Options", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UEnvQueryOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQuery_Statics::NewProp_QueryName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEnvQuery_Statics::NewProp_QueryName = { UE4CodeGen_Private::EPropertyClass::Name, "QueryName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UEnvQuery, QueryName), METADATA_PARAMS(Z_Construct_UClass_UEnvQuery_Statics::NewProp_QueryName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_Statics::NewProp_QueryName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQuery_Statics::NewProp_EdGraph_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
		{ "ToolTip", "Graph for query" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnvQuery_Statics::NewProp_EdGraph = { UE4CodeGen_Private::EPropertyClass::Object, "EdGraph", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UEnvQuery, EdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQuery_Statics::NewProp_EdGraph_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_Statics::NewProp_EdGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_Statics::NewProp_QueryName,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_Statics::NewProp_EdGraph,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQuery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQuery_Statics::ClassParams = {
		&UEnvQuery::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UEnvQuery_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQuery_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQuery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQuery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQuery, 4192154448);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQuery(Z_Construct_UClass_UEnvQuery, &UEnvQuery::StaticClass, TEXT("/Script/AIModule"), TEXT("UEnvQuery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQuery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
