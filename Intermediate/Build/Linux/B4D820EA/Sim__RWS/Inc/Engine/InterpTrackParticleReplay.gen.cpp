// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackParticleReplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackParticleReplay() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleReplayTrackKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackParticleReplay_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackParticleReplay();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
// End Cross Module References
class UScriptStruct* FParticleReplayTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleReplayTrackKey_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleReplayTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleReplayTrackKey"), sizeof(FParticleReplayTrackKey), Get_Z_Construct_UScriptStruct_FParticleReplayTrackKey_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleReplayTrackKey(FParticleReplayTrackKey::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleReplayTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleReplayTrackKey
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleReplayTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleReplayTrackKey")),new UScriptStruct::TCppStructOps<FParticleReplayTrackKey>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleReplayTrackKey;
	struct Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipIDNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClipIDNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
		{ "ToolTip", "Data for a single key in this track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleReplayTrackKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_ClipIDNumber_MetaData[] = {
		{ "Category", "ParticleReplayTrackKey" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
		{ "ToolTip", "Replay clip ID number that identifies the clip we should capture to or playback from" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_ClipIDNumber = { UE4CodeGen_Private::EPropertyClass::Int, "ClipIDNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FParticleReplayTrackKey, ClipIDNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_ClipIDNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_ClipIDNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "ParticleReplayTrackKey" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
		{ "ToolTip", "Time length this clip should be captured/played for" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FParticleReplayTrackKey, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
		{ "ToolTip", "Position along timeline" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FParticleReplayTrackKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_ClipIDNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleReplayTrackKey",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FParticleReplayTrackKey),
		alignof(FParticleReplayTrackKey),
		Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleReplayTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleReplayTrackKey_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleReplayTrackKey"), sizeof(FParticleReplayTrackKey), Get_Z_Construct_UScriptStruct_FParticleReplayTrackKey_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleReplayTrackKey_CRC() { return 2635842616U; }
	void UInterpTrackParticleReplay::StaticRegisterNativesUInterpTrackParticleReplay()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackParticleReplay_NoRegister()
	{
		return UInterpTrackParticleReplay::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackParticleReplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedTimeStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixedTimeStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCapturingReplay_MetaData[];
#endif
		static void NewProp_bIsCapturingReplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCapturingReplay;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackKeys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackKeys_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackParticleReplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackParticleReplay_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Particle Replay Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackParticleReplay.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_FixedTimeStep_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
		{ "ToolTip", "Current replay fixed time quantum between frames (one over frame rate)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_FixedTimeStep = { UE4CodeGen_Private::EPropertyClass::Float, "FixedTimeStep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UInterpTrackParticleReplay, FixedTimeStep), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_FixedTimeStep_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_FixedTimeStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_bIsCapturingReplay_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
		{ "ToolTip", "True in the editor if track should be used to capture replay frames instead of play them back" },
	};
#endif
	void Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_bIsCapturingReplay_SetBit(void* Obj)
	{
		((UInterpTrackParticleReplay*)Obj)->bIsCapturingReplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_bIsCapturingReplay = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCapturingReplay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UInterpTrackParticleReplay), &Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_bIsCapturingReplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_bIsCapturingReplay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_bIsCapturingReplay_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_TrackKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
		{ "ToolTip", "Array of keys" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_TrackKeys = { UE4CodeGen_Private::EPropertyClass::Array, "TrackKeys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackParticleReplay, TrackKeys), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_TrackKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_TrackKeys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_TrackKeys_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackKeys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FParticleReplayTrackKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackParticleReplay_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_FixedTimeStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_bIsCapturingReplay,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_TrackKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_TrackKeys_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackParticleReplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackParticleReplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackParticleReplay_Statics::ClassParams = {
		&UInterpTrackParticleReplay::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000820A0u,
		nullptr, 0,
		Z_Construct_UClass_UInterpTrackParticleReplay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackParticleReplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackParticleReplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackParticleReplay, 267277739);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackParticleReplay(Z_Construct_UClass_UInterpTrackParticleReplay, &UInterpTrackParticleReplay::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackParticleReplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackParticleReplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
