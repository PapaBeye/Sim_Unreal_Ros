// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayDebugger/Public/GameplayDebuggerConfig.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerConfig() {}
// Cross Module References
	GAMEPLAYDEBUGGER_API UEnum* Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode();
	UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerConfig_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EGameplayDebuggerOverrideMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("EGameplayDebuggerOverrideMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayDebuggerOverrideMode(EGameplayDebuggerOverrideMode_StaticEnum, TEXT("/Script/GameplayDebugger"), TEXT("EGameplayDebuggerOverrideMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode_CRC() { return 3530570014U; }
	UEnum* Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayDebuggerOverrideMode"), 0, Get_Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayDebuggerOverrideMode::Enable", (int64)EGameplayDebuggerOverrideMode::Enable },
				{ "EGameplayDebuggerOverrideMode::Disable", (int64)EGameplayDebuggerOverrideMode::Disable },
				{ "EGameplayDebuggerOverrideMode::UseDefault", (int64)EGameplayDebuggerOverrideMode::UseDefault },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayDebugger,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayDebuggerOverrideMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGameplayDebuggerOverrideMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGameplayDebuggerExtensionConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerExtensionConfig"), sizeof(FGameplayDebuggerExtensionConfig), Get_Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerExtensionConfig(FGameplayDebuggerExtensionConfig::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerExtensionConfig"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerExtensionConfig
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerExtensionConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayDebuggerExtensionConfig")),new UScriptStruct::TCppStructOps<FGameplayDebuggerExtensionConfig>);
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerExtensionConfig;
	struct Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputHandlers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputHandlers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputHandlers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UseExtension;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UseExtension_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtensionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtensionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerExtensionConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_InputHandlers_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_InputHandlers = { UE4CodeGen_Private::EPropertyClass::Array, "InputHandlers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000041, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerExtensionConfig, InputHandlers), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_InputHandlers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_InputHandlers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_InputHandlers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InputHandlers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_UseExtension_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_UseExtension = { UE4CodeGen_Private::EPropertyClass::Enum, "UseExtension", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerExtensionConfig, UseExtension), Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_UseExtension_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_UseExtension_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_UseExtension_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_ExtensionName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_ExtensionName = { UE4CodeGen_Private::EPropertyClass::Str, "ExtensionName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerExtensionConfig, ExtensionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_ExtensionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_ExtensionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_InputHandlers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_InputHandlers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_UseExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_UseExtension_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_ExtensionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerExtensionConfig",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FGameplayDebuggerExtensionConfig),
		alignof(FGameplayDebuggerExtensionConfig),
		Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerExtensionConfig"), sizeof(FGameplayDebuggerExtensionConfig), Get_Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_CRC() { return 2806933842U; }
class UScriptStruct* FGameplayDebuggerCategoryConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerCategoryConfig"), sizeof(FGameplayDebuggerCategoryConfig), Get_Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerCategoryConfig(FGameplayDebuggerCategoryConfig::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerCategoryConfig"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerCategoryConfig
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerCategoryConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayDebuggerCategoryConfig")),new UScriptStruct::TCppStructOps<FGameplayDebuggerCategoryConfig>);
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerCategoryConfig;
	struct Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputHandlers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputHandlers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputHandlers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSlotIdx_MetaData[];
#endif
		static void NewProp_bOverrideSlotIdx_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSlotIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hidden_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hidden;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hidden_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveInSimulate_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActiveInSimulate;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActiveInSimulate_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveInGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActiveInGame;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActiveInGame_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerCategoryConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_InputHandlers_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_InputHandlers = { UE4CodeGen_Private::EPropertyClass::Array, "InputHandlers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000041, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryConfig, InputHandlers), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_InputHandlers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_InputHandlers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_InputHandlers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InputHandlers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_bOverrideSlotIdx_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_bOverrideSlotIdx_SetBit(void* Obj)
	{
		((FGameplayDebuggerCategoryConfig*)Obj)->bOverrideSlotIdx = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_bOverrideSlotIdx = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideSlotIdx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FGameplayDebuggerCategoryConfig), &Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_bOverrideSlotIdx_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_bOverrideSlotIdx_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_bOverrideSlotIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_Hidden_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_Hidden = { UE4CodeGen_Private::EPropertyClass::Enum, "Hidden", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryConfig, Hidden), Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_Hidden_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_Hidden_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_Hidden_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInSimulate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInSimulate = { UE4CodeGen_Private::EPropertyClass::Enum, "ActiveInSimulate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryConfig, ActiveInSimulate), Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInSimulate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInSimulate_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInSimulate_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInGame_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInGame = { UE4CodeGen_Private::EPropertyClass::Enum, "ActiveInGame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryConfig, ActiveInGame), Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInGame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInGame_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInGame_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_SlotIdx_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "9" },
		{ "ClampMin", "4294967295" },
		{ "EditCondition", "bOverrideSlotIdx" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "UIMax", "9" },
		{ "UIMin", "4294967295" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_SlotIdx = { UE4CodeGen_Private::EPropertyClass::Int, "SlotIdx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryConfig, SlotIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_SlotIdx_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_SlotIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_CategoryName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_CategoryName = { UE4CodeGen_Private::EPropertyClass::Str, "CategoryName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryConfig, CategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_CategoryName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_CategoryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_InputHandlers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_InputHandlers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_bOverrideSlotIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_Hidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_Hidden_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInSimulate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInSimulate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInGame_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_SlotIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_CategoryName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerCategoryConfig",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FGameplayDebuggerCategoryConfig),
		alignof(FGameplayDebuggerCategoryConfig),
		Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerCategoryConfig"), sizeof(FGameplayDebuggerCategoryConfig), Get_Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_CRC() { return 282450868U; }
class UScriptStruct* FGameplayDebuggerInputConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYDEBUGGER_API uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig, Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerInputConfig"), sizeof(FGameplayDebuggerInputConfig), Get_Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayDebuggerInputConfig(FGameplayDebuggerInputConfig::StaticStruct, TEXT("/Script/GameplayDebugger"), TEXT("GameplayDebuggerInputConfig"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerInputConfig
{
	FScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerInputConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayDebuggerInputConfig")),new UScriptStruct::TCppStructOps<FGameplayDebuggerInputConfig>);
	}
} ScriptStruct_GameplayDebugger_StaticRegisterNativesFGameplayDebuggerInputConfig;
	struct Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bModCmd_MetaData[];
#endif
		static void NewProp_bModCmd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModCmd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bModAlt_MetaData[];
#endif
		static void NewProp_bModAlt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModAlt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bModCtrl_MetaData[];
#endif
		static void NewProp_bModCtrl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModCtrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bModShift_MetaData[];
#endif
		static void NewProp_bModShift_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bModShift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConfigName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerInputConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCmd_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCmd_SetBit(void* Obj)
	{
		((FGameplayDebuggerInputConfig*)Obj)->bModCmd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCmd = { UE4CodeGen_Private::EPropertyClass::Bool, "bModCmd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FGameplayDebuggerInputConfig), &Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCmd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCmd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCmd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModAlt_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModAlt_SetBit(void* Obj)
	{
		((FGameplayDebuggerInputConfig*)Obj)->bModAlt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModAlt = { UE4CodeGen_Private::EPropertyClass::Bool, "bModAlt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FGameplayDebuggerInputConfig), &Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModAlt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModAlt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModAlt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCtrl_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCtrl_SetBit(void* Obj)
	{
		((FGameplayDebuggerInputConfig*)Obj)->bModCtrl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCtrl = { UE4CodeGen_Private::EPropertyClass::Bool, "bModCtrl", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FGameplayDebuggerInputConfig), &Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCtrl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCtrl_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCtrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModShift_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModShift_SetBit(void* Obj)
	{
		((FGameplayDebuggerInputConfig*)Obj)->bModShift = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModShift = { UE4CodeGen_Private::EPropertyClass::Bool, "bModShift", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FGameplayDebuggerInputConfig), &Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModShift_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModShift_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModShift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Struct, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerInputConfig, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_ConfigName_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_ConfigName = { UE4CodeGen_Private::EPropertyClass::Str, "ConfigName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FGameplayDebuggerInputConfig, ConfigName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_ConfigName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_ConfigName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCmd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModAlt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCtrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModShift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_ConfigName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerInputConfig",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FGameplayDebuggerInputConfig),
		alignof(FGameplayDebuggerInputConfig),
		Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayDebugger();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayDebuggerInputConfig"), sizeof(FGameplayDebuggerInputConfig), Get_Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_CRC() { return 1469620436U; }
	void UGameplayDebuggerConfig::StaticRegisterNativesUGameplayDebuggerConfig()
	{
	}
	UClass* Z_Construct_UClass_UGameplayDebuggerConfig_NoRegister()
	{
		return UGameplayDebuggerConfig::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayDebuggerConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Extensions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extensions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Categories;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugCanvasPaddingBottom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugCanvasPaddingBottom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugCanvasPaddingTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugCanvasPaddingTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugCanvasPaddingRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugCanvasPaddingRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugCanvasPaddingLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugCanvasPaddingLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorySlot9_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategorySlot9;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorySlot8_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategorySlot8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorySlot7_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategorySlot7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorySlot6_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategorySlot6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorySlot5_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategorySlot5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorySlot4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategorySlot4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorySlot3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategorySlot3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorySlot2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategorySlot2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorySlot1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategorySlot1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorySlot0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategorySlot0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryRowPrevKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryRowPrevKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryRowNextKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryRowNextKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivationKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayDebuggerConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayDebuggerConfig.h" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Extensions_MetaData[] = {
		{ "Category", "AddOns" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Extensions = { UE4CodeGen_Private::EPropertyClass::Array, "Extensions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004041, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, Extensions), METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Extensions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Extensions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Extensions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Extensions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Categories_MetaData[] = {
		{ "Category", "AddOns" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Categories = { UE4CodeGen_Private::EPropertyClass::Array, "Categories", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004041, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, Categories), METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Categories_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Categories_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Categories_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Categories", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingBottom_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "additional canvas padding: bottom" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingBottom = { UE4CodeGen_Private::EPropertyClass::Float, "DebugCanvasPaddingBottom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, DebugCanvasPaddingBottom), METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingBottom_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingBottom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingTop_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "additional canvas padding: top" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingTop = { UE4CodeGen_Private::EPropertyClass::Float, "DebugCanvasPaddingTop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, DebugCanvasPaddingTop), METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingTop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingRight_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "additional canvas padding: right" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingRight = { UE4CodeGen_Private::EPropertyClass::Float, "DebugCanvasPaddingRight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, DebugCanvasPaddingRight), METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingLeft_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "additional canvas padding: left" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingLeft = { UE4CodeGen_Private::EPropertyClass::Float, "DebugCanvasPaddingLeft", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, DebugCanvasPaddingLeft), METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot9_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 9" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot9 = { UE4CodeGen_Private::EPropertyClass::Struct, "CategorySlot9", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot9), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot9_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot9_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot8_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 8" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot8 = { UE4CodeGen_Private::EPropertyClass::Struct, "CategorySlot8", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot8), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot8_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot7_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 7" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot7 = { UE4CodeGen_Private::EPropertyClass::Struct, "CategorySlot7", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot7), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot7_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot6_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 6" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot6 = { UE4CodeGen_Private::EPropertyClass::Struct, "CategorySlot6", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot6), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot6_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot5_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 5" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot5 = { UE4CodeGen_Private::EPropertyClass::Struct, "CategorySlot5", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot5), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot5_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot4_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot4 = { UE4CodeGen_Private::EPropertyClass::Struct, "CategorySlot4", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot4), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot4_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot3_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 3" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot3 = { UE4CodeGen_Private::EPropertyClass::Struct, "CategorySlot3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot3), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot3_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot2_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot2 = { UE4CodeGen_Private::EPropertyClass::Struct, "CategorySlot2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot2), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot1_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot1 = { UE4CodeGen_Private::EPropertyClass::Struct, "CategorySlot1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot1), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot0_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot0 = { UE4CodeGen_Private::EPropertyClass::Struct, "CategorySlot0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot0), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot0_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowPrevKey_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select previous category row" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowPrevKey = { UE4CodeGen_Private::EPropertyClass::Struct, "CategoryRowPrevKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategoryRowPrevKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowPrevKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowPrevKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowNextKey_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select next category row" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowNextKey = { UE4CodeGen_Private::EPropertyClass::Struct, "CategoryRowNextKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategoryRowNextKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowNextKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowNextKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_ActivationKey_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "key used to activate visual debugger tool" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_ActivationKey = { UE4CodeGen_Private::EPropertyClass::Struct, "ActivationKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, ActivationKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_ActivationKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_ActivationKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayDebuggerConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Extensions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Extensions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Categories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Categories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingBottom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot9,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowPrevKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowNextKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_ActivationKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayDebuggerConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayDebuggerConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::ClassParams = {
		&UGameplayDebuggerConfig::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A6u,
		nullptr, 0,
		Z_Construct_UClass_UGameplayDebuggerConfig_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayDebuggerConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayDebuggerConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayDebuggerConfig, 1488793443);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayDebuggerConfig(Z_Construct_UClass_UGameplayDebuggerConfig, &UGameplayDebuggerConfig::StaticClass, TEXT("/Script/GameplayDebugger"), TEXT("UGameplayDebuggerConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayDebuggerConfig);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGameplayDebuggerConfig)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
