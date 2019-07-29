// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundWave.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundWave() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDecompressionType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamedAudioPlatformData();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizedSubtitle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleCue();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundGroup();
	AUDIOPLATFORMCONFIGURATION_API UEnum* Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings();
// End Cross Module References
	static UEnum* EDecompressionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDecompressionType, Z_Construct_UPackage__Script_Engine(), TEXT("EDecompressionType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDecompressionType(EDecompressionType_StaticEnum, TEXT("/Script/Engine"), TEXT("EDecompressionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDecompressionType_CRC() { return 1611084672U; }
	UEnum* Z_Construct_UEnum_Engine_EDecompressionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDecompressionType"), 0, Get_Z_Construct_UEnum_Engine_EDecompressionType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DTYPE_Setup", (int64)DTYPE_Setup },
				{ "DTYPE_Invalid", (int64)DTYPE_Invalid },
				{ "DTYPE_Preview", (int64)DTYPE_Preview },
				{ "DTYPE_Native", (int64)DTYPE_Native },
				{ "DTYPE_RealTime", (int64)DTYPE_RealTime },
				{ "DTYPE_Procedural", (int64)DTYPE_Procedural },
				{ "DTYPE_Xenon", (int64)DTYPE_Xenon },
				{ "DTYPE_Streaming", (int64)DTYPE_Streaming },
				{ "DTYPE_MAX", (int64)DTYPE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDecompressionType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EDecompressionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FStreamedAudioPlatformData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamedAudioPlatformData, Z_Construct_UPackage__Script_Engine(), TEXT("StreamedAudioPlatformData"), sizeof(FStreamedAudioPlatformData), Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreamedAudioPlatformData(FStreamedAudioPlatformData::StaticStruct, TEXT("/Script/Engine"), TEXT("StreamedAudioPlatformData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStreamedAudioPlatformData
{
	FScriptStruct_Engine_StaticRegisterNativesFStreamedAudioPlatformData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreamedAudioPlatformData")),new UScriptStruct::TCppStructOps<FStreamedAudioPlatformData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStreamedAudioPlatformData;
	struct Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Platform-specific data used streaming audio at runtime." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamedAudioPlatformData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StreamedAudioPlatformData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStreamedAudioPlatformData),
		alignof(FStreamedAudioPlatformData),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamedAudioPlatformData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreamedAudioPlatformData"), sizeof(FStreamedAudioPlatformData), Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreamedAudioPlatformData_CRC() { return 1364516880U; }
	void USoundWave::StaticRegisterNativesUSoundWave()
	{
	}
	UClass* Z_Construct_UClass_USoundWave_NoRegister()
	{
		return USoundWave::StaticClass();
	}
	struct Z_Construct_UClass_USoundWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCurves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curves;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedSubtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalizedSubtitles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalizedSubtitles_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Comment;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subtitles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subtitles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelSizes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChannelSizes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChannelSizes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChannelOffsets;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChannelOffsets_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubtitlePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpokenText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpokenText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAmbisonics_MetaData[];
#endif
		static void NewProp_bIsAmbisonics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAmbisonics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVirtualizeWhenSilent_MetaData[];
#endif
		static void NewProp_bVirtualizeWhenSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVirtualizeWhenSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSingleLine_MetaData[];
#endif
		static void NewProp_bSingleLine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSingleLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualWordWrap_MetaData[];
#endif
		static void NewProp_bManualWordWrap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualWordWrap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMature_MetaData[];
#endif
		static void NewProp_bMature_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStreaming_MetaData[];
#endif
		static void NewProp_bStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoundGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRateQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SampleRateQuality;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SampleRateQuality_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StreamingPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressionQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundWave.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_InternalCurves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Hold a reference to our internal curve so we can switch back to it if we want to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_InternalCurves = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCurves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(USoundWave, InternalCurves), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_InternalCurves_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_InternalCurves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_Curves_MetaData[] = {
		{ "Category", "SoundWave" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Curves associated with this sound wave" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Curves = { UE4CodeGen_Private::EPropertyClass::Object, "Curves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c0000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, Curves), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_Curves_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_Curves_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_AssetImportData = { UE4CodeGen_Private::EPropertyClass::Object, "AssetImportData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00120008000a0009, 1, nullptr, STRUCT_OFFSET(USoundWave, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_AssetImportData_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFileTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFileTimestamp = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFileTimestamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(USoundWave, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFileTimestamp_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFilePath = { UE4CodeGen_Private::EPropertyClass::Str, "SourceFilePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(USoundWave, SourceFilePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFilePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFilePath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_LocalizedSubtitles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The array of the subtitles for each language. Generated at cook time." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_LocalizedSubtitles = { UE4CodeGen_Private::EPropertyClass::Array, "LocalizedSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USoundWave, LocalizedSubtitles), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_LocalizedSubtitles_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_LocalizedSubtitles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_LocalizedSubtitles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalizedSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLocalizedSubtitle, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Provides contextual information for the sound to the translator." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Comment = { UE4CodeGen_Private::EPropertyClass::Str, "Comment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000001, 1, nullptr, STRUCT_OFFSET(USoundWave, Comment), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_Comment_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_Comment_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Subtitle cues.  If empty, use SpokenText as the subtitle.  Will often be empty,\nas the contents of the subtitle is commonly identical to what is spoken." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles = { UE4CodeGen_Private::EPropertyClass::Array, "Subtitles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, Subtitles), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Subtitles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSubtitleCue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Cached sample rate for displaying in the tools" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRate = { UE4CodeGen_Private::EPropertyClass::Int, "SampleRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020090000020001, 1, nullptr, STRUCT_OFFSET(USoundWave, SampleRate), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Sizes of the bulk data for the source wav data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes = { UE4CodeGen_Private::EPropertyClass::Array, "ChannelSizes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USoundWave, ChannelSizes), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ChannelSizes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Offsets into the bulk data for the source wav data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets = { UE4CodeGen_Private::EPropertyClass::Array, "ChannelOffsets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USoundWave, ChannelOffsets), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ChannelOffsets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_NumChannels_MetaData[] = {
		{ "Category", "Info" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Number of channels of multichannel data; 1 or 2 for regular mono and stereo files" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_NumChannels = { UE4CodeGen_Private::EPropertyClass::Int, "NumChannels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000020001, 1, nullptr, STRUCT_OFFSET(USoundWave, NumChannels), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_NumChannels_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_NumChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMax", "4.0" },
		{ "ClampMin", "0.125" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Playback pitch for sound." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Pitch = { UE4CodeGen_Private::EPropertyClass::Float, "Pitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, Pitch), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_Pitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "Sound" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Playback volume of sound 0 to 1 - Default is 1.0." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_Volume = { UE4CodeGen_Private::EPropertyClass::Float, "Volume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, Volume), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_Volume_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_SubtitlePriority_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "The priority of the subtitle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SubtitlePriority = { UE4CodeGen_Private::EPropertyClass::Float, "SubtitlePriority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, SubtitlePriority), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_SubtitlePriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_SubtitlePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_SpokenText_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "A localized version of the text that is actually spoken phonetically in the audio." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SpokenText = { UE4CodeGen_Private::EPropertyClass::Str, "SpokenText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, SpokenText), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_SpokenText_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_SpokenText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Whether or not this source is ambisonics file format." },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bIsAmbisonics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAmbisonics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent_MetaData[] = {
		{ "Category", "Sound" },
		{ "DisplayName", "Play When Silent" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Allows sound to continue playing when silent. This prevents issues with sounds restarting when coming back in range, etc." },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bVirtualizeWhenSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bVirtualizeWhenSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "If set to true the subtitles display as a sequence of single lines as opposed to multiline." },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bSingleLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine = { UE4CodeGen_Private::EPropertyClass::Bool, "bSingleLine", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "If set to true will disable automatic generation of line breaks - use if the subtitles have been split manually." },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bManualWordWrap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap = { UE4CodeGen_Private::EPropertyClass::Bool, "bManualWordWrap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bMature_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "If set to true if this sound is considered to contain mature/adult content." },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bMature_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bMature = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bMature = { UE4CodeGen_Private::EPropertyClass::Bool, "bMature", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bMature_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bMature_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bMature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming_MetaData[] = {
		{ "Category", "Streaming" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Whether this sound can be streamed to avoid increased memory usage" },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming = { UE4CodeGen_Private::EPropertyClass::Bool, "bStreaming", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "SoundWave" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "If set, when played directly (not through a sound cue) the wave will be played looping." },
	};
#endif
	void Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((USoundWave*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bLooping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundWave), &Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_SoundGroup_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SoundGroup = { UE4CodeGen_Private::EPropertyClass::Byte, "SoundGroup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, SoundGroup), Z_Construct_UEnum_Engine_ESoundGroup, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_SoundGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_SoundGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Quality of sample rate conversion for platforms that opt into resampling during cook." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality = { UE4CodeGen_Private::EPropertyClass::Enum, "SampleRateQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, SampleRateQuality), Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings, METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_StreamingPriority_MetaData[] = {
		{ "Category", "Streaming" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Priority of this sound when streaming (lower priority streams may not always play)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_StreamingPriority = { UE4CodeGen_Private::EPropertyClass::Int, "StreamingPriority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, StreamingPriority), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_StreamingPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_StreamingPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundWave_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWave.h" },
		{ "ToolTip", "Platform agnostic compression quality. 1..100 with 1 being best compression and 100 being best quality." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundWave_Statics::NewProp_CompressionQuality = { UE4CodeGen_Private::EPropertyClass::Int, "CompressionQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000000001, 1, nullptr, STRUCT_OFFSET(USoundWave, CompressionQuality), METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::NewProp_CompressionQuality_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::NewProp_CompressionQuality_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundWave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_InternalCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Curves,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_AssetImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFileTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SourceFilePath,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_LocalizedSubtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_LocalizedSubtitles_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Comment,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Subtitles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRate,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelSizes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_ChannelOffsets_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_NumChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Pitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SubtitlePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SpokenText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bIsAmbisonics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bVirtualizeWhenSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bSingleLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bManualWordWrap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bMature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SoundGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_SampleRateQuality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_StreamingPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundWave_Statics::NewProp_CompressionQuality,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundWave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundWave_Statics::ClassParams = {
		&USoundWave::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009010A0u,
		nullptr, 0,
		Z_Construct_UClass_USoundWave_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USoundWave_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundWave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundWave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundWave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundWave, 3213894202);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundWave(Z_Construct_UClass_USoundWave, &USoundWave::StaticClass, TEXT("/Script/Engine"), TEXT("USoundWave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundWave);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundWave)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
