// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionTextureSampleParameterVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSampleParameterVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionTextureSampleParameterVolume::StaticRegisterNativesUMaterialExpressionTextureSampleParameterVolume()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_NoRegister()
	{
		return UMaterialExpressionTextureSampleParameterVolume::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureSampleParameterVolume.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSampleParameterVolume.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureSampleParameterVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::ClassParams = {
		&UMaterialExpressionTextureSampleParameterVolume::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000820A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionTextureSampleParameterVolume, 241783283);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTextureSampleParameterVolume(Z_Construct_UClass_UMaterialExpressionTextureSampleParameterVolume, &UMaterialExpressionTextureSampleParameterVolume::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTextureSampleParameterVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSampleParameterVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
