// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Color/ParticleModuleColorOverLife.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleColorOverLife() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorOverLife_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorOverLife();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleColorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleColorOverLife::StaticRegisterNativesUParticleModuleColorOverLife()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleColorOverLife_NoRegister()
	{
		return UParticleModuleColorOverLife::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleColorOverLife_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClampAlpha_MetaData[];
#endif
		static void NewProp_bClampAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClampAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaOverLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaOverLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOverLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOverLife;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleColorOverLife_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleColorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorOverLife_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Color Over Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Color/ParticleModuleColorOverLife.h" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorOverLife.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_bClampAlpha_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorOverLife.h" },
		{ "ToolTip", "If true, the alpha value will be clamped to the [0..1] range." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_bClampAlpha_SetBit(void* Obj)
	{
		((UParticleModuleColorOverLife*)Obj)->bClampAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_bClampAlpha = { UE4CodeGen_Private::EPropertyClass::Bool, "bClampAlpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleColorOverLife), &Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_bClampAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_bClampAlpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_bClampAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_AlphaOverLife_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorOverLife.h" },
		{ "ToolTip", "The alpha to apply to the particle, as a function of the particle RelativeTime." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_AlphaOverLife = { UE4CodeGen_Private::EPropertyClass::Struct, "AlphaOverLife", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleColorOverLife, AlphaOverLife), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_AlphaOverLife_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_AlphaOverLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_ColorOverLife_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Classes/Particles/Color/ParticleModuleColorOverLife.h" },
		{ "ToolTip", "The color to apply to the particle, as a function of the particle RelativeTime." },
		{ "TreatAsColor", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_ColorOverLife = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorOverLife", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleColorOverLife, ColorOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_ColorOverLife_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_ColorOverLife_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleColorOverLife_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_bClampAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_AlphaOverLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleColorOverLife_Statics::NewProp_ColorOverLife,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleColorOverLife_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleColorOverLife>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleColorOverLife_Statics::ClassParams = {
		&UParticleModuleColorOverLife::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008810A0u,
		nullptr, 0,
		Z_Construct_UClass_UParticleModuleColorOverLife_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleColorOverLife_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleColorOverLife()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleColorOverLife_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleColorOverLife, 3101439630);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleColorOverLife(Z_Construct_UClass_UParticleModuleColorOverLife, &UParticleModuleColorOverLife::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleColorOverLife"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleColorOverLife);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
