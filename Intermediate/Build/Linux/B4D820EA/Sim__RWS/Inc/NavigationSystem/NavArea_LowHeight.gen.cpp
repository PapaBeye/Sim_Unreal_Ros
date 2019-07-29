// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavAreas/NavArea_LowHeight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea_LowHeight() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_LowHeight_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_LowHeight();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavArea_LowHeight::StaticRegisterNativesUNavArea_LowHeight()
	{
	}
	UClass* Z_Construct_UClass_UNavArea_LowHeight_NoRegister()
	{
		return UNavArea_LowHeight::StaticClass();
	}
	struct Z_Construct_UClass_UNavArea_LowHeight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavArea_LowHeight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavArea,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_LowHeight_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavAreas/NavArea_LowHeight.h" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea_LowHeight.h" },
		{ "ToolTip", "Special area that can be generated in spaces with insufficient free height above. Cannot be traversed by anyone." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavArea_LowHeight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavArea_LowHeight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavArea_LowHeight_Statics::ClassParams = {
		&UNavArea_LowHeight::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x003000A4u,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNavArea_LowHeight_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavArea_LowHeight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavArea_LowHeight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavArea_LowHeight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavArea_LowHeight, 2437851700);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavArea_LowHeight(Z_Construct_UClass_UNavArea_LowHeight, &UNavArea_LowHeight::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavArea_LowHeight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea_LowHeight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
