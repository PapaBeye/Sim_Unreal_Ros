// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialShaderQualitySettings/Classes/ShaderPlatformQualitySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderPlatformQualitySettings() {}
// Cross Module References
	MATERIALSHADERQUALITYSETTINGS_API UEnum* Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileCSMQuality();
	UPackage* Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
	MATERIALSHADERQUALITYSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialQualityOverrides();
	MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister();
	MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UShaderPlatformQualitySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EMobileCSMQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileCSMQuality, Z_Construct_UPackage__Script_MaterialShaderQualitySettings(), TEXT("EMobileCSMQuality"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMobileCSMQuality(EMobileCSMQuality_StaticEnum, TEXT("/Script/MaterialShaderQualitySettings"), TEXT("EMobileCSMQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileCSMQuality_CRC() { return 1781770663U; }
	UEnum* Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileCSMQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMobileCSMQuality"), 0, Get_Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileCSMQuality_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMobileCSMQuality::NoFiltering", (int64)EMobileCSMQuality::NoFiltering },
				{ "EMobileCSMQuality::PCF_1x1", (int64)EMobileCSMQuality::PCF_1x1 },
				{ "EMobileCSMQuality::PCF_2x2", (int64)EMobileCSMQuality::PCF_2x2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
				{ "NoFiltering.ToolTip", "// Lowest quality, no filtering." },
				{ "PCF_1x1.DisplayName", "1x1 PCF" },
				{ "PCF_1x1.ToolTip", "Medium quality, 1x1 PCF filtering." },
				{ "PCF_2x2.DisplayName", "2x2 PCF" },
				{ "PCF_2x2.ToolTip", "Highest quality, 2x2 PCF filtering." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MaterialShaderQualitySettings,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMobileCSMQuality",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMobileCSMQuality",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMaterialQualityOverrides::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MATERIALSHADERQUALITYSETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FMaterialQualityOverrides_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialQualityOverrides, Z_Construct_UPackage__Script_MaterialShaderQualitySettings(), TEXT("MaterialQualityOverrides"), sizeof(FMaterialQualityOverrides), Get_Z_Construct_UScriptStruct_FMaterialQualityOverrides_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialQualityOverrides(FMaterialQualityOverrides::StaticStruct, TEXT("/Script/MaterialShaderQualitySettings"), TEXT("MaterialQualityOverrides"), false, nullptr, nullptr);
static struct FScriptStruct_MaterialShaderQualitySettings_StaticRegisterNativesFMaterialQualityOverrides
{
	FScriptStruct_MaterialShaderQualitySettings_StaticRegisterNativesFMaterialQualityOverrides()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialQualityOverrides")),new UScriptStruct::TCppStructOps<FMaterialQualityOverrides>);
	}
} ScriptStruct_MaterialShaderQualitySettings_StaticRegisterNativesFMaterialQualityOverrides;
	struct Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileCSMQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MobileCSMQuality;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MobileCSMQuality_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableMaterialNormalCalculation_MetaData[];
#endif
		static void NewProp_bDisableMaterialNormalCalculation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableMaterialNormalCalculation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceLQReflections_MetaData[];
#endif
		static void NewProp_bForceLQReflections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceLQReflections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceDisableLMDirectionality_MetaData[];
#endif
		static void NewProp_bForceDisableLMDirectionality_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceDisableLMDirectionality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceNonMetal_MetaData[];
#endif
		static void NewProp_bForceNonMetal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceNonMetal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceFullyRough_MetaData[];
#endif
		static void NewProp_bForceFullyRough_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceFullyRough;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOverride_MetaData[];
#endif
		static void NewProp_bEnableOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDiscardQualityDuringCook_MetaData[];
#endif
		static void NewProp_bDiscardQualityDuringCook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDiscardQualityDuringCook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
		{ "ToolTip", "FMaterialQualityOverrides represents the full set of possible material overrides per quality level." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialQualityOverrides>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_MobileCSMQuality_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Cascade shadow mapping quality" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_MobileCSMQuality = { UE4CodeGen_Private::EPropertyClass::Enum, "MobileCSMQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(FMaterialQualityOverrides, MobileCSMQuality), Z_Construct_UEnum_MaterialShaderQualitySettings_EMobileCSMQuality, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_MobileCSMQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_MobileCSMQuality_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_MobileCSMQuality_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDisableMaterialNormalCalculation_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Disable material normal calculation" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDisableMaterialNormalCalculation_SetBit(void* Obj)
	{
		((FMaterialQualityOverrides*)Obj)->bDisableMaterialNormalCalculation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDisableMaterialNormalCalculation = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableMaterialNormalCalculation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialQualityOverrides), &Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDisableMaterialNormalCalculation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDisableMaterialNormalCalculation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDisableMaterialNormalCalculation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceLQReflections_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Force low quality reflections" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceLQReflections_SetBit(void* Obj)
	{
		((FMaterialQualityOverrides*)Obj)->bForceLQReflections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceLQReflections = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceLQReflections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialQualityOverrides), &Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceLQReflections_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceLQReflections_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceLQReflections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceDisableLMDirectionality_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Disable Lightmap directionality" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceDisableLMDirectionality_SetBit(void* Obj)
	{
		((FMaterialQualityOverrides*)Obj)->bForceDisableLMDirectionality = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceDisableLMDirectionality = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceDisableLMDirectionality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialQualityOverrides), &Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceDisableLMDirectionality_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceDisableLMDirectionality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceDisableLMDirectionality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceNonMetal_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Force Non-metal" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceNonMetal_SetBit(void* Obj)
	{
		((FMaterialQualityOverrides*)Obj)->bForceNonMetal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceNonMetal = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceNonMetal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialQualityOverrides), &Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceNonMetal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceNonMetal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceNonMetal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceFullyRough_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Force Fully Rough" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceFullyRough_SetBit(void* Obj)
	{
		((FMaterialQualityOverrides*)Obj)->bForceFullyRough = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceFullyRough = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceFullyRough", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialQualityOverrides), &Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceFullyRough_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceFullyRough_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceFullyRough_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bEnableOverride_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Enable Quality Override" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bEnableOverride_SetBit(void* Obj)
	{
		((FMaterialQualityOverrides*)Obj)->bEnableOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bEnableOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialQualityOverrides), &Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bEnableOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bEnableOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bEnableOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDiscardQualityDuringCook_MetaData[] = {
		{ "Category", "Quality" },
		{ "DisplayName", "Discard Quality During Cook" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDiscardQualityDuringCook_SetBit(void* Obj)
	{
		((FMaterialQualityOverrides*)Obj)->bDiscardQualityDuringCook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDiscardQualityDuringCook = { UE4CodeGen_Private::EPropertyClass::Bool, "bDiscardQualityDuringCook", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMaterialQualityOverrides), &Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDiscardQualityDuringCook_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDiscardQualityDuringCook_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDiscardQualityDuringCook_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_MobileCSMQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_MobileCSMQuality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDisableMaterialNormalCalculation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceLQReflections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceDisableLMDirectionality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceNonMetal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bForceFullyRough,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bEnableOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::NewProp_bDiscardQualityDuringCook,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialShaderQualitySettings,
		nullptr,
		&NewStructOps,
		"MaterialQualityOverrides",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMaterialQualityOverrides),
		alignof(FMaterialQualityOverrides),
		Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialQualityOverrides()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialQualityOverrides_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialQualityOverrides"), sizeof(FMaterialQualityOverrides), Get_Z_Construct_UScriptStruct_FMaterialQualityOverrides_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialQualityOverrides_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialQualityOverrides_CRC() { return 10315252U; }
	void UShaderPlatformQualitySettings::StaticRegisterNativesUShaderPlatformQualitySettings()
	{
	}
	UClass* Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister()
	{
		return UShaderPlatformQualitySettings::StaticClass();
	}
	struct Z_Construct_UClass_UShaderPlatformQualitySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QualityOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QualityOverrides;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialShaderQualitySettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShaderPlatformQualitySettings.h" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::NewProp_QualityOverrides_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Classes/ShaderPlatformQualitySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::NewProp_QualityOverrides = { UE4CodeGen_Private::EPropertyClass::Struct, "QualityOverrides", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, CPP_ARRAY_DIM(QualityOverrides, UShaderPlatformQualitySettings), nullptr, STRUCT_OFFSET(UShaderPlatformQualitySettings, QualityOverrides), Z_Construct_UScriptStruct_FMaterialQualityOverrides, METADATA_PARAMS(Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::NewProp_QualityOverrides_MetaData, ARRAY_COUNT(Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::NewProp_QualityOverrides_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::NewProp_QualityOverrides,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShaderPlatformQualitySettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::ClassParams = {
		&UShaderPlatformQualitySettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001004A6u,
		nullptr, 0,
		Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShaderPlatformQualitySettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShaderPlatformQualitySettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShaderPlatformQualitySettings, 246579299);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShaderPlatformQualitySettings(Z_Construct_UClass_UShaderPlatformQualitySettings, &UShaderPlatformQualitySettings::StaticClass, TEXT("/Script/MaterialShaderQualitySettings"), TEXT("UShaderPlatformQualitySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShaderPlatformQualitySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
