// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSourceBusSendInfo();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundConcurrencySettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
// End Cross Module References
	void USoundBase::StaticRegisterNativesUSoundBase()
	{
	}
	UClass* Z_Construct_UClass_USoundBase_NoRegister()
	{
		return USoundBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreEffectBusSends_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreEffectBusSends;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreEffectBusSends_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusSends_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BusSends;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BusSends_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceEffectChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceEffectChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSubmixSends_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundSubmixSends;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundSubmixSends_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSubmixObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSubmixObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalSamples;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentPlayCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxConcurrentPlayCount;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConcurrencyOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConcurrencyOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundConcurrencySettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundConcurrencySettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrentResolutionRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxConcurrentResolutionRule;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBypassVolumeScaleForPriority_MetaData[];
#endif
		static void NewProp_bBypassVolumeScaleForPriority_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBypassVolumeScaleForPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasVirtualizeWhenSilent_MetaData[];
#endif
		static void NewProp_bHasVirtualizeWhenSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasVirtualizeWhenSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasConcatenatorNode_MetaData[];
#endif
		static void NewProp_bHasConcatenatorNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasConcatenatorNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDelayNode_MetaData[];
#endif
		static void NewProp_bHasDelayNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDelayNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreFocus_MetaData[];
#endif
		static void NewProp_bIgnoreFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOutputToBusOnly_MetaData[];
#endif
		static void NewProp_bOutputToBusOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutputToBusOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideConcurrency_MetaData[];
#endif
		static void NewProp_bOverrideConcurrency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideConcurrency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundClassObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundClassObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundBase.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "DisplayName", "Pre-Effect Bus Sends" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "This sound will send its audio output to this list of buses if there are bus instances playing before source effects are processed." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends = { UE4CodeGen_Private::EPropertyClass::Array, "PreEffectBusSends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundBase, PreEffectBusSends), METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PreEffectBusSends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "DisplayName", "Post-Effect Bus Sends" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "This sound will send its audio output to this list of buses if there are bus instances playing after source effects are processed." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends = { UE4CodeGen_Private::EPropertyClass::Array, "BusSends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundBase, BusSends), METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BusSends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_SourceEffectChain_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "The source effect chain to use for this sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SourceEffectChain = { UE4CodeGen_Private::EPropertyClass::Object, "SourceEffectChain", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundBase, SourceEffectChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_SourceEffectChain_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_SourceEffectChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "An array of submix sends. Audio from this sound will send a portion of its audio to these effects." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends = { UE4CodeGen_Private::EPropertyClass::Array, "SoundSubmixSends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundBase, SoundSubmixSends), METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SoundSubmixSends", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoundSubmixSendInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixObject_MetaData[] = {
		{ "Category", "Effects" },
		{ "DisplayName", "Sound Submix" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Sound submix this sound belongs to.\nAudio will play here and traverse through the submix graph.\nA null entry will make the sound obey the default master effects graph." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixObject = { UE4CodeGen_Private::EPropertyClass::Object, "SoundSubmixObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundBase, SoundSubmixObject), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Attenuation settings package for the sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_AttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Object, "AttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundBase, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_AttenuationSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Sound priority (higher value is higher priority) used for concurrency resolution. This priority value is weighted against the final volume of the sound." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Float, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundBase, Priority), METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_Priority_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_TotalSamples_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Total number of samples (in the thousands). Useful as a metric to analyze the relative size of a given sound asset in content browser." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_TotalSamples = { UE4CodeGen_Private::EPropertyClass::Float, "TotalSamples", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000020015, 1, nullptr, STRUCT_OFFSET(USoundBase, TotalSamples), METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_TotalSamples_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_TotalSamples_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "The max distance of the asset, as determined by attenuation settings." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_MaxDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000020015, 1, nullptr, STRUCT_OFFSET(USoundBase, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_MaxDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Duration of sound in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000020015, 1, nullptr, STRUCT_OFFSET(USoundBase, Duration), METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_Duration_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentPlayCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Maximum number of times this sound can be played concurrently." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentPlayCount = { UE4CodeGen_Private::EPropertyClass::Int, "MaxConcurrentPlayCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(USoundBase, MaxConcurrentPlayCount_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentPlayCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentPlayCount_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencyOverrides_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "EditCondition", "bOverrideConcurrency" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "If Override Concurrency is true, concurrency settings to use." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencyOverrides = { UE4CodeGen_Private::EPropertyClass::Struct, "ConcurrencyOverrides", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundBase, ConcurrencyOverrides), Z_Construct_UScriptStruct_FSoundConcurrencySettings, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencyOverrides_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencyOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_SoundConcurrencySettings_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "EditCondition", "!bOverrideConcurrency" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "If Override Concurrency is false, the sound concurrency settings to use for this sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SoundConcurrencySettings = { UE4CodeGen_Private::EPropertyClass::Object, "SoundConcurrencySettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USoundBase, SoundConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundConcurrencySettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundConcurrencySettings_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentResolutionRule_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentResolutionRule = { UE4CodeGen_Private::EPropertyClass::Byte, "MaxConcurrentResolutionRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(USoundBase, MaxConcurrentResolutionRule_DEPRECATED), Z_Construct_UEnum_Engine_EMaxConcurrentResolutionRule, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentResolutionRule_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentResolutionRule_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Allows this sound to bypass volume-weighting for the max channel resolution." },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bBypassVolumeScaleForPriority = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority = { UE4CodeGen_Private::EPropertyClass::Bool, "bBypassVolumeScaleForPriority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether a sound has virtualize when silent enabled (i.e. for a sound cue, if any sound wave player has it enabled)." },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bHasVirtualizeWhenSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasVirtualizeWhenSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not this sound has a concatenator node. If it does, we have to allow the sound to persist even though it may not have generate audible audio in a given audio thread frame." },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bHasConcatenatorNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasConcatenatorNode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not to only send this audio's output to a bus. If true, will not be this sound won't be audible except through bus sends." },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bHasDelayNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasDelayNode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bIgnoreFocus_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bIgnoreFocus_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bIgnoreFocus_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bIgnoreFocus = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreFocus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bIgnoreFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bIgnoreFocus_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bIgnoreFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not to only send this audio's output to a bus. If true, will not be this sound won't be audible except through bus sends." },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bOutputToBusOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bOutputToBusOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency_MetaData[] = {
		{ "Category", "Concurrency" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Whether or not to override the sound concurrency object with local concurrency settings." },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bOverrideConcurrency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideConcurrency", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "When \"stat sounds -debug\" has been specified, draw this sound's attenuation shape when the sound is audible. For debugging purpose only." },
	};
