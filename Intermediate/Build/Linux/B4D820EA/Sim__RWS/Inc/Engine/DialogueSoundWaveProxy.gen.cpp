// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueSoundWaveProxy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueSoundWaveProxy();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDialogueSoundWaveProxy::StaticRegisterNativesUDialogueSoundWaveProxy()
	{
	}
	UClass* Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister()
	{
		return UDialogueSoundWaveProxy::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueSoundWaveProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/DialogueSoundWaveProxy.h" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueSoundWaveProxy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueSoundWaveProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::ClassParams = {
		&UDialogueSoundWaveProxy::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000010A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueSoundWaveProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogueSoundWaveProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogueSoundWaveProxy, 2431961043);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogueSoundWaveProxy(Z_Construct_UClass_UDialogueSoundWaveProxy, &UDialogueSoundWaveProxy::StaticClass, TEXT("/Script/Engine"), TEXT("UDialogueSoundWaveProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueSoundWaveProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
