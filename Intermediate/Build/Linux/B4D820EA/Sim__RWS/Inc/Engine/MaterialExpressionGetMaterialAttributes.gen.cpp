// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionGetMaterialAttributes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionGetMaterialAttributes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
// End Cross Module References
	void UMaterialExpressionGetMaterialAttributes::StaticRegisterNativesUMaterialExpressionGetMaterialAttributes()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_NoRegister()
	{
		return UMaterialExpressionGetMaterialAttributes::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeGetTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttributeGetTypes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttributeGetTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialAttributes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionGetMaterialAttributes.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetMaterialAttributes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes_MetaData[] = {
		{ "Category", "MaterialAttributes" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetMaterialAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes = { UE4CodeGen_Private::EPropertyClass::Array, "AttributeGetTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionGetMaterialAttributes, AttributeGetTypes), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AttributeGetTypes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_MaterialAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetMaterialAttributes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_MaterialAttributes = { UE4CodeGen_Private::EPropertyClass::Struct, "MaterialAttributes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionGetMaterialAttributes, MaterialAttributes), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_MaterialAttributes_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_MaterialAttributes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_MaterialAttributes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionGetMaterialAttributes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::ClassParams = {
		&UMaterialExpressionGetMaterialAttributes::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000820A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionGetMaterialAttributes, 2391992130);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionGetMaterialAttributes(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes, &UMaterialExpressionGetMaterialAttributes::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionGetMaterialAttributes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionGetMaterialAttributes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
