// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAccelerationDrag() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAccelerationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat_NoRegister();
// End Cross Module References
	void UParticleModuleAccelerationDrag::StaticRegisterNativesUParticleModuleAccelerationDrag()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag_NoRegister()
	{
		return UParticleModuleAccelerationDrag::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficientRaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DragCoefficientRaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DragCoefficient;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleAccelerationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Drag" },
		{ "HideCategories", "Object Acceleration Object Object" },
		{ "IncludePath", "Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficientRaw_MetaData[] = {
		{ "Category", "Drag" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
		{ "ToolTip", "Per-particle drag coefficient. Evaluted using emitter time." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficientRaw = { UE4CodeGen_Private::EPropertyClass::Struct, "DragCoefficientRaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleAccelerationDrag, DragCoefficientRaw), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficientRaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficientRaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h" },
		{ "ToolTip", "Per-particle drag coefficient. Evaluted using emitter time." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficient = { UE4CodeGen_Private::EPropertyClass::Object, "DragCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020080008, 1, nullptr, STRUCT_OFFSET(UParticleModuleAccelerationDrag, DragCoefficient_DEPRECATED), Z_Construct_UClass_UDistributionFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficient_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficientRaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::NewProp_DragCoefficient,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAccelerationDrag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::ClassParams = {
		&UParticleModuleAccelerationDrag::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008810A0u,
		nullptr, 0,
		Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleAccelerationDrag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleAccelerationDrag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleAccelerationDrag, 4132670453);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleAccelerationDrag(Z_Construct_UClass_UParticleModuleAccelerationDrag, &UParticleModuleAccelerationDrag::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleAccelerationDrag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAccelerationDrag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
