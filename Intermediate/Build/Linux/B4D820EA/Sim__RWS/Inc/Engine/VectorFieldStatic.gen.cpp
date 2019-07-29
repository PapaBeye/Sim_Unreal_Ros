// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/VectorField/VectorFieldStatic.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorFieldStatic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldStatic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldStatic();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
// End Cross Module References
	void UVectorFieldStatic::StaticRegisterNativesUVectorFieldStatic()
	{
	}
	UClass* Z_Construct_UClass_UVectorFieldStatic_NoRegister()
	{
		return UVectorFieldStatic::StaticClass();
	}
	struct Z_Construct_UClass_UVectorFieldStatic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVectorFieldStatic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVectorField,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldStatic_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "VectorFieldBounds" },
		{ "IncludePath", "VectorField/VectorFieldStatic.h" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_AssetImportData = { UE4CodeGen_Private::EPropertyClass::Object, "AssetImportData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(UVectorFieldStatic, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_AssetImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SourceFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFilePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UVectorFieldStatic, SourceFilePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SourceFilePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SourceFilePath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeZ_MetaData[] = {
		{ "Category", "VectorFieldStatic" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
		{ "ToolTip", "Size of the vector field volume." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeZ = { UE4CodeGen_Private::EPropertyClass::Int, "SizeZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UVectorFieldStatic, SizeZ), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "VectorFieldStatic" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
		{ "ToolTip", "Size of the vector field volume." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeY = { UE4CodeGen_Private::EPropertyClass::Int, "SizeY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UVectorFieldStatic, SizeY), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "VectorFieldStatic" },
		{ "ModuleRelativePath", "Classes/VectorField/VectorFieldStatic.h" },
		{ "ToolTip", "Size of the vector field volume." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeX = { UE4CodeGen_Private::EPropertyClass::Int, "SizeX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UVectorFieldStatic, SizeX), METADATA_PARAMS(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVectorFieldStatic_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_AssetImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SourceFilePath,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVectorFieldStatic_Statics::NewProp_SizeX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVectorFieldStatic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVectorFieldStatic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVectorFieldStatic_Statics::ClassParams = {
		&UVectorFieldStatic::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		nullptr, 0,
		Z_Construct_UClass_UVectorFieldStatic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVectorFieldStatic_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVectorFieldStatic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVectorFieldStatic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVectorFieldStatic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVectorFieldStatic, 2391909507);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVectorFieldStatic(Z_Construct_UClass_UVectorFieldStatic, &UVectorFieldStatic::StaticClass, TEXT("/Script/Engine"), TEXT("UVectorFieldStatic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorFieldStatic);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVectorFieldStatic)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
