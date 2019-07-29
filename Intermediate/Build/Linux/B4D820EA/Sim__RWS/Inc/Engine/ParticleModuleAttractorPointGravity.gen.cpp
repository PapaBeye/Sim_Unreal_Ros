// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAttractorPointGravity() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorPointGravity_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorPointGravity();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UParticleModuleAttractorPointGravity::StaticRegisterNativesUParticleModuleAttractorPointGravity()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAttractorPointGravity_NoRegister()
	{
		return UParticleModuleAttractorPointGravity::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthRaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrengthRaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleAttractorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Point Gravity" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_StrengthRaw_MetaData[] = {
		{ "Category", "PointGravitySource" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
		{ "ToolTip", "The strength of the point source." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_StrengthRaw = { UE4CodeGen_Private::EPropertyClass::Struct, "StrengthRaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008002000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorPointGravity, StrengthRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_StrengthRaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_StrengthRaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Strength_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
		{ "ToolTip", "The strength of the point source." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Strength = { UE4CodeGen_Private::EPropertyClass::Object, "Strength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020080008, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorPointGravity, Strength_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Strength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "PointGravitySource" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
		{ "ToolTip", "The distance at which the influence of the point begins to falloff." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorPointGravity, Radius), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "PointGravitySource" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPointGravity.h" },
		{ "ToolTip", "The position of the point gravity source." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAttractorPointGravity, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_StrengthRaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::NewProp_Position,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAttractorPointGravity>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::ClassParams = {
		&UParticleModuleAttractorPointGravity::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008010A0u,
		nullptr, 0,
		Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleAttractorPointGravity()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleAttractorPointGravity_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleAttractorPointGravity, 3684254898);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAttractorPointGravity(Z_Construct_UClass_UParticleModuleAttractorPointGravity, &UParticleModuleAttractorPointGravity::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAttractorPointGravity"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAttractorPointGravity);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
