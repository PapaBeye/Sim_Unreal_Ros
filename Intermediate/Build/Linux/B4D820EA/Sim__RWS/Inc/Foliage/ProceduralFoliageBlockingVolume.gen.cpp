// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foliage/Public/ProceduralFoliageBlockingVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageBlockingVolume() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageBlockingVolume_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageBlockingVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	FOLIAGE_API UClass* Z_Construct_UClass_AProceduralFoliageVolume_NoRegister();
// End Cross Module References
	void AProceduralFoliageBlockingVolume::StaticRegisterNativesAProceduralFoliageBlockingVolume()
	{
	}
	UClass* Z_Construct_UClass_AProceduralFoliageBlockingVolume_NoRegister()
	{
		return AProceduralFoliageBlockingVolume::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralFoliageVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProceduralFoliageVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "ProceduralFoliageBlockingVolume.h" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageBlockingVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An invisible volume used to block ProceduralFoliage instances from being spawned." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_ProceduralFoliageVolume_MetaData[] = {
		{ "Category", "ProceduralFoliage" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageBlockingVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_ProceduralFoliageVolume = { UE4CodeGen_Private::EPropertyClass::Object, "ProceduralFoliageVolume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AProceduralFoliageBlockingVolume, ProceduralFoliageVolume), Z_Construct_UClass_AProceduralFoliageVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_ProceduralFoliageVolume_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_ProceduralFoliageVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::NewProp_ProceduralFoliageVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralFoliageBlockingVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::ClassParams = {
		&AProceduralFoliageBlockingVolume::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		nullptr, 0,
		Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralFoliageBlockingVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProceduralFoliageBlockingVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProceduralFoliageBlockingVolume, 2983239998);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceduralFoliageBlockingVolume(Z_Construct_UClass_AProceduralFoliageBlockingVolume, &AProceduralFoliageBlockingVolume::StaticClass, TEXT("/Script/Foliage"), TEXT("AProceduralFoliageBlockingVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralFoliageBlockingVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
