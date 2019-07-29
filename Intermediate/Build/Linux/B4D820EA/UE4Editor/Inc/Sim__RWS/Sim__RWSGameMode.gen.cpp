// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sim__RWS/Sim__RWSGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSim__RWSGameMode() {}
// Cross Module References
	SIM__RWS_API UClass* Z_Construct_UClass_ASim__RWSGameMode_NoRegister();
	SIM__RWS_API UClass* Z_Construct_UClass_ASim__RWSGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Sim__RWS();
// End Cross Module References
	void ASim__RWSGameMode::StaticRegisterNativesASim__RWSGameMode()
	{
	}
	UClass* Z_Construct_UClass_ASim__RWSGameMode_NoRegister()
	{
		return ASim__RWSGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASim__RWSGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASim__RWSGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Sim__RWS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASim__RWSGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Sim__RWSGameMode.h" },
		{ "ModuleRelativePath", "Sim__RWSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASim__RWSGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASim__RWSGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASim__RWSGameMode_Statics::ClassParams = {
		&ASim__RWSGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASim__RWSGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASim__RWSGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASim__RWSGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASim__RWSGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASim__RWSGameMode, 1923726755);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASim__RWSGameMode(Z_Construct_UClass_ASim__RWSGameMode, &ASim__RWSGameMode::StaticClass, TEXT("/Script/Sim__RWS"), TEXT("ASim__RWSGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASim__RWSGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
