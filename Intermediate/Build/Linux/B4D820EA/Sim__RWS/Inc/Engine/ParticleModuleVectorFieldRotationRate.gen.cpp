// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldRotationRate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldRotationRate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotationRate();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UParticleModuleVectorFieldRotationRate::StaticRegisterNativesUParticleModuleVectorFieldRotationRate()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_NoRegister()
	{
		return UParticleModuleVectorFieldRotationRate::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "VF Rotation Rate" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldRotationRate.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldRotationRate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldRotationRate.h" },
		{ "ToolTip", "Constant rotation rate applied to the local vector field." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::NewProp_RotationRate = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldRotationRate, RotationRate), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::NewProp_RotationRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::NewProp_RotationRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::NewProp_RotationRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldRotationRate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::ClassParams = {
		&UParticleModuleVectorFieldRotationRate::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000010A0u,
		nullptr, 0,
		Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldRotationRate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleVectorFieldRotationRate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleVectorFieldRotationRate, 1581659760);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVectorFieldRotationRate(Z_Construct_UClass_UParticleModuleVectorFieldRotationRate, &UParticleModuleVectorFieldRotationRate::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVectorFieldRotationRate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldRotationRate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
