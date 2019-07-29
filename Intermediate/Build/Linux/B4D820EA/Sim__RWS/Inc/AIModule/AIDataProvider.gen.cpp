// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/DataProviders/AIDataProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIDataProvider() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderTypedValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderStructValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FAIDataProviderBoolValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderBoolValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderBoolValue, Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderBoolValue"), sizeof(FAIDataProviderBoolValue), Get_Z_Construct_UScriptStruct_FAIDataProviderBoolValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIDataProviderBoolValue(FAIDataProviderBoolValue::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIDataProviderBoolValue"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderBoolValue
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderBoolValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIDataProviderBoolValue")),new UScriptStruct::TCppStructOps<FAIDataProviderBoolValue>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderBoolValue;
	struct Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static void NewProp_DefaultValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderBoolValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue_SetBit(void* Obj)
	{
		((FAIDataProviderBoolValue*)Obj)->DefaultValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Bool, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAIDataProviderBoolValue), &Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		Z_Construct_UScriptStruct_FAIDataProviderTypedValue,
		&NewStructOps,
		"AIDataProviderBoolValue",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FAIDataProviderBoolValue),
		alignof(FAIDataProviderBoolValue),
		Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderBoolValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIDataProviderBoolValue"), sizeof(FAIDataProviderBoolValue), Get_Z_Construct_UScriptStruct_FAIDataProviderBoolValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderBoolValue_CRC() { return 1845208331U; }
class UScriptStruct* FAIDataProviderFloatValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderFloatValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderFloatValue, Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderFloatValue"), sizeof(FAIDataProviderFloatValue), Get_Z_Construct_UScriptStruct_FAIDataProviderFloatValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIDataProviderFloatValue(FAIDataProviderFloatValue::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIDataProviderFloatValue"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderFloatValue
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderFloatValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIDataProviderFloatValue")),new UScriptStruct::TCppStructOps<FAIDataProviderFloatValue>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderFloatValue;
	struct Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderFloatValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAIDataProviderFloatValue, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewProp_DefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewProp_DefaultValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		Z_Construct_UScriptStruct_FAIDataProviderTypedValue,
		&NewStructOps,
		"AIDataProviderFloatValue",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FAIDataProviderFloatValue),
		alignof(FAIDataProviderFloatValue),
		Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderFloatValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIDataProviderFloatValue"), sizeof(FAIDataProviderFloatValue), Get_Z_Construct_UScriptStruct_FAIDataProviderFloatValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderFloatValue_CRC() { return 4156265587U; }
class UScriptStruct* FAIDataProviderIntValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderIntValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderIntValue, Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderIntValue"), sizeof(FAIDataProviderIntValue), Get_Z_Construct_UScriptStruct_FAIDataProviderIntValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIDataProviderIntValue(FAIDataProviderIntValue::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIDataProviderIntValue"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderIntValue
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderIntValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIDataProviderIntValue")),new UScriptStruct::TCppStructOps<FAIDataProviderIntValue>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderIntValue;
	struct Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderIntValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Int, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAIDataProviderIntValue, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewProp_DefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewProp_DefaultValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		Z_Construct_UScriptStruct_FAIDataProviderTypedValue,
		&NewStructOps,
		"AIDataProviderIntValue",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FAIDataProviderIntValue),
		alignof(FAIDataProviderIntValue),
		Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderIntValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIDataProviderIntValue"), sizeof(FAIDataProviderIntValue), Get_Z_Construct_UScriptStruct_FAIDataProviderIntValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderIntValue_CRC() { return 3989036252U; }
class UScriptStruct* FAIDataProviderStructValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderStructValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderStructValue, Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderStructValue"), sizeof(FAIDataProviderStructValue), Get_Z_Construct_UScriptStruct_FAIDataProviderStructValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIDataProviderStructValue(FAIDataProviderStructValue::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIDataProviderStructValue"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderStructValue
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderStructValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIDataProviderStructValue")),new UScriptStruct::TCppStructOps<FAIDataProviderStructValue>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderStructValue;
	struct Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderStructValue>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		Z_Construct_UScriptStruct_FAIDataProviderValue,
		&NewStructOps,
		"AIDataProviderStructValue",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FAIDataProviderStructValue),
		alignof(FAIDataProviderStructValue),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderStructValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderStructValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIDataProviderStructValue"), sizeof(FAIDataProviderStructValue), Get_Z_Construct_UScriptStruct_FAIDataProviderStructValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderStructValue_CRC() { return 2708559245U; }
class UScriptStruct* FAIDataProviderTypedValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderTypedValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderTypedValue, Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderTypedValue"), sizeof(FAIDataProviderTypedValue), Get_Z_Construct_UScriptStruct_FAIDataProviderTypedValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIDataProviderTypedValue(FAIDataProviderTypedValue::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIDataProviderTypedValue"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderTypedValue
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderTypedValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIDataProviderTypedValue")),new UScriptStruct::TCppStructOps<FAIDataProviderTypedValue>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderTypedValue;
	struct Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PropertyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderTypedValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewProp_PropertyType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
		{ "ToolTip", "type of value" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewProp_PropertyType = { UE4CodeGen_Private::EPropertyClass::Class, "PropertyType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FAIDataProviderTypedValue, PropertyType), Z_Construct_UClass_UProperty, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewProp_PropertyType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewProp_PropertyType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewProp_PropertyType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		Z_Construct_UScriptStruct_FAIDataProviderValue,
		&NewStructOps,
		"AIDataProviderTypedValue",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FAIDataProviderTypedValue),
		alignof(FAIDataProviderTypedValue),
		Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderTypedValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderTypedValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIDataProviderTypedValue"), sizeof(FAIDataProviderTypedValue), Get_Z_Construct_UScriptStruct_FAIDataProviderTypedValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderTypedValue_CRC() { return 2770648877U; }
class UScriptStruct* FAIDataProviderValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderValue, Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderValue"), sizeof(FAIDataProviderValue), Get_Z_Construct_UScriptStruct_FAIDataProviderValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIDataProviderValue(FAIDataProviderValue::StaticStruct, TEXT("/Script/AIModule"), TEXT("AIDataProviderValue"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderValue
{
	FScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIDataProviderValue")),new UScriptStruct::TCppStructOps<FAIDataProviderValue>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAIDataProviderValue;
	struct Z_Construct_UScriptStruct_FAIDataProviderValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataField_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DataField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataBinding_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataBinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
		{ "ToolTip", "AIDataProvider is an object that can provide collection of properties\nassociated with bound pawn owner or request Id.\n\nEditable properties are used to set up provider instance,\ncreating additional filters or ways of accessing data (e.g. gameplay tag of ability)\n\nNon editable properties are holding data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataField_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
		{ "ToolTip", "name of provider's value property" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataField = { UE4CodeGen_Private::EPropertyClass::Name, "DataField", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAIDataProviderValue, DataField), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataField_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataBinding_MetaData[] = {
		{ "Category", "Value" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
		{ "ToolTip", "(optional) provider for dynamic data binding" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataBinding = { UE4CodeGen_Private::EPropertyClass::Object, "DataBinding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0012000000080009, 1, nullptr, STRUCT_OFFSET(FAIDataProviderValue, DataBinding), Z_Construct_UClass_UAIDataProvider_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataBinding_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataBinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_CachedProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
		{ "ToolTip", "cached uproperty of provider" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_CachedProperty = { UE4CodeGen_Private::EPropertyClass::Object, "CachedProperty", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(FAIDataProviderValue, CachedProperty), Z_Construct_UClass_UProperty, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_CachedProperty_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_CachedProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataBinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_CachedProperty,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AIDataProviderValue",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FAIDataProviderValue),
		alignof(FAIDataProviderValue),
		Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIDataProviderValue"), sizeof(FAIDataProviderValue), Get_Z_Construct_UScriptStruct_FAIDataProviderValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIDataProviderValue_CRC() { return 2962320145U; }
	void UAIDataProvider::StaticRegisterNativesUAIDataProvider()
	{
	}
	UClass* Z_Construct_UClass_UAIDataProvider_NoRegister()
	{
		return UAIDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UAIDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider" },
		{ "IncludePath", "DataProviders/AIDataProvider.h" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIDataProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIDataProvider_Statics::ClassParams = {
		&UAIDataProvider::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001030A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIDataProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIDataProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIDataProvider, 3350399092);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIDataProvider(Z_Construct_UClass_UAIDataProvider, &UAIDataProvider::StaticClass, TEXT("/Script/AIModule"), TEXT("UAIDataProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIDataProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
