// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Trail/ParticleModuleTrailBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTrailBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTrailBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleTrailBase::StaticRegisterNativesUParticleModuleTrailBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleTrailBase_NoRegister()
	{
		return UParticleModuleTrailBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleTrailBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleTrailBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTrailBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Trail" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Trail/ParticleModuleTrailBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Trail/ParticleModuleTrailBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleTrailBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTrailBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTrailBase_Statics::ClassParams = {
		&UParticleModuleTrailBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000010A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTrailBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTrailBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleTrailBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleTrailBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleTrailBase, 838895761);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleTrailBase(Z_Construct_UClass_UParticleModuleTrailBase, &UParticleModuleTrailBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleTrailBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTrailBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
