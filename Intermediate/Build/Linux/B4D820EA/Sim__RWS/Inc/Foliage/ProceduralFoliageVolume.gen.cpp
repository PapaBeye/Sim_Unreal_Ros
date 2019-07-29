// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foliage/Public/ProceduralFoliageVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageVolume() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageVolume_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	FOLIAGE_API UClass* Z_Construct_UClass_UProceduralFoliageComponent_NoRegister();
// End Cross Module References
	void AProceduralFoliageVolume::StaticRegisterNativesAProceduralFoliageVolume()
	{
	}
	UClass* Z_Construct_UClass_AProceduralFoliageVolume_NoRegister()
	{
		return AProceduralFoliageVolume::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralFoliageVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProceduralComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralFoliageVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralFoliageVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "ProceduralFoliageVolume.h" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralFoliageVolume_Statics::NewProp_ProceduralComponent_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralFoliageVolume_Statics::NewProp_ProceduralComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ProceduralComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(AProceduralFoliageVolume, ProceduralComponent), Z_Construct_UClass_UProceduralFoliageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralFoliageVolume_Statics::NewProp_ProceduralComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageVolume_Statics::NewProp_ProceduralComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralFoliageVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFoliageVolume_Statics::NewProp_ProceduralComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralFoliageVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralFoliageVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProceduralFoliageVolume_Statics::ClassParams = {
		&AProceduralFoliageVolume::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AProceduralFoliageVolume_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageVolume_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AProceduralFoliageVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralFoliageVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProceduralFoliageVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProceduralFoliageVolume, 3278539838);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceduralFoliageVolume(Z_Construct_UClass_AProceduralFoliageVolume, &AProceduralFoliageVolume::StaticClass, TEXT("/Script/Foliage"), TEXT("AProceduralFoliageVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralFoliageVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
