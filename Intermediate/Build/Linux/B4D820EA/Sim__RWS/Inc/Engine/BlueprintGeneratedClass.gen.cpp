// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintGeneratedClass() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEventGraphFastCallPair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDebugData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerToUberGraphFrame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeToCodeAssociation();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInheritableComponentHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister();
// End Cross Module References
class UScriptStruct* FBlueprintCookedComponentInstancingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintCookedComponentInstancingData"), sizeof(FBlueprintCookedComponentInstancingData), Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintCookedComponentInstancingData(FBlueprintCookedComponentInstancingData::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintCookedComponentInstancingData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintCookedComponentInstancingData
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintCookedComponentInstancingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintCookedComponentInstancingData")),new UScriptStruct::TCppStructOps<FBlueprintCookedComponentInstancingData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintCookedComponentInstancingData;
	struct Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangedPropertyList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChangedPropertyList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChangedPropertyList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Cooked data for a Blueprint component template." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintCookedComponentInstancingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "List of property info records with values that differ between the template and the component class CDO. This list will be generated at cook time." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList = { UE4CodeGen_Private::EPropertyClass::Array, "ChangedPropertyList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintCookedComponentInstancingData, ChangedPropertyList), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ChangedPropertyList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bIsValid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Flag indicating whether or not this contains valid cooked data. Note that an empty changed property list can also be a valid template data context." },
	};
#endif
	void Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FBlueprintCookedComponentInstancingData*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bIsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsValid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBlueprintCookedComponentInstancingData), &Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bIsValid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bIsValid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_ChangedPropertyList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::NewProp_bIsValid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintCookedComponentInstancingData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FBlueprintCookedComponentInstancingData),
		alignof(FBlueprintCookedComponentInstancingData),
		Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintCookedComponentInstancingData"), sizeof(FBlueprintCookedComponentInstancingData), Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_CRC() { return 1029305148U; }
class UScriptStruct* FBlueprintComponentChangedPropertyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintComponentChangedPropertyInfo"), sizeof(FBlueprintComponentChangedPropertyInfo), Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintComponentChangedPropertyInfo(FBlueprintComponentChangedPropertyInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintComponentChangedPropertyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintComponentChangedPropertyInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintComponentChangedPropertyInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintComponentChangedPropertyInfo")),new UScriptStruct::TCppStructOps<FBlueprintComponentChangedPropertyInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintComponentChangedPropertyInfo;
	struct Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyScope_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PropertyScope;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "A single changed Blueprint component property." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintComponentChangedPropertyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The parent struct (owner) of the changed property." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope = { UE4CodeGen_Private::EPropertyClass::Object, "PropertyScope", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintComponentChangedPropertyInfo, PropertyScope), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The array index of the changed property." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex = { UE4CodeGen_Private::EPropertyClass::Int, "ArrayIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintComponentChangedPropertyInfo, ArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "The name of the changed property." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "PropertyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlueprintComponentChangedPropertyInfo, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyScope,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_ArrayIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::NewProp_PropertyName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintComponentChangedPropertyInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FBlueprintComponentChangedPropertyInfo),
		alignof(FBlueprintComponentChangedPropertyInfo),
		Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintComponentChangedPropertyInfo"), sizeof(FBlueprintComponentChangedPropertyInfo), Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_CRC() { return 811784254U; }
