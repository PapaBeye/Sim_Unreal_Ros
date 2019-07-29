// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISenseBlueprintListener.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseBlueprintListener() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseBlueprintListener_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseBlueprintListener();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAISenseBlueprintListener::StaticRegisterNativesUAISenseBlueprintListener()
	{
	}
	UClass* Z_Construct_UClass_UAISenseBlueprintListener_NoRegister()
	{
		return UAISenseBlueprintListener::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseBlueprintListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseBlueprintListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedStruct,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseBlueprintListener_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISenseBlueprintListener.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseBlueprintListener.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseBlueprintListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseBlueprintListener>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISenseBlueprintListener_Statics::ClassParams = {
		&UAISenseBlueprintListener::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseBlueprintListener_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISenseBlueprintListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseBlueprintListener()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISenseBlueprintListener_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseBlueprintListener, 4205700784);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseBlueprintListener(Z_Construct_UClass_UAISenseBlueprintListener, &UAISenseBlueprintListener::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISenseBlueprintListener"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseBlueprintListener);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
