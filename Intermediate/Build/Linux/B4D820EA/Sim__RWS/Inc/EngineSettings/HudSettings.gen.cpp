// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineSettings/Classes/HudSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudSettings() {}
// Cross Module References
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UHudSettings_NoRegister();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UHudSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References
	void UHudSettings::StaticRegisterNativesUHudSettings()
	{
	}
	UClass* Z_Construct_UClass_UHudSettings_NoRegister()
	{
		return UHudSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHudSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugDisplay;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DebugDisplay_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowHUD_MetaData[];
#endif
		static void NewProp_bShowHUD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowHUD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HudSettings.h" },
		{ "ModuleRelativePath", "Classes/HudSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudSettings_Statics::NewProp_DebugDisplay_MetaData[] = {
		{ "Category", "HudSettings" },
		{ "ModuleRelativePath", "Classes/HudSettings.h" },
		{ "ToolTip", "Collection of names specifying what debug info to display for ViewTarget actor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHudSettings_Statics::NewProp_DebugDisplay = { UE4CodeGen_Private::EPropertyClass::Array, "DebugDisplay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UHudSettings, DebugDisplay), METADATA_PARAMS(Z_Construct_UClass_UHudSettings_Statics::NewProp_DebugDisplay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHudSettings_Statics::NewProp_DebugDisplay_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHudSettings_Statics::NewProp_DebugDisplay_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "DebugDisplay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudSettings_Statics::NewProp_bShowHUD_MetaData[] = {
		{ "Category", "HudSettings" },
		{ "ModuleRelativePath", "Classes/HudSettings.h" },
		{ "ToolTip", "Whether the HUD is visible at all." },
	};
#endif
	void Z_Construct_UClass_UHudSettings_Statics::NewProp_bShowHUD_SetBit(void* Obj)
	{
		((UHudSettings*)Obj)->bShowHUD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHudSettings_Statics::NewProp_bShowHUD = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowHUD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UHudSettings), &Z_Construct_UClass_UHudSettings_Statics::NewProp_bShowHUD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHudSettings_Statics::NewProp_bShowHUD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHudSettings_Statics::NewProp_bShowHUD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudSettings_Statics::NewProp_DebugDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudSettings_Statics::NewProp_DebugDisplay_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudSettings_Statics::NewProp_bShowHUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudSettings_Statics::ClassParams = {
		&UHudSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A4u,
		nullptr, 0,
		Z_Construct_UClass_UHudSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UHudSettings_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UHudSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHudSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudSettings, 3950210852);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudSettings(Z_Construct_UClass_UHudSettings, &UHudSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UHudSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
