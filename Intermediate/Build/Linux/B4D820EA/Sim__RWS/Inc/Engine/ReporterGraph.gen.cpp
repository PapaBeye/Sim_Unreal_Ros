// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Debug/ReporterGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReporterGraph() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELegendPosition();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGraphDataStyle();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGraphAxisStyle();
	ENGINE_API UClass* Z_Construct_UClass_UReporterGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReporterGraph();
	ENGINE_API UClass* Z_Construct_UClass_UReporterBase();
// End Cross Module References
	static UEnum* ELegendPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELegendPosition, Z_Construct_UPackage__Script_Engine(), TEXT("ELegendPosition"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELegendPosition(ELegendPosition_StaticEnum, TEXT("/Script/Engine"), TEXT("ELegendPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ELegendPosition_CRC() { return 2822345031U; }
	UEnum* Z_Construct_UEnum_Engine_ELegendPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELegendPosition"), 0, Get_Z_Construct_UEnum_Engine_ELegendPosition_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELegendPosition::Outside", (int64)ELegendPosition::Outside },
				{ "ELegendPosition::Inside", (int64)ELegendPosition::Inside },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Debug/ReporterGraph.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELegendPosition",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ELegendPosition::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGraphDataStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGraphDataStyle, Z_Construct_UPackage__Script_Engine(), TEXT("EGraphDataStyle"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGraphDataStyle(EGraphDataStyle_StaticEnum, TEXT("/Script/Engine"), TEXT("EGraphDataStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EGraphDataStyle_CRC() { return 3132760621U; }
	UEnum* Z_Construct_UEnum_Engine_EGraphDataStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGraphDataStyle"), 0, Get_Z_Construct_UEnum_Engine_EGraphDataStyle_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGraphDataStyle::Lines", (int64)EGraphDataStyle::Lines },
				{ "EGraphDataStyle::Filled", (int64)EGraphDataStyle::Filled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Debug/ReporterGraph.h" },
				{ "ToolTip", "Draw styles for data." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGraphDataStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EGraphDataStyle::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGraphAxisStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGraphAxisStyle, Z_Construct_UPackage__Script_Engine(), TEXT("EGraphAxisStyle"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGraphAxisStyle(EGraphAxisStyle_StaticEnum, TEXT("/Script/Engine"), TEXT("EGraphAxisStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EGraphAxisStyle_CRC() { return 3272897144U; }
	UEnum* Z_Construct_UEnum_Engine_EGraphAxisStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGraphAxisStyle"), 0, Get_Z_Construct_UEnum_Engine_EGraphAxisStyle_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGraphAxisStyle::Lines", (int64)EGraphAxisStyle::Lines },
				{ "EGraphAxisStyle::Notches", (int64)EGraphAxisStyle::Notches },
				{ "EGraphAxisStyle::Grid", (int64)EGraphAxisStyle::Grid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Debug/ReporterGraph.h" },
				{ "ToolTip", "Draw styles for axes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGraphAxisStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EGraphAxisStyle::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UReporterGraph::StaticRegisterNativesUReporterGraph()
	{
	}
	UClass* Z_Construct_UClass_UReporterGraph_NoRegister()
	{
		return UReporterGraph::StaticClass();
	}
	struct Z_Construct_UClass_UReporterGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReporterGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReporterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReporterGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Debug/ReporterGraph.h" },
		{ "ModuleRelativePath", "Classes/Debug/ReporterGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReporterGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReporterGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReporterGraph_Statics::ClassParams = {
		&UReporterGraph::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UReporterGraph_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReporterGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReporterGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReporterGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReporterGraph, 251532108);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReporterGraph(Z_Construct_UClass_UReporterGraph, &UReporterGraph::StaticClass, TEXT("/Script/Engine"), TEXT("UReporterGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReporterGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
