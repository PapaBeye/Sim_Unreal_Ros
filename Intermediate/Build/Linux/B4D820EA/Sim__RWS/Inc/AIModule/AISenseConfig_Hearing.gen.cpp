// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISenseConfig_Hearing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Hearing() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Hearing_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UAISenseConfig_Hearing::StaticRegisterNativesUAISenseConfig_Hearing()
	{
	}
	UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister()
	{
		return UAISenseConfig_Hearing::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseConfig_Hearing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectionByAffiliation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DetectionByAffiliation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLoSHearing_MetaData[];
#endif
		static void NewProp_bUseLoSHearing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLoSHearing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoSHearingRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoSHearingRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HearingRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HearingRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Implementation_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Implementation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseConfig_Hearing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Hearing_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "AI Hearing config" },
		{ "IncludePath", "Perception/AISenseConfig_Hearing.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_DetectionByAffiliation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_DetectionByAffiliation = { UE4CodeGen_Private::EPropertyClass::Struct, "DetectionByAffiliation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000014015, 1, nullptr, STRUCT_OFFSET(UAISenseConfig_Hearing, DetectionByAffiliation), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_DetectionByAffiliation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_DetectionByAffiliation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing_MetaData[] = {
		{ "Category", "Sense" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
		{ "ToolTip", "Warning: has significant runtime cost" },
	};
#endif
	void Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing_SetBit(void* Obj)
	{
		((UAISenseConfig_Hearing*)Obj)->bUseLoSHearing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLoSHearing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UAISenseConfig_Hearing), &Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_LoSHearingRange_MetaData[] = {
		{ "Category", "Sense" },
		{ "EditCondition", "bUseLoSHearing" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_LoSHearingRange = { UE4CodeGen_Private::EPropertyClass::Float, "LoSHearingRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAISenseConfig_Hearing, LoSHearingRange), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_LoSHearingRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_LoSHearingRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_HearingRange_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_HearingRange = { UE4CodeGen_Private::EPropertyClass::Float, "HearingRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UAISenseConfig_Hearing, HearingRange), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_HearingRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_HearingRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_Implementation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Hearing.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_Implementation = { UE4CodeGen_Private::EPropertyClass::Class, "Implementation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000002014015, 1, nullptr, STRUCT_OFFSET(UAISenseConfig_Hearing, Implementation), Z_Construct_UClass_UAISense_Hearing_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_Implementation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_Implementation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Hearing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_DetectionByAffiliation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_bUseLoSHearing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_LoSHearingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_HearingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Hearing_Statics::NewProp_Implementation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseConfig_Hearing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Hearing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Hearing_Statics::ClassParams = {
		&UAISenseConfig_Hearing::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001010A4u,
		nullptr, 0,
		Z_Construct_UClass_UAISenseConfig_Hearing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Hearing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseConfig_Hearing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISenseConfig_Hearing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISenseConfig_Hearing, 4096740975);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISenseConfig_Hearing(Z_Construct_UClass_UAISenseConfig_Hearing, &UAISenseConfig_Hearing::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISenseConfig_Hearing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Hearing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
