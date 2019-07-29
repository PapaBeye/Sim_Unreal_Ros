// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeManagement/Public/FixedFrameRateCustomTimeStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFixedFrameRateCustomTimeStep() {}
// Cross Module References
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UFixedFrameRateCustomTimeStep_NoRegister();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UFixedFrameRateCustomTimeStep();
	ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep();
	UPackage* Z_Construct_UPackage__Script_TimeManagement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
// End Cross Module References
	void UFixedFrameRateCustomTimeStep::StaticRegisterNativesUFixedFrameRateCustomTimeStep()
	{
	}
	UClass* Z_Construct_UClass_UFixedFrameRateCustomTimeStep_NoRegister()
	{
		return UFixedFrameRateCustomTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FixedFrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineCustomTimeStep,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FixedFrameRateCustomTimeStep.h" },
		{ "ModuleRelativePath", "Public/FixedFrameRateCustomTimeStep.h" },
		{ "ToolTip", "Class to control the Engine TimeStep via a FixedFrameRate" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::NewProp_FixedFrameRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/FixedFrameRateCustomTimeStep.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::NewProp_FixedFrameRate = { UE4CodeGen_Private::EPropertyClass::Struct, "FixedFrameRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UFixedFrameRateCustomTimeStep, FixedFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::NewProp_FixedFrameRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::NewProp_FixedFrameRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::NewProp_FixedFrameRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFixedFrameRateCustomTimeStep>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::ClassParams = {
		&UFixedFrameRateCustomTimeStep::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		nullptr, 0,
		Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFixedFrameRateCustomTimeStep()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFixedFrameRateCustomTimeStep_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFixedFrameRateCustomTimeStep, 2301398628);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFixedFrameRateCustomTimeStep(Z_Construct_UClass_UFixedFrameRateCustomTimeStep, &UFixedFrameRateCustomTimeStep::StaticClass, TEXT("/Script/TimeManagement"), TEXT("UFixedFrameRateCustomTimeStep"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFixedFrameRateCustomTimeStep);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