#endif
	void Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((USoundBase*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebug", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundBase), &Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundBase_Statics::NewProp_SoundClassObject_MetaData[] = {
		{ "Category", "Sound" },
		{ "DisplayName", "Sound Class" },
		{ "ModuleRelativePath", "Classes/Sound/SoundBase.h" },
		{ "ToolTip", "Sound class this sound belongs to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundBase_Statics::NewProp_SoundClassObject = { UE4CodeGen_Private::EPropertyClass::Object, "SoundClassObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020090000000001, 1, nullptr, STRUCT_OFFSET(USoundBase, SoundClassObject), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundClassObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::NewProp_SoundClassObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_PreEffectBusSends_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_BusSends_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SourceEffectChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixSends_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SoundSubmixObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_TotalSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_Duration,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentPlayCount,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_ConcurrencyOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SoundConcurrencySettings,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_MaxConcurrentResolutionRule,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bBypassVolumeScaleForPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bHasVirtualizeWhenSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bHasConcatenatorNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bHasDelayNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bIgnoreFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bOutputToBusOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bOverrideConcurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundBase_Statics::NewProp_SoundClassObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundBase_Statics::ClassParams = {
		&USoundBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001010A1u,
		nullptr, 0,
		Z_Construct_UClass_USoundBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USoundBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundBase, 2520852313);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundBase(Z_Construct_UClass_USoundBase, &USoundBase::StaticClass, TEXT("/Script/Engine"), TEXT("USoundBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
