// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputCore/Classes/InputCoreTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputCoreTypes() {}
// Cross Module References
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchType();
	UPackage* Z_Construct_UPackage__Script_InputCore();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	INPUTCORE_API UClass* Z_Construct_UClass_UInputCoreTypes_NoRegister();
	INPUTCORE_API UClass* Z_Construct_UClass_UInputCoreTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ETouchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InputCore_ETouchType, Z_Construct_UPackage__Script_InputCore(), TEXT("ETouchType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETouchType(ETouchType_StaticEnum, TEXT("/Script/InputCore"), TEXT("ETouchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InputCore_ETouchType_CRC() { return 499779249U; }
	UEnum* Z_Construct_UEnum_InputCore_ETouchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InputCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETouchType"), 0, Get_Z_Construct_UEnum_InputCore_ETouchType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETouchType::Began", (int64)ETouchType::Began },
				{ "ETouchType::Moved", (int64)ETouchType::Moved },
				{ "ETouchType::Stationary", (int64)ETouchType::Stationary },
				{ "ETouchType::ForceChanged", (int64)ETouchType::ForceChanged },
				{ "ETouchType::FirstMove", (int64)ETouchType::FirstMove },
				{ "ETouchType::Ended", (int64)ETouchType::Ended },
				{ "ETouchType::NumTypes", (int64)ETouchType::NumTypes },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/InputCoreTypes.h" },
				{ "ToolTip", "Various states of touch inputs." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InputCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETouchType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETouchType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EConsoleForGamepadLabels_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels, Z_Construct_UPackage__Script_InputCore(), TEXT("EConsoleForGamepadLabels"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConsoleForGamepadLabels(EConsoleForGamepadLabels_StaticEnum, TEXT("/Script/InputCore"), TEXT("EConsoleForGamepadLabels"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels_CRC() { return 2766363785U; }
	UEnum* Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InputCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConsoleForGamepadLabels"), 0, Get_Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConsoleForGamepadLabels::None", (int64)EConsoleForGamepadLabels::None },
				{ "EConsoleForGamepadLabels::XBoxOne", (int64)EConsoleForGamepadLabels::XBoxOne },
				{ "EConsoleForGamepadLabels::PS4", (int64)EConsoleForGamepadLabels::PS4 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/InputCoreTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InputCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EConsoleForGamepadLabels",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EConsoleForGamepadLabels::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETouchIndex_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InputCore_ETouchIndex, Z_Construct_UPackage__Script_InputCore(), TEXT("ETouchIndex"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETouchIndex(ETouchIndex_StaticEnum, TEXT("/Script/InputCore"), TEXT("ETouchIndex"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InputCore_ETouchIndex_CRC() { return 2002027499U; }
	UEnum* Z_Construct_UEnum_InputCore_ETouchIndex()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InputCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETouchIndex"), 0, Get_Z_Construct_UEnum_InputCore_ETouchIndex_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETouchIndex::Touch1", (int64)ETouchIndex::Touch1 },
				{ "ETouchIndex::Touch2", (int64)ETouchIndex::Touch2 },
				{ "ETouchIndex::Touch3", (int64)ETouchIndex::Touch3 },
				{ "ETouchIndex::Touch4", (int64)ETouchIndex::Touch4 },
				{ "ETouchIndex::Touch5", (int64)ETouchIndex::Touch5 },
				{ "ETouchIndex::Touch6", (int64)ETouchIndex::Touch6 },
				{ "ETouchIndex::Touch7", (int64)ETouchIndex::Touch7 },
				{ "ETouchIndex::Touch8", (int64)ETouchIndex::Touch8 },
				{ "ETouchIndex::Touch9", (int64)ETouchIndex::Touch9 },
				{ "ETouchIndex::Touch10", (int64)ETouchIndex::Touch10 },
				{ "ETouchIndex::CursorPointerIndex", (int64)ETouchIndex::CursorPointerIndex },
				{ "ETouchIndex::MAX_TOUCHES", (int64)ETouchIndex::MAX_TOUCHES },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CursorPointerIndex.Hidden", "" },
				{ "CursorPointerIndex.ToolTip", "This entry is special.  NUM_TOUCH_KEYS - 1, is used for the cursor so that it's represented\nas another finger index, but doesn't overlap with touch input indexes." },
				{ "MAX_TOUCHES.Hidden", "" },
				{ "ModuleRelativePath", "Classes/InputCoreTypes.h" },
				{ "ToolTip", "The number of entries in ETouchIndex must match the number of touch keys defined in EKeys and NUM_TOUCH_KEYS above" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InputCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETouchIndex",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETouchIndex::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EControllerHand_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InputCore_EControllerHand, Z_Construct_UPackage__Script_InputCore(), TEXT("EControllerHand"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EControllerHand(EControllerHand_StaticEnum, TEXT("/Script/InputCore"), TEXT("EControllerHand"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InputCore_EControllerHand_CRC() { return 3165314378U; }
	UEnum* Z_Construct_UEnum_InputCore_EControllerHand()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InputCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EControllerHand"), 0, Get_Z_Construct_UEnum_InputCore_EControllerHand_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EControllerHand::Left", (int64)EControllerHand::Left },
				{ "EControllerHand::Right", (int64)EControllerHand::Right },
				{ "EControllerHand::AnyHand", (int64)EControllerHand::AnyHand },
				{ "EControllerHand::Pad", (int64)EControllerHand::Pad },
				{ "EControllerHand::ExternalCamera", (int64)EControllerHand::ExternalCamera },
				{ "EControllerHand::Gun", (int64)EControllerHand::Gun },
				{ "EControllerHand::Special_1", (int64)EControllerHand::Special_1 },
				{ "EControllerHand::Special_2", (int64)EControllerHand::Special_2 },
				{ "EControllerHand::Special_3", (int64)EControllerHand::Special_3 },
				{ "EControllerHand::Special_4", (int64)EControllerHand::Special_4 },
				{ "EControllerHand::Special_5", (int64)EControllerHand::Special_5 },
				{ "EControllerHand::Special_6", (int64)EControllerHand::Special_6 },
				{ "EControllerHand::Special_7", (int64)EControllerHand::Special_7 },
				{ "EControllerHand::Special_8", (int64)EControllerHand::Special_8 },
				{ "EControllerHand::Special_9", (int64)EControllerHand::Special_9 },
				{ "EControllerHand::Special_10", (int64)EControllerHand::Special_10 },
				{ "EControllerHand::Special_11", (int64)EControllerHand::Special_11 },
				{ "EControllerHand::ControllerHand_Count", (int64)EControllerHand::ControllerHand_Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ControllerHand_Count.DisplayName", "<INVALID>" },
				{ "ControllerHand_Count.Hidden", "" },
				{ "ModuleRelativePath", "Classes/InputCoreTypes.h" },
				{ "ToolTip", "Defines the controller hands for tracking.  Could be expanded, as needed, to facilitate non-handheld controllers" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InputCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EControllerHand",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EControllerHand",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern INPUTCORE_API uint32 Get_Z_Construct_UScriptStruct_FKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKey, Z_Construct_UPackage__Script_InputCore(), TEXT("Key"), sizeof(FKey), Get_Z_Construct_UScriptStruct_FKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKey(FKey::StaticStruct, TEXT("/Script/InputCore"), TEXT("Key"), false, nullptr, nullptr);
static struct FScriptStruct_InputCore_StaticRegisterNativesFKey
{
	FScriptStruct_InputCore_StaticRegisterNativesFKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Key")),new UScriptStruct::TCppStructOps<FKey>);
	}
} ScriptStruct_InputCore_StaticRegisterNativesFKey;
	struct Z_Construct_UScriptStruct_FKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/InputCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKey_Statics::NewProp_KeyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InputCoreTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKey_Statics::NewProp_KeyName = { UE4CodeGen_Private::EPropertyClass::Name, "KeyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FKey, KeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FKey_Statics::NewProp_KeyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKey_Statics::NewProp_KeyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKey_Statics::NewProp_KeyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputCore,
		nullptr,
		&NewStructOps,
		"Key",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FKey),
		alignof(FKey),
		Z_Construct_UScriptStruct_FKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FKey_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_InputCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Key"), sizeof(FKey), Get_Z_Construct_UScriptStruct_FKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKey_CRC() { return 117100838U; }
	void UInputCoreTypes::StaticRegisterNativesUInputCoreTypes()
	{
	}
	UClass* Z_Construct_UClass_UInputCoreTypes_NoRegister()
	{
		return UInputCoreTypes::StaticClass();
	}
	struct Z_Construct_UClass_UInputCoreTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputCoreTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InputCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCoreTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InputCoreTypes.h" },
		{ "ModuleRelativePath", "Classes/InputCoreTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputCoreTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputCoreTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputCoreTypes_Statics::ClassParams = {
		&UInputCoreTypes::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInputCoreTypes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInputCoreTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputCoreTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputCoreTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputCoreTypes, 978585676);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputCoreTypes(Z_Construct_UClass_UInputCoreTypes, &UInputCoreTypes::StaticClass, TEXT("/Script/InputCore"), TEXT("UInputCoreTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputCoreTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
