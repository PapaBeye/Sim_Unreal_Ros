// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeLayerInfoObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeLayerInfoObject() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	void ULandscapeLayerInfoObject::StaticRegisterNativesULandscapeLayerInfoObject()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister()
	{
		return ULandscapeLayerInfoObject::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeLayerInfoObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerUsageDebugColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerUsageDebugColor;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReferencedFromLoadedData_MetaData[];
#endif
		static void NewProp_IsReferencedFromLoadedData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReferencedFromLoadedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoWeightBlend_MetaData[];
#endif
		static void NewProp_bNoWeightBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoWeightBlend;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hardness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeLayerInfoObject.h" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "ToolTip", "The color to use for layer usage debug" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor = { UE4CodeGen_Private::EPropertyClass::Struct, "LayerUsageDebugColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, LayerUsageDebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_SetBit(void* Obj)
	{
		((ULandscapeLayerInfoObject*)Obj)->IsReferencedFromLoadedData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData = { UE4CodeGen_Private::EPropertyClass::Bool, "IsReferencedFromLoadedData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000c00002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULandscapeLayerInfoObject), &Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_SetBit(void* Obj)
	{
		((ULandscapeLayerInfoObject*)Obj)->bNoWeightBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoWeightBlend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULandscapeLayerInfoObject), &Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness = { UE4CodeGen_Private::EPropertyClass::Float, "Hardness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, Hardness), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "PhysMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName = { UE4CodeGen_Private::EPropertyClass::Name, "LayerName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000020001, 1, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, LayerName), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeLayerInfoObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::ClassParams = {
		&ULandscapeLayerInfoObject::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeLayerInfoObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeLayerInfoObject, 2746270036);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeLayerInfoObject(Z_Construct_UClass_ULandscapeLayerInfoObject, &ULandscapeLayerInfoObject::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeLayerInfoObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeLayerInfoObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
