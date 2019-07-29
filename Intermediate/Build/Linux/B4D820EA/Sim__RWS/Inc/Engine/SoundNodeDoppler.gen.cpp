// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeDoppler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeDoppler() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDoppler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeDoppler();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeDoppler::StaticRegisterNativesUSoundNodeDoppler()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeDoppler_NoRegister()
	{
		return USoundNodeDoppler::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeDoppler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DopplerIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DopplerIntensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeDoppler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDoppler_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Doppler" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeDoppler.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDoppler.h" },
		{ "ToolTip", "Computes doppler pitch shift" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_DopplerIntensity_MetaData[] = {
		{ "Category", "Doppler" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeDoppler.h" },
		{ "ToolTip", "How much to scale the doppler shift (1.0 is normal)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_DopplerIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "DopplerIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeDoppler, DopplerIntensity), METADATA_PARAMS(Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_DopplerIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_DopplerIntensity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeDoppler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeDoppler_Statics::NewProp_DopplerIntensity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeDoppler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeDoppler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeDoppler_Statics::ClassParams = {
		&USoundNodeDoppler::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000010A0u,
		nullptr, 0,
		Z_Construct_UClass_USoundNodeDoppler_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USoundNodeDoppler_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeDoppler_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeDoppler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeDoppler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeDoppler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeDoppler, 3470262574);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeDoppler(Z_Construct_UClass_USoundNodeDoppler, &USoundNodeDoppler::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeDoppler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeDoppler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
