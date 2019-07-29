// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/AnimNotifyQueue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyQueue() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyQueue();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyArray();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNotifyQueue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyQueue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyQueue, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyQueue"), sizeof(FAnimNotifyQueue), Get_Z_Construct_UScriptStruct_FAnimNotifyQueue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNotifyQueue(FAnimNotifyQueue::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNotifyQueue"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNotifyQueue
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNotifyQueue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNotifyQueue")),new UScriptStruct::TCppStructOps<FAnimNotifyQueue>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNotifyQueue;
	struct Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnfilteredMontageAnimNotifies_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_UnfilteredMontageAnimNotifies;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UnfilteredMontageAnimNotifies_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnfilteredMontageAnimNotifies_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimNotifies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimNotifies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimNotifies_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyQueue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
		{ "ToolTip", "Animation Notifies from montages that still need to be filtered by slot weight" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies = { UE4CodeGen_Private::EPropertyClass::Map, "UnfilteredMontageAnimNotifies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNotifyQueue, UnfilteredMontageAnimNotifies), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Name, "UnfilteredMontageAnimNotifies_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "UnfilteredMontageAnimNotifies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FAnimNotifyArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
		{ "ToolTip", "Animation Notifies that has been triggered in the latest tick *" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies = { UE4CodeGen_Private::EPropertyClass::Array, "AnimNotifies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNotifyQueue, AnimNotifies), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimNotifies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_UnfilteredMontageAnimNotifies_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::NewProp_AnimNotifies_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimNotifyQueue",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimNotifyQueue),
		alignof(FAnimNotifyQueue),
		Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyQueue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyQueue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNotifyQueue"), sizeof(FAnimNotifyQueue), Get_Z_Construct_UScriptStruct_FAnimNotifyQueue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNotifyQueue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyQueue_CRC() { return 453009317U; }
class UScriptStruct* FAnimNotifyArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyArray_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyArray, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyArray"), sizeof(FAnimNotifyArray), Get_Z_Construct_UScriptStruct_FAnimNotifyArray_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNotifyArray(FAnimNotifyArray::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNotifyArray"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNotifyArray
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNotifyArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNotifyArray")),new UScriptStruct::TCppStructOps<FAnimNotifyArray>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNotifyArray;
	struct Z_Construct_UScriptStruct_FAnimNotifyArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notifies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Notifies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Notifies_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies = { UE4CodeGen_Private::EPropertyClass::Array, "Notifies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNotifyArray, Notifies), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Notifies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::NewProp_Notifies_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimNotifyArray",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimNotifyArray),
		alignof(FAnimNotifyArray),
		Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyArray_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNotifyArray"), sizeof(FAnimNotifyArray), Get_Z_Construct_UScriptStruct_FAnimNotifyArray_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNotifyArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyArray_CRC() { return 3454117133U; }
class UScriptStruct* FAnimNotifyEventReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyEventReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyEventReference, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyEventReference"), sizeof(FAnimNotifyEventReference), Get_Z_Construct_UScriptStruct_FAnimNotifyEventReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNotifyEventReference(FAnimNotifyEventReference::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNotifyEventReference"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNotifyEventReference
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNotifyEventReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNotifyEventReference")),new UScriptStruct::TCppStructOps<FAnimNotifyEventReference>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNotifyEventReference;
	struct Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifySource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NotifySource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyEventReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_NotifySource_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyQueue.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_NotifySource = { UE4CodeGen_Private::EPropertyClass::Object, "NotifySource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNotifyEventReference, NotifySource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_NotifySource_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_NotifySource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::NewProp_NotifySource,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimNotifyEventReference",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimNotifyEventReference),
		alignof(FAnimNotifyEventReference),
		Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyEventReference_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNotifyEventReference"), sizeof(FAnimNotifyEventReference), Get_Z_Construct_UScriptStruct_FAnimNotifyEventReference_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNotifyEventReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNotifyEventReference_CRC() { return 937805966U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
