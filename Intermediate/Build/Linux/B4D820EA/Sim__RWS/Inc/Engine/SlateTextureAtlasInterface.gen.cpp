// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Slate/SlateTextureAtlasInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateTextureAtlasInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USlateTextureAtlasInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USlateTextureAtlasInterface::StaticRegisterNativesUSlateTextureAtlasInterface()
	{
	}
	UClass* Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister()
	{
		return USlateTextureAtlasInterface::StaticClass();
	}
	struct Z_Construct_UClass_USlateTextureAtlasInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateTextureAtlasInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateTextureAtlasInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Slate/SlateTextureAtlasInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateTextureAtlasInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISlateTextureAtlasInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlateTextureAtlasInterface_Statics::ClassParams = {
		&USlateTextureAtlasInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001040A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USlateTextureAtlasInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USlateTextureAtlasInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateTextureAtlasInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlateTextureAtlasInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlateTextureAtlasInterface, 2909760648);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlateTextureAtlasInterface(Z_Construct_UClass_USlateTextureAtlasInterface, &USlateTextureAtlasInterface::StaticClass, TEXT("/Script/Engine"), TEXT("USlateTextureAtlasInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateTextureAtlasInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