class UScriptStruct* FEventGraphFastCallPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventGraphFastCallPair, Z_Construct_UPackage__Script_Engine(), TEXT("EventGraphFastCallPair"), sizeof(FEventGraphFastCallPair), Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventGraphFastCallPair(FEventGraphFastCallPair::StaticStruct, TEXT("/Script/Engine"), TEXT("EventGraphFastCallPair"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEventGraphFastCallPair
{
	FScriptStruct_Engine_StaticRegisterNativesFEventGraphFastCallPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventGraphFastCallPair")),new UScriptStruct::TCppStructOps<FEventGraphFastCallPair>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEventGraphFastCallPair;
	struct Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventGraphCallOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EventGraphCallOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionToPatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionToPatch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventGraphFastCallPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset = { UE4CodeGen_Private::EPropertyClass::Int, "EventGraphCallOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEventGraphFastCallPair, EventGraphCallOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch = { UE4CodeGen_Private::EPropertyClass::Object, "FunctionToPatch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEventGraphFastCallPair, FunctionToPatch), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_EventGraphCallOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::NewProp_FunctionToPatch,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EventGraphFastCallPair",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FEventGraphFastCallPair),
		alignof(FEventGraphFastCallPair),
		Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventGraphFastCallPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventGraphFastCallPair"), sizeof(FEventGraphFastCallPair), Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventGraphFastCallPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_CRC() { return 2140823001U; }
class UScriptStruct* FBlueprintDebugData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintDebugData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintDebugData, Z_Construct_UPackage__Script_Engine(), TEXT("BlueprintDebugData"), sizeof(FBlueprintDebugData), Get_Z_Construct_UScriptStruct_FBlueprintDebugData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintDebugData(FBlueprintDebugData::StaticStruct, TEXT("/Script/Engine"), TEXT("BlueprintDebugData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlueprintDebugData
{
	FScriptStruct_Engine_StaticRegisterNativesFBlueprintDebugData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlueprintDebugData")),new UScriptStruct::TCppStructOps<FBlueprintDebugData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlueprintDebugData;
	struct Z_Construct_UScriptStruct_FBlueprintDebugData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintDebugData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlueprintDebugData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FBlueprintDebugData),
		alignof(FBlueprintDebugData),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintDebugData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintDebugData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintDebugData"), sizeof(FBlueprintDebugData), Get_Z_Construct_UScriptStruct_FBlueprintDebugData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintDebugData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintDebugData_CRC() { return 1655790851U; }
class UScriptStruct* FPointerToUberGraphFrame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPointerToUberGraphFrame_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointerToUberGraphFrame, Z_Construct_UPackage__Script_Engine(), TEXT("PointerToUberGraphFrame"), sizeof(FPointerToUberGraphFrame), Get_Z_Construct_UScriptStruct_FPointerToUberGraphFrame_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointerToUberGraphFrame(FPointerToUberGraphFrame::StaticStruct, TEXT("/Script/Engine"), TEXT("PointerToUberGraphFrame"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPointerToUberGraphFrame
{
	FScriptStruct_Engine_StaticRegisterNativesFPointerToUberGraphFrame()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointerToUberGraphFrame")),new UScriptStruct::TCppStructOps<FPointerToUberGraphFrame>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPointerToUberGraphFrame;
	struct Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "WARNING: Following struct layout definition repeated in ScriptCore.cpp as\nFPointerToUberGraphFrameCoreUObject to work around reflection generation issues:" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointerToUberGraphFrame>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PointerToUberGraphFrame",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPointerToUberGraphFrame),
		alignof(FPointerToUberGraphFrame),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointerToUberGraphFrame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointerToUberGraphFrame_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointerToUberGraphFrame"), sizeof(FPointerToUberGraphFrame), Get_Z_Construct_UScriptStruct_FPointerToUberGraphFrame_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointerToUberGraphFrame_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointerToUberGraphFrame_CRC() { return 2500886108U; }
class UScriptStruct* FDebuggingInfoForSingleFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction, Z_Construct_UPackage__Script_Engine(), TEXT("DebuggingInfoForSingleFunction"), sizeof(FDebuggingInfoForSingleFunction), Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebuggingInfoForSingleFunction(FDebuggingInfoForSingleFunction::StaticStruct, TEXT("/Script/Engine"), TEXT("DebuggingInfoForSingleFunction"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDebuggingInfoForSingleFunction
{
	FScriptStruct_Engine_StaticRegisterNativesFDebuggingInfoForSingleFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DebuggingInfoForSingleFunction")),new UScriptStruct::TCppStructOps<FDebuggingInfoForSingleFunction>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDebuggingInfoForSingleFunction;
	struct Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebuggingInfoForSingleFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DebuggingInfoForSingleFunction",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FDebuggingInfoForSingleFunction),
		alignof(FDebuggingInfoForSingleFunction),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebuggingInfoForSingleFunction"), sizeof(FDebuggingInfoForSingleFunction), Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_CRC() { return 1258849474U; }
class UScriptStruct* FNodeToCodeAssociation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeToCodeAssociation, Z_Construct_UPackage__Script_Engine(), TEXT("NodeToCodeAssociation"), sizeof(FNodeToCodeAssociation), Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNodeToCodeAssociation(FNodeToCodeAssociation::StaticStruct, TEXT("/Script/Engine"), TEXT("NodeToCodeAssociation"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFNodeToCodeAssociation
{
	FScriptStruct_Engine_StaticRegisterNativesFNodeToCodeAssociation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NodeToCodeAssociation")),new UScriptStruct::TCppStructOps<FNodeToCodeAssociation>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFNodeToCodeAssociation;
	struct Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeToCodeAssociation>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NodeToCodeAssociation",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FNodeToCodeAssociation),
		alignof(FNodeToCodeAssociation),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeToCodeAssociation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NodeToCodeAssociation"), sizeof(FNodeToCodeAssociation), Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNodeToCodeAssociation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_CRC() { return 3905883727U; }
	void UBlueprintGeneratedClass::StaticRegisterNativesUBlueprintGeneratedClass()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister()
	{
		return UBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedComponentInstancingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CookedComponentInstancingData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CookedComponentInstancingData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CookedComponentInstancingData_ValueProp;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyGuids_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PropertyGuids;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyGuids_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PropertyGuids_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridenArchetypeForCDO_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverridenArchetypeForCDO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FastCallPairs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FastCallPairs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FastCallPairs_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UberGraphFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UberGraphFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritableComponentHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InheritableComponentHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleConstructionScript_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SimpleConstructionScript;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timelines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Timelines;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Timelines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentTemplates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentTemplates;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentTemplates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicBindingObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DynamicBindingObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicBindingObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasNativizedParent_MetaData[];
#endif
		static void NewProp_bHasNativizedParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasNativizedParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumReplicatedProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumReplicatedProperties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/BlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Mapping of changed properties & data to apply when instancing components in a cooked build (one entry per named AddComponent node template for fast lookup at runtime).\nNote: This is not currently utilized by the editor; it is a runtime optimization for cooked builds only. It assumes that the component class structure does not change." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData = { UE4CodeGen_Private::EPropertyClass::Map, "CookedComponentInstancingData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, CookedComponentInstancingData), METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "CookedComponentInstancingData_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "CookedComponentInstancingData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Property guid map" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids = { UE4CodeGen_Private::EPropertyClass::Map, "PropertyGuids", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, PropertyGuids), METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "PropertyGuids_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "PropertyGuids", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO = { UE4CodeGen_Private::EPropertyClass::Object, "OverridenArchetypeForCDO", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, OverridenArchetypeForCDO), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "This is a list of event graph call function nodes that are simple (no argument) thunks into the event graph (typically used for animation delegates, etc...)\nIt is a deprecated list only used for backwards compatibility prior to VER_UE4_SERIALIZE_BLUEPRINT_EVENTGRAPH_FASTCALLS_IN_UFUNCTION." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs = { UE4CodeGen_Private::EPropertyClass::Array, "FastCallPairs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, FastCallPairs_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FastCallPairs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000820000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEventGraphFastCallPair, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction = { UE4CodeGen_Private::EPropertyClass::Object, "UberGraphFunction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, UberGraphFunction), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Stores data to override (in children classes) components (created by SCS) from parent classes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler = { UE4CodeGen_Private::EPropertyClass::Object, "InheritableComponentHandler", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, InheritableComponentHandler), Z_Construct_UClass_UInheritableComponentHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "'Simple' construction script - graph of components to instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript = { UE4CodeGen_Private::EPropertyClass::Object, "SimpleConstructionScript", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, SimpleConstructionScript), Z_Construct_UClass_USimpleConstructionScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of templates for timelines that should be created" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines = { UE4CodeGen_Private::EPropertyClass::Array, "Timelines", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, Timelines), METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Timelines", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UTimelineTemplate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of component template objects, used by AddComponent function" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates = { UE4CodeGen_Private::EPropertyClass::Array, "ComponentTemplates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, ComponentTemplates), METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ComponentTemplates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of objects containing information for dynamically binding delegates to functions in this blueprint" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects = { UE4CodeGen_Private::EPropertyClass::Array, "DynamicBindingObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, DynamicBindingObjects), METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "DynamicBindingObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UDynamicBlueprintBinding_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
		{ "ToolTip", "Flag used to indicate if this class has a nativized parent in a cooked build." },
	};
#endif
	void Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent_SetBit(void* Obj)
	{
		((UBlueprintGeneratedClass*)Obj)->bHasNativizedParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasNativizedParent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBlueprintGeneratedClass), &Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintGeneratedClass.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties = { UE4CodeGen_Private::EPropertyClass::Int, "NumReplicatedProperties", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintGeneratedClass, NumReplicatedProperties), METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintGeneratedClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_CookedComponentInstancingData_ValueProp,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_PropertyGuids_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_OverridenArchetypeForCDO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_FastCallPairs_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_UberGraphFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_InheritableComponentHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_SimpleConstructionScript,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_Timelines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_ComponentTemplates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_DynamicBindingObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_bHasNativizedParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintGeneratedClass_Statics::NewProp_NumReplicatedProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintGeneratedClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintGeneratedClass_Statics::ClassParams = {
		&UBlueprintGeneratedClass::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_UBlueprintGeneratedClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintGeneratedClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintGeneratedClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintGeneratedClass, 549644598);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintGeneratedClass(Z_Construct_UClass_UBlueprintGeneratedClass, &UBlueprintGeneratedClass::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprintGeneratedClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintGeneratedClass);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBlueprintGeneratedClass)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
