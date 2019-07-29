// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaUtils/Public/MediaPlayerOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlayerOptions() {}
// Cross Module References
	MEDIAUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerOptions();
	UPackage* Z_Construct_UPackage__Script_MediaUtils();
	MEDIAUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerTrackOptions();
// End Cross Module References
class UScriptStruct* FMediaPlayerOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEDIAUTILS_API uint32 Get_Z_Construct_UScriptStruct_FMediaPlayerOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaPlayerOptions, Z_Construct_UPackage__Script_MediaUtils(), TEXT("MediaPlayerOptions"), sizeof(FMediaPlayerOptions), Get_Z_Construct_UScriptStruct_FMediaPlayerOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMediaPlayerOptions(FMediaPlayerOptions::StaticStruct, TEXT("/Script/MediaUtils"), TEXT("MediaPlayerOptions"), false, nullptr, nullptr);
static struct FScriptStruct_MediaUtils_StaticRegisterNativesFMediaPlayerOptions
{
	FScriptStruct_MediaUtils_StaticRegisterNativesFMediaPlayerOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MediaPlayerOptions")),new UScriptStruct::TCppStructOps<FMediaPlayerOptions>);
	}
} ScriptStruct_MediaUtils_StaticRegisterNativesFMediaPlayerOptions;
	struct Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tracks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaPlayerOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks = { UE4CodeGen_Private::EPropertyClass::Struct, "Tracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FMediaPlayerOptions, Tracks), Z_Construct_UScriptStruct_FMediaPlayerTrackOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::NewProp_Tracks,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaUtils,
		nullptr,
		&NewStructOps,
		"MediaPlayerOptions",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMediaPlayerOptions),
		alignof(FMediaPlayerOptions),
		Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMediaPlayerOptions_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MediaUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MediaPlayerOptions"), sizeof(FMediaPlayerOptions), Get_Z_Construct_UScriptStruct_FMediaPlayerOptions_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMediaPlayerOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMediaPlayerOptions_CRC() { return 2714769963U; }
class UScriptStruct* FMediaPlayerTrackOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEDIAUTILS_API uint32 Get_Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions, Z_Construct_UPackage__Script_MediaUtils(), TEXT("MediaPlayerTrackOptions"), sizeof(FMediaPlayerTrackOptions), Get_Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMediaPlayerTrackOptions(FMediaPlayerTrackOptions::StaticStruct, TEXT("/Script/MediaUtils"), TEXT("MediaPlayerTrackOptions"), false, nullptr, nullptr);
static struct FScriptStruct_MediaUtils_StaticRegisterNativesFMediaPlayerTrackOptions
{
	FScriptStruct_MediaUtils_StaticRegisterNativesFMediaPlayerTrackOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MediaPlayerTrackOptions")),new UScriptStruct::TCppStructOps<FMediaPlayerTrackOptions>);
	}
} ScriptStruct_MediaUtils_StaticRegisterNativesFMediaPlayerTrackOptions;
	struct Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Video_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Video;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Subtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Script;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Caption_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Caption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Audio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaPlayerTrackOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video = { UE4CodeGen_Private::EPropertyClass::Int, "Video", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FMediaPlayerTrackOptions, Video), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Int, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FMediaPlayerTrackOptions, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle = { UE4CodeGen_Private::EPropertyClass::Int, "Subtitle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FMediaPlayerTrackOptions, Subtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script = { UE4CodeGen_Private::EPropertyClass::Int, "Script", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FMediaPlayerTrackOptions, Script), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata = { UE4CodeGen_Private::EPropertyClass::Int, "Metadata", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FMediaPlayerTrackOptions, Metadata), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption = { UE4CodeGen_Private::EPropertyClass::Int, "Caption", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FMediaPlayerTrackOptions, Caption), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio_MetaData[] = {
		{ "Category", "Tracks" },
		{ "ModuleRelativePath", "Public/MediaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio = { UE4CodeGen_Private::EPropertyClass::Int, "Audio", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FMediaPlayerTrackOptions, Audio), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Video,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Subtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Script,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Metadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Caption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::NewProp_Audio,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaUtils,
		nullptr,
		&NewStructOps,
		"MediaPlayerTrackOptions",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMediaPlayerTrackOptions),
		alignof(FMediaPlayerTrackOptions),
		Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaPlayerTrackOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MediaUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MediaPlayerTrackOptions"), sizeof(FMediaPlayerTrackOptions), Get_Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMediaPlayerTrackOptions_CRC() { return 2834605152U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
