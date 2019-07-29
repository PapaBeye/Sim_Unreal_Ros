// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/PanelSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePanelSlot() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UPanelSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UMG_API UClass* Z_Construct_UClass_UVisual();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
// End Cross Module References
	void UPanelSlot::StaticRegisterNativesUPanelSlot()
	{
	}
	UClass* Z_Construct_UClass_UPanelSlot_NoRegister()
	{
		return UPanelSlot::StaticClass();
	}
	struct Z_Construct_UClass_UPanelSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPanelSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVisual,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPanelSlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Components/PanelSlot.h" },
		{ "ModuleRelativePath", "Public/Components/PanelSlot.h" },
		{ "ToolTip", "The base class for all Slots in UMG." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPanelSlot_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/PanelSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPanelSlot_Statics::NewProp_Content = { UE4CodeGen_Private::EPropertyClass::Object, "Content", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0012000000080008, 1, nullptr, STRUCT_OFFSET(UPanelSlot, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPanelSlot_Statics::NewProp_Content_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPanelSlot_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPanelSlot_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/PanelSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPanelSlot_Statics::NewProp_Parent = { UE4CodeGen_Private::EPropertyClass::Object, "Parent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0012000000080008, 1, nullptr, STRUCT_OFFSET(UPanelSlot, Parent), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPanelSlot_Statics::NewProp_Parent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPanelSlot_Statics::NewProp_Parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPanelSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPanelSlot_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPanelSlot_Statics::NewProp_Parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPanelSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPanelSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPanelSlot_Statics::ClassParams = {
		&UPanelSlot::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UPanelSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPanelSlot_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPanelSlot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPanelSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPanelSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPanelSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPanelSlot, 2328516944);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPanelSlot(Z_Construct_UClass_UPanelSlot, &UPanelSlot::StaticClass, TEXT("/Script/UMG"), TEXT("UPanelSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPanelSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
