// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintGeneratedClass() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintDebugData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationFrameSnapshot();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStateMachineDebugData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationStateMachine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimBlueprintDebugData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimBlueprintDebugData, Z_Construct_UPackage__Script_Engine(), TEXT("AnimBlueprintDebugData"), sizeof(FAnimBlueprintDebugData), Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimBlueprintDebugData(FAnimBlueprintDebugData::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimBlueprintDebugData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintDebugData
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintDebugData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimBlueprintDebugData")),new UScriptStruct::TCppStructOps<FAnimBlueprintDebugData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimBlueprintDebugData;
	struct Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "This structure represents animation-related debugging information for an entire AnimBlueprint\n(general debug information for the event graph, etc... is still contained in a FBlueprintDebugData structure)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimBlueprintDebugData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimBlueprintDebugData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimBlueprintDebugData),
		alignof(FAnimBlueprintDebugData),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimBlueprintDebugData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimBlueprintDebugData"), sizeof(FAnimBlueprintDebugData), Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimBlueprintDebugData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimBlueprintDebugData_CRC() { return 1972050211U; }
class UScriptStruct* FAnimationFrameSnapshot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationFrameSnapshot, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationFrameSnapshot"), sizeof(FAnimationFrameSnapshot), Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationFrameSnapshot(FAnimationFrameSnapshot::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationFrameSnapshot"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationFrameSnapshot
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationFrameSnapshot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationFrameSnapshot")),new UScriptStruct::TCppStructOps<FAnimationFrameSnapshot>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationFrameSnapshot;
	struct Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "This structure represents debugging information for a frame snapshot" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationFrameSnapshot>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationFrameSnapshot",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimationFrameSnapshot),
		alignof(FAnimationFrameSnapshot),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationFrameSnapshot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationFrameSnapshot"), sizeof(FAnimationFrameSnapshot), Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationFrameSnapshot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationFrameSnapshot_CRC() { return 2755488256U; }
class UScriptStruct* FStateMachineDebugData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStateMachineDebugData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateMachineDebugData, Z_Construct_UPackage__Script_Engine(), TEXT("StateMachineDebugData"), sizeof(FStateMachineDebugData), Get_Z_Construct_UScriptStruct_FStateMachineDebugData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStateMachineDebugData(FStateMachineDebugData::StaticStruct, TEXT("/Script/Engine"), TEXT("StateMachineDebugData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStateMachineDebugData
{
	FScriptStruct_Engine_StaticRegisterNativesFStateMachineDebugData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StateMachineDebugData")),new UScriptStruct::TCppStructOps<FStateMachineDebugData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStateMachineDebugData;
	struct Z_Construct_UScriptStruct_FStateMachineDebugData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "This structure represents debugging information for a single state machine" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateMachineDebugData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StateMachineDebugData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStateMachineDebugData),
		alignof(FStateMachineDebugData),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateMachineDebugData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStateMachineDebugData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StateMachineDebugData"), sizeof(FStateMachineDebugData), Get_Z_Construct_UScriptStruct_FStateMachineDebugData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStateMachineDebugData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStateMachineDebugData_CRC() { return 20313776U; }
	void UAnimBlueprintGeneratedClass::StaticRegisterNativesUAnimBlueprintGeneratedClass()
	{
	}
	UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister()
	{
		return UAnimBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncGroupNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SyncGroupNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SyncGroupNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderedSavedPoseIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrderedSavedPoseIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OrderedSavedPoseIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimNotifies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimNotifies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimNotifies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedStateMachines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BakedStateMachines;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedStateMachines_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Array of sync group names in the order that they are requested during compile" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames = { UE4CodeGen_Private::EPropertyClass::Array, "SyncGroupNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, SyncGroupNames), METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "SyncGroupNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Indices for each of the saved pose nodes that require updating, in the order they need to get updates." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndices = { UE4CodeGen_Private::EPropertyClass::Array, "OrderedSavedPoseIndices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, OrderedSavedPoseIndices), METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndices_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "OrderedSavedPoseIndices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "A list of anim notifies that state machines (or anything else) may reference" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies = { UE4CodeGen_Private::EPropertyClass::Array, "AnimNotifies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, AnimNotifies), METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimNotifies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "Target skeleton for this blueprint class" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_TargetSkeleton = { UE4CodeGen_Private::EPropertyClass::Object, "TargetSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_TargetSkeleton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_TargetSkeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimBlueprintGeneratedClass.h" },
		{ "ToolTip", "List of state machines present in this blueprint class" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines = { UE4CodeGen_Private::EPropertyClass::Array, "BakedStateMachines", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimBlueprintGeneratedClass, BakedStateMachines), METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BakedStateMachines", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBakedAnimationStateMachine, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_SyncGroupNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_OrderedSavedPoseIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_AnimNotifies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_TargetSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::NewProp_BakedStateMachines_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimClassInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimBlueprintGeneratedClass, IAnimClassInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintGeneratedClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::ClassParams = {
		&UAnimBlueprintGeneratedClass::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimBlueprintGeneratedClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBlueprintGeneratedClass, 1769026193);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBlueprintGeneratedClass(Z_Construct_UClass_UAnimBlueprintGeneratedClass, &UAnimBlueprintGeneratedClass::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimBlueprintGeneratedClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintGeneratedClass);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimBlueprintGeneratedClass)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
