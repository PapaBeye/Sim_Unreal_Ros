// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/UserInterfaceSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserInterfaceSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EUIScalingRule();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERenderFocusRule();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHardwareCursorReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UUserInterfaceSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDPICustomScalingRule_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EMouseCursor();
// End Cross Module References
	static UEnum* EUIScalingRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EUIScalingRule, Z_Construct_UPackage__Script_Engine(), TEXT("EUIScalingRule"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUIScalingRule(EUIScalingRule_StaticEnum, TEXT("/Script/Engine"), TEXT("EUIScalingRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EUIScalingRule_CRC() { return 2219703357U; }
	UEnum* Z_Construct_UEnum_Engine_EUIScalingRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUIScalingRule"), 0, Get_Z_Construct_UEnum_Engine_EUIScalingRule_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUIScalingRule::ShortestSide", (int64)EUIScalingRule::ShortestSide },
				{ "EUIScalingRule::LongestSide", (int64)EUIScalingRule::LongestSide },
				{ "EUIScalingRule::Horizontal", (int64)EUIScalingRule::Horizontal },
				{ "EUIScalingRule::Vertical", (int64)EUIScalingRule::Vertical },
				{ "EUIScalingRule::Custom", (int64)EUIScalingRule::Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Custom.ToolTip", "Custom - Allows custom rule interpretation." },
				{ "Horizontal.ToolTip", "Evaluates the scale curve based on the X axis of the viewport." },
				{ "LongestSide.ToolTip", "Evaluates the scale curve based on the longest side of the viewport." },
				{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
				{ "ShortestSide.ToolTip", "Evaluates the scale curve based on the shortest side of the viewport." },
				{ "ToolTip", "The Side to use when scaling the UI." },
				{ "Vertical.ToolTip", "Evaluates the scale curve based on the Y axis of the viewport." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EUIScalingRule",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EUIScalingRule",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERenderFocusRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERenderFocusRule, Z_Construct_UPackage__Script_Engine(), TEXT("ERenderFocusRule"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERenderFocusRule(ERenderFocusRule_StaticEnum, TEXT("/Script/Engine"), TEXT("ERenderFocusRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERenderFocusRule_CRC() { return 2550642646U; }
	UEnum* Z_Construct_UEnum_Engine_ERenderFocusRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERenderFocusRule"), 0, Get_Z_Construct_UEnum_Engine_ERenderFocusRule_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERenderFocusRule::Always", (int64)ERenderFocusRule::Always },
				{ "ERenderFocusRule::NonPointer", (int64)ERenderFocusRule::NonPointer },
				{ "ERenderFocusRule::NavigationOnly", (int64)ERenderFocusRule::NavigationOnly },
				{ "ERenderFocusRule::Never", (int64)ERenderFocusRule::Never },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.ToolTip", "Focus Brush will always be rendered for widgets that have user focus." },
				{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
				{ "NavigationOnly.ToolTip", "Focus Brush will be rendered for widgets that have user focus only if the focus was set by navigation." },
				{ "Never.ToolTip", "Focus Brush will not be rendered." },
				{ "NonPointer.ToolTip", "Focus Brush will be rendered for widgets that have user focus not set based on pointer causes." },
				{ "ToolTip", "When to render the Focus Brush for widgets that have user focus. Based on the EFocusCause." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERenderFocusRule",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERenderFocusRule",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FHardwareCursorReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FHardwareCursorReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHardwareCursorReference, Z_Construct_UPackage__Script_Engine(), TEXT("HardwareCursorReference"), sizeof(FHardwareCursorReference), Get_Z_Construct_UScriptStruct_FHardwareCursorReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHardwareCursorReference(FHardwareCursorReference::StaticStruct, TEXT("/Script/Engine"), TEXT("HardwareCursorReference"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFHardwareCursorReference
{
	FScriptStruct_Engine_StaticRegisterNativesFHardwareCursorReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HardwareCursorReference")),new UScriptStruct::TCppStructOps<FHardwareCursorReference>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFHardwareCursorReference;
	struct Z_Construct_UScriptStruct_FHardwareCursorReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HotSpot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HotSpot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CursorPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHardwareCursorReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_HotSpot_MetaData[] = {
		{ "Category", "Hardware Cursor" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "HotSpot needs to be in normalized (0..1) coordinates since it may apply to different resolution images.\nNOTE: This HotSpot is only used on formats that do not provide their own hotspot, e.g. Tiff, PNG." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_HotSpot = { UE4CodeGen_Private::EPropertyClass::Struct, "HotSpot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FHardwareCursorReference, HotSpot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_HotSpot_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_HotSpot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_CursorPath_MetaData[] = {
		{ "Category", "Hardware Cursor" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "Specify the partial game content path to the hardware cursor.  For example,\n  DO:   Slate/DefaultPointer\n  DONT: Slate/DefaultPointer.cur\n\nNOTE: Having a 'Slate' directory in your game content folder will always be cooked, if\n      you're trying to decide where to locate these cursor files.\n\nThe hardware cursor system will search for platform specific formats first if you want to\ntake advantage of those capabilities.\n\nWindows:\n  .ani -> .cur -> .png\n\nMac:\n  .tiff -> .png\n\nLinux:\n  .png\n\nMulti-Resolution Png Fallback\n Because there's not a universal multi-resolution format for cursors there's a pattern we look for\n on all platforms where pngs are all that is found instead of cur/ani/tiff.\n\n   Pointer.png\n   Pointer@1.25x.png\n   Pointer@1.5x.png\n   Pointer@1.75x.png\n   Pointer@2x.png\n   ...etc" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_CursorPath = { UE4CodeGen_Private::EPropertyClass::Name, "CursorPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FHardwareCursorReference, CursorPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_CursorPath_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_CursorPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_HotSpot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_CursorPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HardwareCursorReference",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FHardwareCursorReference),
		alignof(FHardwareCursorReference),
		Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHardwareCursorReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHardwareCursorReference_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HardwareCursorReference"), sizeof(FHardwareCursorReference), Get_Z_Construct_UScriptStruct_FHardwareCursorReference_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHardwareCursorReference_CRC() { return 1993501628U; }
	void UUserInterfaceSettings::StaticRegisterNativesUUserInterfaceSettings()
	{
	}
	UClass* Z_Construct_UClass_UUserInterfaceSettings_NoRegister()
	{
		return UUserInterfaceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUserInterfaceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomScalingRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomScalingRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomScalingRuleClassInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CustomScalingRuleClassInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CursorClasses;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoadWidgetsOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bLoadWidgetsOnDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoadWidgetsOnDedicatedServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowHighDPIInGameMode_MetaData[];
#endif
		static void NewProp_bAllowHighDPIInGameMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowHighDPIInGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIScaleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIScaleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomScalingRuleClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomScalingRuleClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIScaleRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UIScaleRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UIScaleRule_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ApplicationScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlashedCircleCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlashedCircleCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabHandClosedCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabHandClosedCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabHandCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabHandCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairsCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CrosshairsCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextEditBeamCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextEditBeamCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftwareCursors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SoftwareCursors;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoftwareCursors_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoftwareCursors_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HardwareCursors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_HardwareCursors;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HardwareCursors_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HardwareCursors_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderFocusRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RenderFocusRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RenderFocusRule_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserInterfaceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "User Interface" },
		{ "IncludePath", "Engine/UserInterfaceSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "User Interface settings that control Slate and UMG." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRule_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRule = { UE4CodeGen_Private::EPropertyClass::Object, "CustomScalingRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, CustomScalingRule), Z_Construct_UClass_UDPICustomScalingRule_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClassInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClassInstance = { UE4CodeGen_Private::EPropertyClass::Class, "CustomScalingRuleClassInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, CustomScalingRuleClassInstance), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClassInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClassInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses = { UE4CodeGen_Private::EPropertyClass::Array, "CursorClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, CursorClasses), METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CursorClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "If false, widget references will be stripped during cook for server builds and not loaded at runtime." },
	};
#endif
	void Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer_SetBit(void* Obj)
	{
		((UUserInterfaceSettings*)Obj)->bLoadWidgetsOnDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoadWidgetsOnDedicatedServer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UUserInterfaceSettings), &Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode_MetaData[] = {
		{ "Category", "DPI Scaling" },
		{ "DisplayName", "Allow High DPI in Game Mode" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "If true, game window on desktop platforms will be created with high-DPI awareness enabled.\nRecommended to be enabled only if the game's UI allows users to modify 3D resolution scaling." },
	};
#endif
	void Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode_SetBit(void* Obj)
	{
		((UUserInterfaceSettings*)Obj)->bAllowHighDPIInGameMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowHighDPIInGameMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UUserInterfaceSettings), &Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleCurve_MetaData[] = {
		{ "Category", "DPI Scaling" },
		{ "DisplayName", "DPI Curve" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "Controls how the UI is scaled at different resolutions based on the DPI Scale Rule" },
		{ "XAxisName", "Resolution" },
		{ "YAxisName", "Scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "UIScaleCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, UIScaleCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClass_MetaData[] = {
		{ "Category", "DPI Scaling" },
		{ "MetaClass", "DPICustomScalingRule" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "Set DPI Scale Rule to Custom, and this class will be used instead of any of the built-in rules." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClass = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomScalingRuleClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, CustomScalingRuleClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule_MetaData[] = {
		{ "Category", "DPI Scaling" },
		{ "DisplayName", "DPI Scale Rule" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "The rule used when trying to decide what scale to apply." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule = { UE4CodeGen_Private::EPropertyClass::Enum, "UIScaleRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, UIScaleRule), Z_Construct_UEnum_Engine_EUIScalingRule, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_ApplicationScale_MetaData[] = {
		{ "Category", "DPI Scaling" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "An optional application scale to apply on top of the custom scaling rules.  So if you want to expose a\nproperty in your game title, you can modify this underlying value to scale the entire UI." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_ApplicationScale = { UE4CodeGen_Private::EPropertyClass::Float, "ApplicationScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, ApplicationScale), METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_ApplicationScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_ApplicationScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SlashedCircleCursor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SlashedCircleCursor = { UE4CodeGen_Private::EPropertyClass::Struct, "SlashedCircleCursor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020004000, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, SlashedCircleCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SlashedCircleCursor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SlashedCircleCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandClosedCursor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandClosedCursor = { UE4CodeGen_Private::EPropertyClass::Struct, "GrabHandClosedCursor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020004000, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, GrabHandClosedCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandClosedCursor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandClosedCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandCursor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandCursor = { UE4CodeGen_Private::EPropertyClass::Struct, "GrabHandCursor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020004000, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, GrabHandCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandCursor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HandCursor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HandCursor = { UE4CodeGen_Private::EPropertyClass::Struct, "HandCursor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020004000, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, HandCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HandCursor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HandCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CrosshairsCursor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CrosshairsCursor = { UE4CodeGen_Private::EPropertyClass::Struct, "CrosshairsCursor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020004000, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, CrosshairsCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CrosshairsCursor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CrosshairsCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_TextEditBeamCursor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_TextEditBeamCursor = { UE4CodeGen_Private::EPropertyClass::Struct, "TextEditBeamCursor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020004000, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, TextEditBeamCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_TextEditBeamCursor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_TextEditBeamCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DefaultCursor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DefaultCursor = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultCursor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020004000, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, DefaultCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DefaultCursor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DefaultCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_MetaData[] = {
		{ "Category", "Software Cursors" },
		{ "MetaClass", "UserWidget" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors = { UE4CodeGen_Private::EPropertyClass::Map, "SoftwareCursors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, SoftwareCursors), METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Byte, "SoftwareCursors_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004001, 1, nullptr, 0, Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "SoftwareCursors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004001, 1, nullptr, 1, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_MetaData[] = {
		{ "Category", "Hardware Cursors" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors = { UE4CodeGen_Private::EPropertyClass::Map, "HardwareCursors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, HardwareCursors), METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Byte, "HardwareCursors_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004001, 1, nullptr, 0, Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "HardwareCursors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004001, 1, nullptr, 1, Z_Construct_UScriptStruct_FHardwareCursorReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule_MetaData[] = {
		{ "Category", "Focus" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "Rule to determine if we should render the Focus Brush for widgets that have user focus." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule = { UE4CodeGen_Private::EPropertyClass::Enum, "RenderFocusRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, RenderFocusRule), Z_Construct_UEnum_Engine_ERenderFocusRule, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserInterfaceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClassInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_ApplicationScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SlashedCircleCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandClosedCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HandCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CrosshairsCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_TextEditBeamCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DefaultCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserInterfaceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserInterfaceSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserInterfaceSettings_Statics::ClassParams = {
		&UUserInterfaceSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A6u,
		nullptr, 0,
		Z_Construct_UClass_UUserInterfaceSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserInterfaceSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserInterfaceSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserInterfaceSettings, 3814823649);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserInterfaceSettings(Z_Construct_UClass_UUserInterfaceSettings, &UUserInterfaceSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UUserInterfaceSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserInterfaceSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
