// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimationAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationAsset() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationGroupReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRootMotionMovementParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGroupInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimTickRecord();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncAnimPosition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendFilter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendSampleData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetMappingTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
// End Cross Module References
	static UEnum* EAnimGroupRole_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimGroupRole, Z_Construct_UPackage__Script_Engine(), TEXT("EAnimGroupRole"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnimGroupRole(EAnimGroupRole_StaticEnum, TEXT("/Script/Engine"), TEXT("EAnimGroupRole"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAnimGroupRole_CRC() { return 3247415363U; }
	UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnimGroupRole"), 0, Get_Z_Construct_UEnum_Engine_EAnimGroupRole_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnimGroupRole::CanBeLeader", (int64)EAnimGroupRole::CanBeLeader },
				{ "EAnimGroupRole::AlwaysFollower", (int64)EAnimGroupRole::AlwaysFollower },
				{ "EAnimGroupRole::AlwaysLeader", (int64)EAnimGroupRole::AlwaysLeader },
				{ "EAnimGroupRole::TransitionLeader", (int64)EAnimGroupRole::TransitionLeader },
				{ "EAnimGroupRole::TransitionFollower", (int64)EAnimGroupRole::TransitionFollower },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysFollower.ToolTip", "This node will always be a follower (unless there are only followers, in which case the first one ticked wins)." },
				{ "AlwaysLeader.ToolTip", "This node will always be a leader (if more than one node is AlwaysLeader, the last one ticked wins)." },
				{ "CanBeLeader.ToolTip", "This node can be the leader, as long as it has a higher blend weight than the previous best leader." },
				{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
				{ "TransitionFollower.ToolTip", "This node will be excluded from the sync group while blending in. Once blended in it will be a follower until blended out" },
				{ "TransitionLeader.ToolTip", "This node will be excluded from the sync group while blending in. Once blended in it will be the sync group leader until blended out" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAnimGroupRole",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EAnimGroupRole::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimationGroupReference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationGroupReference_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationGroupReference, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationGroupReference"), sizeof(FAnimationGroupReference), Get_Z_Construct_UScriptStruct_FAnimationGroupReference_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationGroupReference(FAnimationGroupReference::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationGroupReference"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationGroupReference
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationGroupReference()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationGroupReference")),new UScriptStruct::TCppStructOps<FAnimationGroupReference>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationGroupReference;
	struct Z_Construct_UScriptStruct_FAnimationGroupReference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GroupRole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationGroupReference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupRole_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The type of membership in the group (potential leader, always follower, etc...)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupRole = { UE4CodeGen_Private::EPropertyClass::Byte, "GroupRole", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimationGroupReference, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupRole_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupRole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The name of the group" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupName = { UE4CodeGen_Private::EPropertyClass::Name, "GroupName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimationGroupReference, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::NewProp_GroupName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationGroupReference",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimationGroupReference),
		alignof(FAnimationGroupReference),
		Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationGroupReference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationGroupReference_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationGroupReference"), sizeof(FAnimationGroupReference), Get_Z_Construct_UScriptStruct_FAnimationGroupReference_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationGroupReference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationGroupReference_CRC() { return 1183086030U; }
class UScriptStruct* FRootMotionMovementParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRootMotionMovementParams_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionMovementParams, Z_Construct_UPackage__Script_Engine(), TEXT("RootMotionMovementParams"), sizeof(FRootMotionMovementParams), Get_Z_Construct_UScriptStruct_FRootMotionMovementParams_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRootMotionMovementParams(FRootMotionMovementParams::StaticStruct, TEXT("/Script/Engine"), TEXT("RootMotionMovementParams"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRootMotionMovementParams
{
	FScriptStruct_Engine_StaticRegisterNativesFRootMotionMovementParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RootMotionMovementParams")),new UScriptStruct::TCppStructOps<FRootMotionMovementParams>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRootMotionMovementParams;
	struct Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMotionTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootMotionTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasRootMotion_MetaData[];
#endif
		static void NewProp_bHasRootMotion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasRootMotion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Utility struct to accumulate root motion." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootMotionMovementParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_RootMotionTransform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_RootMotionTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "RootMotionTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionMovementParams, RootMotionTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_RootMotionTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_RootMotionTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_BlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "BlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRootMotionMovementParams, BlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_BlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion_SetBit(void* Obj)
	{
		((FRootMotionMovementParams*)Obj)->bHasRootMotion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasRootMotion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRootMotionMovementParams), &Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_RootMotionTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_BlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::NewProp_bHasRootMotion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RootMotionMovementParams",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRootMotionMovementParams),
		alignof(FRootMotionMovementParams),
		Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootMotionMovementParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRootMotionMovementParams_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RootMotionMovementParams"), sizeof(FRootMotionMovementParams), Get_Z_Construct_UScriptStruct_FRootMotionMovementParams_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRootMotionMovementParams_CRC() { return 4110613489U; }
class UScriptStruct* FAnimGroupInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimGroupInstance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimGroupInstance, Z_Construct_UPackage__Script_Engine(), TEXT("AnimGroupInstance"), sizeof(FAnimGroupInstance), Get_Z_Construct_UScriptStruct_FAnimGroupInstance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimGroupInstance(FAnimGroupInstance::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimGroupInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimGroupInstance
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimGroupInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimGroupInstance")),new UScriptStruct::TCppStructOps<FAnimGroupInstance>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimGroupInstance;
	struct Z_Construct_UScriptStruct_FAnimGroupInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimGroupInstance>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimGroupInstance",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimGroupInstance),
		alignof(FAnimGroupInstance),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimGroupInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimGroupInstance_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimGroupInstance"), sizeof(FAnimGroupInstance), Get_Z_Construct_UScriptStruct_FAnimGroupInstance_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimGroupInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimGroupInstance_CRC() { return 1703416805U; }
class UScriptStruct* FAnimTickRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimTickRecord_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimTickRecord, Z_Construct_UPackage__Script_Engine(), TEXT("AnimTickRecord"), sizeof(FAnimTickRecord), Get_Z_Construct_UScriptStruct_FAnimTickRecord_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimTickRecord(FAnimTickRecord::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimTickRecord"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimTickRecord
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimTickRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimTickRecord")),new UScriptStruct::TCppStructOps<FAnimTickRecord>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimTickRecord;
	struct Z_Construct_UScriptStruct_FAnimTickRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimTickRecord_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Information about an animation asset that needs to be ticked" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimTickRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewProp_SourceAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewProp_SourceAsset = { UE4CodeGen_Private::EPropertyClass::Object, "SourceAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimTickRecord, SourceAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewProp_SourceAsset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewProp_SourceAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimTickRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimTickRecord_Statics::NewProp_SourceAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimTickRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimTickRecord",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimTickRecord),
		alignof(FAnimTickRecord),
		Z_Construct_UScriptStruct_FAnimTickRecord_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTickRecord_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimTickRecord_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimTickRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimTickRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimTickRecord_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimTickRecord"), sizeof(FAnimTickRecord), Get_Z_Construct_UScriptStruct_FAnimTickRecord_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimTickRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimTickRecord_CRC() { return 3235100587U; }
class UScriptStruct* FMarkerSyncAnimPosition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition, Z_Construct_UPackage__Script_Engine(), TEXT("MarkerSyncAnimPosition"), sizeof(FMarkerSyncAnimPosition), Get_Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMarkerSyncAnimPosition(FMarkerSyncAnimPosition::StaticStruct, TEXT("/Script/Engine"), TEXT("MarkerSyncAnimPosition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMarkerSyncAnimPosition
{
	FScriptStruct_Engine_StaticRegisterNativesFMarkerSyncAnimPosition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MarkerSyncAnimPosition")),new UScriptStruct::TCppStructOps<FMarkerSyncAnimPosition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMarkerSyncAnimPosition;
	struct Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionBetweenMarkers_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionBetweenMarkers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextMarkerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NextMarkerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousMarkerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PreviousMarkerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Represent a current play position in an animation\nbased on sync markers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMarkerSyncAnimPosition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PositionBetweenMarkers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Value between 0 and 1 representing where we are:\n      0   we are at PreviousMarker\n      1   we are at NextMarker\n      0.5 we are half way between the two" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PositionBetweenMarkers = { UE4CodeGen_Private::EPropertyClass::Float, "PositionBetweenMarkers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMarkerSyncAnimPosition, PositionBetweenMarkers), METADATA_PARAMS(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PositionBetweenMarkers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PositionBetweenMarkers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_NextMarkerName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The marker we are heading towards" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_NextMarkerName = { UE4CodeGen_Private::EPropertyClass::Name, "NextMarkerName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMarkerSyncAnimPosition, NextMarkerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_NextMarkerName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_NextMarkerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PreviousMarkerName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The marker we have passed" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PreviousMarkerName = { UE4CodeGen_Private::EPropertyClass::Name, "PreviousMarkerName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMarkerSyncAnimPosition, PreviousMarkerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PreviousMarkerName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PreviousMarkerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PositionBetweenMarkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_NextMarkerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::NewProp_PreviousMarkerName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MarkerSyncAnimPosition",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMarkerSyncAnimPosition),
		alignof(FMarkerSyncAnimPosition),
		Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncAnimPosition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MarkerSyncAnimPosition"), sizeof(FMarkerSyncAnimPosition), Get_Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_CRC() { return 918007616U; }
class UScriptStruct* FBlendFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlendFilter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendFilter, Z_Construct_UPackage__Script_Engine(), TEXT("BlendFilter"), sizeof(FBlendFilter), Get_Z_Construct_UScriptStruct_FBlendFilter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlendFilter(FBlendFilter::StaticStruct, TEXT("/Script/Engine"), TEXT("BlendFilter"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlendFilter
{
	FScriptStruct_Engine_StaticRegisterNativesFBlendFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlendFilter")),new UScriptStruct::TCppStructOps<FBlendFilter>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlendFilter;
	struct Z_Construct_UScriptStruct_FBlendFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendFilter>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendFilter",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBlendFilter),
		alignof(FBlendFilter),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendFilter_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlendFilter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlendFilter"), sizeof(FBlendFilter), Get_Z_Construct_UScriptStruct_FBlendFilter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlendFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlendFilter_CRC() { return 2158912606U; }
class UScriptStruct* FBlendSampleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlendSampleData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendSampleData, Z_Construct_UPackage__Script_Engine(), TEXT("BlendSampleData"), sizeof(FBlendSampleData), Get_Z_Construct_UScriptStruct_FBlendSampleData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlendSampleData(FBlendSampleData::StaticStruct, TEXT("/Script/Engine"), TEXT("BlendSampleData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlendSampleData
{
	FScriptStruct_Engine_StaticRegisterNativesFBlendSampleData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlendSampleData")),new UScriptStruct::TCppStructOps<FBlendSampleData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlendSampleData;
	struct Z_Construct_UScriptStruct_FBlendSampleData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplePlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SamplePlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleDataIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleDataIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSampleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Transform definition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendSampleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SamplePlayRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "We may merge multiple samples if they use the same animation\nCalculate the combined sample play rate here" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SamplePlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "SamplePlayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlendSampleData, SamplePlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SamplePlayRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SamplePlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_PreviousTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_PreviousTime = { UE4CodeGen_Private::EPropertyClass::Float, "PreviousTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlendSampleData, PreviousTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_PreviousTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_PreviousTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlendSampleData, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_TotalWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_TotalWeight = { UE4CodeGen_Private::EPropertyClass::Float, "TotalWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlendSampleData, TotalWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_TotalWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_TotalWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Animation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Animation = { UE4CodeGen_Private::EPropertyClass::Object, "Animation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlendSampleData, Animation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Animation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SampleDataIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SampleDataIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SampleDataIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBlendSampleData, SampleDataIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SampleDataIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SampleDataIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendSampleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SamplePlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_PreviousTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_TotalWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendSampleData_Statics::NewProp_SampleDataIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendSampleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BlendSampleData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBlendSampleData),
		alignof(FBlendSampleData),
		Z_Construct_UScriptStruct_FBlendSampleData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendSampleData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendSampleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendSampleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlendSampleData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlendSampleData"), sizeof(FBlendSampleData), Get_Z_Construct_UScriptStruct_FBlendSampleData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlendSampleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlendSampleData_CRC() { return 78073645U; }
	void UAnimationAsset::StaticRegisterNativesUAnimationAsset()
	{
	}
	UClass* Z_Construct_UClass_UAnimationAsset_NoRegister()
	{
		return UAnimationAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewPoseAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewPoseAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetMappingTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetMappingTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildrenAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildrenAssets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildrenAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentAsset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetaData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimationAsset.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewSkeletalMesh = { UE4CodeGen_Private::EPropertyClass::SoftObject, "PreviewSkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044010800200000, 1, nullptr, STRUCT_OFFSET(UAnimationAsset, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewPoseAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset// @todo: note that this doesn't retarget right now" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewPoseAsset = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewPoseAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800200001, 1, nullptr, STRUCT_OFFSET(UAnimationAsset, PreviewPoseAsset), Z_Construct_UClass_UPoseAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewPoseAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewPoseAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ThumbnailInfo = { UE4CodeGen_Private::EPropertyClass::Object, "ThumbnailInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(UAnimationAsset, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ThumbnailInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ThumbnailInfo_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData = { UE4CodeGen_Private::EPropertyClass::Array, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c8000000009, 1, nullptr, STRUCT_OFFSET(UAnimationAsset, AssetUserData), METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AssetUserData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetMappingTable_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Asset mapping table when ParentAsset is set" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetMappingTable = { UE4CodeGen_Private::EPropertyClass::Object, "AssetMappingTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080800020001, 1, nullptr, STRUCT_OFFSET(UAnimationAsset, AssetMappingTable), Z_Construct_UClass_UAssetMappingTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetMappingTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetMappingTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "note this is transient as they're added as they're loaded" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets = { UE4CodeGen_Private::EPropertyClass::Array, "ChildrenAssets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UAnimationAsset, ChildrenAssets), METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ChildrenAssets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ParentAsset_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Parent Asset, if set, you won't be able to edit any data in here but just mapping table\n\nDuring cooking, this data will be used to bake out to normal asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ParentAsset = { UE4CodeGen_Private::EPropertyClass::Object, "ParentAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010800020001, 1, nullptr, STRUCT_OFFSET(UAnimationAsset, ParentAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ParentAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ParentAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "MetaData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Meta data that can be saved with the asset\n\nYou can query by GetMetaData function" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData = { UE4CodeGen_Private::EPropertyClass::Array, "MetaData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000009, 1, nullptr, STRUCT_OFFSET(UAnimationAsset, MetaData), METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_Inner_MetaData[] = {
		{ "Category", "MetaData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Meta data that can be saved with the asset\n\nYou can query by GetMetaData function" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MetaData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationAsset_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationAsset.h" },
		{ "ToolTip", "Pointer to the Skeleton this asset can be played on ." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationAsset_Statics::NewProp_Skeleton = { UE4CodeGen_Private::EPropertyClass::Object, "Skeleton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040010000020001, 1, nullptr, STRUCT_OFFSET(UAnimationAsset, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_Skeleton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::NewProp_Skeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_PreviewPoseAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ThumbnailInfo,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetUserData_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_AssetMappingTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ChildrenAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_ParentAsset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_MetaData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationAsset_Statics::NewProp_Skeleton,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimationAsset_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UAnimationAsset, IInterface_AssetUserData), false },
			{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UAnimationAsset, IInterface_PreviewMeshProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationAsset_Statics::ClassParams = {
		&UAnimationAsset::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A1u,
		nullptr, 0,
		Z_Construct_UClass_UAnimationAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UAnimationAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimationAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationAsset, 891356708);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationAsset(Z_Construct_UClass_UAnimationAsset, &UAnimationAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimationAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimationAsset)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
