// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Fonts/FontBulkData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFontBulkData() {}
// Cross Module References
	SLATECORE_API UClass* Z_Construct_UClass_UFontBulkData_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_UFontBulkData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	void UFontBulkData::StaticRegisterNativesUFontBulkData()
	{
	}
	UClass* Z_Construct_UClass_UFontBulkData_NoRegister()
	{
		return UFontBulkData::StaticClass();
	}
	struct Z_Construct_UClass_UFontBulkData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFontBulkData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFontBulkData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fonts/FontBulkData.h" },
		{ "ModuleRelativePath", "Public/Fonts/FontBulkData.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFontBulkData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFontBulkData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFontBulkData_Statics::ClassParams = {
		&UFontBulkData::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFontBulkData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFontBulkData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFontBulkData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFontBulkData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFontBulkData, 1494118605);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFontBulkData(Z_Construct_UClass_UFontBulkData, &UFontBulkData::StaticClass, TEXT("/Script/SlateCore"), TEXT("UFontBulkData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFontBulkData);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFontBulkData)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
