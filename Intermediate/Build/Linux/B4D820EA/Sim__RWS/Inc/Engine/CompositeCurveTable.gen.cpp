// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/CompositeCurveTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositeCurveTable() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCompositeCurveTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCompositeCurveTable();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
// End Cross Module References
	void UCompositeCurveTable::StaticRegisterNativesUCompositeCurveTable()
	{
	}
	UClass* Z_Construct_UClass_UCompositeCurveTable_NoRegister()
	{
		return UCompositeCurveTable::StaticClass();
	}
	struct Z_Construct_UClass_UCompositeCurveTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldParentTables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OldParentTables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldParentTables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentTables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentTables_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositeCurveTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveTable,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCurveTable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/CompositeCurveTable.h" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeCurveTable.h" },
		{ "ToolTip", "Curve table composed of a stack of other curve tables." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/CompositeCurveTable.h" },
		{ "ToolTip", "temporary copy used to detect changes so we can update delegates correctly on removal" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables = { UE4CodeGen_Private::EPropertyClass::Array, "OldParentTables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UCompositeCurveTable, OldParentTables), METADATA_PARAMS(Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OldParentTables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_MetaData[] = {
		{ "Category", "Tables" },
		{ "ModuleRelativePath", "Classes/Engine/CompositeCurveTable.h" },
		{ "ToolTip", "Parent tables\nTables with higher indices override data in tables with lower indices" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables = { UE4CodeGen_Private::EPropertyClass::Array, "ParentTables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCompositeCurveTable, ParentTables), METADATA_PARAMS(Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ParentTables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositeCurveTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_OldParentTables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositeCurveTable_Statics::NewProp_ParentTables_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositeCurveTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositeCurveTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompositeCurveTable_Statics::ClassParams = {
		&UCompositeCurveTable::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		nullptr, 0,
		Z_Construct_UClass_UCompositeCurveTable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCompositeCurveTable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCompositeCurveTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositeCurveTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompositeCurveTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompositeCurveTable, 1963840296);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompositeCurveTable(Z_Construct_UClass_UCompositeCurveTable, &UCompositeCurveTable::StaticClass, TEXT("/Script/Engine"), TEXT("UCompositeCurveTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositeCurveTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
