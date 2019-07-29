// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionTime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTime() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTime_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTime();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionTime::StaticRegisterNativesUMaterialExpressionTime()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTime_NoRegister()
	{
		return UMaterialExpressionTime::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Period_MetaData[];
#endif
		static void NewProp_bOverride_Period_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Period;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnorePause_MetaData[];
#endif
		static void NewProp_bIgnorePause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnorePause;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTime_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTime.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTime.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "MaterialExpressionTime" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bOverride_Period" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTime.h" },
		{ "ToolTip", "Period at which to wrap around time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_Period = { UE4CodeGen_Private::EPropertyClass::Float, "Period", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTime, Period), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_Period_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_Period_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period_MetaData[] = {
		{ "Category", "MaterialExpressionTime" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTime.h" },
		{ "ToolTip", "Enables or disables the Period value." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period_SetBit(void* Obj)
	{
		((UMaterialExpressionTime*)Obj)->bOverride_Period = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_Period", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionTime), &Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause_MetaData[] = {
		{ "Category", "MaterialExpressionTime" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTime.h" },
		{ "ToolTip", "This time continues advancing regardless of whether the game is paused." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause_SetBit(void* Obj)
	{
		((UMaterialExpressionTime*)Obj)->bIgnorePause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnorePause", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionTime), &Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_Period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTime>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTime_Statics::ClassParams = {
		&UMaterialExpressionTime::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000820A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTime_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTime_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionTime_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionTime, 2296148725);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTime(Z_Construct_UClass_UMaterialExpressionTime, &UMaterialExpressionTime::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
