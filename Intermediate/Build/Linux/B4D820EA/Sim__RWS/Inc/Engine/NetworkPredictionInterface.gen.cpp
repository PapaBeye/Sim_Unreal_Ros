// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPredictionInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNetworkPredictionInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetworkPredictionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNetworkPredictionInterface::StaticRegisterNativesUNetworkPredictionInterface()
	{
	}
	UClass* Z_Construct_UClass_UNetworkPredictionInterface_NoRegister()
	{
		return UNetworkPredictionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNetworkPredictionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetworkPredictionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Interfaces/NetworkPredictionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetworkPredictionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INetworkPredictionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetworkPredictionInterface_Statics::ClassParams = {
		&UNetworkPredictionInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000840A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetworkPredictionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetworkPredictionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetworkPredictionInterface, 672375792);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetworkPredictionInterface(Z_Construct_UClass_UNetworkPredictionInterface, &UNetworkPredictionInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UNetworkPredictionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkPredictionInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
