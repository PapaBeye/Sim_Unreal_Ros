// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/MaterialMerging.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialMerging() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialMergeType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSizingType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	static UEnum* EMaterialMergeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialMergeType, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialMergeType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialMergeType(EMaterialMergeType_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialMergeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialMergeType_CRC() { return 631395555U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialMergeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialMergeType"), 0, Get_Z_Construct_UEnum_Engine_EMaterialMergeType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MaterialMergeType_Default", (int64)MaterialMergeType_Default },
				{ "MaterialMergeType_Simplygon", (int64)MaterialMergeType_Simplygon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMaterialMergeType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EMaterialMergeType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETextureSizingType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureSizingType, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureSizingType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureSizingType(ETextureSizingType_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureSizingType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureSizingType_CRC() { return 1130551713U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureSizingType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureSizingType"), 0, Get_Z_Construct_UEnum_Engine_ETextureSizingType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TextureSizingType_UseSingleTextureSize", (int64)TextureSizingType_UseSingleTextureSize },
				{ "TextureSizingType_UseAutomaticBiasedSizes", (int64)TextureSizingType_UseAutomaticBiasedSizes },
				{ "TextureSizingType_UseManualOverrideTextureSize", (int64)TextureSizingType_UseManualOverrideTextureSize },
				{ "TextureSizingType_UseSimplygonAutomaticSizing", (int64)TextureSizingType_UseSimplygonAutomaticSizing },
				{ "TextureSizingType_MAX", (int64)TextureSizingType_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
				{ "TextureSizingType_UseAutomaticBiasedSizes.DisplayName", "Use automatically biased texture sizes based on TextureSize" },
				{ "TextureSizingType_UseManualOverrideTextureSize.DisplayName", "Use per property manually overriden texture sizes" },
				{ "TextureSizingType_UseSimplygonAutomaticSizing.DisplayName", "Use Simplygon's automatic texture sizing" },
				{ "TextureSizingType_UseSingleTextureSize.DisplayName", "Use TextureSize for all material properties" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETextureSizingType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETextureSizingType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMaterialProxySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialProxySettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialProxySettings, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialProxySettings"), sizeof(FMaterialProxySettings), Get_Z_Construct_UScriptStruct_FMaterialProxySettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialProxySettings(FMaterialProxySettings::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialProxySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialProxySettings
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialProxySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialProxySettings")),new UScriptStruct::TCppStructOps<FMaterialProxySettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialProxySettings;
	struct Z_Construct_UScriptStruct_FMaterialProxySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialMergeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialMergeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmbientOcclusionTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityMaskTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpacityMaskTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpacityTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmissiveTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecularTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecularTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoughnessTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoughnessTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetallicTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetallicTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffuseTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiffuseTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAmbientOcclusionMap_MetaData[];
#endif
		static void NewProp_bAmbientOcclusionMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAmbientOcclusionMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityMaskConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpacityMaskConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOpacityMaskMap_MetaData[];
#endif
		static void NewProp_bOpacityMaskMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOpacityMaskMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpacityConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOpacityMap_MetaData[];
#endif
		static void NewProp_bOpacityMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOpacityMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEmissiveMap_MetaData[];
#endif
		static void NewProp_bEmissiveMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmissiveMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecularConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpecularConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpecularMap_MetaData[];
#endif
		static void NewProp_bSpecularMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpecularMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoughnessConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoughnessConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRoughnessMap_MetaData[];
#endif
		static void NewProp_bRoughnessMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRoughnessMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetallicConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MetallicConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMetallicMap_MetaData[];
#endif
		static void NewProp_bMetallicMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMetallicMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNormalMap_MetaData[];
#endif
		static void NewProp_bNormalMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNormalMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GutterSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GutterSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureSizingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureSizingType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialProxySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_BlendMode = { UE4CodeGen_Private::EPropertyClass::Byte, "BlendMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_BlendMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_BlendMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MaterialMergeType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MaterialMergeType = { UE4CodeGen_Private::EPropertyClass::Byte, "MaterialMergeType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, MaterialMergeType), Z_Construct_UEnum_Engine_EMaterialMergeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MaterialMergeType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MaterialMergeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionTextureSize = { UE4CodeGen_Private::EPropertyClass::Struct, "AmbientOcclusionTextureSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, AmbientOcclusionTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionTextureSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override opacity map size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskTextureSize = { UE4CodeGen_Private::EPropertyClass::Struct, "OpacityMaskTextureSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, OpacityMaskTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskTextureSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override opacity map size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityTextureSize = { UE4CodeGen_Private::EPropertyClass::Struct, "OpacityTextureSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, OpacityTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityTextureSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_EmissiveTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override emissive map size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_EmissiveTextureSize = { UE4CodeGen_Private::EPropertyClass::Struct, "EmissiveTextureSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, EmissiveTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_EmissiveTextureSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_EmissiveTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override specular map size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularTextureSize = { UE4CodeGen_Private::EPropertyClass::Struct, "SpecularTextureSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, SpecularTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularTextureSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override roughness map size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessTextureSize = { UE4CodeGen_Private::EPropertyClass::Struct, "RoughnessTextureSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, RoughnessTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessTextureSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override metallic map size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicTextureSize = { UE4CodeGen_Private::EPropertyClass::Struct, "MetallicTextureSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, MetallicTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicTextureSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_NormalTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override normal map size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_NormalTextureSize = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalTextureSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, NormalTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_NormalTextureSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_NormalTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_DiffuseTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override diffuse map size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_DiffuseTextureSize = { UE4CodeGen_Private::EPropertyClass::Struct, "DiffuseTextureSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, DiffuseTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_DiffuseTextureSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_DiffuseTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "editcondition", "!bAmbientOcclusionMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionConstant = { UE4CodeGen_Private::EPropertyClass::Float, "AmbientOcclusionConstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, AmbientOcclusionConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bAmbientOcclusionMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bAmbientOcclusionMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "editcondition", "!bOpacityMaskMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskConstant = { UE4CodeGen_Private::EPropertyClass::Float, "OpacityMaskConstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, OpacityMaskConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bOpacityMaskMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bOpacityMaskMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "editcondition", "!bOpacityMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityConstant = { UE4CodeGen_Private::EPropertyClass::Float, "OpacityConstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, OpacityConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate opacity map" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bOpacityMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bOpacityMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate emissive map" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bEmissiveMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bEmissiveMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "editcondition", "!bSpecularMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Specular constant" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularConstant = { UE4CodeGen_Private::EPropertyClass::Float, "SpecularConstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, SpecularConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate specular map" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bSpecularMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bSpecularMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "editcondition", "!bRoughnessMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Roughness constant" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessConstant = { UE4CodeGen_Private::EPropertyClass::Float, "RoughnessConstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, RoughnessConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate roughness map" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bRoughnessMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bRoughnessMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "editcondition", "!bMetallicMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Metallic constant" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicConstant = { UE4CodeGen_Private::EPropertyClass::Float, "MetallicConstant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, MetallicConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicConstant_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate metallic map" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bMetallicMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bMetallicMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate normal map" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bNormalMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bNormalMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_GutterSpace_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_GutterSpace = { UE4CodeGen_Private::EPropertyClass::Float, "GutterSpace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, GutterSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_GutterSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_GutterSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSizingType_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSizingType = { UE4CodeGen_Private::EPropertyClass::Byte, "TextureSizingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, TextureSizingType), Z_Construct_UEnum_Engine_ETextureSizingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSizingType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSizingType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Size of generated BaseColor map" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSize = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMaterialProxySettings, TextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_BlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MaterialMergeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_EmissiveTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_NormalTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_DiffuseTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_GutterSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSizingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialProxySettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMaterialProxySettings),
		alignof(FMaterialProxySettings),
		Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialProxySettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialProxySettings"), sizeof(FMaterialProxySettings), Get_Z_Construct_UScriptStruct_FMaterialProxySettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialProxySettings_CRC() { return 2326497549U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
