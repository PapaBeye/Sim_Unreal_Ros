// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/BlendSpaceBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpaceBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENotifyTriggerMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendSpaceAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneInterpolation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGridBlendSample();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditorElement();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSample();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpolationParameter();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFilterInterpolationType();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset();
// End Cross Module References
	static UEnum* ENotifyTriggerMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENotifyTriggerMode, Z_Construct_UPackage__Script_Engine(), TEXT("ENotifyTriggerMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENotifyTriggerMode(ENotifyTriggerMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ENotifyTriggerMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ENotifyTriggerMode_CRC() { return 1192697806U; }
	UEnum* Z_Construct_UEnum_Engine_ENotifyTriggerMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENotifyTriggerMode"), 0, Get_Z_Construct_UEnum_Engine_ENotifyTriggerMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENotifyTriggerMode::AllAnimations", (int64)ENotifyTriggerMode::AllAnimations },
				{ "ENotifyTriggerMode::HighestWeightedAnimation", (int64)ENotifyTriggerMode::HighestWeightedAnimation },
				{ "ENotifyTriggerMode::None", (int64)ENotifyTriggerMode::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllAnimations.DisplayName", "All Animations" },
				{ "HighestWeightedAnimation.DisplayName", "Highest Weighted Animation" },
				{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ENotifyTriggerMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ENotifyTriggerMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBlendSpaceAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlendSpaceAxis, Z_Construct_UPackage__Script_Engine(), TEXT("EBlendSpaceAxis"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBlendSpaceAxis(EBlendSpaceAxis_StaticEnum, TEXT("/Script/Engine"), TEXT("EBlendSpaceAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBlendSpaceAxis_CRC() { return 2845311063U; }
	UEnum* Z_Construct_UEnum_Engine_EBlendSpaceAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBlendSpaceAxis"), 0, Get_Z_Construct_UEnum_Engine_EBlendSpaceAxis_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BSA_None", (int64)BSA_None },
				{ "BSA_X", (int64)BSA_X },
				{ "BSA_Y", (int64)BSA_Y },
				{ "BSA_Max", (int64)BSA_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BSA_None.DisplayName", "None" },
				{ "BSA_X.DisplayName", "Horizontal (X) Axis" },
				{ "BSA_Y.DisplayName", "Vertical (Y) Axis" },
				{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
				{ "ToolTip", "Interpolation data types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBlendSpaceAxis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBlendSpaceAxis",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPerBoneInterpolation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPerBoneInterpolation_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerBoneInterpolation, Z_Construct_UPackage__Script_Engine(), TEXT("PerBoneInterpolation"), sizeof(FPerBoneInterpolation), Get_Z_Construct_UScriptStruct_FPerBoneInterpolation_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerBoneInterpolation(FPerBoneInterpolation::StaticStruct, TEXT("/Script/Engine"), TEXT("PerBoneInterpolation"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPerBoneInterpolation
{
	FScriptStruct_Engine_StaticRegisterNativesFPerBoneInterpolation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerBoneInterpolation")),new UScriptStruct::TCppStructOps<FPerBoneInterpolation>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPerBoneInterpolation;
	struct Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeedPerSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeedPerSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerBoneInterpolation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_InterpolationSpeedPerSec_MetaData[] = {
		{ "Category", "FPerBoneInterpolation" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_InterpolationSpeedPerSec = { UE4CodeGen_Private::EPropertyClass::Float, "InterpolationSpeedPerSec", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPerBoneInterpolation, InterpolationSpeedPerSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_InterpolationSpeedPerSec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_InterpolationSpeedPerSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_BoneReference_MetaData[] = {
		{ "Category", "FPerBoneInterpolation" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_BoneReference = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneReference", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPerBoneInterpolation, BoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_BoneReference_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_BoneReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_InterpolationSpeedPerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::NewProp_BoneReference,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerBoneInterpolation",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPerBoneInterpolation),
		alignof(FPerBoneInterpolation),
		Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerBoneInterpolation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerBoneInterpolation_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerBoneInterpolation"), sizeof(FPerBoneInterpolation), Get_Z_Construct_UScriptStruct_FPerBoneInterpolation_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerBoneInterpolation_CRC() { return 4179548515U; }
class UScriptStruct* FGridBlendSample::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGridBlendSample_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridBlendSample, Z_Construct_UPackage__Script_Engine(), TEXT("GridBlendSample"), sizeof(FGridBlendSample), Get_Z_Construct_UScriptStruct_FGridBlendSample_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGridBlendSample(FGridBlendSample::StaticStruct, TEXT("/Script/Engine"), TEXT("GridBlendSample"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGridBlendSample
{
	FScriptStruct_Engine_StaticRegisterNativesFGridBlendSample()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GridBlendSample")),new UScriptStruct::TCppStructOps<FGridBlendSample>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGridBlendSample;
	struct Z_Construct_UScriptStruct_FGridBlendSample_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridElement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridBlendSample_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "result of how much weight of the grid element *" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridBlendSample>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_BlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "BlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGridBlendSample, BlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_BlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_GridElement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_GridElement = { UE4CodeGen_Private::EPropertyClass::Struct, "GridElement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FGridBlendSample, GridElement), Z_Construct_UScriptStruct_FEditorElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_GridElement_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_GridElement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridBlendSample_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_BlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridBlendSample_Statics::NewProp_GridElement,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridBlendSample_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GridBlendSample",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FGridBlendSample),
		alignof(FGridBlendSample),
		Z_Construct_UScriptStruct_FGridBlendSample_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBlendSample_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridBlendSample_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGridBlendSample_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridBlendSample()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGridBlendSample_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GridBlendSample"), sizeof(FGridBlendSample), Get_Z_Construct_UScriptStruct_FGridBlendSample_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGridBlendSample_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGridBlendSample_CRC() { return 518813753U; }
class UScriptStruct* FEditorElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEditorElement_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorElement, Z_Construct_UPackage__Script_Engine(), TEXT("EditorElement"), sizeof(FEditorElement), Get_Z_Construct_UScriptStruct_FEditorElement_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditorElement(FEditorElement::StaticStruct, TEXT("/Script/Engine"), TEXT("EditorElement"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEditorElement
{
	FScriptStruct_Engine_StaticRegisterNativesFEditorElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EditorElement")),new UScriptStruct::TCppStructOps<FEditorElement>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEditorElement;
	struct Z_Construct_UScriptStruct_FEditorElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Indices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Each elements in the grid" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorElement>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Weights_MetaData[] = {
		{ "Category", "EditorElement" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Weights = { UE4CodeGen_Private::EPropertyClass::Float, "Weights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, CPP_ARRAY_DIM(Weights, FEditorElement), nullptr, STRUCT_OFFSET(FEditorElement, Weights), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Weights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Weights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Indices_MetaData[] = {
		{ "Category", "EditorElement" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Indices = { UE4CodeGen_Private::EPropertyClass::Int, "Indices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, CPP_ARRAY_DIM(Indices, FEditorElement), nullptr, STRUCT_OFFSET(FEditorElement, Indices), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Indices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Indices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Weights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorElement_Statics::NewProp_Indices,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EditorElement",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FEditorElement),
		alignof(FEditorElement),
		Z_Construct_UScriptStruct_FEditorElement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorElement_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorElement_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditorElement_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditorElement"), sizeof(FEditorElement), Get_Z_Construct_UScriptStruct_FEditorElement_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditorElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditorElement_CRC() { return 2482756087U; }
class UScriptStruct* FBlendSample::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlendSample_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendSample, Z_Construct_UPackage__Script_Engine(), TEXT("BlendSample"), sizeof(FBlendSample), Get_Z_Construct_UScriptStruct_FBlendSample_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlendSample(FBlendSample::StaticStruct, TEXT("/Script/Engine"), TEXT("BlendSample"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlendSample
{
	FScriptStruct_Engine_StaticRegisterNativesFBlendSample()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlendSample")),new UScriptStruct::TCppStructOps<FBlendSample>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlendSample;
	struct Z_Construct_UScriptStruct_FBlendSample_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSnapToGrid_MetaData[];
#endif
		static void NewProp_bSnapToGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSnapToGrid;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SampleValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Sample data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendSample_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendSample>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FBlendSample*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsValid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBlendSample), &Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bSnapToGrid_MetaData[] = {
		{ "Category", "BlendSample" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bSnapToGrid_SetBit(void* Obj)
	{
		((FBlendSample*)Obj)->bSnapToGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bSnapToGrid = { UE4CodeGen_Private::EPropertyClass::Bool, "bSnapToGrid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBlendSample), &Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bSnapToGrid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bSnapToGrid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bSnapToGrid_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_RateScale_MetaData[] = {
		{ "Category", "BlendSample" },
		{ "ClampMax", "64.0" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_RateScale = { UE4CodeGen_Private::EPropertyClass::Float, "RateScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBlendSample, RateScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_RateScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_RateScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_SampleValue_MetaData[] = {
		{ "Category", "BlendSample" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "blend 0->x, blend 1->y, blend 2->z" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_SampleValue = { UE4CodeGen_Private::EPropertyClass::Struct, "SampleValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBlendSample, SampleValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_SampleValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_SampleValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "BlendSample" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_Animation = { UE4CodeGen_Private::EPropertyClass::Object, "Animation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBlendSample, Animation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_Animation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_Animation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendSample_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_bSnapToGrid,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_RateScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_SampleValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSample_Statics::NewProp_Animation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendSample_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendSample",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBlendSample),
		alignof(FBlendSample),
		Z_Construct_UScriptStruct_FBlendSample_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSample_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSample_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendSample()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlendSample_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlendSample"), sizeof(FBlendSample), Get_Z_Construct_UScriptStruct_FBlendSample_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlendSample_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlendSample_CRC() { return 640856033U; }
class UScriptStruct* FBlendParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlendParameter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendParameter, Z_Construct_UPackage__Script_Engine(), TEXT("BlendParameter"), sizeof(FBlendParameter), Get_Z_Construct_UScriptStruct_FBlendParameter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlendParameter(FBlendParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("BlendParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlendParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFBlendParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlendParameter")),new UScriptStruct::TCppStructOps<FBlendParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlendParameter;
	struct Z_Construct_UScriptStruct_FBlendParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GridNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_GridNum_MetaData[] = {
		{ "Category", "BlendParameter" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Number of Grid Divisions" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "The number of grid divisions for this parameter (axis)." },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_GridNum = { UE4CodeGen_Private::EPropertyClass::Int, "GridNum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBlendParameter, GridNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_GridNum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_GridNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "BlendParameter" },
		{ "DisplayName", "Maximum Axis Value" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Max value for this parameter." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Max = { UE4CodeGen_Private::EPropertyClass::Float, "Max", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBlendParameter, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Max_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "BlendParameter" },
		{ "DisplayName", "Minimum Axis Value" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Min value for this parameter." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Min = { UE4CodeGen_Private::EPropertyClass::Float, "Min", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBlendParameter, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Min_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "BlendParameter" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBlendParameter, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_GridNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendParameter_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendParameter",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBlendParameter),
		alignof(FBlendParameter),
		Z_Construct_UScriptStruct_FBlendParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlendParameter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlendParameter"), sizeof(FBlendParameter), Get_Z_Construct_UScriptStruct_FBlendParameter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlendParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlendParameter_CRC() { return 2813485508U; }
class UScriptStruct* FInterpolationParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInterpolationParameter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpolationParameter, Z_Construct_UPackage__Script_Engine(), TEXT("InterpolationParameter"), sizeof(FInterpolationParameter), Get_Z_Construct_UScriptStruct_FInterpolationParameter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInterpolationParameter(FInterpolationParameter::StaticStruct, TEXT("/Script/Engine"), TEXT("InterpolationParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInterpolationParameter
{
	FScriptStruct_Engine_StaticRegisterNativesFInterpolationParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InterpolationParameter")),new UScriptStruct::TCppStructOps<FInterpolationParameter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInterpolationParameter;
	struct Z_Construct_UScriptStruct_FInterpolationParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpolationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpolationParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpolationParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationType_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Type of interpolation used for filtering the input value to decide how to get to target." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationType = { UE4CodeGen_Private::EPropertyClass::Byte, "InterpolationType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FInterpolationParameter, InterpolationType), Z_Construct_UEnum_Engine_EFilterInterpolationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationTime_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Interpolation Time for input, when it gets input, it will use this time to interpolate to target, used for smoother interpolation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationTime = { UE4CodeGen_Private::EPropertyClass::Float, "InterpolationTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FInterpolationParameter, InterpolationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterpolationParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpolationParameter_Statics::NewProp_InterpolationTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterpolationParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InterpolationParameter",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FInterpolationParameter),
		alignof(FInterpolationParameter),
		Z_Construct_UScriptStruct_FInterpolationParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpolationParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterpolationParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInterpolationParameter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InterpolationParameter"), sizeof(FInterpolationParameter), Get_Z_Construct_UScriptStruct_FInterpolationParameter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInterpolationParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInterpolationParameter_CRC() { return 520222725U; }
	void UBlendSpaceBase::StaticRegisterNativesUBlendSpaceBase()
	{
	}
	UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister()
	{
		return UBlendSpaceBase::StaticClass();
	}
	struct Z_Construct_UClass_UBlendSpaceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GridSamples;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridSamples_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SampleData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SampleData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleIndexWithMarkers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleIndexWithMarkers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerBoneBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerBoneBlend;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerBoneBlend_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyTriggerMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NotifyTriggerMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetWeightInterpolationSpeedPerSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetWeightInterpolationSpeedPerSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterpolationParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimLength;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewBasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewBasePose;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotationBlendInMeshSpace_MetaData[];
#endif
		static void NewProp_bRotationBlendInMeshSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotationBlendInMeshSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlendSpaceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/BlendSpaceBase.h" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Allows multiple animations to be blended between based on input parameters" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_BlendParameters_MetaData[] = {
		{ "Category", "BlendParametersTest" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Blend Parameters for each axis. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_BlendParameters = { UE4CodeGen_Private::EPropertyClass::Struct, "BlendParameters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, CPP_ARRAY_DIM(BlendParameters, UBlendSpaceBase), nullptr, STRUCT_OFFSET(UBlendSpaceBase, BlendParameters), Z_Construct_UScriptStruct_FBlendParameter, METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_BlendParameters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_BlendParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_GridSamples_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Grid samples, indexing scheme imposed by subclass *" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_GridSamples = { UE4CodeGen_Private::EPropertyClass::Array, "GridSamples", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UBlendSpaceBase, GridSamples), METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_GridSamples_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_GridSamples_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_GridSamples_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GridSamples", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEditorElement, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleData_MetaData[] = {
		{ "Category", "BlendSamples" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Sample animation data *" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleData = { UE4CodeGen_Private::EPropertyClass::Array, "SampleData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBlendSpaceBase, SampleData), METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SampleData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlendSample, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleIndexWithMarkers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Track index to get marker data from. Samples are tested for the suitability of marker based sync\n          during load and if we can use marker based sync we cache an index to a representative sample here" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleIndexWithMarkers = { UE4CodeGen_Private::EPropertyClass::Int, "SampleIndexWithMarkers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UBlendSpaceBase, SampleIndexWithMarkers), METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleIndexWithMarkers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleIndexWithMarkers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PerBoneBlend_MetaData[] = {
		{ "Category", "SampleInterpolation" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Define target weight interpolation per bone. This will blend in different speed per each bone setting" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PerBoneBlend = { UE4CodeGen_Private::EPropertyClass::Array, "PerBoneBlend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBlendSpaceBase, PerBoneBlend), METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PerBoneBlend_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PerBoneBlend_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PerBoneBlend_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PerBoneBlend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPerBoneInterpolation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_NotifyTriggerMode_MetaData[] = {
		{ "Category", "AnimationNotifies" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "The current mode used by the blendspace to decide which animation notifies to fire. Valid options are:\n      - AllAnimations - All notify events will fire\n      - HighestWeightedAnimation - Notify events will only fire from the highest weighted animation\n      - None - No notify events will fire from any animations" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_NotifyTriggerMode = { UE4CodeGen_Private::EPropertyClass::Byte, "NotifyTriggerMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBlendSpaceBase, NotifyTriggerMode), Z_Construct_UEnum_Engine_ENotifyTriggerMode, METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_NotifyTriggerMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_NotifyTriggerMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_TargetWeightInterpolationSpeedPerSec_MetaData[] = {
		{ "Category", "SampleInterpolation" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Target weight interpolation. When target samples are set, how fast you'd like to get to target. Improve target blending.\ni.e. for locomotion, if you interpolate input, when you move from left to right rapidly, you'll interpolate through forward, but if you use target weight interpolation,\nyou'll skip forward, but interpolate between left to right" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_TargetWeightInterpolationSpeedPerSec = { UE4CodeGen_Private::EPropertyClass::Float, "TargetWeightInterpolationSpeedPerSec", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBlendSpaceBase, TargetWeightInterpolationSpeedPerSec), METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_TargetWeightInterpolationSpeedPerSec_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_TargetWeightInterpolationSpeedPerSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_InterpolationParam_MetaData[] = {
		{ "Category", "InputInterpolation" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Input interpolation parameter for all 3 axis, for each axis input, decide how you'd like to interpolate input to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_InterpolationParam = { UE4CodeGen_Private::EPropertyClass::Struct, "InterpolationParam", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, CPP_ARRAY_DIM(InterpolationParam, UBlendSpaceBase), nullptr, STRUCT_OFFSET(UBlendSpaceBase, InterpolationParam), Z_Construct_UScriptStruct_FInterpolationParameter, METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_InterpolationParam_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_InterpolationParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_AnimLength_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "This animation length changes based on current input (resulting in different blend time)*" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_AnimLength = { UE4CodeGen_Private::EPropertyClass::Float, "AnimLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UBlendSpaceBase, AnimLength), METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_AnimLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_AnimLength_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PreviewBasePose_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "Preview Base pose for additive BlendSpace *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PreviewBasePose = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewBasePose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UBlendSpaceBase, PreviewBasePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PreviewBasePose_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PreviewBasePose_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_bRotationBlendInMeshSpace_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/BlendSpaceBase.h" },
		{ "ToolTip", "When you use blend per bone, allows rotation to blend in mesh space. This only works if this does not contain additive animation samples\nThis is more performance intensive" },
	};
#endif
	void Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_bRotationBlendInMeshSpace_SetBit(void* Obj)
	{
		((UBlendSpaceBase*)Obj)->bRotationBlendInMeshSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_bRotationBlendInMeshSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bRotationBlendInMeshSpace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBlendSpaceBase), &Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_bRotationBlendInMeshSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_bRotationBlendInMeshSpace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_bRotationBlendInMeshSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlendSpaceBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_BlendParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_GridSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_GridSamples_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_SampleIndexWithMarkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PerBoneBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PerBoneBlend_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_NotifyTriggerMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_TargetWeightInterpolationSpeedPerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_InterpolationParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_AnimLength,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_PreviewBasePose,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceBase_Statics::NewProp_bRotationBlendInMeshSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlendSpaceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendSpaceBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlendSpaceBase_Statics::ClassParams = {
		&UBlendSpaceBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		nullptr, 0,
		Z_Construct_UClass_UBlendSpaceBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlendSpaceBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlendSpaceBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlendSpaceBase, 2796379087);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlendSpaceBase(Z_Construct_UClass_UBlendSpaceBase, &UBlendSpaceBase::StaticClass, TEXT("/Script/Engine"), TEXT("UBlendSpaceBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendSpaceBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBlendSpaceBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
