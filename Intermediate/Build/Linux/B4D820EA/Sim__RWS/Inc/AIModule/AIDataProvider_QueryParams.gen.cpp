// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/DataProviders/AIDataProvider_QueryParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIDataProvider_QueryParams() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_QueryParams_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_QueryParams();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAIDataProvider_QueryParams::StaticRegisterNativesUAIDataProvider_QueryParams()
	{
	}
	UClass* Z_Construct_UClass_UAIDataProvider_QueryParams_NoRegister()
	{
		return UAIDataProvider_QueryParams::StaticClass();
	}
	struct Z_Construct_UClass_UAIDataProvider_QueryParams_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[];
#endif
		static void NewProp_BoolValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider" },
		{ "DisplayName", "Query Params" },
		{ "IncludePath", "DataProviders/AIDataProvider_QueryParams.h" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
		{ "ToolTip", "AIDataProvider_QueryParams is used with environment queries\n\nIt allows defining simple parameters for running query,\nwhich are not tied to any specific pawn, but defined\nfor every query execution." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
	};
#endif
	void Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((UAIDataProvider_QueryParams*)Obj)->BoolValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue = { UE4CodeGen_Private::EPropertyClass::Bool, "BoolValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAIDataProvider_QueryParams), &Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_IntValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_IntValue = { UE4CodeGen_Private::EPropertyClass::Int, "IntValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAIDataProvider_QueryParams, IntValue), METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_IntValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_IntValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_FloatValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_FloatValue = { UE4CodeGen_Private::EPropertyClass::Float, "FloatValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAIDataProvider_QueryParams, FloatValue), METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_FloatValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "Provider" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
		{ "ToolTip", "Arbitrary name this query parameter will be exposed as to outside world (like BT nodes)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_ParamName = { UE4CodeGen_Private::EPropertyClass::Name, "ParamName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAIDataProvider_QueryParams, ParamName), METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_ParamName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_ParamName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_IntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_FloatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_ParamName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIDataProvider_QueryParams>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::ClassParams = {
		&UAIDataProvider_QueryParams::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001030A0u,
		nullptr, 0,
		Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIDataProvider_QueryParams()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIDataProvider_QueryParams, 1602471746);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIDataProvider_QueryParams(Z_Construct_UClass_UAIDataProvider_QueryParams, &UAIDataProvider_QueryParams::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIDataProvider_QueryParams"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIDataProvider_QueryParams);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
