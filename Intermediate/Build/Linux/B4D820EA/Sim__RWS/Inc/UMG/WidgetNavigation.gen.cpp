// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Blueprint/WidgetNavigation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetNavigation() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetNavigationData();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigationRule();
	UMG_API UClass* Z_Construct_UClass_UWidgetNavigation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetNavigation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics
	{
		struct _Script_UMG_eventCustomWidgetNavigationDelegate_Parms
		{
			EUINavigation Navigation;
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Navigation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Navigation_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventCustomWidgetNavigationDelegate_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_Navigation = { UE4CodeGen_Private::EPropertyClass::Enum, "Navigation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_UMG_eventCustomWidgetNavigationDelegate_Parms, Navigation), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_Navigation_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_Navigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_Navigation_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, "CustomWidgetNavigationDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_UMG_eventCustomWidgetNavigationDelegate_Parms), Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FWidgetNavigationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FWidgetNavigationData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetNavigationData, Z_Construct_UPackage__Script_UMG(), TEXT("WidgetNavigationData"), sizeof(FWidgetNavigationData), Get_Z_Construct_UScriptStruct_FWidgetNavigationData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWidgetNavigationData(FWidgetNavigationData::StaticStruct, TEXT("/Script/UMG"), TEXT("WidgetNavigationData"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFWidgetNavigationData
{
	FScriptStruct_UMG_StaticRegisterNativesFWidgetNavigationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WidgetNavigationData")),new UScriptStruct::TCppStructOps<FWidgetNavigationData>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFWidgetNavigationData;
	struct Z_Construct_UScriptStruct_FWidgetNavigationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_CustomDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetToFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WidgetToFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rule_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rule_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetNavigationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_CustomDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_CustomDelegate = { UE4CodeGen_Private::EPropertyClass::Delegate, "CustomDelegate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080000, 1, nullptr, STRUCT_OFFSET(FWidgetNavigationData, CustomDelegate), Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_CustomDelegate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_CustomDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Widget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::WeakObject, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000080008, 1, nullptr, STRUCT_OFFSET(FWidgetNavigationData, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_WidgetToFocus_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_WidgetToFocus = { UE4CodeGen_Private::EPropertyClass::Name, "WidgetToFocus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FWidgetNavigationData, WidgetToFocus), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_WidgetToFocus_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_WidgetToFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule = { UE4CodeGen_Private::EPropertyClass::Enum, "Rule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FWidgetNavigationData, Rule), Z_Construct_UEnum_SlateCore_EUINavigationRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_CustomDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_WidgetToFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"WidgetNavigationData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FWidgetNavigationData),
		alignof(FWidgetNavigationData),
		Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetNavigationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWidgetNavigationData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WidgetNavigationData"), sizeof(FWidgetNavigationData), Get_Z_Construct_UScriptStruct_FWidgetNavigationData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWidgetNavigationData_CRC() { return 1952523909U; }
	void UWidgetNavigation::StaticRegisterNativesUWidgetNavigation()
	{
	}
	UClass* Z_Construct_UClass_UWidgetNavigation_NoRegister()
	{
		return UWidgetNavigation::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetNavigation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Previous_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Previous;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Next_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Next;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Down;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Up_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Up;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetNavigation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetNavigation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/WidgetNavigation.h" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Previous_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses Shift+Tab." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Previous = { UE4CodeGen_Private::EPropertyClass::Struct, "Previous", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000015, 1, nullptr, STRUCT_OFFSET(UWidgetNavigation, Previous), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Previous_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Previous_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Next_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses Tab." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Next = { UE4CodeGen_Private::EPropertyClass::Struct, "Next", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000015, 1, nullptr, STRUCT_OFFSET(UWidgetNavigation, Next), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Next_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Next_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses right arrow, joystick, d-pad." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Right = { UE4CodeGen_Private::EPropertyClass::Struct, "Right", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000015, 1, nullptr, STRUCT_OFFSET(UWidgetNavigation, Right), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Right_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses left arrow, joystick, d-pad." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Left = { UE4CodeGen_Private::EPropertyClass::Struct, "Left", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000015, 1, nullptr, STRUCT_OFFSET(UWidgetNavigation, Left), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Left_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Down_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses down arrow, joystick, d-pad." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Down = { UE4CodeGen_Private::EPropertyClass::Struct, "Down", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000015, 1, nullptr, STRUCT_OFFSET(UWidgetNavigation, Down), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Down_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Down_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Up_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses up arrow, joystick, d-pad." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Up = { UE4CodeGen_Private::EPropertyClass::Struct, "Up", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000015, 1, nullptr, STRUCT_OFFSET(UWidgetNavigation, Up), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Up_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Up_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetNavigation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Previous,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Down,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Up,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetNavigation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetNavigation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetNavigation_Statics::ClassParams = {
		&UWidgetNavigation::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_UWidgetNavigation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetNavigation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetNavigation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetNavigation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetNavigation, 1221213854);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetNavigation(Z_Construct_UClass_UWidgetNavigation, &UWidgetNavigation::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetNavigation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetNavigation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
