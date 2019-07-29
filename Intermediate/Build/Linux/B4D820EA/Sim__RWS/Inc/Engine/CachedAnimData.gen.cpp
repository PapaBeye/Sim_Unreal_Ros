// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/CachedAnimData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCachedAnimData() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimTransitionData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimRelevancyData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateArray();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateData();
// End Cross Module References
class UScriptStruct* FCachedAnimTransitionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCachedAnimTransitionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimTransitionData, Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimTransitionData"), sizeof(FCachedAnimTransitionData), Get_Z_Construct_UScriptStruct_FCachedAnimTransitionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedAnimTransitionData(FCachedAnimTransitionData::StaticStruct, TEXT("/Script/Engine"), TEXT("CachedAnimTransitionData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCachedAnimTransitionData
{
	FScriptStruct_Engine_StaticRegisterNativesFCachedAnimTransitionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedAnimTransitionData")),new UScriptStruct::TCppStructOps<FCachedAnimTransitionData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCachedAnimTransitionData;
	struct Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToStateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ToStateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromStateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FromStateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateMachineName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimTransitionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_ToStateName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of To State to Cache" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_ToStateName = { UE4CodeGen_Private::EPropertyClass::Name, "ToStateName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimTransitionData, ToStateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_ToStateName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_ToStateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_FromStateName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of From State to Cache" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_FromStateName = { UE4CodeGen_Private::EPropertyClass::Name, "FromStateName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimTransitionData, FromStateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_FromStateName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_FromStateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_StateMachineName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of StateMachine State is in" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_StateMachineName = { UE4CodeGen_Private::EPropertyClass::Name, "StateMachineName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimTransitionData, StateMachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_StateMachineName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_StateMachineName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_ToStateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_FromStateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::NewProp_StateMachineName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CachedAnimTransitionData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCachedAnimTransitionData),
		alignof(FCachedAnimTransitionData),
		Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimTransitionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedAnimTransitionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedAnimTransitionData"), sizeof(FCachedAnimTransitionData), Get_Z_Construct_UScriptStruct_FCachedAnimTransitionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCachedAnimTransitionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedAnimTransitionData_CRC() { return 3422419612U; }
class UScriptStruct* FCachedAnimRelevancyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCachedAnimRelevancyData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimRelevancyData, Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimRelevancyData"), sizeof(FCachedAnimRelevancyData), Get_Z_Construct_UScriptStruct_FCachedAnimRelevancyData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedAnimRelevancyData(FCachedAnimRelevancyData::StaticStruct, TEXT("/Script/Engine"), TEXT("CachedAnimRelevancyData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCachedAnimRelevancyData
{
	FScriptStruct_Engine_StaticRegisterNativesFCachedAnimRelevancyData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedAnimRelevancyData")),new UScriptStruct::TCppStructOps<FCachedAnimRelevancyData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCachedAnimRelevancyData;
	struct Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateMachineName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimRelevancyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of State to Cache" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateName = { UE4CodeGen_Private::EPropertyClass::Name, "StateName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimRelevancyData, StateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateMachineName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of StateMachine State is in" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateMachineName = { UE4CodeGen_Private::EPropertyClass::Name, "StateMachineName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimRelevancyData, StateMachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateMachineName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateMachineName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::NewProp_StateMachineName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CachedAnimRelevancyData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCachedAnimRelevancyData),
		alignof(FCachedAnimRelevancyData),
		Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimRelevancyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedAnimRelevancyData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedAnimRelevancyData"), sizeof(FCachedAnimRelevancyData), Get_Z_Construct_UScriptStruct_FCachedAnimRelevancyData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCachedAnimRelevancyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedAnimRelevancyData_CRC() { return 1383663767U; }
