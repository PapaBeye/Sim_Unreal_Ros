// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSpawnBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleSpawnBase::StaticRegisterNativesUParticleModuleSpawnBase()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister()
	{
		return UParticleModuleSpawnBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSpawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProcessBurstList_MetaData[];
#endif
		static void NewProp_bProcessBurstList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProcessBurstList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bProcessSpawnRate_MetaData[];
#endif
		static void NewProp_bProcessSpawnRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProcessSpawnRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSpawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModule,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawnBase_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Spawn" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Particles/Spawn/ParticleModuleSpawnBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList_MetaData[] = {
		{ "Category", "Burst" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnBase.h" },
		{ "ToolTip", "If true, the BurstList of the SpawnModule of the emitter will be processed.\nIf mutliple Spawn modules are 'stacked' in an emitter, if ANY of them\nhave this set to false, it will not process the SpawnModule BurstList." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList_SetBit(void* Obj)
	{
		((UParticleModuleSpawnBase*)Obj)->bProcessBurstList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList = { UE4CodeGen_Private::EPropertyClass::Bool, "bProcessBurstList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSpawnBase), &Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnBase.h" },
		{ "ToolTip", "If true, the SpawnRate of the SpawnModule of the emitter will be processed.\nIf mutliple Spawn modules are 'stacked' in an emitter, if ANY of them\nhave this set to false, it will not process the SpawnModule SpawnRate." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate_SetBit(void* Obj)
	{
		((UParticleModuleSpawnBase*)Obj)->bProcessSpawnRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate = { UE4CodeGen_Private::EPropertyClass::Bool, "bProcessSpawnRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleSpawnBase), &Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSpawnBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessBurstList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnBase_Statics::NewProp_bProcessSpawnRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSpawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSpawnBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSpawnBase_Statics::ClassParams = {
		&UParticleModuleSpawnBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000010A1u,
		nullptr, 0,
		Z_Construct_UClass_UParticleModuleSpawnBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSpawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleSpawnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleSpawnBase, 2741249887);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleSpawnBase(Z_Construct_UClass_UParticleModuleSpawnBase, &UParticleModuleSpawnBase::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleSpawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSpawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
