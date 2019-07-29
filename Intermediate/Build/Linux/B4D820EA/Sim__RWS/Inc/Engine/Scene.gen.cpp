// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Scene.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScene() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBloomMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAntiAliasingMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDepthOfFieldMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWeightedBlendables();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWeightedBlendable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraExposureSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLensSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLensImperfectionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLensBloomSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConvolutionBloomSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGaussianSumBloomSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilmStockSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FColorGradingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FColorGradePerRangeSettings();
	ENGINE_API UClass* Z_Construct_UClass_UScene_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UScene();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ELightUnits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELightUnits, Z_Construct_UPackage__Script_Engine(), TEXT("ELightUnits"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELightUnits(ELightUnits_StaticEnum, TEXT("/Script/Engine"), TEXT("ELightUnits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ELightUnits_CRC() { return 835610391U; }
	UEnum* Z_Construct_UEnum_Engine_ELightUnits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELightUnits"), 0, Get_Z_Construct_UEnum_Engine_ELightUnits_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELightUnits::Unitless", (int64)ELightUnits::Unitless },
				{ "ELightUnits::Candelas", (int64)ELightUnits::Candelas },
				{ "ELightUnits::Lumens", (int64)ELightUnits::Lumens },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELightUnits",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ELightUnits",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBloomMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBloomMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EBloomMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBloomMethod(EBloomMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EBloomMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBloomMethod_CRC() { return 1312194533U; }
	UEnum* Z_Construct_UEnum_Engine_EBloomMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBloomMethod"), 0, Get_Z_Construct_UEnum_Engine_EBloomMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BM_SOG", (int64)BM_SOG },
				{ "BM_FFT", (int64)BM_FFT },
				{ "BM_MAX", (int64)BM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BM_FFT.DisplayName", "Convolution" },
				{ "BM_FFT.ToolTip", "Fast Fourier Transform Image based convolution, intended for cinematics (too expensive for games)" },
				{ "BM_SOG.DisplayName", "Standard" },
				{ "BM_SOG.ToolTip", "Sum of Gaussian formulation" },
				{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBloomMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBloomMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAutoExposureMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAutoExposureMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EAutoExposureMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutoExposureMethod(EAutoExposureMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EAutoExposureMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAutoExposureMethod_CRC() { return 2974802229U; }
	UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutoExposureMethod"), 0, Get_Z_Construct_UEnum_Engine_EAutoExposureMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AEM_Histogram", (int64)AEM_Histogram },
				{ "AEM_Basic", (int64)AEM_Basic },
				{ "AEM_Manual", (int64)AEM_Manual },
				{ "AEM_MAX", (int64)AEM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AEM_Basic.DisplayName", "Auto Exposure Basic" },
				{ "AEM_Basic.ToolTip", "Not supported on mobile, faster method that computes single value by downsampling" },
				{ "AEM_Histogram.DisplayName", "Auto Exposure Histogram" },
				{ "AEM_Histogram.ToolTip", "Not supported on mobile, requires compute shader to construct 64 bin histogram" },
				{ "AEM_Manual.DisplayName", "Manual" },
				{ "AEM_Manual.ToolTip", "Uses camera settings." },
				{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
				{ "ToolTip", "Used by FPostProcessSettings Auto Exposure" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAutoExposureMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EAutoExposureMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAntiAliasingMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAntiAliasingMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EAntiAliasingMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAntiAliasingMethod(EAntiAliasingMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EAntiAliasingMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAntiAliasingMethod_CRC() { return 2627931674U; }
	UEnum* Z_Construct_UEnum_Engine_EAntiAliasingMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAntiAliasingMethod"), 0, Get_Z_Construct_UEnum_Engine_EAntiAliasingMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AAM_None", (int64)AAM_None },
				{ "AAM_FXAA", (int64)AAM_FXAA },
				{ "AAM_TemporalAA", (int64)AAM_TemporalAA },
				{ "AAM_MSAA", (int64)AAM_MSAA },
				{ "AAM_MAX", (int64)AAM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AAM_FXAA.DisplayName", "FXAA" },
				{ "AAM_MSAA.DisplayName", "MSAA" },
				{ "AAM_MSAA.ToolTip", "Only supported with forward shading.  MSAA sample count is controlled by r.MSAACount." },
				{ "AAM_None.DisplayName", "None" },
				{ "AAM_TemporalAA.DisplayName", "TemporalAA" },
				{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
				{ "ToolTip", "Used by rendering project settings." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAntiAliasingMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EAntiAliasingMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDepthOfFieldMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDepthOfFieldMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EDepthOfFieldMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDepthOfFieldMethod(EDepthOfFieldMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EDepthOfFieldMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDepthOfFieldMethod_CRC() { return 964937137U; }
	UEnum* Z_Construct_UEnum_Engine_EDepthOfFieldMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDepthOfFieldMethod"), 0, Get_Z_Construct_UEnum_Engine_EDepthOfFieldMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DOFM_BokehDOF", (int64)DOFM_BokehDOF },
				{ "DOFM_Gaussian", (int64)DOFM_Gaussian },
				{ "DOFM_CircleDOF", (int64)DOFM_CircleDOF },
				{ "DOFM_MAX", (int64)DOFM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DOFM_BokehDOF.DisplayName", "BokehDOF" },
				{ "DOFM_CircleDOF.DisplayName", "CircleDOF" },
				{ "DOFM_Gaussian.DisplayName", "GaussianDOF" },
				{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
				{ "ToolTip", "Used by FPostProcessSettings Depth of Fields" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDepthOfFieldMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EDepthOfFieldMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPostProcessSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPostProcessSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPostProcessSettings, Z_Construct_UPackage__Script_Engine(), TEXT("PostProcessSettings"), sizeof(FPostProcessSettings), Get_Z_Construct_UScriptStruct_FPostProcessSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPostProcessSettings(FPostProcessSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("PostProcessSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPostProcessSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFPostProcessSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PostProcessSettings")),new UScriptStruct::TCppStructOps<FPostProcessSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPostProcessSettings;
	struct Z_Construct_UScriptStruct_FPostProcessSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blendables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Blendables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Blendables_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightedBlendables_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeightedBlendables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVDirectionalOcclusionFadeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVDirectionalOcclusionFadeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVFadeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVFadeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceReflectionMaxRoughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSpaceReflectionMaxRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceReflectionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSpaceReflectionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceReflectionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSpaceReflectionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVSpecularOcclusionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVSpecularOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVDiffuseOcclusionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVDiffuseOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVSpecularOcclusionExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVSpecularOcclusionExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVDiffuseOcclusionExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVDiffuseOcclusionExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVDirectionalOcclusionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVDirectionalOcclusionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVDirectionalOcclusionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVDirectionalOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVEmissiveInjectionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVEmissiveInjectionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVGeometryVolumeBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVGeometryVolumeBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVSecondaryBounceIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVSecondaryBounceIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVSecondaryOcclusionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVSecondaryOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVVplInjectionBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVVplInjectionBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LPVIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LPVIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionBlurPerObjectSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotionBlurPerObjectSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionBlurMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotionBlurMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionBlurAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MotionBlurAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldVignetteSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldVignetteSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldSkyFocusDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldSkyFocusDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldSizeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldSizeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldColorThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldColorThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldBokehShape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DepthOfFieldBokehShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldOcclusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFarBlurSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFarBlurSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldNearBlurSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldNearBlurSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldMaxBokehSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldMaxBokehSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFarTransitionRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFarTransitionRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldNearTransitionRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldNearTransitionRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFocalRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFocalRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldDepthBlurRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldDepthBlurRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldDepthBlurAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldDepthBlurAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFocalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFocalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldSensorWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldSensorWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGradingLUT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorGradingLUT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGradingIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColorGradingIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IndirectLightingColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionMipThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionMipThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionMipScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionMipScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionMipBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionMipBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionFadeRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionFadeRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionFadeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionFadeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionRadiusInWS_MetaData[];
#endif
		static void NewProp_AmbientOcclusionRadiusInWS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AmbientOcclusionRadiusInWS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionStaticFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionStaticFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrainIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrainIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrainJitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrainJitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VignetteIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VignetteIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFlareTints_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LensFlareTints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFlareBokehShape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LensFlareBokehShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFlareThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LensFlareThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFlareBokehSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LensFlareBokehSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFlareTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LensFlareTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LensFlareIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LensFlareIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureCalibrationConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureCalibrationConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HistogramLogMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HistogramLogMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HistogramLogMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HistogramLogMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureSpeedDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureSpeedDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureSpeedUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureSpeedUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureMaxBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureMaxBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureMinBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureMinBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureHighPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureHighPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureLowPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureLowPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoExposureBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldBladeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DepthOfFieldBladeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldMinFstop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldMinFstop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFstop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFstop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraISO_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraISO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShutterSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraShutterSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientCubemap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AmbientCubemap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientCubemapIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientCubemapIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientCubemapTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmbientCubemapTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomDirtMaskTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloomDirtMaskTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomDirtMaskIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomDirtMaskIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomDirtMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloomDirtMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionBufferScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionBufferScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionPreFilterMult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionPreFilterMult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionPreFilterMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionPreFilterMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionPreFilterMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionPreFilterMin;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionPreFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloomConvolutionPreFilter;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionCenterUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloomConvolutionCenterUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloomConvolutionTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomConvolutionSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomConvolutionSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom6Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bloom6Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom5Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bloom5Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom4Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bloom4Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom3Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bloom3Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom2Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bloom2Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom1Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bloom1Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom6Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bloom6Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom5Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bloom5Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom4Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bloom4Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom3Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bloom3Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom2Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bloom2Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom1Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bloom1Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomSizeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomSizeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaticAberrationStartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChromaticAberrationStartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneFringeIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SceneFringeIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneColorTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SceneColorTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmDynamicRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmDynamicRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmHealAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmHealAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmToeAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmToeAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmContrast_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmContrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmChannelMixerBlue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmChannelMixerBlue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmChannelMixerGreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmChannelMixerGreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmChannelMixerRed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmChannelMixerRed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmSaturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmShadowTintAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmShadowTintAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmShadowTintBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmShadowTintBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmShadowTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmShadowTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmWhitePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilmWhitePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmWhiteClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmWhiteClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmBlackClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmBlackClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmShoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmShoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmToe_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmToe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmSlope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FilmSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpandGamut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpandGamut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueCorrection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlueCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorCorrectionShadowsMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColorCorrectionShadowsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorCorrectionHighlightsMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ColorCorrectionHighlightsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOffsetHighlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOffsetHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGainHighlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGainHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGammaHighlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGammaHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorContrastHighlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorContrastHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSaturationHighlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorSaturationHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOffsetMidtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOffsetMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGainMidtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGainMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGammaMidtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGammaMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorContrastMidtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorContrastMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSaturationMidtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorSaturationMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOffsetShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOffsetShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGainShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGainShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGammaShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGammaShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorContrastShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorContrastShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSaturationShadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorSaturationShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGamma_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorGamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorContrast_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorContrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorSaturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhiteTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WhiteTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhiteTemp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WhiteTemp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthOfFieldMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoExposureMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoExposureMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BloomMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileHQGaussian_MetaData[];
#endif
		static void NewProp_bMobileHQGaussian_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileHQGaussian;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_MetaData[];
#endif
		static void NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenSpaceReflectionRoughnessScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_MetaData[];
#endif
		static void NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenSpaceReflectionMaxRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenSpaceReflectionQuality_MetaData[];
#endif
		static void NewProp_bOverride_ScreenSpaceReflectionQuality_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenSpaceReflectionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenSpaceReflectionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_ScreenSpaceReflectionIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenSpaceReflectionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenPercentage_MetaData[];
#endif
		static void NewProp_bOverride_ScreenPercentage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MotionBlurPerObjectSize_MetaData[];
#endif
		static void NewProp_bOverride_MotionBlurPerObjectSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MotionBlurPerObjectSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MotionBlurMax_MetaData[];
#endif
		static void NewProp_bOverride_MotionBlurMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MotionBlurMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MotionBlurAmount_MetaData[];
#endif
		static void NewProp_bOverride_MotionBlurAmount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MotionBlurAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldVignetteSize_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldVignetteSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldVignetteSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldSkyFocusDistance_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldSkyFocusDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldSkyFocusDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldSizeThreshold_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldSizeThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldSizeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldColorThreshold_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldColorThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldColorThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldOcclusion_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldOcclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldOcclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldBokehShape_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldBokehShape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldBokehShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_MobileHQGaussian_MetaData[];
#endif
		static void NewProp_bOverride_MobileHQGaussian_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_MobileHQGaussian;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldMethod_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldMethod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFarBlurSize_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFarBlurSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFarBlurSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldNearBlurSize_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldNearBlurSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldNearBlurSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldMaxBokehSize_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldMaxBokehSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldMaxBokehSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldScale_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFarTransitionRegion_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFarTransitionRegion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFarTransitionRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldNearTransitionRegion_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldNearTransitionRegion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldNearTransitionRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFocalRegion_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFocalRegion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFocalRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldDepthBlurAmount_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldDepthBlurAmount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldDepthBlurAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldDepthBlurRadius_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldDepthBlurRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldDepthBlurRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldSensorWidth_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldSensorWidth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldSensorWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldBladeCount_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldBladeCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldBladeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldMinFstop_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldMinFstop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldMinFstop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFstop_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFstop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFstop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFocalDistance_MetaData[];
#endif
		static void NewProp_bOverride_DepthOfFieldFocalDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFocalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGradingLUT_MetaData[];
#endif
		static void NewProp_bOverride_ColorGradingLUT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGradingLUT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGradingIntensity_MetaData[];
#endif
		static void NewProp_bOverride_ColorGradingIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGradingIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_IndirectLightingIntensity_MetaData[];
#endif
		static void NewProp_bOverride_IndirectLightingIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_IndirectLightingIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_IndirectLightingColor_MetaData[];
#endif
		static void NewProp_bOverride_IndirectLightingColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_IndirectLightingColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDirectionalOcclusionFadeRange_MetaData[];
#endif
		static void NewProp_bOverride_LPVDirectionalOcclusionFadeRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDirectionalOcclusionFadeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVFadeRange_MetaData[];
#endif
		static void NewProp_bOverride_LPVFadeRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVFadeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVEmissiveInjectionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVEmissiveInjectionIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVEmissiveInjectionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVVplInjectionBias_MetaData[];
#endif
		static void NewProp_bOverride_LPVVplInjectionBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVVplInjectionBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVGeometryVolumeBias_MetaData[];
#endif
		static void NewProp_bOverride_LPVGeometryVolumeBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVGeometryVolumeBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSecondaryBounceIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVSecondaryBounceIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSecondaryBounceIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSecondaryOcclusionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVSecondaryOcclusionIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSecondaryOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSize_MetaData[];
#endif
		static void NewProp_bOverride_LPVSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSpecularOcclusionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVSpecularOcclusionIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSpecularOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDiffuseOcclusionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVDiffuseOcclusionIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDiffuseOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVSpecularOcclusionExponent_MetaData[];
#endif
		static void NewProp_bOverride_LPVSpecularOcclusionExponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVSpecularOcclusionExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDiffuseOcclusionExponent_MetaData[];
#endif
		static void NewProp_bOverride_LPVDiffuseOcclusionExponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDiffuseOcclusionExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDirectionalOcclusionRadius_MetaData[];
#endif
		static void NewProp_bOverride_LPVDirectionalOcclusionRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDirectionalOcclusionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVDirectionalOcclusionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVDirectionalOcclusionIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVDirectionalOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LPVIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LPVIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LPVIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionMipThreshold_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionMipThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionMipThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionMipScale_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionMipScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionMipScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionMipBlend_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionMipBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionMipBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionQuality_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionQuality_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionBias_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionPower_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionPower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionRadiusInWS_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionRadiusInWS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionRadiusInWS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionDistance_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionFadeRadius_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionFadeRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionFadeRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionFadeDistance_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionFadeDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionFadeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionRadius_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionStaticFraction_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionStaticFraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionStaticFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionIntensity_MetaData[];
#endif
		static void NewProp_bOverride_AmbientOcclusionIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_GrainJitter_MetaData[];
#endif
		static void NewProp_bOverride_GrainJitter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_GrainJitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_GrainIntensity_MetaData[];
#endif
		static void NewProp_bOverride_GrainIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_GrainIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_VignetteIntensity_MetaData[];
#endif
		static void NewProp_bOverride_VignetteIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_VignetteIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareThreshold_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareBokehShape_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareBokehShape_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareBokehShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareBokehSize_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareBokehSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareBokehSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareTints_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareTints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareTints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareTint_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareTint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_LensFlareIntensity_MetaData[];
#endif
		static void NewProp_bOverride_LensFlareIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_LensFlareIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_HistogramLogMax_MetaData[];
#endif
		static void NewProp_bOverride_HistogramLogMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_HistogramLogMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_HistogramLogMin_MetaData[];
#endif
		static void NewProp_bOverride_HistogramLogMin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_HistogramLogMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureBias_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureBias_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureSpeedDown_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureSpeedDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureSpeedDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureSpeedUp_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureSpeedUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureSpeedUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureCalibrationConstant_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureCalibrationConstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureCalibrationConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureMaxBrightness_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureMaxBrightness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureMaxBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureMinBrightness_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureMinBrightness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureMinBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureHighPercent_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureHighPercent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureHighPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureLowPercent_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureLowPercent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureLowPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureMethod_MetaData[];
#endif
		static void NewProp_bOverride_AutoExposureMethod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_CameraISO_MetaData[];
#endif
		static void NewProp_bOverride_CameraISO_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_CameraISO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_CameraShutterSpeed_MetaData[];
#endif
		static void NewProp_bOverride_CameraShutterSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_CameraShutterSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomDirtMask_MetaData[];
#endif
		static void NewProp_bOverride_BloomDirtMask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomDirtMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomDirtMaskTint_MetaData[];
#endif
		static void NewProp_bOverride_BloomDirtMaskTint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomDirtMaskTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomDirtMaskIntensity_MetaData[];
#endif
		static void NewProp_bOverride_BloomDirtMaskIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomDirtMaskIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionBufferScale_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionBufferScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionBufferScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionPreFilterMult_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionPreFilterMult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionPreFilterMult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionPreFilterMax_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionPreFilterMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionPreFilterMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionPreFilterMin_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionPreFilterMin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionPreFilterMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionPreFilter_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionPreFilter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionPreFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionCenterUV_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionCenterUV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionCenterUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionSize_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomConvolutionTexture_MetaData[];
#endif
		static void NewProp_bOverride_BloomConvolutionTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomConvolutionTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomSizeScale_MetaData[];
#endif
		static void NewProp_bOverride_BloomSizeScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomSizeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom6Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom6Size_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom6Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom6Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom6Tint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom6Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom5Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom5Size_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom5Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom5Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom5Tint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom5Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom4Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom4Size_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom4Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom4Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom4Tint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom4Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom3Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom3Size_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom3Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom3Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom3Tint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom3Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom2Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom2Tint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom2Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom2Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom2Size_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom2Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom1Size_MetaData[];
#endif
		static void NewProp_bOverride_Bloom1Size_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom1Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom1Tint_MetaData[];
#endif
		static void NewProp_bOverride_Bloom1Tint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom1Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomThreshold_MetaData[];
#endif
		static void NewProp_bOverride_BloomThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomIntensity_MetaData[];
#endif
		static void NewProp_bOverride_BloomIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomMethod_MetaData[];
#endif
		static void NewProp_bOverride_BloomMethod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientCubemapIntensity_MetaData[];
#endif
		static void NewProp_bOverride_AmbientCubemapIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientCubemapIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientCubemapTint_MetaData[];
#endif
		static void NewProp_bOverride_AmbientCubemapTint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientCubemapTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ChromaticAberrationStartOffset_MetaData[];
#endif
		static void NewProp_bOverride_ChromaticAberrationStartOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ChromaticAberrationStartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_SceneFringeIntensity_MetaData[];
#endif
		static void NewProp_bOverride_SceneFringeIntensity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_SceneFringeIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_SceneColorTint_MetaData[];
#endif
		static void NewProp_bOverride_SceneColorTint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_SceneColorTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmWhiteClip_MetaData[];
#endif
		static void NewProp_bOverride_FilmWhiteClip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmWhiteClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmBlackClip_MetaData[];
#endif
		static void NewProp_bOverride_FilmBlackClip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmBlackClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmShoulder_MetaData[];
#endif
		static void NewProp_bOverride_FilmShoulder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmShoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmToe_MetaData[];
#endif
		static void NewProp_bOverride_FilmToe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmToe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmSlope_MetaData[];
#endif
		static void NewProp_bOverride_FilmSlope_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmSlope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmShadowTintAmount_MetaData[];
#endif
		static void NewProp_bOverride_FilmShadowTintAmount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmShadowTintAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmShadowTintBlend_MetaData[];
#endif
		static void NewProp_bOverride_FilmShadowTintBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmShadowTintBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmShadowTint_MetaData[];
#endif
		static void NewProp_bOverride_FilmShadowTint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmShadowTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmToeAmount_MetaData[];
#endif
		static void NewProp_bOverride_FilmToeAmount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmToeAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmHealAmount_MetaData[];
#endif
		static void NewProp_bOverride_FilmHealAmount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmHealAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmDynamicRange_MetaData[];
#endif
		static void NewProp_bOverride_FilmDynamicRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmDynamicRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmContrast_MetaData[];
#endif
		static void NewProp_bOverride_FilmContrast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmContrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmChannelMixerBlue_MetaData[];
#endif
		static void NewProp_bOverride_FilmChannelMixerBlue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmChannelMixerBlue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmChannelMixerGreen_MetaData[];
#endif
		static void NewProp_bOverride_FilmChannelMixerGreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmChannelMixerGreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmChannelMixerRed_MetaData[];
#endif
		static void NewProp_bOverride_FilmChannelMixerRed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmChannelMixerRed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmSaturation_MetaData[];
#endif
		static void NewProp_bOverride_FilmSaturation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmWhitePoint_MetaData[];
#endif
		static void NewProp_bOverride_FilmWhitePoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmWhitePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ExpandGamut_MetaData[];
#endif
		static void NewProp_bOverride_ExpandGamut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ExpandGamut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_BlueCorrection_MetaData[];
#endif
		static void NewProp_bOverride_BlueCorrection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_BlueCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData[];
#endif
		static void NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorCorrectionHighlightsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorCorrectionShadowsMax_MetaData[];
#endif
		static void NewProp_bOverride_ColorCorrectionShadowsMax_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorCorrectionShadowsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffsetHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffsetHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffsetHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGainHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorGainHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGainHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGammaHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorGammaHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGammaHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrastHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrastHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrastHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturationHighlights_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturationHighlights_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturationHighlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffsetMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffsetMidtones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffsetMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGainMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorGainMidtones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGainMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGammaMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorGammaMidtones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGammaMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrastMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrastMidtones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrastMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturationMidtones_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturationMidtones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturationMidtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffsetShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffsetShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffsetShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGainShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorGainShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGainShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGammaShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorGammaShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGammaShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrastShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrastShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrastShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturationShadows_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturationShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturationShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffset_MetaData[];
#endif
		static void NewProp_bOverride_ColorOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGain_MetaData[];
#endif
		static void NewProp_bOverride_ColorGain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGamma_MetaData[];
#endif
		static void NewProp_bOverride_ColorGamma_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrast_MetaData[];
#endif
		static void NewProp_bOverride_ColorContrast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturation_MetaData[];
#endif
		static void NewProp_bOverride_ColorSaturation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_WhiteTint_MetaData[];
#endif
		static void NewProp_bOverride_WhiteTint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_WhiteTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_WhiteTemp_MetaData[];
#endif
		static void NewProp_bOverride_WhiteTemp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_WhiteTemp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HiddenByDefault", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPostProcessSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "for backwards compatibility" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables = { UE4CodeGen_Private::EPropertyClass::Array, "Blendables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, Blendables_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Blendables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000820000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WeightedBlendables_MetaData[] = {
		{ "Category", "Rendering Features" },
		{ "DisplayName", "Post Process Materials" },
		{ "Keywords", "PostProcess" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Allows custom post process materials to be defined, using a MaterialInstance with the same Material as its parent to allow blending.\nFor materials this needs to be the \"PostProcess\" domain type. This can be used for any UObject object implementing the IBlendableInterface (e.g. could be used to fade weather settings)." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WeightedBlendables = { UE4CodeGen_Private::EPropertyClass::Struct, "WeightedBlendables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, WeightedBlendables), Z_Construct_UScriptStruct_FWeightedBlendables, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WeightedBlendables_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WeightedBlendables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenPercentage_MetaData[] = {
		{ "Category", "Rendering Features|Misc" },
		{ "ClampMax", "400.0" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bOverride_ScreenPercentage" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "To render with lower or high resolution than it is presented,\ncontrolled by console variable,\n100:off, needs to be <99 to get upsampling and lower to get performance,\n>100 for super sampling (slower but higher quality),\nonly applied in game" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenPercentage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ScreenPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenPercentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionFadeRange_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "DO Fade range" },
		{ "editcondition", "bOverride_LPVDirectionalOcclusionFadeRange" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "LPV Directional Occlusion Fade range - increase to fade more gradually towards the LPV edges." },
		{ "UIMax", "9" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionFadeRange = { UE4CodeGen_Private::EPropertyClass::Float, "LPVDirectionalOcclusionFadeRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVDirectionalOcclusionFadeRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionFadeRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionFadeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVFadeRange_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Fade range" },
		{ "editcondition", "bOverride_LPVFadeRange" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "LPV Fade range - increase to fade more gradually towards the LPV edges." },
		{ "UIMax", "9" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVFadeRange = { UE4CodeGen_Private::EPropertyClass::Float, "LPVFadeRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVFadeRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVFadeRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVFadeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionMaxRoughness_MetaData[] = {
		{ "Category", "Rendering Features|Screen Space Reflections" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "DisplayName", "Max Roughness" },
		{ "editcondition", "bOverride_ScreenSpaceReflectionMaxRoughness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Until what roughness we fade the screen space reflections, 0.8 works well, smaller can run faster" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionMaxRoughness = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenSpaceReflectionMaxRoughness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ScreenSpaceReflectionMaxRoughness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionMaxRoughness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionMaxRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionQuality_MetaData[] = {
		{ "Category", "Rendering Features|Screen Space Reflections" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Quality" },
		{ "editcondition", "bOverride_ScreenSpaceReflectionQuality" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0=lowest quality..100=maximum quality, only a few quality levels are implemented, no soft transition, 50 is the default for better performance." },
		{ "UIMax", "100.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionQuality = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenSpaceReflectionQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ScreenSpaceReflectionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Screen Space Reflections" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_ScreenSpaceReflectionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Enable/Fade/disable the Screen Space Reflection feature, in percent, avoid numbers between 0 and 1 fo consistency" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenSpaceReflectionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ScreenSpaceReflectionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Specular occlusion intensity" },
		{ "editcondition", "bOverride_LPVSpecularOcclusionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Specular occlusion intensity - higher values provide increased specular occlusion." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LPVSpecularOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVSpecularOcclusionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Diffuse occlusion intensity" },
		{ "editcondition", "bOverride_LPVDiffuseOcclusionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diffuse occlusion intensity - higher values provide increased diffuse occlusion." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LPVDiffuseOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVDiffuseOcclusionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionExponent_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Specular occlusion exponent" },
		{ "editcondition", "bOverride_LPVSpecularOcclusionExponent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Specular occlusion exponent - increase for more contrast. 6 to 9 is recommended" },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionExponent = { UE4CodeGen_Private::EPropertyClass::Float, "LPVSpecularOcclusionExponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVSpecularOcclusionExponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionExponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionExponent_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Diffuse occlusion exponent" },
		{ "editcondition", "bOverride_LPVDiffuseOcclusionExponent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diffuse occlusion exponent - increase for more contrast. 1 to 2 is recommended" },
		{ "UIMax", "5" },
		{ "UIMin", "0.5" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionExponent = { UE4CodeGen_Private::EPropertyClass::Float, "LPVDiffuseOcclusionExponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVDiffuseOcclusionExponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionExponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionRadius_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Occlusion Radius" },
		{ "editcondition", "bOverride_LPVDirectionalOcclusionRadius" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Occlusion Radius - 16 is recommended for most scenes" },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionRadius = { UE4CodeGen_Private::EPropertyClass::Float, "LPVDirectionalOcclusionRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVDirectionalOcclusionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Occlusion Intensity" },
		{ "editcondition", "bOverride_LPVDirectionalOcclusionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Controls the amount of directional occlusion. Requires LPV. Values very close to 1.0 are recommended" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LPVDirectionalOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVDirectionalOcclusionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVEmissiveInjectionIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Emissive Injection Intensity" },
		{ "editcondition", "bOverride_LPVEmissiveInjectionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "20" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVEmissiveInjectionIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LPVEmissiveInjectionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVEmissiveInjectionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVEmissiveInjectionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVEmissiveInjectionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVGeometryVolumeBias_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Geometry Volume Bias" },
		{ "editcondition", "bOverride_LPVGeometryVolumeBias" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bias applied to the geometry volume in cell units. Increase to reduce darkening due to secondary occlusion" },
		{ "UIMax", "2" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVGeometryVolumeBias = { UE4CodeGen_Private::EPropertyClass::Float, "LPVGeometryVolumeBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVGeometryVolumeBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVGeometryVolumeBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVGeometryVolumeBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryBounceIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Secondary Bounce Intensity" },
		{ "editcondition", "bOverride_LPVSecondaryBounceIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Secondary bounce light strength (bounce light shadows). Set to 0 to disable" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryBounceIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LPVSecondaryBounceIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVSecondaryBounceIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryBounceIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryBounceIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryOcclusionIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Secondary Occlusion Intensity" },
		{ "editcondition", "bOverride_LPVSecondaryOcclusionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Secondary occlusion strength (bounce light shadows). Set to 0 to disable" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LPVSecondaryOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVSecondaryOcclusionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSize_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Size" },
		{ "editcondition", "bOverride_LPVSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The size of the LPV volume, in Unreal units" },
		{ "UIMax", "20000" },
		{ "UIMin", "100" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSize = { UE4CodeGen_Private::EPropertyClass::Float, "LPVSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVVplInjectionBias_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Light Injection Bias" },
		{ "editcondition", "bOverride_LPVVplInjectionBias" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bias applied to light injected into the LPV in cell units. Increase to reduce bleeding through thin walls" },
		{ "UIMax", "2" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVVplInjectionBias = { UE4CodeGen_Private::EPropertyClass::Float, "LPVVplInjectionBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVVplInjectionBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVVplInjectionBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVVplInjectionBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Light Propagation Volume" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_LPVIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "How strong the dynamic GI from the LPV should be. 0.0 is off, 1.0 is the \"normal\" value, but higher values can be used to boost the effect" },
		{ "UIMax", "20" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LPVIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LPVIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurPerObjectSize_MetaData[] = {
		{ "Category", "Rendering Features|Motion Blur" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Per Object Size" },
		{ "editcondition", "bOverride_MotionBlurPerObjectSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The minimum projected screen radius for a primitive to be drawn in the velocity pass, percentage of screen width. smaller numbers cause more draw calls, default: 4%" },
		{ "UIMax", "100.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurPerObjectSize = { UE4CodeGen_Private::EPropertyClass::Float, "MotionBlurPerObjectSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, MotionBlurPerObjectSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurPerObjectSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurPerObjectSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurMax_MetaData[] = {
		{ "Category", "Rendering Features|Motion Blur" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Max" },
		{ "editcondition", "bOverride_MotionBlurMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "max distortion caused by motion blur, in percent of the screen width, 0:off" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurMax = { UE4CodeGen_Private::EPropertyClass::Float, "MotionBlurMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, MotionBlurMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurAmount_MetaData[] = {
		{ "Category", "Rendering Features|Motion Blur" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Amount" },
		{ "editcondition", "bOverride_MotionBlurAmount" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Strength of motion blur, 0:off, should be renamed to intensity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurAmount = { UE4CodeGen_Private::EPropertyClass::Float, "MotionBlurAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, MotionBlurAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldVignetteSize_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Vignette Size" },
		{ "editcondition", "bOverride_DepthOfFieldVignetteSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Artificial circular mask to (near) blur content outside the radius, only for GaussianDOF, diameter in percent of screen width, costs performance if the mask is used, keep Feather can Radius on default to keep it off" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldVignetteSize = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldVignetteSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldVignetteSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldVignetteSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldVignetteSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSkyFocusDistance_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMax", "200000.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Sky Distance" },
		{ "editcondition", "bOverride_DepthOfFieldSkyFocusDistance" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Artificial distance to allow the skybox to be in focus (e.g. 200000), <=0 to switch the feature off, only for GaussianDOF, can cost performance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSkyFocusDistance = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldSkyFocusDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldSkyFocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSkyFocusDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSkyFocusDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSizeThreshold_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Size Threshold" },
		{ "editcondition", "bOverride_DepthOfFieldSizeThreshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSizeThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldSizeThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldSizeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSizeThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSizeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldColorThreshold_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Color Threshold" },
		{ "editcondition", "bOverride_DepthOfFieldColorThreshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldColorThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldColorThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldColorThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldColorThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldColorThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBokehShape_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Shape" },
		{ "editcondition", "bOverride_DepthOfFieldBokehShape" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBokehShape = { UE4CodeGen_Private::EPropertyClass::Object, "DepthOfFieldBokehShape", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldBokehShape), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBokehShape_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBokehShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldOcclusion_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Occlusion" },
		{ "editcondition", "bOverride_DepthOfFieldOcclusion" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Occlusion tweak factor 1 (0.18 to get natural occlusion, 0.4 to solve layer color leaking issues)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldOcclusion = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldOcclusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldOcclusion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarBlurSize_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Far Blur Size" },
		{ "editcondition", "bOverride_DepthOfFieldFarBlurSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Gaussian only: Maximum size of the Depth of Field blur (in percent of the view width) (note: performance cost scales with size)" },
		{ "UIMax", "32.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarBlurSize = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldFarBlurSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldFarBlurSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarBlurSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarBlurSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearBlurSize_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Near Blur Size" },
		{ "editcondition", "bOverride_DepthOfFieldNearBlurSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Gaussian only: Maximum size of the Depth of Field blur (in percent of the view width) (note: performance cost scales with size)" },
		{ "UIMax", "32.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearBlurSize = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldNearBlurSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldNearBlurSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearBlurSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearBlurSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMaxBokehSize_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Max Bokeh Size" },
		{ "editcondition", "bOverride_DepthOfFieldMaxBokehSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "32.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMaxBokehSize = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldMaxBokehSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldMaxBokehSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMaxBokehSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMaxBokehSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldScale_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Scale" },
		{ "editcondition", "bOverride_DepthOfFieldScale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "SM5: BokehDOF only: To amplify the depth of field effect (like aperture)  0=off\n          ES2: Used to blend DoF. 0=off" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldScale = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarTransitionRegion_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Far Transition Region" },
		{ "editcondition", "bOverride_DepthOfFieldFarTransitionRegion" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "To define the width of the transition region next to the focal region on the near side (cm)" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarTransitionRegion = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldFarTransitionRegion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldFarTransitionRegion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarTransitionRegion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarTransitionRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearTransitionRegion_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Near Transition Region" },
		{ "editcondition", "bOverride_DepthOfFieldNearTransitionRegion" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "To define the width of the transition region next to the focal region on the near side (cm)" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearTransitionRegion = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldNearTransitionRegion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldNearTransitionRegion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearTransitionRegion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearTransitionRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalRegion_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Focal Region" },
		{ "editcondition", "bOverride_DepthOfFieldFocalRegion" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Artificial region where all content is in focus, starting after DepthOfFieldFocalDistance, in unreal units  (cm)" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalRegion = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldFocalRegion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldFocalRegion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalRegion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurRadius_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Depth Blur Radius" },
		{ "editcondition", "bOverride_DepthOfFieldDepthBlurRadius" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "CircleDOF only: Depth blur radius in pixels at 1920x" },
		{ "UIMax", "4.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurRadius = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldDepthBlurRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldDepthBlurRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurAmount_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.000001" },
		{ "DisplayName", "Depth Blur km for 50%" },
		{ "editcondition", "bOverride_DepthOfFieldDepthBlurAmount" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "CircleDOF only: Depth blur km for 50%" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurAmount = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldDepthBlurAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldDepthBlurAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalDistance_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Focal Distance" },
		{ "editcondition", "bOverride_DepthOfFieldFocalDistance" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Distance in which the Depth of Field effect should be sharp, in unreal units (cm)" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalDistance = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldFocalDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldFocalDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSensorWidth_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMin", "0.1" },
		{ "DisplayName", "Sensor Width (mm)" },
		{ "editcondition", "bOverride_DepthOfFieldSensorWidth" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Width of the camera sensor to assume, in mm." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSensorWidth = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldSensorWidth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldSensorWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSensorWidth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSensorWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingLUT_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "DisplayName", "Color Grading LUT" },
		{ "editcondition", "bOverride_ColorGradingLUT" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Look up table texture to use or none of not used" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingLUT = { UE4CodeGen_Private::EPropertyClass::Object, "ColorGradingLUT", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGradingLUT), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingLUT_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingLUT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingIntensity_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Color Grading LUT Intensity" },
		{ "editcondition", "bOverride_ColorGradingIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Color grading lookup table intensity. 0 = no intensity, 1=full intensity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "ColorGradingIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGradingIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Global Illumination" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Indirect Lighting Intensity" },
		{ "editcondition", "bOverride_IndirectLightingIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scales the indirect lighting contribution. A value of 0 disables GI. Default is 1. The show flag 'Global Illumination' must be enabled to use this property." },
		{ "UIMax", "4.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "IndirectLightingIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, IndirectLightingIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingColor_MetaData[] = {
		{ "Category", "Rendering Features|Global Illumination" },
		{ "DisplayName", "Indirect Lighting Color" },
		{ "editcondition", "bOverride_IndirectLightingColor" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Adjusts indirect lighting color. (1,1,1) is default. (0,0,0) to disable GI. The show flag 'Global Illumination' must be enabled to use this property." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingColor = { UE4CodeGen_Private::EPropertyClass::Struct, "IndirectLightingColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, IndirectLightingColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipThreshold_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Mip Threshold" },
		{ "editcondition", "bOverride_AmbientOcclusionMipThreshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "to tweak the bilateral upsampling when using multiple mips (lower resolution versions)" },
		{ "UIMax", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientOcclusionMipThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionMipThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipScale_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.5" },
		{ "DisplayName", "Mip Scale" },
		{ "editcondition", "bOverride_AmbientOcclusionMipScale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Affects the radius AO radius scale over the multiple mips (lower resolution versions)" },
		{ "UIMax", "4.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipScale = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientOcclusionMipScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionMipScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipBlend_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.1" },
		{ "DisplayName", "Mip Blend" },
		{ "editcondition", "bOverride_AmbientOcclusionMipBlend" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Affects the blend over the multiple mips (lower resolution versions) , 0:fully use full resolution, 1::fully use low resolution, around 0.6 seems to be a good value" },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipBlend = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientOcclusionMipBlend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionMipBlend), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionQuality_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Quality" },
		{ "editcondition", "bOverride_AmbientOcclusionQuality" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0=lowest quality..100=maximum quality, only a few quality levels are implemented, no soft transition" },
		{ "UIMax", "100.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionQuality = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientOcclusionQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionBias_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Bias" },
		{ "editcondition", "bOverride_AmbientOcclusionBias" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, default (3.0) works well for flat surfaces but can reduce details" },
		{ "UIMax", "10.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionBias = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientOcclusionBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionPower_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.1" },
		{ "DisplayName", "Power" },
		{ "editcondition", "bOverride_AmbientOcclusionPower" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, bigger values means even distant surfaces affect the ambient occlusion" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionPower = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientOcclusionPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionPower_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, how wide the ambient occlusion effect should affect the geometry (in depth), will be removed - only used for non normal method which is not exposed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionDistance = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientOcclusionDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeRadius_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Fade Out Radius" },
		{ "editcondition", "bOverride_AmbientOcclusionFadeRadius" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, how many units before AmbientOcclusionFadeOutDistance it starts fading out" },
		{ "UIMax", "20000.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientOcclusionFadeRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionFadeRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeDistance_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Fade Out Distance" },
		{ "editcondition", "bOverride_AmbientOcclusionFadeDistance" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, at what distance the AO effect disppears in the distance (avoding artifacts and AO effects on huge object)" },
		{ "UIMax", "20000.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeDistance = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientOcclusionFadeDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionFadeDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "DisplayName", "Radius in WorldSpace" },
		{ "editcondition", "bOverride_AmbientOcclusionRadiusInWS" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "true: AO radius is in world space units, false: AO radius is locked the view space in 400 units" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->AmbientOcclusionRadiusInWS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS = { UE4CodeGen_Private::EPropertyClass::Bool, "AmbientOcclusionRadiusInWS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadius_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.1" },
		{ "DisplayName", "Radius" },
		{ "editcondition", "bOverride_AmbientOcclusionRadius" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0, in unreal units, bigger values means even distant surfaces affect the ambient occlusion" },
		{ "UIMax", "500.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientOcclusionRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionStaticFraction_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Static Fraction" },
		{ "editcondition", "bOverride_AmbientOcclusionStaticFraction" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0..1 0=no effect on static lighting .. 1=AO affects the stat lighting, 0 is free meaning no extra rendering pass" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionStaticFraction = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientOcclusionStaticFraction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionStaticFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionStaticFraction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionStaticFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_AmbientOcclusionIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0..1 0=off/no ambient occlusion .. 1=strong ambient occlusion, defines how much it affects the non direct lighting after base pass" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientOcclusionIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainIntensity_MetaData[] = {
		{ "Category", "Lens|Image Effects" },
		{ "editcondition", "bOverride_GrainIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0..1 grain intensity" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "GrainIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, GrainIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainJitter_MetaData[] = {
		{ "Category", "Lens|Image Effects" },
		{ "editcondition", "bOverride_GrainJitter" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0..1 grain jitter" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainJitter = { UE4CodeGen_Private::EPropertyClass::Float, "GrainJitter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, GrainJitter), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainJitter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainJitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_VignetteIntensity_MetaData[] = {
		{ "Category", "Lens|Image Effects" },
		{ "editcondition", "bOverride_VignetteIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0..1 0=off/no vignette .. 1=strong vignette" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_VignetteIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "VignetteIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, VignetteIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_VignetteIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_VignetteIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTints_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "DisplayName", "Tints" },
		{ "editcondition", "bOverride_LensFlareTints" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "RGB defines the lens flare color, A it's position. This is a temporary solution." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTints = { UE4CodeGen_Private::EPropertyClass::Struct, "LensFlareTints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, CPP_ARRAY_DIM(LensFlareTints, FPostProcessSettings), nullptr, STRUCT_OFFSET(FPostProcessSettings, LensFlareTints), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehShape_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "DisplayName", "BokehShape" },
		{ "editcondition", "bOverride_LensFlareBokehShape" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Defines the shape of the Bokeh when the image base lens flares are blurred, cannot be blended" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehShape = { UE4CodeGen_Private::EPropertyClass::Object, "LensFlareBokehShape", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LensFlareBokehShape), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehShape_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareThreshold_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "DisplayName", "Threshold" },
		{ "editcondition", "bOverride_LensFlareThreshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Minimum brightness the lens flare starts having effect (this should be as high as possible to avoid the performance cost of blurring content that is too dark too see)" },
		{ "UIMax", "32.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "LensFlareThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LensFlareThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehSize_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "DisplayName", "BokehSize" },
		{ "editcondition", "bOverride_LensFlareBokehSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Size of the Lens Blur (in percent of the view width) that is done with the Bokeh texture (note: performance cost is radius*radius)" },
		{ "UIMax", "32.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehSize = { UE4CodeGen_Private::EPropertyClass::Float, "LensFlareBokehSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LensFlareBokehSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTint_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "DisplayName", "Tint" },
		{ "editcondition", "bOverride_LensFlareTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Tint color for the image based lens flares." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTint = { UE4CodeGen_Private::EPropertyClass::Struct, "LensFlareTint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LensFlareTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareIntensity_MetaData[] = {
		{ "Category", "Lens|Lens Flares" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_LensFlareIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Brightness scale of the image cased lens flares (linear)" },
		{ "UIMax", "16.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LensFlareIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, LensFlareIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureCalibrationConstant_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "DisplayName", "Calibration Constant" },
		{ "editcondition", "bOverride_AutoExposureCalibrationConstant" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Calibration constant for 18% albedo." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureCalibrationConstant = { UE4CodeGen_Private::EPropertyClass::Float, "AutoExposureCalibrationConstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureCalibrationConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureCalibrationConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureCalibrationConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMax_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "editcondition", "bOverride_HistogramLogMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Histogram Max value. Expressed in Log2(Luminance) or in EV100 when using ExtendDefaultLuminanceRange (see project settings)" },
		{ "UIMax", "16.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMax = { UE4CodeGen_Private::EPropertyClass::Float, "HistogramLogMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, HistogramLogMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMin_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "editcondition", "bOverride_HistogramLogMin" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Histogram Min value. Expressed in Log2(Luminance) or in EV100 when using ExtendDefaultLuminanceRange (see project settings)" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-16" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMin = { UE4CodeGen_Private::EPropertyClass::Float, "HistogramLogMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, HistogramLogMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedDown_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMin", "0.02" },
		{ "DisplayName", "Speed Down" },
		{ "editcondition", "bOverride_AutoExposureSpeedDown" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0" },
		{ "UIMax", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedDown = { UE4CodeGen_Private::EPropertyClass::Float, "AutoExposureSpeedDown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureSpeedDown), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedDown_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedUp_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMin", "0.02" },
		{ "DisplayName", "Speed Up" },
		{ "editcondition", "bOverride_AutoExposureSpeedUp" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0" },
		{ "UIMax", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedUp = { UE4CodeGen_Private::EPropertyClass::Float, "AutoExposureSpeedUp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureSpeedUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedUp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMaxBrightness_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMin", "-10.0" },
		{ "DisplayName", "Max Brightness" },
		{ "editcondition", "bOverride_AutoExposureMaxBrightness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Auto-Exposure maximum adaptation. Eye Adaptation is disabled if Min = Max.\nAuto-exposure is implemented by choosing an exposure value for which the average luminance generates a pixel brightness equal to the Constant Calibration value.\nThe Min/Max are expressed in pixel luminance (cd/m2) or in EV100 when using ExtendDefaultLuminanceRange (see project settings)." },
		{ "UIMax", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMaxBrightness = { UE4CodeGen_Private::EPropertyClass::Float, "AutoExposureMaxBrightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureMaxBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMaxBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMaxBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMinBrightness_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMin", "-10.0" },
		{ "DisplayName", "Min Brightness" },
		{ "editcondition", "bOverride_AutoExposureMinBrightness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Auto-Exposure minimum adaptation. Eye Adaptation is disabled if Min = Max.\nAuto-exposure is implemented by choosing an exposure value for which the average luminance generates a pixel brightness equal to the Constant Calibration value.\nThe Min/Max are expressed in pixel luminance (cd/m2) or in EV100 when using ExtendDefaultLuminanceRange (see project settings)." },
		{ "UIMax", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMinBrightness = { UE4CodeGen_Private::EPropertyClass::Float, "AutoExposureMinBrightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureMinBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMinBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMinBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureHighPercent_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "High Percent" },
		{ "editcondition", "bOverride_AutoExposureHighPercent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\nThe value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\nbut can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\nbright spots.\n>0, <100, good values are in the range 80 .. 95" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureHighPercent = { UE4CodeGen_Private::EPropertyClass::Float, "AutoExposureHighPercent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureHighPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureHighPercent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureHighPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureLowPercent_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Low Percent" },
		{ "editcondition", "bOverride_AutoExposureLowPercent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\nThe value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\nbut can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\nbright spots.\n>0, <100, good values are in the range 70 .. 80" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureLowPercent = { UE4CodeGen_Private::EPropertyClass::Float, "AutoExposureLowPercent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureLowPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureLowPercent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureLowPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBias_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "DisplayName", "Exposure Compensation" },
		{ "editcondition", "bOverride_AutoExposureBias" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Logarithmic adjustment for the exposure. Only used if a tonemapper is specified.\n0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ..." },
		{ "UIMax", "8.0" },
		{ "UIMin", "-8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBias = { UE4CodeGen_Private::EPropertyClass::Float, "AutoExposureBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBladeCount_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "16" },
		{ "ClampMin", "4" },
		{ "DisplayName", "Number of diaphragm blades" },
		{ "editcondition", "bOverride_DepthOfFieldBladeCount" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Defines the number of blades of the diaphragm within the lens (between 4 and 16)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBladeCount = { UE4CodeGen_Private::EPropertyClass::Int, "DepthOfFieldBladeCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldBladeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBladeCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBladeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMinFstop_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "32.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Maximum Aperture (min F-stop)" },
		{ "editcondition", "bOverride_DepthOfFieldMinFstop" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Defines the maximum opening of the camera lens to control the curvature of blades of the diaphragm. Set it to 0 to get straight blades." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMinFstop = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldMinFstop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldMinFstop), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMinFstop_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMinFstop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFstop_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "32.0" },
		{ "ClampMin", "1.0" },
		{ "DisplayName", "Aperture (F-stop)" },
		{ "editcondition", "bOverride_DepthOfFieldFstop" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Defines the opening of the camera lens, Aperture is 1/fstop, typical lens go down to f/1.2 (large opening), larger numbers reduce the DOF effect" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFstop = { UE4CodeGen_Private::EPropertyClass::Float, "DepthOfFieldFstop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldFstop), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFstop_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFstop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraISO_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMin", "1.0" },
		{ "DisplayName", "ISO" },
		{ "editcondition", "bOverride_CameraISO" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "tooltip", "The camera sensor sensitivity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraISO = { UE4CodeGen_Private::EPropertyClass::Float, "CameraISO", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, CameraISO), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraISO_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraISO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraShutterSpeed_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "1.0" },
		{ "DisplayName", "Shutter Speed (1/s)" },
		{ "editcondition", "bOverride_CameraShutterSpeed" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The camera shutter in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraShutterSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "CameraShutterSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, CameraShutterSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraShutterSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraShutterSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemap_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Cubemap" },
		{ "DisplayName", "Cubemap Texture" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The Ambient cubemap (Affects diffuse and specular shading), blends additively which if different from all other settings here" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemap = { UE4CodeGen_Private::EPropertyClass::Object, "AmbientCubemap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Cubemap" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_AmbientCubemapIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "To scale the Ambient cubemap brightness\n>=0: off, 1(default), >1 brighter" },
		{ "UIMax", "4.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientCubemapIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientCubemapIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapTint_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Cubemap" },
		{ "DisplayName", "Tint" },
		{ "editcondition", "bOverride_AmbientCubemapTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "AmbientCubemap tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapTint = { UE4CodeGen_Private::EPropertyClass::Struct, "AmbientCubemapTint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AmbientCubemapTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskTint_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "DisplayName", "Dirt Mask Tint" },
		{ "editcondition", "bOverride_BloomDirtMaskTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "BloomDirtMask tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskTint = { UE4CodeGen_Private::EPropertyClass::Struct, "BloomDirtMaskTint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomDirtMaskTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskIntensity_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Dirt Mask Intensity" },
		{ "editcondition", "bOverride_BloomDirtMaskIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "BloomDirtMask intensity" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "BloomDirtMaskIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomDirtMaskIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMask_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "DisplayName", "Dirt Mask Texture" },
		{ "editcondition", "bOverride_BloomDirtMask" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Texture that defines the dirt on the camera lens where the light of very bright objects is scattered." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMask = { UE4CodeGen_Private::EPropertyClass::Object, "BloomDirtMask", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomDirtMask), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionBufferScale_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Convolution Buffer" },
		{ "editcondition", "bOverride_BloomConvolutionBufferScale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Implicit buffer region as a fraction of the screen size to insure the bloom does not wrap across the screen.  Larger sizes have perf impact." },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionBufferScale = { UE4CodeGen_Private::EPropertyClass::Float, "BloomConvolutionBufferScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionBufferScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionBufferScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionBufferScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMult_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Boost Mult" },
		{ "editcondition", "bOverride_BloomConvolutionPreFilterMult" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMult = { UE4CodeGen_Private::EPropertyClass::Float, "BloomConvolutionPreFilterMult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionPreFilterMult), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMax_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Boost Max" },
		{ "editcondition", "bOverride_BloomConvolutionPreFilterMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMax = { UE4CodeGen_Private::EPropertyClass::Float, "BloomConvolutionPreFilterMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionPreFilterMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMin_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Boost Min" },
		{ "editcondition", "bOverride_BloomConvolutionPreFilterMin" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMin = { UE4CodeGen_Private::EPropertyClass::Float, "BloomConvolutionPreFilterMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionPreFilterMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMin_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilter = { UE4CodeGen_Private::EPropertyClass::Struct, "BloomConvolutionPreFilter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionPreFilter_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilter_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionCenterUV_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Center" },
		{ "editcondition", "bOverride_BloomConvolutionCenterUV" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The UV location of the center of the kernel.  Should be very close to (.5,.5)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionCenterUV = { UE4CodeGen_Private::EPropertyClass::Struct, "BloomConvolutionCenterUV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionCenterUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionCenterUV_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionCenterUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionTexture_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Kernel" },
		{ "editcondition", "bOverride_BloomConvolutionTexture" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Texture to replace default convolution bloom kernel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionTexture = { UE4CodeGen_Private::EPropertyClass::Object, "BloomConvolutionTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionSize_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Convolution Scale" },
		{ "editcondition", "bOverride_BloomConvolutionSize" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Relative size of the convolution kernel image compared to the minor axis of the viewport" },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionSize = { UE4CodeGen_Private::EPropertyClass::Float, "BloomConvolutionSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomConvolutionSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#6 Tint" },
		{ "editcondition", "bOverride_Bloom6Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom6 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Tint = { UE4CodeGen_Private::EPropertyClass::Struct, "Bloom6Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom6Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#5 Tint" },
		{ "editcondition", "bOverride_Bloom5Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom5 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Tint = { UE4CodeGen_Private::EPropertyClass::Struct, "Bloom5Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom5Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#4 Tint" },
		{ "editcondition", "bOverride_Bloom4Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom4 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Tint = { UE4CodeGen_Private::EPropertyClass::Struct, "Bloom4Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom4Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#3 Tint" },
		{ "editcondition", "bOverride_Bloom3Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom3 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Tint = { UE4CodeGen_Private::EPropertyClass::Struct, "Bloom3Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom3Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#2 Tint" },
		{ "editcondition", "bOverride_Bloom2Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom2 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Tint = { UE4CodeGen_Private::EPropertyClass::Struct, "Bloom2Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom2Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#1 Tint" },
		{ "editcondition", "bOverride_Bloom1Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom1 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Tint = { UE4CodeGen_Private::EPropertyClass::Struct, "Bloom1Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom1Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#6 Size" },
		{ "editcondition", "bOverride_Bloom6Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom6 in percent of the screen width\n(is done in 1/64 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "128.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Size = { UE4CodeGen_Private::EPropertyClass::Float, "Bloom6Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom6Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#5 Size" },
		{ "editcondition", "bOverride_Bloom5Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom5 in percent of the screen width\n(is done in 1/32 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "64.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Size = { UE4CodeGen_Private::EPropertyClass::Float, "Bloom5Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom5Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#4 Size" },
		{ "editcondition", "bOverride_Bloom4Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom4 in percent of the screen width\n(is done in 1/16 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "32.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Size = { UE4CodeGen_Private::EPropertyClass::Float, "Bloom4Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom4Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#3 Size" },
		{ "editcondition", "bOverride_Bloom3Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom3 in percent of the screen width\n(is done in 1/8 resolution, larger values cost more performance)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "16.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Size = { UE4CodeGen_Private::EPropertyClass::Float, "Bloom3Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom3Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#2 Size" },
		{ "editcondition", "bOverride_Bloom2Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom2 in percent of the screen width\n(is done in 1/4 resolution, larger values cost more performance)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Size = { UE4CodeGen_Private::EPropertyClass::Float, "Bloom2Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom2Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#1 Size" },
		{ "editcondition", "bOverride_Bloom1Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for the Bloom1 in percent of the screen width\n(is done in 1/2 resolution, larger values cost more performance, good for high frequency details)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "4.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Size = { UE4CodeGen_Private::EPropertyClass::Float, "Bloom1Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, Bloom1Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomSizeScale_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Size scale" },
		{ "editcondition", "bOverride_BloomSizeScale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scale for all bloom sizes" },
		{ "UIMax", "64.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomSizeScale = { UE4CodeGen_Private::EPropertyClass::Float, "BloomSizeScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomSizeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomSizeScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomSizeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "-1.0" },
		{ "DisplayName", "Threshold" },
		{ "editcondition", "bOverride_BloomThreshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "minimum brightness the bloom starts having effect\n-1:all pixels affect bloom equally (physically correct, faster as a threshold pass is omitted), 0:all pixels affect bloom brights more, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "BloomThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_BloomIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Multiplier for all bloom contributions >=0: off, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "BloomIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ChromaticAberrationStartOffset_MetaData[] = {
		{ "Category", "Lens|Chromatic Aberration" },
		{ "DisplayName", "Start Offset" },
		{ "editcondition", "bOverride_ChromaticAberrationStartOffset" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "A normalized distance to the center of the framebuffer where the effect takes place." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ChromaticAberrationStartOffset = { UE4CodeGen_Private::EPropertyClass::Float, "ChromaticAberrationStartOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ChromaticAberrationStartOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ChromaticAberrationStartOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ChromaticAberrationStartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneFringeIntensity_MetaData[] = {
		{ "Category", "Lens|Chromatic Aberration" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_SceneFringeIntensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneFringeIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "SceneFringeIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, SceneFringeIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneFringeIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneFringeIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneColorTint_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "editcondition", "bOverride_SceneColorTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scene tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneColorTint = { UE4CodeGen_Private::EPropertyClass::Struct, "SceneColorTint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, SceneColorTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneColorTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneColorTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmDynamicRange_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Dynamic Range" },
		{ "editcondition", "bOverride_FilmDynamicRange" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "4.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmDynamicRange = { UE4CodeGen_Private::EPropertyClass::Float, "FilmDynamicRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmDynamicRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmDynamicRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmDynamicRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmHealAmount_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Crush Highlights" },
		{ "editcondition", "bOverride_FilmHealAmount" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmHealAmount = { UE4CodeGen_Private::EPropertyClass::Float, "FilmHealAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmHealAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmHealAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmHealAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToeAmount_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Crush Shadows" },
		{ "editcondition", "bOverride_FilmToeAmount" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToeAmount = { UE4CodeGen_Private::EPropertyClass::Float, "FilmToeAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmToeAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToeAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToeAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmContrast_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_FilmContrast" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmContrast = { UE4CodeGen_Private::EPropertyClass::Float, "FilmContrast", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmContrast), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmContrast_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmContrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerBlue_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Channel Mixer Blue" },
		{ "editcondition", "bOverride_FilmChannelMixerBlue" },
		{ "HideAlphaChannel", "" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerBlue = { UE4CodeGen_Private::EPropertyClass::Struct, "FilmChannelMixerBlue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmChannelMixerBlue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerBlue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerBlue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerGreen_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Channel Mixer Green" },
		{ "editcondition", "bOverride_FilmChannelMixerGreen" },
		{ "HideAlphaChannel", "" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerGreen = { UE4CodeGen_Private::EPropertyClass::Struct, "FilmChannelMixerGreen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmChannelMixerGreen), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerGreen_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerGreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerRed_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Channel Mixer Red" },
		{ "editcondition", "bOverride_FilmChannelMixerRed" },
		{ "HideAlphaChannel", "" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerRed = { UE4CodeGen_Private::EPropertyClass::Struct, "FilmChannelMixerRed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmChannelMixerRed), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerRed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerRed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSaturation_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_FilmSaturation" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSaturation = { UE4CodeGen_Private::EPropertyClass::Float, "FilmSaturation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmSaturation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSaturation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintAmount_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Tint Shadow Amount" },
		{ "editcondition", "bOverride_FilmShadowTintAmount" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintAmount = { UE4CodeGen_Private::EPropertyClass::Float, "FilmShadowTintAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmShadowTintAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintBlend_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Tint Shadow Blend" },
		{ "editcondition", "bOverride_FilmShadowTintBlend" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintBlend = { UE4CodeGen_Private::EPropertyClass::Float, "FilmShadowTintBlend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmShadowTintBlend), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTint_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Tint Shadow" },
		{ "editcondition", "bOverride_FilmShadowTint" },
		{ "HideAlphaChannel", "" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTint = { UE4CodeGen_Private::EPropertyClass::Struct, "FilmShadowTint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmShadowTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhitePoint_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Tint" },
		{ "editcondition", "bOverride_FilmWhitePoint" },
		{ "HideAlphaChannel", "" },
		{ "LegacyTonemapper", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhitePoint = { UE4CodeGen_Private::EPropertyClass::Struct, "FilmWhitePoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmWhitePoint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhitePoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhitePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhiteClip_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "White clip" },
		{ "editcondition", "bOverride_FilmWhiteClip" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhiteClip = { UE4CodeGen_Private::EPropertyClass::Float, "FilmWhiteClip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmWhiteClip), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhiteClip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhiteClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmBlackClip_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Black clip" },
		{ "editcondition", "bOverride_FilmBlackClip" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmBlackClip = { UE4CodeGen_Private::EPropertyClass::Float, "FilmBlackClip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmBlackClip), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmBlackClip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmBlackClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShoulder_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Shoulder" },
		{ "editcondition", "bOverride_FilmShoulder" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShoulder = { UE4CodeGen_Private::EPropertyClass::Float, "FilmShoulder", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmShoulder), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShoulder_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToe_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Toe" },
		{ "editcondition", "bOverride_FilmToe" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToe = { UE4CodeGen_Private::EPropertyClass::Float, "FilmToe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmToe), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToe_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSlope_MetaData[] = {
		{ "Category", "Film" },
		{ "DisplayName", "Slope" },
		{ "editcondition", "bOverride_FilmSlope" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSlope = { UE4CodeGen_Private::EPropertyClass::Float, "FilmSlope", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, FilmSlope), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSlope_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ExpandGamut_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bOverride_ExpandGamut" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Expand bright saturated colors outside the sRGB gamut to fake wide gamut rendering." },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ExpandGamut = { UE4CodeGen_Private::EPropertyClass::Float, "ExpandGamut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ExpandGamut), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ExpandGamut_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ExpandGamut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BlueCorrection_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bOverride_BlueCorrection" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Correct for artifacts with \"electric\" blues due to the ACEScg color space. Bright blue desaturates instead of going to violet." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BlueCorrection = { UE4CodeGen_Private::EPropertyClass::Float, "BlueCorrection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BlueCorrection), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BlueCorrection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BlueCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionShadowsMax_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "DisplayName", "ShadowsMax" },
		{ "editcondition", "bOverride_ColorCorrectionShadowsMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionShadowsMax = { UE4CodeGen_Private::EPropertyClass::Float, "ColorCorrectionShadowsMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorCorrectionShadowsMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionShadowsMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionShadowsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMin_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "DisplayName", "HighlightsMin" },
		{ "editcondition", "bOverride_ColorCorrectionHighlightsMin" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMin = { UE4CodeGen_Private::EPropertyClass::Float, "ColorCorrectionHighlightsMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorCorrectionHighlightsMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetHighlights_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffsetHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetHighlights = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorOffsetHighlights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorOffsetHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainHighlights_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGainHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainHighlights = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorGainHighlights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGainHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaHighlights_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGammaHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaHighlights = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorGammaHighlights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGammaHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastHighlights_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrastHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastHighlights = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorContrastHighlights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorContrastHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationHighlights_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturationHighlights" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationHighlights = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorSaturationHighlights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorSaturationHighlights), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetMidtones_MetaData[] = {
		{ "Category", "Color Grading|Midtones" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffsetMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetMidtones = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorOffsetMidtones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorOffsetMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainMidtones_MetaData[] = {
		{ "Category", "Color Grading|Midtones" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGainMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainMidtones = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorGainMidtones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGainMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaMidtones_MetaData[] = {
		{ "Category", "Color Grading|Midtones" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGammaMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaMidtones = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorGammaMidtones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGammaMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastMidtones_MetaData[] = {
		{ "Category", "Color Grading|Midtones" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrastMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastMidtones = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorContrastMidtones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorContrastMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationMidtones_MetaData[] = {
		{ "Category", "Color Grading|Midtones" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturationMidtones" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationMidtones = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorSaturationMidtones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorSaturationMidtones), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetShadows_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffsetShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetShadows = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorOffsetShadows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorOffsetShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainShadows_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGainShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainShadows = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorGainShadows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGainShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaShadows_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGammaShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaShadows = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorGammaShadows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGammaShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastShadows_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrastShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastShadows = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorContrastShadows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorContrastShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationShadows_MetaData[] = {
		{ "Category", "Color Grading|Shadows" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturationShadows" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationShadows = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorSaturationShadows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorSaturationShadows), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffset_MetaData[] = {
		{ "Category", "Color Grading|Global" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffset" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorOffset), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGain_MetaData[] = {
		{ "Category", "Color Grading|Global" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGain" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGain = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorGain", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGain), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGain_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGamma_MetaData[] = {
		{ "Category", "Color Grading|Global" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGamma" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGamma = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorGamma", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorGamma), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGamma_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrast_MetaData[] = {
		{ "Category", "Color Grading|Global" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrast" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrast = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorContrast", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorContrast), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrast_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturation_MetaData[] = {
		{ "Category", "Color Grading|Global" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturation" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "ToolTip", "Color Correction controls" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturation = { UE4CodeGen_Private::EPropertyClass::Struct, "ColorSaturation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, ColorSaturation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTint_MetaData[] = {
		{ "Category", "Color Grading|WhiteBalance" },
		{ "DisplayName", "Tint" },
		{ "editcondition", "bOverride_WhiteTint" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTint = { UE4CodeGen_Private::EPropertyClass::Float, "WhiteTint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, WhiteTint), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTemp_MetaData[] = {
		{ "Category", "Color Grading|WhiteBalance" },
		{ "DisplayName", "Temp" },
		{ "editcondition", "bOverride_WhiteTemp" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "15000.0" },
		{ "UIMin", "1500.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTemp = { UE4CodeGen_Private::EPropertyClass::Float, "WhiteTemp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, WhiteTemp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTemp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTemp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMethod_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "Method" },
		{ "editcondition", "bOverride_DepthOfFieldMethod" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "DepthOfFieldMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, DepthOfFieldMethod), Z_Construct_UEnum_Engine_EDepthOfFieldMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMethod_MetaData[] = {
		{ "Category", "Lens|Exposure" },
		{ "DisplayName", "Metering Mode" },
		{ "editcondition", "bOverride_AutoExposureMethod" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Luminance computation method" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "AutoExposureMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, AutoExposureMethod), Z_Construct_UEnum_Engine_EAutoExposureMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomMethod_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Method" },
		{ "editcondition", "bOverride_BloomMethod" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom algorithm" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "BloomMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPostProcessSettings, BloomMethod), Z_Construct_UEnum_Engine_EBloomMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "DisplayName", "High Quality Gaussian DoF on Mobile" },
		{ "editcondition", "bOverride_MobileHQGaussian" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Enable HQ Gaussian on high end mobile platforms. (ES3_1)" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bMobileHQGaussian = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian = { UE4CodeGen_Private::EPropertyClass::Bool, "bMobileHQGaussian", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ScreenSpaceReflectionRoughnessScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ScreenSpaceReflectionRoughnessScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ScreenSpaceReflectionMaxRoughness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ScreenSpaceReflectionMaxRoughness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ScreenSpaceReflectionQuality = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ScreenSpaceReflectionQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ScreenSpaceReflectionIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ScreenSpaceReflectionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ScreenPercentage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ScreenPercentage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_MotionBlurPerObjectSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_MotionBlurPerObjectSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_MotionBlurMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_MotionBlurMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_MotionBlurAmount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_MotionBlurAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldVignetteSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldVignetteSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldSkyFocusDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldSkyFocusDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSizeThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSizeThreshold_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldSizeThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSizeThreshold = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldSizeThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSizeThreshold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSizeThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSizeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldColorThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldColorThreshold_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldColorThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldColorThreshold = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldColorThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldColorThreshold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldColorThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldColorThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldOcclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBokehShape_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBokehShape_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldBokehShape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBokehShape = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldBokehShape", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBokehShape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBokehShape_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBokehShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_MobileHQGaussian = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_MobileHQGaussian", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMethod_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMethod_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldMethod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMethod = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMethod_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldFarBlurSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldFarBlurSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldNearBlurSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldNearBlurSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMaxBokehSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMaxBokehSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldMaxBokehSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMaxBokehSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldMaxBokehSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMaxBokehSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMaxBokehSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMaxBokehSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldFarTransitionRegion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldFarTransitionRegion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldNearTransitionRegion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldNearTransitionRegion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldFocalRegion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldFocalRegion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldDepthBlurAmount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldDepthBlurAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldDepthBlurRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldDepthBlurRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldSensorWidth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldSensorWidth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldBladeCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldBladeCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldMinFstop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldMinFstop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldFstop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldFstop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_DepthOfFieldFocalDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_DepthOfFieldFocalDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGradingLUT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorGradingLUT", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGradingIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorGradingIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_IndirectLightingIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_IndirectLightingIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_IndirectLightingColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_IndirectLightingColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVDirectionalOcclusionFadeRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVDirectionalOcclusionFadeRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVFadeRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVFadeRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVEmissiveInjectionIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVEmissiveInjectionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVVplInjectionBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVVplInjectionBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVGeometryVolumeBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVGeometryVolumeBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVSecondaryBounceIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVSecondaryBounceIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVSecondaryOcclusionIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVSecondaryOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVSpecularOcclusionIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVSpecularOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVDiffuseOcclusionIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVDiffuseOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVSpecularOcclusionExponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVSpecularOcclusionExponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVDiffuseOcclusionExponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVDiffuseOcclusionExponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVDirectionalOcclusionRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVDirectionalOcclusionRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVDirectionalOcclusionIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVDirectionalOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LPVIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LPVIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionMipThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AmbientOcclusionMipThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionMipScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AmbientOcclusionMipScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionMipBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AmbientOcclusionMipBlend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionQuality = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AmbientOcclusionQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AmbientOcclusionBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionPower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AmbientOcclusionPower", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionRadiusInWS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AmbientOcclusionRadiusInWS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionDistance_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AmbientOcclusionDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionFadeRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AmbientOcclusionFadeRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionFadeDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AmbientOcclusionFadeDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AmbientOcclusionRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionStaticFraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AmbientOcclusionStaticFraction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientOcclusionIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AmbientOcclusionIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_GrainJitter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_GrainJitter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_GrainIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_GrainIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_VignetteIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_VignetteIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LensFlareThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareBokehShape = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LensFlareBokehShape", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareBokehSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LensFlareBokehSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareTints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LensFlareTints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareTint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LensFlareTint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_LensFlareIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_LensFlareIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_HistogramLogMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_HistogramLogMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_HistogramLogMin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_HistogramLogMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureBias = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AutoExposureBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureSpeedDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AutoExposureSpeedDown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureSpeedUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AutoExposureSpeedUp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureCalibrationConstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AutoExposureCalibrationConstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureMaxBrightness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AutoExposureMaxBrightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureMinBrightness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AutoExposureMinBrightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureHighPercent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AutoExposureHighPercent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureLowPercent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AutoExposureLowPercent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AutoExposureMethod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AutoExposureMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_CameraISO = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_CameraISO", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_CameraShutterSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_CameraShutterSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomDirtMask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BloomDirtMask", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomDirtMaskTint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BloomDirtMaskTint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomDirtMaskIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BloomDirtMaskIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionBufferScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BloomConvolutionBufferScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionPreFilterMult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BloomConvolutionPreFilterMult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionPreFilterMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BloomConvolutionPreFilterMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionPreFilterMin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BloomConvolutionPreFilterMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionPreFilter_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BloomConvolutionPreFilter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionCenterUV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BloomConvolutionCenterUV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BloomConvolutionSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomConvolutionTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BloomConvolutionTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomSizeScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BloomSizeScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom6Size = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_Bloom6Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom6Tint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_Bloom6Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom5Size = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_Bloom5Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom5Tint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_Bloom5Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom4Size = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_Bloom4Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom4Tint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_Bloom4Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom3Size = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_Bloom3Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom3Tint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_Bloom3Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom2Tint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_Bloom2Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom2Size = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_Bloom2Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom1Size = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_Bloom1Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_Bloom1Tint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_Bloom1Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BloomThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BloomIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BloomMethod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BloomMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientCubemapIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AmbientCubemapIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_AmbientCubemapTint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_AmbientCubemapTint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ChromaticAberrationStartOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ChromaticAberrationStartOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_SceneFringeIntensity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_SceneFringeIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_SceneColorTint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_SceneColorTint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmWhiteClip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmWhiteClip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmBlackClip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmBlackClip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmShoulder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmShoulder", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmToe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmToe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmSlope = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmSlope", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintAmount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmShadowTintAmount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintAmount = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmShadowTintAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintAmount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintBlend_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintBlend_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmShadowTintBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintBlend = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmShadowTintBlend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintBlend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmShadowTint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTint = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmShadowTint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToeAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToeAmount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmToeAmount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToeAmount = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmToeAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToeAmount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToeAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToeAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmHealAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmHealAmount_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmHealAmount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmHealAmount = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmHealAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmHealAmount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmHealAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmHealAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmDynamicRange_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmDynamicRange_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmDynamicRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmDynamicRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmDynamicRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmDynamicRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmDynamicRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmDynamicRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmContrast_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmContrast_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmContrast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmContrast = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmContrast", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmContrast_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmContrast_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmContrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerBlue_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerBlue_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmChannelMixerBlue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerBlue = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmChannelMixerBlue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerBlue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerBlue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerBlue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerGreen_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerGreen_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmChannelMixerGreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerGreen = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmChannelMixerGreen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerGreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerGreen_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerGreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerRed_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerRed_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmChannelMixerRed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerRed = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmChannelMixerRed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerRed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerRed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerRed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSaturation_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSaturation_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmSaturation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSaturation = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmSaturation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSaturation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSaturation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhitePoint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhitePoint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_FilmWhitePoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhitePoint = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_FilmWhitePoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhitePoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhitePoint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhitePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ExpandGamut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ExpandGamut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_BlueCorrection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_BlueCorrection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorCorrectionHighlightsMin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorCorrectionHighlightsMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorCorrectionShadowsMax = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorCorrectionShadowsMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorOffsetHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorOffsetHighlights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGainHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorGainHighlights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGammaHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorGammaHighlights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorContrastHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorContrastHighlights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorSaturationHighlights = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorSaturationHighlights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorOffsetMidtones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorOffsetMidtones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGainMidtones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorGainMidtones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGammaMidtones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorGammaMidtones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorContrastMidtones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorContrastMidtones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorSaturationMidtones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorSaturationMidtones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorOffsetShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorOffsetShadows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGainShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorGainShadows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGammaShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorGammaShadows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorContrastShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorContrastShadows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorSaturationShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorSaturationShadows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorGain", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorGamma = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorGamma", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorContrast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorContrast", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Color Correction controls" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_ColorSaturation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_ColorSaturation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_WhiteTint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_WhiteTint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "first all bOverride_... as they get grouped together into bitfields" },
	};
#endif
	void Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp_SetBit(void* Obj)
	{
		((FPostProcessSettings*)Obj)->bOverride_WhiteTemp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverride_WhiteTemp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FPostProcessSettings), &Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPostProcessSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Blendables_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WeightedBlendables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionFadeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVFadeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionMaxRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ScreenSpaceReflectionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSpecularOcclusionExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDiffuseOcclusionExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVDirectionalOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVEmissiveInjectionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVGeometryVolumeBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryBounceIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSecondaryOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVVplInjectionBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LPVIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurPerObjectSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_MotionBlurAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldVignetteSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSkyFocusDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSizeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldColorThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBokehShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarBlurSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearBlurSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMaxBokehSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFarTransitionRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldNearTransitionRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldDepthBlurAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFocalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldSensorWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingLUT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGradingIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_IndirectLightingColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionMipBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionFadeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadiusInWS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionStaticFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_GrainJitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_VignetteIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareBokehSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_LensFlareIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureCalibrationConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_HistogramLogMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureSpeedUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMaxBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMinBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureHighPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureLowPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldBladeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMinFstop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldFstop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraISO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_CameraShutterSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AmbientCubemapTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMaskIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomDirtMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionBufferScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilterMin,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionPreFilter,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionCenterUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomConvolutionSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom6Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom5Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom4Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom3Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom2Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_Bloom1Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomSizeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ChromaticAberrationStartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneFringeIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_SceneColorTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmDynamicRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmHealAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmContrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerBlue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerGreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmChannelMixerRed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTintBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShadowTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhitePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmWhiteClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmBlackClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmShoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmToe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_FilmSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ExpandGamut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BlueCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionShadowsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorCorrectionHighlightsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffsetShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGainShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGammaShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrastShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturationShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorGamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorContrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_ColorSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_WhiteTemp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_DepthOfFieldMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_AutoExposureMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_BloomMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bMobileHQGaussian,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionRoughnessScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ScreenPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MotionBlurAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldVignetteSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSkyFocusDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSizeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldColorThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBokehShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_MobileHQGaussian,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarBlurSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearBlurSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMaxBokehSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFarTransitionRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldNearTransitionRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldSensorWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFstop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingLUT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGradingIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_IndirectLightingColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionFadeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVFadeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVEmissiveInjectionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVVplInjectionBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVGeometryVolumeBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryBounceIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSecondaryOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVSpecularOcclusionExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDiffuseOcclusionExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVDirectionalOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LPVIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainJitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_GrainIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_VignetteIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareBokehSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_LensFlareIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_HistogramLogMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureSpeedUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureCalibrationConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMaxBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMinBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureHighPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureLowPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AutoExposureMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraISO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_CameraShutterSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomDirtMaskIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionBufferScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilterMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionPreFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionCenterUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomConvolutionTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomSizeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom6Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom5Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom4Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom3Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom2Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_Bloom1Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BloomMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_AmbientCubemapTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ChromaticAberrationStartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneFringeIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_SceneColorTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhiteClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmBlackClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSlope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTintBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmShadowTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmToeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmHealAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmDynamicRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmContrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerBlue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerGreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmChannelMixerRed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_FilmWhitePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ExpandGamut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_BlueCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationHighlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationMidtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffsetShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGainShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGammaShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrastShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturationShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorGamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorContrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_ColorSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessSettings_Statics::NewProp_bOverride_WhiteTemp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPostProcessSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PostProcessSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPostProcessSettings),
		alignof(FPostProcessSettings),
		Z_Construct_UScriptStruct_FPostProcessSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPostProcessSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PostProcessSettings"), sizeof(FPostProcessSettings), Get_Z_Construct_UScriptStruct_FPostProcessSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPostProcessSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPostProcessSettings_CRC() { return 1213279515U; }
class UScriptStruct* FWeightedBlendables::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FWeightedBlendables_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightedBlendables, Z_Construct_UPackage__Script_Engine(), TEXT("WeightedBlendables"), sizeof(FWeightedBlendables), Get_Z_Construct_UScriptStruct_FWeightedBlendables_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeightedBlendables(FWeightedBlendables::StaticStruct, TEXT("/Script/Engine"), TEXT("WeightedBlendables"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFWeightedBlendables
{
	FScriptStruct_Engine_StaticRegisterNativesFWeightedBlendables()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeightedBlendables")),new UScriptStruct::TCppStructOps<FWeightedBlendables>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFWeightedBlendables;
	struct Z_Construct_UScriptStruct_FWeightedBlendables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendables_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "for easier detail customization, needed?" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightedBlendables>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array_MetaData[] = {
		{ "Category", "PostProcessSettings" },
		{ "Keywords", "PostProcess" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array = { UE4CodeGen_Private::EPropertyClass::Array, "Array", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWeightedBlendables, Array), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Array", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FWeightedBlendable, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightedBlendables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedBlendables_Statics::NewProp_Array_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightedBlendables_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"WeightedBlendables",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FWeightedBlendables),
		alignof(FWeightedBlendables),
		Z_Construct_UScriptStruct_FWeightedBlendables_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendables_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendables_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendables_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeightedBlendables()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeightedBlendables_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeightedBlendables"), sizeof(FWeightedBlendables), Get_Z_Construct_UScriptStruct_FWeightedBlendables_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeightedBlendables_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeightedBlendables_CRC() { return 834053900U; }
class UScriptStruct* FWeightedBlendable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FWeightedBlendable_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightedBlendable, Z_Construct_UPackage__Script_Engine(), TEXT("WeightedBlendable"), sizeof(FWeightedBlendable), Get_Z_Construct_UScriptStruct_FWeightedBlendable_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeightedBlendable(FWeightedBlendable::StaticStruct, TEXT("/Script/Engine"), TEXT("WeightedBlendable"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFWeightedBlendable
{
	FScriptStruct_Engine_StaticRegisterNativesFWeightedBlendable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeightedBlendable")),new UScriptStruct::TCppStructOps<FWeightedBlendable>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFWeightedBlendable;
	struct Z_Construct_UScriptStruct_FWeightedBlendable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightedBlendable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Object_MetaData[] = {
		{ "AllowedClasses", "BlendableInterface" },
		{ "Category", "FWeightedBlendable" },
		{ "Keywords", "PostProcess" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "should be of the IBlendableInterface* type but UProperties cannot express that" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Object = { UE4CodeGen_Private::EPropertyClass::Object, "Object", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWeightedBlendable, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Object_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "FWeightedBlendable" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Delta", "0.01" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "0:no effect .. 1:full effect" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Weight = { UE4CodeGen_Private::EPropertyClass::Float, "Weight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FWeightedBlendable, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Weight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightedBlendable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightedBlendable_Statics::NewProp_Weight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightedBlendable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"WeightedBlendable",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FWeightedBlendable),
		alignof(FWeightedBlendable),
		Z_Construct_UScriptStruct_FWeightedBlendable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightedBlendable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeightedBlendable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWeightedBlendable_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeightedBlendable"), sizeof(FWeightedBlendable), Get_Z_Construct_UScriptStruct_FWeightedBlendable_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWeightedBlendable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeightedBlendable_CRC() { return 1406541652U; }
class UScriptStruct* FCameraExposureSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCameraExposureSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraExposureSettings, Z_Construct_UPackage__Script_Engine(), TEXT("CameraExposureSettings"), sizeof(FCameraExposureSettings), Get_Z_Construct_UScriptStruct_FCameraExposureSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCameraExposureSettings(FCameraExposureSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("CameraExposureSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCameraExposureSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFCameraExposureSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CameraExposureSettings")),new UScriptStruct::TCppStructOps<FCameraExposureSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCameraExposureSettings;
	struct Z_Construct_UScriptStruct_FCameraExposureSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CalibrationConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CalibrationConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HistogramLogMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HistogramLogMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HistogramLogMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HistogramLogMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Method;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraExposureSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_CalibrationConstant_MetaData[] = {
		{ "Category", "Exposure" },
		{ "DisplayName", "Calibration Constant" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Calibration constant for 18% albedo." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_CalibrationConstant = { UE4CodeGen_Private::EPropertyClass::Float, "CalibrationConstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FCameraExposureSettings, CalibrationConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_CalibrationConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_CalibrationConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMax_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "temporary exposed until we found good values 4: 16, 8: 256" },
		{ "UIMax", "16.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMax = { UE4CodeGen_Private::EPropertyClass::Float, "HistogramLogMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FCameraExposureSettings, HistogramLogMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMin_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "temporary exposed until we found good values, -8: 1/256, -10: 1/1024" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-16" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMin = { UE4CodeGen_Private::EPropertyClass::Float, "HistogramLogMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FCameraExposureSettings, HistogramLogMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "Exposure" },
		{ "DisplayName", "Exposure Bias" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Logarithmic adjustment for the exposure. Only used if a tonemapper is specified.\n0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ..." },
		{ "UIMax", "8.0" },
		{ "UIMin", "-8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Bias = { UE4CodeGen_Private::EPropertyClass::Float, "Bias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FCameraExposureSettings, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Bias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedDown_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMin", "0.02" },
		{ "DisplayName", "Speed Down" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0" },
		{ "UIMax", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedDown = { UE4CodeGen_Private::EPropertyClass::Float, "SpeedDown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FCameraExposureSettings, SpeedDown), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedDown_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedUp_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMin", "0.02" },
		{ "DisplayName", "Speed Up" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", ">0" },
		{ "UIMax", "20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedUp = { UE4CodeGen_Private::EPropertyClass::Float, "SpeedUp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FCameraExposureSettings, SpeedUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedUp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MaxBrightness_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Max Brightness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "A good value should be positive (2 is a good value). This is the maximum brightness the auto exposure can adapt to.\nIt should be tweaked in a bright lighting situation (too small: image appears too bright, too large: image appears too dark).\nNote: Tweaking emissive materials and lights or tweaking auto exposure can look the same. Tweaking auto exposure has global\neffect and defined the HDR range - you don't want to change that late in the project development.\nEye Adaptation is disabled if MinBrightness = MaxBrightness" },
		{ "UIMax", "10.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MaxBrightness = { UE4CodeGen_Private::EPropertyClass::Float, "MaxBrightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FCameraExposureSettings, MaxBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MaxBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MaxBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MinBrightness_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Min Brightness" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "A good value should be positive near 0. This is the minimum brightness the auto exposure can adapt to.\nIt should be tweaked in a dark lighting situation (too small: image appears too bright, too large: image appears too dark).\nNote: Tweaking emissive materials and lights or tweaking auto exposure can look the same. Tweaking auto exposure has global\neffect and defined the HDR range - you don't want to change that late in the project development.\nEye Adaptation is disabled if MinBrightness = MaxBrightness" },
		{ "UIMax", "10.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MinBrightness = { UE4CodeGen_Private::EPropertyClass::Float, "MinBrightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FCameraExposureSettings, MinBrightness), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MinBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MinBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HighPercent_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "High Percent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\nThe value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\nbut can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\nbright spots.\n>0, <100, good values are in the range 80 .. 95" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HighPercent = { UE4CodeGen_Private::EPropertyClass::Float, "HighPercent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FCameraExposureSettings, HighPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HighPercent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HighPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_LowPercent_MetaData[] = {
		{ "Category", "Exposure" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Low Percent" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\nThe value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\nbut can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\nbright spots.\n>0, <100, good values are in the range 70 .. 80" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_LowPercent = { UE4CodeGen_Private::EPropertyClass::Float, "LowPercent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FCameraExposureSettings, LowPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_LowPercent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_LowPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Exposure" },
		{ "DisplayName", "Method" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Luminance computation method" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Method = { UE4CodeGen_Private::EPropertyClass::Byte, "Method", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCameraExposureSettings, Method), Z_Construct_UEnum_Engine_EAutoExposureMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Method_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Method_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_CalibrationConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HistogramLogMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Bias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_SpeedUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MaxBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_MinBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_HighPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_LowPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::NewProp_Method,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraExposureSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCameraExposureSettings),
		alignof(FCameraExposureSettings),
		Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraExposureSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCameraExposureSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CameraExposureSettings"), sizeof(FCameraExposureSettings), Get_Z_Construct_UScriptStruct_FCameraExposureSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCameraExposureSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCameraExposureSettings_CRC() { return 1939191826U; }
class UScriptStruct* FLensSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLensSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensSettings, Z_Construct_UPackage__Script_Engine(), TEXT("LensSettings"), sizeof(FLensSettings), Get_Z_Construct_UScriptStruct_FLensSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLensSettings(FLensSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("LensSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLensSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFLensSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LensSettings")),new UScriptStruct::TCppStructOps<FLensSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLensSettings;
	struct Z_Construct_UScriptStruct_FLensSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChromaticAberration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChromaticAberration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Imperfections_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Imperfections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bloom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bloom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_ChromaticAberration_MetaData[] = {
		{ "Category", "Lens" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_ChromaticAberration = { UE4CodeGen_Private::EPropertyClass::Float, "ChromaticAberration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FLensSettings, ChromaticAberration), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_ChromaticAberration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_ChromaticAberration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Imperfections_MetaData[] = {
		{ "Category", "Lens" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Imperfections = { UE4CodeGen_Private::EPropertyClass::Struct, "Imperfections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FLensSettings, Imperfections), Z_Construct_UScriptStruct_FLensImperfectionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Imperfections_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Imperfections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Bloom_MetaData[] = {
		{ "Category", "Lens" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Bloom = { UE4CodeGen_Private::EPropertyClass::Struct, "Bloom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FLensSettings, Bloom), Z_Construct_UScriptStruct_FLensBloomSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Bloom_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Bloom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_ChromaticAberration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Imperfections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensSettings_Statics::NewProp_Bloom,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LensSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FLensSettings),
		alignof(FLensSettings),
		Z_Construct_UScriptStruct_FLensSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLensSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LensSettings"), sizeof(FLensSettings), Get_Z_Construct_UScriptStruct_FLensSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLensSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLensSettings_CRC() { return 3377833682U; }
class UScriptStruct* FLensImperfectionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLensImperfectionSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensImperfectionSettings, Z_Construct_UPackage__Script_Engine(), TEXT("LensImperfectionSettings"), sizeof(FLensImperfectionSettings), Get_Z_Construct_UScriptStruct_FLensImperfectionSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLensImperfectionSettings(FLensImperfectionSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("LensImperfectionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLensImperfectionSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFLensImperfectionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LensImperfectionSettings")),new UScriptStruct::TCppStructOps<FLensImperfectionSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLensImperfectionSettings;
	struct Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtMaskTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirtMaskTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtMaskIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirtMaskIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirtMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensImperfectionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskTint_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "DisplayName", "Dirt Mask Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "BloomDirtMask tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskTint = { UE4CodeGen_Private::EPropertyClass::Struct, "DirtMaskTint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FLensImperfectionSettings, DirtMaskTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskTint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskIntensity_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Dirt Mask Intensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "BloomDirtMask intensity" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "DirtMaskIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FLensImperfectionSettings, DirtMaskIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskIntensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMask_MetaData[] = {
		{ "Category", "Lens|Dirt Mask" },
		{ "DisplayName", "Dirt Mask Texture" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Texture that defines the dirt on the camera lens where the light of very bright objects is scattered." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMask = { UE4CodeGen_Private::EPropertyClass::Object, "DirtMask", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FLensImperfectionSettings, DirtMask), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMask_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMaskIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::NewProp_DirtMask,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LensImperfectionSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FLensImperfectionSettings),
		alignof(FLensImperfectionSettings),
		Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensImperfectionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLensImperfectionSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LensImperfectionSettings"), sizeof(FLensImperfectionSettings), Get_Z_Construct_UScriptStruct_FLensImperfectionSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLensImperfectionSettings_CRC() { return 2017105081U; }
class UScriptStruct* FLensBloomSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLensBloomSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensBloomSettings, Z_Construct_UPackage__Script_Engine(), TEXT("LensBloomSettings"), sizeof(FLensBloomSettings), Get_Z_Construct_UScriptStruct_FLensBloomSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLensBloomSettings(FLensBloomSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("LensBloomSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLensBloomSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFLensBloomSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LensBloomSettings")),new UScriptStruct::TCppStructOps<FLensBloomSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLensBloomSettings;
	struct Z_Construct_UScriptStruct_FLensBloomSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Method;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Convolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Convolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GaussianSum_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GaussianSum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensBloomSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensBloomSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom algorithm" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Method = { UE4CodeGen_Private::EPropertyClass::Byte, "Method", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FLensBloomSettings, Method), Z_Construct_UEnum_Engine_EBloomMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Method_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Method_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Convolution_MetaData[] = {
		{ "Category", "Convolution Method" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom convolution method specific settings." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Convolution = { UE4CodeGen_Private::EPropertyClass::Struct, "Convolution", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FLensBloomSettings, Convolution), Z_Construct_UScriptStruct_FConvolutionBloomSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Convolution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Convolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_GaussianSum_MetaData[] = {
		{ "Category", "Gaussian Sum Method" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom gaussian sum method specific settings." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_GaussianSum = { UE4CodeGen_Private::EPropertyClass::Struct, "GaussianSum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FLensBloomSettings, GaussianSum), Z_Construct_UScriptStruct_FGaussianSumBloomSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_GaussianSum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_GaussianSum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensBloomSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Method,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_Convolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensBloomSettings_Statics::NewProp_GaussianSum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensBloomSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LensBloomSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FLensBloomSettings),
		alignof(FLensBloomSettings),
		Z_Construct_UScriptStruct_FLensBloomSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLensBloomSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensBloomSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLensBloomSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LensBloomSettings"), sizeof(FLensBloomSettings), Get_Z_Construct_UScriptStruct_FLensBloomSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLensBloomSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLensBloomSettings_CRC() { return 3658449575U; }
class UScriptStruct* FConvolutionBloomSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FConvolutionBloomSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConvolutionBloomSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ConvolutionBloomSettings"), sizeof(FConvolutionBloomSettings), Get_Z_Construct_UScriptStruct_FConvolutionBloomSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConvolutionBloomSettings(FConvolutionBloomSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ConvolutionBloomSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFConvolutionBloomSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFConvolutionBloomSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConvolutionBloomSettings")),new UScriptStruct::TCppStructOps<FConvolutionBloomSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFConvolutionBloomSettings;
	struct Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BufferScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BufferScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreFilterMult_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreFilterMult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreFilterMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreFilterMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreFilterMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreFilterMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterUV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterUV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConvolutionBloomSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_BufferScale_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Convolution Buffer" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Implicit buffer region as a fraction of the screen size to insure the bloom does not wrap across the screen.  Larger sizes have perf impact." },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_BufferScale = { UE4CodeGen_Private::EPropertyClass::Float, "BufferScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FConvolutionBloomSettings, BufferScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_BufferScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_BufferScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMult_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Boost Mult" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMult = { UE4CodeGen_Private::EPropertyClass::Float, "PreFilterMult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FConvolutionBloomSettings, PreFilterMult), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMult_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMax_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Boost Max" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMax = { UE4CodeGen_Private::EPropertyClass::Float, "PreFilterMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FConvolutionBloomSettings, PreFilterMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMin_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Boost Min" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Boost intensity of select pixels  prior to computing bloom convolution (Min, Max, Multiplier).  Max < Min disables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMin = { UE4CodeGen_Private::EPropertyClass::Float, "PreFilterMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FConvolutionBloomSettings, PreFilterMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_CenterUV_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Center" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "The UV location of the center of the kernel.  Should be very close to (.5,.5)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_CenterUV = { UE4CodeGen_Private::EPropertyClass::Struct, "CenterUV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FConvolutionBloomSettings, CenterUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_CenterUV_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_CenterUV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Convolution Scale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Relative size of the convolution kernel image compared to the minor axis of the viewport" },
		{ "UIMax", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Float, "Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FConvolutionBloomSettings, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "Convolution Kernel" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Texture to replace default convolution bloom kernel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FConvolutionBloomSettings, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Texture_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_BufferScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_PreFilterMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_CenterUV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::NewProp_Texture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ConvolutionBloomSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FConvolutionBloomSettings),
		alignof(FConvolutionBloomSettings),
		Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConvolutionBloomSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConvolutionBloomSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConvolutionBloomSettings"), sizeof(FConvolutionBloomSettings), Get_Z_Construct_UScriptStruct_FConvolutionBloomSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConvolutionBloomSettings_CRC() { return 2657251276U; }
class UScriptStruct* FGaussianSumBloomSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FGaussianSumBloomSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaussianSumBloomSettings, Z_Construct_UPackage__Script_Engine(), TEXT("GaussianSumBloomSettings"), sizeof(FGaussianSumBloomSettings), Get_Z_Construct_UScriptStruct_FGaussianSumBloomSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaussianSumBloomSettings(FGaussianSumBloomSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("GaussianSumBloomSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFGaussianSumBloomSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFGaussianSumBloomSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaussianSumBloomSettings")),new UScriptStruct::TCppStructOps<FGaussianSumBloomSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFGaussianSumBloomSettings;
	struct Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter6Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter6Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter5Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter5Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter4Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter4Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter3Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter3Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter2Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter2Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter1Tint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Filter1Tint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter6Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Filter6Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter5Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Filter5Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter4Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Filter4Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter3Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Filter3Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter2Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Filter2Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter1Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Filter1Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SizeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Threshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaussianSumBloomSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#6 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom6 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Tint = { UE4CodeGen_Private::EPropertyClass::Struct, "Filter6Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter6Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#5 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom5 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Tint = { UE4CodeGen_Private::EPropertyClass::Struct, "Filter5Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter5Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#4 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom4 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Tint = { UE4CodeGen_Private::EPropertyClass::Struct, "Filter4Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter4Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#3 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom3 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Tint = { UE4CodeGen_Private::EPropertyClass::Struct, "Filter3Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter3Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#2 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom2 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Tint = { UE4CodeGen_Private::EPropertyClass::Struct, "Filter2Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter2Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "DisplayName", "#1 Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Bloom1 tint color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Tint = { UE4CodeGen_Private::EPropertyClass::Struct, "Filter1Tint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter1Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Tint_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Tint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#6 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom6 in percent of the screen width\n(is done in 1/64 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "128.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Size = { UE4CodeGen_Private::EPropertyClass::Float, "Filter6Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter6Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#5 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom5 in percent of the screen width\n(is done in 1/32 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "64.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Size = { UE4CodeGen_Private::EPropertyClass::Float, "Filter5Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter5Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#4 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom4 in percent of the screen width\n(is done in 1/16 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "32.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Size = { UE4CodeGen_Private::EPropertyClass::Float, "Filter4Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter4Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#3 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom3 in percent of the screen width\n(is done in 1/8 resolution, larger values cost more performance)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "16.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Size = { UE4CodeGen_Private::EPropertyClass::Float, "Filter3Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter3Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#2 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for Bloom2 in percent of the screen width\n(is done in 1/4 resolution, larger values cost more performance)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Size = { UE4CodeGen_Private::EPropertyClass::Float, "Filter2Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter2Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "#1 Size" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Diameter size for the Bloom1 in percent of the screen width\n(is done in 1/2 resolution, larger values cost more performance, good for high frequency details)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "4.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Size = { UE4CodeGen_Private::EPropertyClass::Float, "Filter1Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Filter1Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_SizeScale_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Size scale" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Scale for all bloom sizes" },
		{ "UIMax", "64.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_SizeScale = { UE4CodeGen_Private::EPropertyClass::Float, "SizeScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040200000005, 1, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, SizeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_SizeScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_SizeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "-1.0" },
		{ "DisplayName", "Threshold" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "minimum brightness the bloom starts having effect\n-1:all pixels affect bloom equally (physically correct, faster as a threshold pass is omitted), 0:all pixels affect bloom brights more, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Threshold = { UE4CodeGen_Private::EPropertyClass::Float, "Threshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Threshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Threshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Threshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Intensity" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ToolTip", "Multiplier for all bloom contributions >=0: off, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Intensity = { UE4CodeGen_Private::EPropertyClass::Float, "Intensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FGaussianSumBloomSettings, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Intensity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Intensity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Tint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter6Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter5Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter4Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter3Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter2Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Filter1Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_SizeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Threshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::NewProp_Intensity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"GaussianSumBloomSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FGaussianSumBloomSettings),
		alignof(FGaussianSumBloomSettings),
		Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaussianSumBloomSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaussianSumBloomSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaussianSumBloomSettings"), sizeof(FGaussianSumBloomSettings), Get_Z_Construct_UScriptStruct_FGaussianSumBloomSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaussianSumBloomSettings_CRC() { return 2147553062U; }
class UScriptStruct* FFilmStockSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FFilmStockSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFilmStockSettings, Z_Construct_UPackage__Script_Engine(), TEXT("FilmStockSettings"), sizeof(FFilmStockSettings), Get_Z_Construct_UScriptStruct_FFilmStockSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFilmStockSettings(FFilmStockSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("FilmStockSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFFilmStockSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFFilmStockSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FilmStockSettings")),new UScriptStruct::TCppStructOps<FFilmStockSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFFilmStockSettings;
	struct Z_Construct_UScriptStruct_FFilmStockSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhiteClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WhiteClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlackClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shoulder_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Shoulder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Toe_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Toe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slope_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Slope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFilmStockSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_WhiteClip_MetaData[] = {
		{ "Category", "Film Stock" },
		{ "DisplayName", "White clip" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_WhiteClip = { UE4CodeGen_Private::EPropertyClass::Float, "WhiteClip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FFilmStockSettings, WhiteClip), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_WhiteClip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_WhiteClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_BlackClip_MetaData[] = {
		{ "Category", "Film Stock" },
		{ "DisplayName", "Black clip" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_BlackClip = { UE4CodeGen_Private::EPropertyClass::Float, "BlackClip", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FFilmStockSettings, BlackClip), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_BlackClip_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_BlackClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Shoulder_MetaData[] = {
		{ "Category", "Film Stock" },
		{ "DisplayName", "Shoulder" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Shoulder = { UE4CodeGen_Private::EPropertyClass::Float, "Shoulder", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FFilmStockSettings, Shoulder), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Shoulder_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Shoulder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Toe_MetaData[] = {
		{ "Category", "Film Stock" },
		{ "DisplayName", "Toe" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Toe = { UE4CodeGen_Private::EPropertyClass::Float, "Toe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FFilmStockSettings, Toe), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Toe_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Toe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Slope_MetaData[] = {
		{ "Category", "Film Stock" },
		{ "DisplayName", "Slope" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Slope = { UE4CodeGen_Private::EPropertyClass::Float, "Slope", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FFilmStockSettings, Slope), METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Slope_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Slope_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFilmStockSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_WhiteClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_BlackClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Shoulder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Toe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFilmStockSettings_Statics::NewProp_Slope,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFilmStockSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FilmStockSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFilmStockSettings),
		alignof(FFilmStockSettings),
		Z_Construct_UScriptStruct_FFilmStockSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFilmStockSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFilmStockSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFilmStockSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FilmStockSettings"), sizeof(FFilmStockSettings), Get_Z_Construct_UScriptStruct_FFilmStockSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFilmStockSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFilmStockSettings_CRC() { return 3812875830U; }
class UScriptStruct* FColorGradingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FColorGradingSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorGradingSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ColorGradingSettings"), sizeof(FColorGradingSettings), Get_Z_Construct_UScriptStruct_FColorGradingSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColorGradingSettings(FColorGradingSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ColorGradingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFColorGradingSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFColorGradingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ColorGradingSettings")),new UScriptStruct::TCppStructOps<FColorGradingSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFColorGradingSettings;
	struct Z_Construct_UScriptStruct_FColorGradingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighlightsMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighlightsMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowsMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowsMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Highlights_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Highlights;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Midtones_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Midtones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shadows_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Global;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorGradingSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMin_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "DisplayName", "HighlightsMin" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMin = { UE4CodeGen_Private::EPropertyClass::Float, "HighlightsMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FColorGradingSettings, HighlightsMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMin_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_ShadowsMax_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "DisplayName", "ShadowsMax" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_ShadowsMax = { UE4CodeGen_Private::EPropertyClass::Float, "ShadowsMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FColorGradingSettings, ShadowsMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_ShadowsMax_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_ShadowsMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Highlights_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Highlights = { UE4CodeGen_Private::EPropertyClass::Struct, "Highlights", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FColorGradingSettings, Highlights), Z_Construct_UScriptStruct_FColorGradePerRangeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Highlights_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Highlights_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Midtones_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Midtones = { UE4CodeGen_Private::EPropertyClass::Struct, "Midtones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FColorGradingSettings, Midtones), Z_Construct_UScriptStruct_FColorGradePerRangeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Midtones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Midtones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Shadows_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Shadows = { UE4CodeGen_Private::EPropertyClass::Struct, "Shadows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FColorGradingSettings, Shadows), Z_Construct_UScriptStruct_FColorGradePerRangeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Shadows_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Shadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Global_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Global = { UE4CodeGen_Private::EPropertyClass::Struct, "Global", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FColorGradingSettings, Global), Z_Construct_UScriptStruct_FColorGradePerRangeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Global_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Global_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorGradingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_HighlightsMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_ShadowsMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Highlights,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Midtones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Shadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingSettings_Statics::NewProp_Global,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorGradingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ColorGradingSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FColorGradingSettings),
		alignof(FColorGradingSettings),
		Z_Construct_UScriptStruct_FColorGradingSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorGradingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorGradingSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorGradingSettings"), sizeof(FColorGradingSettings), Get_Z_Construct_UScriptStruct_FColorGradingSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColorGradingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorGradingSettings_CRC() { return 1440770123U; }
class UScriptStruct* FColorGradePerRangeSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FColorGradePerRangeSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorGradePerRangeSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ColorGradePerRangeSettings"), sizeof(FColorGradePerRangeSettings), Get_Z_Construct_UScriptStruct_FColorGradePerRangeSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColorGradePerRangeSettings(FColorGradePerRangeSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ColorGradePerRangeSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFColorGradePerRangeSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFColorGradePerRangeSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ColorGradePerRangeSettings")),new UScriptStruct::TCppStructOps<FColorGradePerRangeSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFColorGradePerRangeSettings;
	struct Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Contrast;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Saturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Saturation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorGradePerRangeSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FColorGradePerRangeSettings, Offset), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gain = { UE4CodeGen_Private::EPropertyClass::Struct, "Gain", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FColorGradePerRangeSettings, Gain), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gain_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gamma_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gamma = { UE4CodeGen_Private::EPropertyClass::Struct, "Gamma", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FColorGradePerRangeSettings, Gamma), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gamma_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Contrast_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Contrast = { UE4CodeGen_Private::EPropertyClass::Struct, "Contrast", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FColorGradePerRangeSettings, Contrast), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Contrast_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Contrast_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Saturation_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Saturation = { UE4CodeGen_Private::EPropertyClass::Struct, "Saturation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FColorGradePerRangeSettings, Saturation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Saturation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Saturation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Gamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Contrast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::NewProp_Saturation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ColorGradePerRangeSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FColorGradePerRangeSettings),
		alignof(FColorGradePerRangeSettings),
		Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorGradePerRangeSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorGradePerRangeSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorGradePerRangeSettings"), sizeof(FColorGradePerRangeSettings), Get_Z_Construct_UScriptStruct_FColorGradePerRangeSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorGradePerRangeSettings_CRC() { return 2020291562U; }
	void UScene::StaticRegisterNativesUScene()
	{
	}
	UClass* Z_Construct_UClass_UScene_NoRegister()
	{
		return UScene::StaticClass();
	}
	struct Z_Construct_UClass_UScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScene_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/Scene.h" },
		{ "ModuleRelativePath", "Classes/Engine/Scene.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScene>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScene_Statics::ClassParams = {
		&UScene::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UScene_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UScene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScene()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScene_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScene, 346563800);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScene(Z_Construct_UClass_UScene, &UScene::StaticClass, TEXT("/Script/Engine"), TEXT("UScene"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScene);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
