// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequencePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequencePlayer() {}
// Cross Module References
	LEVELSEQUENCE_API UFunction* Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer();
	LEVELSEQUENCE_API UFunction* Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics
	{
		struct _Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms
		{
			UCameraComponent* CameraComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(_Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::NewProp_CameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::NewProp_CameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::NewProp_CameraComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LevelSequence, "OnLevelSequencePlayerCameraCutEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms), Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FLevelSequencePlayerSnapshot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequencePlayerSnapshot"), sizeof(FLevelSequencePlayerSnapshot), Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequencePlayerSnapshot(FLevelSequencePlayerSnapshot::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequencePlayerSnapshot"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequencePlayerSnapshot
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequencePlayerSnapshot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequencePlayerSnapshot")),new UScriptStruct::TCppStructOps<FLevelSequencePlayerSnapshot>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequencePlayerSnapshot;
	struct Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTimecode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceTimecode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentShotSourceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentShotSourceTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentShotLocalTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentShotLocalTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentShotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentShotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MasterTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MasterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Frame snapshot information for a level sequence" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequencePlayerSnapshot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ShotID_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ShotID = { UE4CodeGen_Private::EPropertyClass::Struct, "ShotID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, ShotID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ShotID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ShotID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Struct, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, Settings), Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_Settings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a001d, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTimecode_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTimecode = { UE4CodeGen_Private::EPropertyClass::Str, "SourceTimecode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, SourceTimecode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTimecode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTimecode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotSourceTime_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotSourceTime = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentShotSourceTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, CurrentShotSourceTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotSourceTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotSourceTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotLocalTime_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotLocalTime = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentShotLocalTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, CurrentShotLocalTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotLocalTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotLocalTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotName_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotName = { UE4CodeGen_Private::EPropertyClass::Str, "CurrentShotName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, CurrentShotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTime_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTime = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, SourceTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterTime_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterTime = { UE4CodeGen_Private::EPropertyClass::Struct, "MasterTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, MasterTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterName_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterName = { UE4CodeGen_Private::EPropertyClass::Str, "MasterName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, MasterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ShotID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTimecode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotSourceTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotLocalTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequencePlayerSnapshot",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FLevelSequencePlayerSnapshot),
		alignof(FLevelSequencePlayerSnapshot),
		Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequencePlayerSnapshot"), sizeof(FLevelSequencePlayerSnapshot), Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_CRC() { return 897947863U; }
class UScriptStruct* FLevelSequenceSnapshotSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceSnapshotSettings"), sizeof(FLevelSequenceSnapshotSettings), Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSequenceSnapshotSettings(FLevelSequenceSnapshotSettings::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("LevelSequenceSnapshotSettings"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceSnapshotSettings
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceSnapshotSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSequenceSnapshotSettings")),new UScriptStruct::TCppStructOps<FLevelSequenceSnapshotSettings>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFLevelSequenceSnapshotSettings;
	struct Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZeroPadAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ZeroPadAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceSnapshotSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Playback framerate" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_FrameRate = { UE4CodeGen_Private::EPropertyClass::Struct, "FrameRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequenceSnapshotSettings, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_FrameRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_ZeroPadAmount_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Zero pad frames" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_ZeroPadAmount = { UE4CodeGen_Private::EPropertyClass::Byte, "ZeroPadAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FLevelSequenceSnapshotSettings, ZeroPadAmount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_ZeroPadAmount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_ZeroPadAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_FrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewProp_ZeroPadAmount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceSnapshotSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FLevelSequenceSnapshotSettings),
		alignof(FLevelSequenceSnapshotSettings),
		Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSequenceSnapshotSettings"), sizeof(FLevelSequenceSnapshotSettings), Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_CRC() { return 4172241955U; }
	void ULevelSequencePlayer::StaticRegisterNativesULevelSequencePlayer()
	{
		UClass* Class = ULevelSequencePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateLevelSequencePlayer", &ULevelSequencePlayer::execCreateLevelSequencePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics
	{
		struct LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms
		{
			UObject* WorldContextObject;
			ULevelSequence* LevelSequence;
			FMovieSceneSequencePlaybackSettings Settings;
			ALevelSequenceActor* OutActor;
			ULevelSequencePlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, ReturnValue), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_OutActor = { UE4CodeGen_Private::EPropertyClass::Object, "OutActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, OutActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Struct, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, Settings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_LevelSequence = { UE4CodeGen_Private::EPropertyClass::Object, "LevelSequence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_OutActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_LevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "DynamicOutputParam", "OutActor" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Create a new level sequence player.\n\n@param WorldContextObject Context object from which to retrieve a UWorld.\n@param LevelSequence The level sequence to play.\n@param Settings The desired playback settings\n@param OutActor The level sequence actor created to play this sequence." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlayer, "CreateLevelSequencePlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms), Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister()
	{
		return ULevelSequencePlayer::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequencePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalEventReceivers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalEventReceivers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalEventReceivers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCameraCut_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraCut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequencePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequencePlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequencePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer, "CreateLevelSequencePlayer" }, // 77865715
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequencePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULevelSequencePlayer is used to actually \"play\" an level sequence asset at runtime.\n\nThis class keeps track of playback state and provides functions for manipulating\nan level sequence while its playing." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_AdditionalEventReceivers_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Array of additional event receivers" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_AdditionalEventReceivers = { UE4CodeGen_Private::EPropertyClass::Array, "AdditionalEventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(ULevelSequencePlayer, AdditionalEventReceivers), METADATA_PARAMS(Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_AdditionalEventReceivers_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_AdditionalEventReceivers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_AdditionalEventReceivers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AdditionalEventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_OnCameraCut_MetaData[] = {
		{ "Category", "Game|Cinematic" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Event triggered when there is a camera cut" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_OnCameraCut = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnCameraCut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULevelSequencePlayer, OnCameraCut), Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_OnCameraCut_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_OnCameraCut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequencePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_AdditionalEventReceivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_AdditionalEventReceivers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_OnCameraCut,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequencePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequencePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequencePlayer_Statics::ClassParams = {
		&ULevelSequencePlayer::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ULevelSequencePlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULevelSequencePlayer_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequencePlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelSequencePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequencePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequencePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequencePlayer, 2080799014);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequencePlayer(Z_Construct_UClass_ULevelSequencePlayer, &ULevelSequencePlayer::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequencePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequencePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
