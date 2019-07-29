// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationConstant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationConstant() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationConstant();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UParticleModuleAccelerationConstant::StaticRegisterNativesUParticleModuleAccelerationConstant()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAccelerationConstant_NoRegister()
	{
		return UParticleModuleAccelerationConstant::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Acceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleAccelerationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Const Acceleration" },
		{ "HideCategories", "Object Acceleration Object Object" },
		{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationConstant.h" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationConstant.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "ParticleModuleAccelerationConstant" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationConstant.h" },
		{ "ToolTip", "Constant acceleration for particles in this system." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::NewProp_Acceleration = { UE4CodeGen_Private::EPropertyClass::Struct, "Acceleration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAccelerationConstant, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::NewProp_Acceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::NewProp_Acceleration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::NewProp_Acceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAccelerationConstant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::ClassParams = {
		&UParticleModuleAccelerationConstant::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000010A0u,
		nullptr, 0,
		Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleAccelerationConstant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleAccelerationConstant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleAccelerationConstant, 67671775);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAccelerationConstant(Z_Construct_UClass_UParticleModuleAccelerationConstant, &UParticleModuleAccelerationConstant::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAccelerationConstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationConstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
