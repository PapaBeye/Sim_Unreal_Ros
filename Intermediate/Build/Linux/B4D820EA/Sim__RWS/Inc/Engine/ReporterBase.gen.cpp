// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Debug/ReporterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReporterBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReporterLineStyle();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UReporterBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReporterBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EReporterLineStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReporterLineStyle, Z_Construct_UPackage__Script_Engine(), TEXT("EReporterLineStyle"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReporterLineStyle(EReporterLineStyle_StaticEnum, TEXT("/Script/Engine"), TEXT("EReporterLineStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EReporterLineStyle_CRC() { return 4169700968U; }
	UEnum* Z_Construct_UEnum_Engine_EReporterLineStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReporterLineStyle"), 0, Get_Z_Construct_UEnum_Engine_EReporterLineStyle_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReporterLineStyle::Line", (int64)EReporterLineStyle::Line },
				{ "EReporterLineStyle::Dash", (int64)EReporterLineStyle::Dash },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Debug/ReporterBase.h" },
				{ "ToolTip", "Draw styles for lines." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EReporterLineStyle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EReporterLineStyle::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UReporterBase::StaticRegisterNativesUReporterBase()
	{
	}
	UClass* Z_Construct_UClass_UReporterBase_NoRegister()
	{
		return UReporterBase::StaticClass();
	}
	struct Z_Construct_UClass_UReporterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReporterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReporterBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Debug/ReporterBase.h" },
		{ "ModuleRelativePath", "Classes/Debug/ReporterBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReporterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReporterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReporterBase_Statics::ClassParams = {
		&UReporterBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UReporterBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UReporterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReporterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReporterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReporterBase, 3497308722);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReporterBase(Z_Construct_UClass_UReporterBase, &UReporterBase::StaticClass, TEXT("/Script/Engine"), TEXT("UReporterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReporterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
