// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpFilter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpFilter::StaticRegisterNativesUInterpFilter()
	{
	}
	UClass* Z_Construct_UClass_UInterpFilter_NoRegister()
	{
		return UInterpFilter::StaticClass();
	}
	struct Z_Construct_UClass_UInterpFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Caption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Caption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpFilter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpFilter.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpFilter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpFilter_Statics::NewProp_Caption_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpFilter.h" },
		{ "ToolTip", "Caption for this filter." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterpFilter_Statics::NewProp_Caption = { UE4CodeGen_Private::EPropertyClass::Str, "Caption", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpFilter, Caption), METADATA_PARAMS(Z_Construct_UClass_UInterpFilter_Statics::NewProp_Caption_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Statics::NewProp_Caption_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpFilter_Statics::NewProp_Caption,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpFilter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpFilter_Statics::ClassParams = {
		&UInterpFilter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		Z_Construct_UClass_UInterpFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInterpFilter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpFilter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpFilter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpFilter, 3097138688);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpFilter(Z_Construct_UClass_UInterpFilter, &UInterpFilter::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpFilter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpFilter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
