// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimMontage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimMontage() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMontageSubStepResult();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNotifyEventType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimMontageInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointMarker();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPoint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLinkableElement();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSlotAnimationTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeSection();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase();
	ENGINE_API UFunction* Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeStretchCurve();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionRootLock();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncData();
// End Cross Module References
	static UEnum* EMontageSubStepResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMontageSubStepResult, Z_Construct_UPackage__Script_Engine(), TEXT("EMontageSubStepResult"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMontageSubStepResult(EMontageSubStepResult_StaticEnum, TEXT("/Script/Engine"), TEXT("EMontageSubStepResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMontageSubStepResult_CRC() { return 2457855743U; }
	UEnum* Z_Construct_UEnum_Engine_EMontageSubStepResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMontageSubStepResult"), 0, Get_Z_Construct_UEnum_Engine_EMontageSubStepResult_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMontageSubStepResult::Moved", (int64)EMontageSubStepResult::Moved },
				{ "EMontageSubStepResult::NotMoved", (int64)EMontageSubStepResult::NotMoved },
				{ "EMontageSubStepResult::InvalidSection", (int64)EMontageSubStepResult::InvalidSection },
				{ "EMontageSubStepResult::InvalidMontage", (int64)EMontageSubStepResult::InvalidMontage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMontageSubStepResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMontageSubStepResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAnimNotifyEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimNotifyEventType, Z_Construct_UPackage__Script_Engine(), TEXT("EAnimNotifyEventType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnimNotifyEventType(EAnimNotifyEventType_StaticEnum, TEXT("/Script/Engine"), TEXT("EAnimNotifyEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAnimNotifyEventType_CRC() { return 1705402918U; }
	UEnum* Z_Construct_UEnum_Engine_EAnimNotifyEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnimNotifyEventType"), 0, Get_Z_Construct_UEnum_Engine_EAnimNotifyEventType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnimNotifyEventType::Begin", (int64)EAnimNotifyEventType::Begin },
				{ "EAnimNotifyEventType::End", (int64)EAnimNotifyEventType::End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAnimNotifyEventType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EAnimNotifyEventType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimMontageInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimMontageInstance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimMontageInstance, Z_Construct_UPackage__Script_Engine(), TEXT("AnimMontageInstance"), sizeof(FAnimMontageInstance), Get_Z_Construct_UScriptStruct_FAnimMontageInstance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimMontageInstance(FAnimMontageInstance::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimMontageInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimMontageInstance
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimMontageInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimMontageInstance")),new UScriptStruct::TCppStructOps<FAnimMontageInstance>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimMontageInstance;
	struct Z_Construct_UScriptStruct_FAnimMontageInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableRootMotionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisableRootMotionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Blend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveStateBranchingPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveStateBranchingPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveStateBranchingPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevSections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrevSections;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrevSections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextSections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NextSections;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextSections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBlendTimeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultBlendTimeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaying_MetaData[];
#endif
		static void NewProp_bPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimMontageInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DisableRootMotionCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DisableRootMotionCount = { UE4CodeGen_Private::EPropertyClass::Int, "DisableRootMotionCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(FAnimMontageInstance, DisableRootMotionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DisableRootMotionCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DisableRootMotionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Blend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Blend = { UE4CodeGen_Private::EPropertyClass::Struct, "Blend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(FAnimMontageInstance, Blend), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Blend_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Blend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PlayRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FAnimMontageInstance, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PlayRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Float, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FAnimMontageInstance, Position), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Currently Active AnimNotifyState, stored as a copy of the event as we need to\n              call NotifyEnd on the event after a deletion in the editor. After this the event\n              is removed correctly." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints = { UE4CodeGen_Private::EPropertyClass::Array, "ActiveStateBranchingPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000002000, 1, nullptr, STRUCT_OFFSET(FAnimMontageInstance, ActiveStateBranchingPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ActiveStateBranchingPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "list of prev sections per section - index of array is section id" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections = { UE4CodeGen_Private::EPropertyClass::Array, "PrevSections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FAnimMontageInstance, PrevSections), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "PrevSections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "list of next sections per section - index of array is section id" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections = { UE4CodeGen_Private::EPropertyClass::Array, "NextSections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FAnimMontageInstance, NextSections), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "NextSections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DefaultBlendTimeMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Blend Time multiplier to allow extending and narrowing blendtimes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DefaultBlendTimeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultBlendTimeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FAnimMontageInstance, DefaultBlendTimeMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DefaultBlendTimeMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DefaultBlendTimeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying_SetBit(void* Obj)
	{
		((FAnimMontageInstance*)Obj)->bPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlaying", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimMontageInstance), &Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Montage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Montage reference" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Montage = { UE4CodeGen_Private::EPropertyClass::Object, "Montage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimMontageInstance, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Montage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Montage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DisableRootMotionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Blend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_ActiveStateBranchingPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_PrevSections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_NextSections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_DefaultBlendTimeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_bPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewProp_Montage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimMontageInstance",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FAnimMontageInstance),
		alignof(FAnimMontageInstance),
		Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimMontageInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimMontageInstance_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimMontageInstance"), sizeof(FAnimMontageInstance), Get_Z_Construct_UScriptStruct_FAnimMontageInstance_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimMontageInstance_CRC() { return 3500722199U; }
class UScriptStruct* FBranchingPointMarker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBranchingPointMarker_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchingPointMarker, Z_Construct_UPackage__Script_Engine(), TEXT("BranchingPointMarker"), sizeof(FBranchingPointMarker), Get_Z_Construct_UScriptStruct_FBranchingPointMarker_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBranchingPointMarker(FBranchingPointMarker::StaticStruct, TEXT("/Script/Engine"), TEXT("BranchingPointMarker"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBranchingPointMarker
{
	FScriptStruct_Engine_StaticRegisterNativesFBranchingPointMarker()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BranchingPointMarker")),new UScriptStruct::TCppStructOps<FBranchingPointMarker>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBranchingPointMarker;
	struct Z_Construct_UScriptStruct_FBranchingPointMarker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NotifyEventType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NotifyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "AnimNotifies marked as BranchingPoints will create these markers on their Begin/End times.\n      They create stopping points when the Montage is being ticked to dispatch events." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchingPointMarker>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyEventType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyEventType = { UE4CodeGen_Private::EPropertyClass::Byte, "NotifyEventType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBranchingPointMarker, NotifyEventType), Z_Construct_UEnum_Engine_EAnimNotifyEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyEventType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyEventType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_TriggerTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_TriggerTime = { UE4CodeGen_Private::EPropertyClass::Float, "TriggerTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBranchingPointMarker, TriggerTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_TriggerTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_TriggerTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "NotifyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBranchingPointMarker, NotifyIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_TriggerTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::NewProp_NotifyIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BranchingPointMarker",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBranchingPointMarker),
		alignof(FBranchingPointMarker),
		Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointMarker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBranchingPointMarker_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BranchingPointMarker"), sizeof(FBranchingPointMarker), Get_Z_Construct_UScriptStruct_FBranchingPointMarker_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBranchingPointMarker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBranchingPointMarker_CRC() { return 1163948307U; }
class UScriptStruct* FBranchingPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBranchingPoint_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchingPoint, Z_Construct_UPackage__Script_Engine(), TEXT("BranchingPoint"), sizeof(FBranchingPoint), Get_Z_Construct_UScriptStruct_FBranchingPoint_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBranchingPoint(FBranchingPoint::StaticStruct, TEXT("/Script/Engine"), TEXT("BranchingPoint"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBranchingPoint
{
	FScriptStruct_Engine_StaticRegisterNativesFBranchingPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BranchingPoint")),new UScriptStruct::TCppStructOps<FBranchingPoint>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBranchingPoint;
	struct Z_Construct_UScriptStruct_FBranchingPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTimeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriggerTimeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Remove FBranchingPoint when VER_UE4_MONTAGE_BRANCHING_POINT_REMOVAL is removed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchingPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_TriggerTimeOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "An offset from the DisplayTime to the actual time we will trigger the notify, as we cannot always trigger it exactly at the time the user wants" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_TriggerTimeOffset = { UE4CodeGen_Private::EPropertyClass::Float, "TriggerTimeOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBranchingPoint, TriggerTimeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_TriggerTimeOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_TriggerTimeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_DisplayTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_DisplayTime = { UE4CodeGen_Private::EPropertyClass::Float, "DisplayTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FBranchingPoint, DisplayTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_DisplayTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_DisplayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "BranchingPoint" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Name, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBranchingPoint, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_EventName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBranchingPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_TriggerTimeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_DisplayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBranchingPoint_Statics::NewProp_EventName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBranchingPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimLinkableElement,
		&NewStructOps,
		"BranchingPoint",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBranchingPoint),
		alignof(FBranchingPoint),
		Z_Construct_UScriptStruct_FBranchingPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPoint_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBranchingPoint_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBranchingPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBranchingPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBranchingPoint_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BranchingPoint"), sizeof(FBranchingPoint), Get_Z_Construct_UScriptStruct_FBranchingPoint_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBranchingPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBranchingPoint_CRC() { return 172158708U; }
class UScriptStruct* FSlotAnimationTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSlotAnimationTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotAnimationTrack, Z_Construct_UPackage__Script_Engine(), TEXT("SlotAnimationTrack"), sizeof(FSlotAnimationTrack), Get_Z_Construct_UScriptStruct_FSlotAnimationTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlotAnimationTrack(FSlotAnimationTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("SlotAnimationTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSlotAnimationTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFSlotAnimationTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlotAnimationTrack")),new UScriptStruct::TCppStructOps<FSlotAnimationTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSlotAnimationTrack;
	struct Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Each slot data referenced by Animation Slot\ncontains slot name, and animation data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotAnimationTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_AnimTrack_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_AnimTrack = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimTrack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSlotAnimationTrack, AnimTrack), Z_Construct_UScriptStruct_FAnimTrack, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_AnimTrack_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_AnimTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Slot" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_SlotName = { UE4CodeGen_Private::EPropertyClass::Name, "SlotName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSlotAnimationTrack, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_SlotName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_AnimTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::NewProp_SlotName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SlotAnimationTrack",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSlotAnimationTrack),
		alignof(FSlotAnimationTrack),
		Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlotAnimationTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlotAnimationTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlotAnimationTrack"), sizeof(FSlotAnimationTrack), Get_Z_Construct_UScriptStruct_FSlotAnimationTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlotAnimationTrack_CRC() { return 1847188671U; }
class UScriptStruct* FCompositeSection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCompositeSection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositeSection, Z_Construct_UPackage__Script_Engine(), TEXT("CompositeSection"), sizeof(FCompositeSection), Get_Z_Construct_UScriptStruct_FCompositeSection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCompositeSection(FCompositeSection::StaticStruct, TEXT("/Script/Engine"), TEXT("CompositeSection"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCompositeSection
{
	FScriptStruct_Engine_StaticRegisterNativesFCompositeSection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CompositeSection")),new UScriptStruct::TCppStructOps<FCompositeSection>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCompositeSection;
	struct Z_Construct_UScriptStruct_FCompositeSection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetaData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextSectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NextSectionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Section data for each track. Reference of data will be stored in the child class for the way they want\nAnimComposite vs AnimMontage have different requirement for the actual data reference\nThis only contains composite section information. (vertical sequences)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompositeSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositeSection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "Section" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Meta data that can be saved with the asset\n\nYou can query by GetMetaData function" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData = { UE4CodeGen_Private::EPropertyClass::Array, "MetaData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000009, 1, nullptr, STRUCT_OFFSET(FCompositeSection, MetaData), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_Inner_MetaData[] = {
		{ "Category", "Section" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Meta data that can be saved with the asset\n\nYou can query by GetMetaData function" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MetaData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_Inner_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_NextSectionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Should this animation loop." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_NextSectionName = { UE4CodeGen_Private::EPropertyClass::Name, "NextSectionName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCompositeSection, NextSectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_NextSectionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_NextSectionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Start Time *" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FCompositeSection, StartTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_StartTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Section Name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_SectionName = { UE4CodeGen_Private::EPropertyClass::Name, "SectionName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FCompositeSection, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_SectionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_SectionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositeSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_MetaData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_NextSectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeSection_Statics::NewProp_SectionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositeSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimLinkableElement,
		&NewStructOps,
		"CompositeSection",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FCompositeSection),
		alignof(FCompositeSection),
		Z_Construct_UScriptStruct_FCompositeSection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeSection_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompositeSection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCompositeSection_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CompositeSection"), sizeof(FCompositeSection), Get_Z_Construct_UScriptStruct_FCompositeSection_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCompositeSection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCompositeSection_CRC() { return 109536511U; }
	void UAnimMontage::StaticRegisterNativesUAnimMontage()
	{
		UClass* Class = UAnimMontage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultBlendOutTime", &UAnimMontage::execGetDefaultBlendOutTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics
	{
		struct AnimMontage_eventGetDefaultBlendOutTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AnimMontage_eventGetDefaultBlendOutTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimMontage, "GetDefaultBlendOutTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(AnimMontage_eventGetDefaultBlendOutTime_Parms), Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimMontage_NoRegister()
	{
		return UAnimMontage::StaticClass();
	}
	struct Z_Construct_UClass_UAnimMontage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStretchCurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TimeStretchCurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeStretchCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimeStretchCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchingPointStateNotifyIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BranchingPointStateNotifyIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BranchingPointStateNotifyIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchingPointMarkers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BranchingPointMarkers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchingPointMarkers_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewBasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewBasePose;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMotionRootLock_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RootMotionRootLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoBlendOut_MetaData[];
#endif
		static void NewProp_bEnableAutoBlendOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoBlendOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRootMotionRotation_MetaData[];
#endif
		static void NewProp_bEnableRootMotionRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRootMotionRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRootMotionTranslation_MetaData[];
#endif
		static void NewProp_bEnableRootMotionTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRootMotionTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchingPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BranchingPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BranchingPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotAnimTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SlotAnimTracks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotAnimTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompositeSections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CompositeSections;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompositeSections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SyncSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SyncGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTriggerTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTriggerTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimMontage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompositeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimMontage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimMontage_GetDefaultBlendOutTime, "GetDefaultBlendOutTime" }, // 3952055056
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "UObject Length" },
		{ "IncludePath", "Animation/AnimMontage.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "* Any property you're adding to AnimMontage and parent class has to be considered for Child Asset\n*\n* Child Asset is considered to be only asset mapping feature using everything else in the class\n* For example, you can just use all parent's setting  for the montage, but only remap assets\n* This isn't magic bullet unfortunately and it is consistent effort of keeping the data synced with parent\n* If you add new property, please make sure those property has to be copied for children.\n* If it does, please add the copy in the function RefreshParentAssetData" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurveName_MetaData[] = {
		{ "Category", "TimeStretchCurve" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Name of optional TimeStretchCurveName to look for in Montage." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurveName = { UE4CodeGen_Private::EPropertyClass::Name, "TimeStretchCurveName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimMontage, TimeStretchCurveName), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurveName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurve_MetaData[] = {
		{ "Category", "TimeStretchCurve" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "TimeStretchCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimMontage, TimeStretchCurve), Z_Construct_UScriptStruct_FTimeStretchCurve, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Keep track of which AnimNotify_State are marked as BranchingPoints, so we can update their state when the Montage is ticked" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices = { UE4CodeGen_Private::EPropertyClass::Array, "BranchingPointStateNotifyIndices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimMontage, BranchingPointStateNotifyIndices), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "BranchingPointStateNotifyIndices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Cached list of Branching Point markers" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers = { UE4CodeGen_Private::EPropertyClass::Array, "BranchingPointMarkers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UAnimMontage, BranchingPointMarkers), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BranchingPointMarkers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBranchingPointMarker, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_PreviewBasePose_MetaData[] = {
		{ "Category", "AdditiveSettings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Preview Base pose for additive BlendSpace *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_PreviewBasePose = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewBasePose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UAnimMontage, PreviewBasePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_PreviewBasePose_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_PreviewBasePose_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_RootMotionRootLock_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Root Bone will be locked to that position when extracting root motion. DEPRECATED in 4.5 root motion is controlled by anim sequences *" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_RootMotionRootLock = { UE4CodeGen_Private::EPropertyClass::Byte, "RootMotionRootLock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimMontage, RootMotionRootLock), Z_Construct_UEnum_Engine_ERootMotionRootLock, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_RootMotionRootLock_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_RootMotionRootLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "When it hits end, it automatically blends out. If this is false, it won't blend out but keep the last pose until stopped explicitly" },
	};
#endif
	void Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut_SetBit(void* Obj)
	{
		((UAnimMontage*)Obj)->bEnableAutoBlendOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableAutoBlendOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimMontage), &Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "If this is on, it will allow extracting root motion rotation. DEPRECATED in 4.5 root motion is controlled by anim sequences *" },
	};
#endif
	void Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation_SetBit(void* Obj)
	{
		((UAnimMontage*)Obj)->bEnableRootMotionRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableRootMotionRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimMontage), &Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "If this is on, it will allow extracting root motion translation. DEPRECATED in 4.5 root motion is controlled by anim sequences *" },
	};
#endif
	void Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation_SetBit(void* Obj)
	{
		((UAnimMontage*)Obj)->bEnableRootMotionTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableRootMotionTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAnimMontage), &Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Remove this when VER_UE4_MONTAGE_BRANCHING_POINT_REMOVAL is removed." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints = { UE4CodeGen_Private::EPropertyClass::Array, "BranchingPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UAnimMontage, BranchingPoints_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BranchingPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000020000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBranchingPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "slot data, each slot contains anim track" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks = { UE4CodeGen_Private::EPropertyClass::Array, "SlotAnimTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimMontage, SlotAnimTracks), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SlotAnimTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSlotAnimationTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "composite section." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections = { UE4CodeGen_Private::EPropertyClass::Array, "CompositeSections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UAnimMontage, CompositeSections), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CompositeSections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCompositeSection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_MarkerData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_MarkerData = { UE4CodeGen_Private::EPropertyClass::Struct, "MarkerData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimMontage, MarkerData), Z_Construct_UScriptStruct_FMarkerSyncData, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_MarkerData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_MarkerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncSlotIndex_MetaData[] = {
		{ "Category", "SyncGroup" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "wip: until we have UI working" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncSlotIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SyncSlotIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimMontage, SyncSlotIndex), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncSlotIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncGroup_MetaData[] = {
		{ "Category", "SyncGroup" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "If you're using marker based sync for this montage, make sure to add sync group name. For now we only support one group" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncGroup = { UE4CodeGen_Private::EPropertyClass::Name, "SyncGroup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimMontage, SyncGroup), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTriggerTime_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Time from Sequence End to trigger blend out.\n<0 means using BlendOutTime, so BlendOut finishes as Montage ends.\n>=0 means using 'SequenceEnd - BlendOutTriggerTime' to trigger blend out." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTriggerTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendOutTriggerTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimMontage, BlendOutTriggerTime), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTriggerTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTriggerTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UAnimMontage, BlendOutTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOut_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Blend out option. This is only used when it blends out itself. If it's interrupted by other montages, it will use new montage's BlendIn option to blend out." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOut = { UE4CodeGen_Private::EPropertyClass::Struct, "BlendOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimMontage, BlendOut), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendInTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendInTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UAnimMontage, BlendInTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendInTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendIn_MetaData[] = {
		{ "Category", "BlendOption" },
		{ "ModuleRelativePath", "Classes/Animation/AnimMontage.h" },
		{ "ToolTip", "Blend in option." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendIn = { UE4CodeGen_Private::EPropertyClass::Struct, "BlendIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimMontage, BlendIn), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendIn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendIn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_TimeStretchCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointStateNotifyIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPointMarkers_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_PreviewBasePose,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_RootMotionRootLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableAutoBlendOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_bEnableRootMotionTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BranchingPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_SlotAnimTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_CompositeSections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_MarkerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_SyncGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTriggerTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimMontage_Statics::NewProp_BlendIn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimMontage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimMontage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimMontage_Statics::ClassParams = {
		&UAnimMontage::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAnimMontage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimMontage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimMontage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimMontage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimMontage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimMontage, 382483533);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimMontage(Z_Construct_UClass_UAnimMontage, &UAnimMontage::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimMontage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimMontage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
