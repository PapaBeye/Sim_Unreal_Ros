// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/ScriptViewportClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptViewportClient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UScriptViewportClient_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UScriptViewportClient();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UScriptViewportClient::StaticRegisterNativesUScriptViewportClient()
	{
	}
	UClass* Z_Construct_UClass_UScriptViewportClient_NoRegister()
	{
		return UScriptViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_UScriptViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptViewportClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ScriptViewportClient.h" },
		{ "ModuleRelativePath", "Classes/Engine/ScriptViewportClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptViewportClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScriptViewportClient_Statics::ClassParams = {
		&UScriptViewportClient::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UScriptViewportClient_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UScriptViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptViewportClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScriptViewportClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScriptViewportClient, 3500506086);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScriptViewportClient(Z_Construct_UClass_UScriptViewportClient, &UScriptViewportClient::StaticClass, TEXT("/Script/Engine"), TEXT("UScriptViewportClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptViewportClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
