// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionStaticSwitchParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStaticSwitchParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBoolParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionStaticSwitchParameter::StaticRegisterNativesUMaterialExpressionStaticSwitchParameter()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_NoRegister()
	{
		return UMaterialExpressionStaticSwitchParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionStaticBoolParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStaticSwitchParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticSwitchParameter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticSwitchParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionStaticSwitchParameter, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticSwitchParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionStaticSwitchParameter, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::NewProp_A,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStaticSwitchParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::ClassParams = {
		&UMaterialExpressionStaticSwitchParameter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000820A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionStaticSwitchParameter, 41755317);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionStaticSwitchParameter(Z_Construct_UClass_UMaterialExpressionStaticSwitchParameter, &UMaterialExpressionStaticSwitchParameter::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionStaticSwitchParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStaticSwitchParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
