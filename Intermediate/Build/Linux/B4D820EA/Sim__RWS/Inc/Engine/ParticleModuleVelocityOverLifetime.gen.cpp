// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Velocity/ParticleModuleVelocityOverLifetime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocityOverLifetime() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityOverLifetime_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityOverLifetime();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleVelocityOverLifetime::StaticRegisterNativesUParticleModuleVelocityOverLifetime()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVelocityOverLifetime_NoRegister()
	{
		return UParticleModuleVelocityOverLifetime::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Absolute_MetaData[];
#endif
		static void NewProp_Absolute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Absolute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelOverLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelOverLife;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVelocityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Velocity/Life" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Velocity/ParticleModuleVelocityOverLifetime.h" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityOverLifetime.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_Absolute_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityOverLifetime.h" },
		{ "ToolTip", "If true, the velocity will be SET to the value from the above dist.\nIf false, the velocity will be scaled by the above dist." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_Absolute_SetBit(void* Obj)
	{
		((UParticleModuleVelocityOverLifetime*)Obj)->Absolute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_Absolute = { UE4CodeGen_Private::EPropertyClass::Bool, "Absolute", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000009, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleVelocityOverLifetime), &Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_Absolute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_Absolute_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_Absolute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_VelOverLife_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityOverLifetime.h" },
		{ "ToolTip", "The scaling  value applied to the velocity.\nValue is retrieved using the RelativeTime of the particle." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_VelOverLife = { UE4CodeGen_Private::EPropertyClass::Struct, "VelOverLife", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVelocityOverLifetime, VelOverLife), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_VelOverLife_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_VelOverLife_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_Absolute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::NewProp_VelOverLife,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVelocityOverLifetime>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::ClassParams = {
		&UParticleModuleVelocityOverLifetime::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008810A0u,
		nullptr, 0,
		Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVelocityOverLifetime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleVelocityOverLifetime_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleVelocityOverLifetime, 326023071);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVelocityOverLifetime(Z_Construct_UClass_UParticleModuleVelocityOverLifetime, &UParticleModuleVelocityOverLifetime::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVelocityOverLifetime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocityOverLifetime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
