// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISenseEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseEvent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAISenseEvent::StaticRegisterNativesUAISenseEvent()
	{
	}
	UClass* Z_Construct_UClass_UAISenseEvent_NoRegister()
	{
		return UAISenseEvent::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseEvent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISenseEvent.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISenseEvent_Statics::ClassParams = {
		&UAISenseEvent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001010A1u,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseEvent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISenseEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISenseEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseEvent, 4066085961);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseEvent(Z_Construct_UClass_UAISenseEvent, &UAISenseEvent::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISenseEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
