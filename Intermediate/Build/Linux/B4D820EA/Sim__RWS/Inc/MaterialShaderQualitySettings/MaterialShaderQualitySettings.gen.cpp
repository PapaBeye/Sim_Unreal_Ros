// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialShaderQualitySettings/Classes/MaterialShaderQualitySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialShaderQualitySettings() {}
// Cross Module References
	MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister();
	MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UMaterialShaderQualitySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
	MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister();
// End Cross Module References
	void UMaterialShaderQualitySettings::StaticRegisterNativesUMaterialShaderQualitySettings()
	{
	}
	UClass* Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister()
	{
		return UMaterialShaderQualitySettings::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialShaderQualitySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardSettingMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ForwardSettingMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ForwardSettingMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForwardSettingMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialShaderQualitySettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialShaderQualitySettings.h" },
		{ "ModuleRelativePath", "Classes/MaterialShaderQualitySettings.h" },
		{ "ToolTip", "UCLASS(config = Engine, defaultconfig)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialShaderQualitySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap = { UE4CodeGen_Private::EPropertyClass::Map, "ForwardSettingMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialShaderQualitySettings, ForwardSettingMap), METADATA_PARAMS(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "ForwardSettingMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "ForwardSettingMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialShaderQualitySettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::ClassParams = {
		&UMaterialShaderQualitySettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialShaderQualitySettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialShaderQualitySettings, 2624032187);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialShaderQualitySettings(Z_Construct_UClass_UMaterialShaderQualitySettings, &UMaterialShaderQualitySettings::StaticClass, TEXT("/Script/MaterialShaderQualitySettings"), TEXT("UMaterialShaderQualitySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialShaderQualitySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
