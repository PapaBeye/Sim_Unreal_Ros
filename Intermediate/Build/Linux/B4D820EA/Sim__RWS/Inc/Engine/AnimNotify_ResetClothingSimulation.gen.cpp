// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNotifies/AnimNotify_ResetClothingSimulation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_ResetClothingSimulation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_ResetClothingSimulation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimNotify_ResetClothingSimulation::StaticRegisterNativesUAnimNotify_ResetClothingSimulation()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_NoRegister()
	{
		return UAnimNotify_ResetClothingSimulation::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Reset Clothing Simulation" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotify_ResetClothingSimulation.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_ResetClothingSimulation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_ResetClothingSimulation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics::ClassParams = {
		&UAnimNotify_ResetClothingSimulation::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001120A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_ResetClothingSimulation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_ResetClothingSimulation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_ResetClothingSimulation, 3468826355);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_ResetClothingSimulation(Z_Construct_UClass_UAnimNotify_ResetClothingSimulation, &UAnimNotify_ResetClothingSimulation::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimNotify_ResetClothingSimulation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_ResetClothingSimulation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
