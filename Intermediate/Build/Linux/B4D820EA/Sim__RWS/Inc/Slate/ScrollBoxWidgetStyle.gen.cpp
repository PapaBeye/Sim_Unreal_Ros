// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Framework/Styling/ScrollBoxWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrollBoxWidgetStyle() {}
// Cross Module References
	SLATE_API UClass* Z_Construct_UClass_UScrollBoxWidgetStyle_NoRegister();
	SLATE_API UClass* Z_Construct_UClass_UScrollBoxWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	UPackage* Z_Construct_UPackage__Script_Slate();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBoxStyle();
// End Cross Module References
	void UScrollBoxWidgetStyle::StaticRegisterNativesUScrollBoxWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UScrollBoxWidgetStyle_NoRegister()
	{
		return UScrollBoxWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UScrollBoxWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollBoxStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScrollBoxStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/ScrollBoxWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ScrollBoxWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::NewProp_ScrollBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ScrollBoxWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the scrollbox's appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::NewProp_ScrollBoxStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "ScrollBoxStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UScrollBoxWidgetStyle, ScrollBoxStyle), Z_Construct_UScriptStruct_FScrollBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::NewProp_ScrollBoxStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::NewProp_ScrollBoxStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::NewProp_ScrollBoxStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScrollBoxWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::ClassParams = {
		&UScrollBoxWidgetStyle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScrollBoxWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScrollBoxWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScrollBoxWidgetStyle, 3520983595);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScrollBoxWidgetStyle(Z_Construct_UClass_UScrollBoxWidgetStyle, &UScrollBoxWidgetStyle::StaticClass, TEXT("/Script/Slate"), TEXT("UScrollBoxWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBoxWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
