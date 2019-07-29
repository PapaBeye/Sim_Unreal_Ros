// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Distributions/DistributionFloatParameterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatParameterBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatParameterBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatParameterBase();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstant();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_DistributionParamMode();
// End Cross Module References
	void UDistributionFloatParameterBase::StaticRegisterNativesUDistributionFloatParameterBase()
	{
	}
	UClass* Z_Construct_UClass_UDistributionFloatParameterBase_NoRegister()
	{
		return UDistributionFloatParameterBase::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionFloatParameterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParamMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionFloatParameterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionFloatConstant,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatParameterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Distributions/DistributionFloatParameterBase.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParameterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_ParamMode_MetaData[] = {
		{ "Category", "DistributionFloatParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParameterBase.h" },
		{ "ToolTip", "todo document" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_ParamMode = { UE4CodeGen_Private::EPropertyClass::Byte, "ParamMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionFloatParameterBase, ParamMode), Z_Construct_UEnum_Engine_DistributionParamMode, METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_ParamMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_ParamMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MaxOutput_MetaData[] = {
		{ "Category", "DistributionFloatParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParameterBase.h" },
		{ "ToolTip", "todo document" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MaxOutput = { UE4CodeGen_Private::EPropertyClass::Float, "MaxOutput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionFloatParameterBase, MaxOutput), METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MaxOutput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MaxOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MinOutput_MetaData[] = {
		{ "Category", "DistributionFloatParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParameterBase.h" },
		{ "ToolTip", "todo document" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MinOutput = { UE4CodeGen_Private::EPropertyClass::Float, "MinOutput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionFloatParameterBase, MinOutput), METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MinOutput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MinOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MaxInput_MetaData[] = {
		{ "Category", "DistributionFloatParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParameterBase.h" },
		{ "ToolTip", "todo document" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MaxInput = { UE4CodeGen_Private::EPropertyClass::Float, "MaxInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionFloatParameterBase, MaxInput), METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MaxInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MaxInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MinInput_MetaData[] = {
		{ "Category", "DistributionFloatParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParameterBase.h" },
		{ "ToolTip", "todo document" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MinInput = { UE4CodeGen_Private::EPropertyClass::Float, "MinInput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionFloatParameterBase, MinInput), METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MinInput_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MinInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "DistributionFloatParameterBase" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatParameterBase.h" },
		{ "ToolTip", "todo document" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UDistributionFloatParameterBase, ParameterName), METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_ParameterName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionFloatParameterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_ParamMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MaxOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MinOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MaxInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_MinInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatParameterBase_Statics::NewProp_ParameterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionFloatParameterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloatParameterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloatParameterBase_Statics::ClassParams = {
		&UDistributionFloatParameterBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x003030A1u,
		nullptr, 0,
		Z_Construct_UClass_UDistributionFloatParameterBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatParameterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionFloatParameterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDistributionFloatParameterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDistributionFloatParameterBase, 4014485178);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDistributionFloatParameterBase(Z_Construct_UClass_UDistributionFloatParameterBase, &UDistributionFloatParameterBase::StaticClass, TEXT("/Script/Engine"), TEXT("UDistributionFloatParameterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatParameterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
