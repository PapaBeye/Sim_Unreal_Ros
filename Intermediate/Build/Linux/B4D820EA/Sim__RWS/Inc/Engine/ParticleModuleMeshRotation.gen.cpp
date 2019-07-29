// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Rotation/ParticleModuleMeshRotation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleMeshRotation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleMeshRotation();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRotationBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleMeshRotation::StaticRegisterNativesUParticleModuleMeshRotation()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleMeshRotation_NoRegister()
	{
		return UParticleModuleMeshRotation::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleMeshRotation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritParent_MetaData[];
#endif
		static void NewProp_bInheritParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleMeshRotation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleRotationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotation_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Init Mesh Rotation" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Rotation/ParticleModuleMeshRotation.h" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleMeshRotation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleMeshRotation.h" },
		{ "ToolTip", "If true, apply the parents rotation as well." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent_SetBit(void* Obj)
	{
		((UParticleModuleMeshRotation*)Obj)->bInheritParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent = { UE4CodeGen_Private::EPropertyClass::Bool, "bInheritParent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleMeshRotation), &Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_StartRotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Classes/Particles/Rotation/ParticleModuleMeshRotation.h" },
		{ "ToolTip", "Initial rotation in ROTATIONS PER SECOND (1 = 360 degrees).\nThe value is retrieved using the EmitterTime." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_StartRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "StartRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleMeshRotation, StartRotation), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_StartRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_StartRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleMeshRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_bInheritParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleMeshRotation_Statics::NewProp_StartRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleMeshRotation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleMeshRotation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleMeshRotation_Statics::ClassParams = {
		&UParticleModuleMeshRotation::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008810A0u,
		nullptr, 0,
		Z_Construct_UClass_UParticleModuleMeshRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleMeshRotation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleMeshRotation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleMeshRotation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleMeshRotation, 905658398);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleMeshRotation(Z_Construct_UClass_UParticleModuleMeshRotation, &UParticleModuleMeshRotation::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleMeshRotation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleMeshRotation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