class UScriptStruct* FCachedAnimAssetPlayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData, Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimAssetPlayerData"), sizeof(FCachedAnimAssetPlayerData), Get_Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedAnimAssetPlayerData(FCachedAnimAssetPlayerData::StaticStruct, TEXT("/Script/Engine"), TEXT("CachedAnimAssetPlayerData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCachedAnimAssetPlayerData
{
	FScriptStruct_Engine_StaticRegisterNativesFCachedAnimAssetPlayerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedAnimAssetPlayerData")),new UScriptStruct::TCppStructOps<FCachedAnimAssetPlayerData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCachedAnimAssetPlayerData;
	struct Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateMachineName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimAssetPlayerData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of State to Cache" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateName = { UE4CodeGen_Private::EPropertyClass::Name, "StateName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimAssetPlayerData, StateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateMachineName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of StateMachine State is in" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateMachineName = { UE4CodeGen_Private::EPropertyClass::Name, "StateMachineName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimAssetPlayerData, StateMachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateMachineName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateMachineName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::NewProp_StateMachineName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CachedAnimAssetPlayerData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCachedAnimAssetPlayerData),
		alignof(FCachedAnimAssetPlayerData),
		Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedAnimAssetPlayerData"), sizeof(FCachedAnimAssetPlayerData), Get_Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedAnimAssetPlayerData_CRC() { return 1188532173U; }
class UScriptStruct* FCachedAnimStateArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCachedAnimStateArray_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimStateArray, Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimStateArray"), sizeof(FCachedAnimStateArray), Get_Z_Construct_UScriptStruct_FCachedAnimStateArray_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedAnimStateArray(FCachedAnimStateArray::StaticStruct, TEXT("/Script/Engine"), TEXT("CachedAnimStateArray"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCachedAnimStateArray
{
	FScriptStruct_Engine_StaticRegisterNativesFCachedAnimStateArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedAnimStateArray")),new UScriptStruct::TCppStructOps<FCachedAnimStateArray>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCachedAnimStateArray;
	struct Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_States;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_States_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimStateArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States_MetaData[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Array of states" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States = { UE4CodeGen_Private::EPropertyClass::Array, "States", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimStateArray, States), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "States", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCachedAnimStateData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::NewProp_States_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CachedAnimStateArray",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCachedAnimStateArray),
		alignof(FCachedAnimStateArray),
		Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedAnimStateArray_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedAnimStateArray"), sizeof(FCachedAnimStateArray), Get_Z_Construct_UScriptStruct_FCachedAnimStateArray_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCachedAnimStateArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedAnimStateArray_CRC() { return 2338791652U; }
class UScriptStruct* FCachedAnimStateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCachedAnimStateData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCachedAnimStateData, Z_Construct_UPackage__Script_Engine(), TEXT("CachedAnimStateData"), sizeof(FCachedAnimStateData), Get_Z_Construct_UScriptStruct_FCachedAnimStateData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCachedAnimStateData(FCachedAnimStateData::StaticStruct, TEXT("/Script/Engine"), TEXT("CachedAnimStateData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCachedAnimStateData
{
	FScriptStruct_Engine_StaticRegisterNativesFCachedAnimStateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CachedAnimStateData")),new UScriptStruct::TCppStructOps<FCachedAnimStateData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCachedAnimStateData;
	struct Z_Construct_UScriptStruct_FCachedAnimStateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateMachineName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "This file contains a number of helper structures that can be used to process state-machine-\nrelated data in C++. This includes relevancy, state weights, animation time etc." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCachedAnimStateData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of State to Cache" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateName = { UE4CodeGen_Private::EPropertyClass::Name, "StateName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimStateData, StateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateMachineName_MetaData[] = {
		{ "Category", "State Machine" },
		{ "ModuleRelativePath", "Public/Animation/CachedAnimData.h" },
		{ "ToolTip", "Name of StateMachine State is in" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateMachineName = { UE4CodeGen_Private::EPropertyClass::Name, "StateMachineName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FCachedAnimStateData, StateMachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateMachineName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateMachineName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::NewProp_StateMachineName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CachedAnimStateData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCachedAnimStateData),
		alignof(FCachedAnimStateData),
		Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCachedAnimStateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCachedAnimStateData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CachedAnimStateData"), sizeof(FCachedAnimStateData), Get_Z_Construct_UScriptStruct_FCachedAnimStateData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCachedAnimStateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCachedAnimStateData_CRC() { return 3770304567U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
