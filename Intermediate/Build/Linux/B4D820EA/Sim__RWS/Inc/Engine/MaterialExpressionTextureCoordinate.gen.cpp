// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionTextureCoordinate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureCoordinate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureCoordinate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureCoordinate();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionTextureCoordinate::StaticRegisterNativesUMaterialExpressionTextureCoordinate()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureCoordinate_NoRegister()
	{
		return UMaterialExpressionTextureCoordinate::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnMirrorV_MetaData[];
#endif
		static void NewProp_UnMirrorV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UnMirrorV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnMirrorU_MetaData[];
#endif
		static void NewProp_UnMirrorU_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UnMirrorU;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VTiling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VTiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UTiling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UTiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordinateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CoordinateIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureCoordinate.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureCoordinate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorV_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureCoordinate.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorV_SetBit(void* Obj)
	{
		((UMaterialExpressionTextureCoordinate*)Obj)->UnMirrorV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorV = { UE4CodeGen_Private::EPropertyClass::Bool, "UnMirrorV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionTextureCoordinate), &Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorV_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorV_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorU_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureCoordinate.h" },
		{ "ToolTip", "Would like to unmirror U or V\n- if the texture is mirrored and if you would like to undo mirroring for this texture sample, use this to unmirror" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorU_SetBit(void* Obj)
	{
		((UMaterialExpressionTextureCoordinate*)Obj)->UnMirrorU = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorU = { UE4CodeGen_Private::EPropertyClass::Bool, "UnMirrorU", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionTextureCoordinate), &Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorU_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorU_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorU_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_VTiling_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureCoordinate.h" },
		{ "ToolTip", "Controls how much the texture tiles vertically, by scaling the V component of the vertex UVs by the specified amount." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_VTiling = { UE4CodeGen_Private::EPropertyClass::Float, "VTiling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureCoordinate, VTiling), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_VTiling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_VTiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UTiling_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureCoordinate.h" },
		{ "ToolTip", "Controls how much the texture tiles horizontally, by scaling the U component of the vertex UVs by the specified amount." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UTiling = { UE4CodeGen_Private::EPropertyClass::Float, "UTiling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureCoordinate, UTiling), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UTiling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UTiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_CoordinateIndex_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureCoordinate.h" },
		{ "ToolTip", "Texture coordinate index" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_CoordinateIndex = { UE4CodeGen_Private::EPropertyClass::Int, "CoordinateIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureCoordinate, CoordinateIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_CoordinateIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_CoordinateIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UnMirrorU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_VTiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_UTiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::NewProp_CoordinateIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureCoordinate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::ClassParams = {
		&UMaterialExpressionTextureCoordinate::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000820A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTextureCoordinate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionTextureCoordinate, 3477722217);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTextureCoordinate(Z_Construct_UClass_UMaterialExpressionTextureCoordinate, &UMaterialExpressionTextureCoordinate::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTextureCoordinate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureCoordinate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
