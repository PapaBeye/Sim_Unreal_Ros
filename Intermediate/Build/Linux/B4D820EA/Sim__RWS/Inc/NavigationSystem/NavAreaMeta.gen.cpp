// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavAreas/NavAreaMeta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavAreaMeta() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavAreaMeta_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavAreaMeta();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavAreaMeta::StaticRegisterNativesUNavAreaMeta()
	{
	}
	UClass* Z_Construct_UClass_UNavAreaMeta_NoRegister()
	{
		return UNavAreaMeta::StaticClass();
	}
	struct Z_Construct_UClass_UNavAreaMeta_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavAreaMeta_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavAreaMeta_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavAreas/NavAreaMeta.h" },
		{ "ModuleRelativePath", "Public/NavAreas/NavAreaMeta.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A convenience class for an area that has IsMetaArea() == true.\n   Do not use this class when determining whether an area class is \"meta\".\n   Call IsMetaArea instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavAreaMeta_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavAreaMeta>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavAreaMeta_Statics::ClassParams = {
		&UNavAreaMeta::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x003000A5u,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNavAreaMeta_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavAreaMeta_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavAreaMeta()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavAreaMeta_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavAreaMeta, 2260919639);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavAreaMeta(Z_Construct_UClass_UNavAreaMeta, &UNavAreaMeta::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavAreaMeta"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavAreaMeta);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
