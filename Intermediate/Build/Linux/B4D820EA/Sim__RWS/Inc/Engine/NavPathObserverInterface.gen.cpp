// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/AI/Navigation/NavPathObserverInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavPathObserverInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavPathObserverInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavPathObserverInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNavPathObserverInterface::StaticRegisterNativesUNavPathObserverInterface()
	{
	}
	UClass* Z_Construct_UClass_UNavPathObserverInterface_NoRegister()
	{
		return UNavPathObserverInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNavPathObserverInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavPathObserverInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavPathObserverInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavPathObserverInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavPathObserverInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavPathObserverInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavPathObserverInterface_Statics::ClassParams = {
		&UNavPathObserverInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000840A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNavPathObserverInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavPathObserverInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavPathObserverInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavPathObserverInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavPathObserverInterface, 1479982240);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavPathObserverInterface(Z_Construct_UClass_UNavPathObserverInterface, &UNavPathObserverInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UNavPathObserverInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavPathObserverInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
