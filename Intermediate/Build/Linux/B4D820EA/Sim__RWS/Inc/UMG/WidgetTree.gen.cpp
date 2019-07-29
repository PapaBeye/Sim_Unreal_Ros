// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Blueprint/WidgetTree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetTree() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWidgetTree_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetTree();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	void UWidgetTree::StaticRegisterNativesUWidgetTree()
	{
	}
	UClass* Z_Construct_UClass_UWidgetTree_NoRegister()
	{
		return UWidgetTree::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllWidgets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllWidgets_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllWidgets_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTree_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/WidgetTree.h" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetTree.h" },
		{ "ToolTip", "The widget tree manages the collection of widgets in a blueprint widget." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetTree.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets = { UE4CodeGen_Private::EPropertyClass::Array, "AllWidgets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020088800000008, 1, nullptr, STRUCT_OFFSET(UWidgetTree, AllWidgets), METADATA_PARAMS(Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetTree.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AllWidgets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0002000800080008, 1, nullptr, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_Inner_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTree_Statics::NewProp_RootWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetTree.h" },
		{ "ToolTip", "The root widget of the tree" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetTree_Statics::NewProp_RootWidget = { UE4CodeGen_Private::EPropertyClass::Object, "RootWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0012000000080008, 1, nullptr, STRUCT_OFFSET(UWidgetTree, RootWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetTree_Statics::NewProp_RootWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetTree_Statics::NewProp_RootWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetTree_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetTree_Statics::NewProp_RootWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetTree>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetTree_Statics::ClassParams = {
		&UWidgetTree::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_UWidgetTree_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UWidgetTree_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetTree_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetTree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetTree_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetTree, 262074145);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetTree(Z_Construct_UClass_UWidgetTree, &UWidgetTree::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetTree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetTree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
