// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCapture/Public/Protocols/CompositionGraphCaptureProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositionGraphCaptureProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UEnum* Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositionGraphCapturePasses();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UCompositionGraphCaptureProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UCompositionGraphCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	static UEnum* EHDRCaptureGamut_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut, Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("EHDRCaptureGamut"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHDRCaptureGamut(EHDRCaptureGamut_StaticEnum, TEXT("/Script/MovieSceneCapture"), TEXT("EHDRCaptureGamut"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_CRC() { return 4217162501U; }
	UEnum* Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneCapture();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHDRCaptureGamut"), 0, Get_Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HCGM_Rec709", (int64)HCGM_Rec709 },
				{ "HCGM_P3DCI", (int64)HCGM_P3DCI },
				{ "HCGM_Rec2020", (int64)HCGM_Rec2020 },
				{ "HCGM_ACES", (int64)HCGM_ACES },
				{ "HCGM_ACEScg", (int64)HCGM_ACEScg },
				{ "HCGM_Linear", (int64)HCGM_Linear },
				{ "HCGM_MAX", (int64)HCGM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HCGM_ACES.DisplayName", "ACES" },
				{ "HCGM_ACEScg.DisplayName", "ACEScg" },
				{ "HCGM_Linear.DisplayName", "Linear" },
				{ "HCGM_P3DCI.DisplayName", "P3 D65" },
				{ "HCGM_Rec2020.DisplayName", "Rec.2020" },
				{ "HCGM_Rec709.DisplayName", "Rec.709 / sRGB" },
				{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
				{ "ToolTip", "Used by UCompositionGraphCaptureSettings. Matches gamut oreder in TonemapCommon.usf OuputGamutMappingMatrix()" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneCapture,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHDRCaptureGamut",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EHDRCaptureGamut",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FCompositionGraphCapturePasses::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENECAPTURE_API uint32 Get_Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses, Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("CompositionGraphCapturePasses"), sizeof(FCompositionGraphCapturePasses), Get_Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompositionGraphCapturePasses(FCompositionGraphCapturePasses::StaticStruct, TEXT("/Script/MovieSceneCapture"), TEXT("CompositionGraphCapturePasses"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneCapture_StaticRegisterNativesFCompositionGraphCapturePasses
{
	FScriptStruct_MovieSceneCapture_StaticRegisterNativesFCompositionGraphCapturePasses()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CompositionGraphCapturePasses")),new UScriptStruct::TCppStructOps<FCompositionGraphCapturePasses>);
	}
} ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCompositionGraphCapturePasses;
	struct Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositionGraphCapturePasses>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Composition Graph Settings" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "List of passes to record by name." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Array, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCompositionGraphCapturePasses, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
		nullptr,
		&NewStructOps,
		"CompositionGraphCapturePasses",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCompositionGraphCapturePasses),
		alignof(FCompositionGraphCapturePasses),
		Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompositionGraphCapturePasses()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneCapture();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompositionGraphCapturePasses"), sizeof(FCompositionGraphCapturePasses), Get_Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_CRC() { return 2682856618U; }
	void UCompositionGraphCaptureProtocol::StaticRegisterNativesUCompositionGraphCaptureProtocol()
	{
	}
	UClass* Z_Construct_UClass_UCompositionGraphCaptureProtocol_NoRegister()
	{
		return UCompositionGraphCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessingMaterialPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostProcessingMaterialPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableScreenPercentage_MetaData[];
#endif
		static void NewProp_bDisableScreenPercentage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableScreenPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessingMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessingMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureGamut_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CaptureGamut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HDRCompressionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HDRCompressionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureFramesInHDR_MetaData[];
#endif
		static void NewProp_bCaptureFramesInHDR_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureFramesInHDR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeRenderPasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IncludeRenderPasses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "CustomRenderPasses" },
		{ "DisplayName", "Custom Render Passes" },
		{ "IncludePath", "Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterialPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterialPtr = { UE4CodeGen_Private::EPropertyClass::Object, "PostProcessingMaterialPtr", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UCompositionGraphCaptureProtocol, PostProcessingMaterialPtr), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterialPtr_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterialPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage_MetaData[] = {
		{ "Category", "Composition Graph Options" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "Whether to disable screen percentage" },
	};
#endif
	void Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage_SetBit(void* Obj)
	{
		((UCompositionGraphCaptureProtocol*)Obj)->bDisableScreenPercentage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableScreenPercentage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCompositionGraphCaptureProtocol), &Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterial_MetaData[] = {
		{ "AllowedClasses", "" },
		{ "Category", "Composition Graph Options" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "Custom post processing material to use for rendering" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterial = { UE4CodeGen_Private::EPropertyClass::Struct, "PostProcessingMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCompositionGraphCaptureProtocol, PostProcessingMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_CaptureGamut_MetaData[] = {
		{ "Category", "Composition Graph Options" },
		{ "EditCondition", "bCaptureFramesInHDR" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "The color gamut to use when storing HDR captured data. The gamut depends on whether the bCaptureFramesInHDR option is enabled." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_CaptureGamut = { UE4CodeGen_Private::EPropertyClass::Byte, "CaptureGamut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCompositionGraphCaptureProtocol, CaptureGamut), Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut, METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_CaptureGamut_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_CaptureGamut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_HDRCompressionQuality_MetaData[] = {
		{ "Category", "Composition Graph Options" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bCaptureFramesInHDR" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "Compression Quality for HDR Frames (0 for no compression, 1 for default compression which can be slow)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_HDRCompressionQuality = { UE4CodeGen_Private::EPropertyClass::Int, "HDRCompressionQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCompositionGraphCaptureProtocol, HDRCompressionQuality), METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_HDRCompressionQuality_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_HDRCompressionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR_MetaData[] = {
		{ "Category", "Composition Graph Options" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "Whether to capture the frames as HDR textures (*.exr format)" },
	};
#endif
	void Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR_SetBit(void* Obj)
	{
		((UCompositionGraphCaptureProtocol*)Obj)->bCaptureFramesInHDR = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR = { UE4CodeGen_Private::EPropertyClass::Bool, "bCaptureFramesInHDR", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCompositionGraphCaptureProtocol), &Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_IncludeRenderPasses_MetaData[] = {
		{ "Category", "Composition Graph Options" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "A list of render passes to include in the capture. Leave empty to export all available passes." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_IncludeRenderPasses = { UE4CodeGen_Private::EPropertyClass::Struct, "IncludeRenderPasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UCompositionGraphCaptureProtocol, IncludeRenderPasses), Z_Construct_UScriptStruct_FCompositionGraphCapturePasses, METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_IncludeRenderPasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_IncludeRenderPasses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterialPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_CaptureGamut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_HDRCompressionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_IncludeRenderPasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositionGraphCaptureProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::ClassParams = {
		&UCompositionGraphCaptureProtocol::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001004A4u,
		nullptr, 0,
		Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::PropPointers),
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositionGraphCaptureProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompositionGraphCaptureProtocol, 2665457479);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompositionGraphCaptureProtocol(Z_Construct_UClass_UCompositionGraphCaptureProtocol, &UCompositionGraphCaptureProtocol::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UCompositionGraphCaptureProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositionGraphCaptureProtocol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
