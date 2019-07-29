// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeModulator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeModulator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeModulator();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeModulator::StaticRegisterNativesUSoundNodeModulator()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeModulator_NoRegister()
	{
		return USoundNodeModulator::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeModulator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeModulator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulator_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Modulator" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeModulator.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "Defines a random volume and pitch modification when a sound starts" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The upper bound of volume (1.0 is no change)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeModulator, VolumeMax), METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The lower bound of volume (1.0 is no change)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeModulator, VolumeMin), METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The upper bound of pitch (1.0 is no change)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeModulator, PitchMax), METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeModulator.h" },
		{ "ToolTip", "The lower bound of pitch (1.0 is no change)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeModulator, PitchMin), METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeModulator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_VolumeMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModulator_Statics::NewProp_PitchMin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeModulator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeModulator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeModulator_Statics::ClassParams = {
		&USoundNodeModulator::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000810A0u,
		nullptr, 0,
		Z_Construct_UClass_USoundNodeModulator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeModulator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeModulator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeModulator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeModulator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeModulator, 2013791460);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeModulator(Z_Construct_UClass_USoundNodeModulator, &USoundNodeModulator::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeModulator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeModulator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
