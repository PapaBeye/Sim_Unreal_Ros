// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieScene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackLabels();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEditorData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneExpansionState();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimecodeSource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBinding();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePossessable();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSpawnable();
// End Cross Module References
class UScriptStruct* FMovieSceneTrackLabels::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackLabels_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackLabels, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackLabels"), sizeof(FMovieSceneTrackLabels), Get_Z_Construct_UScriptStruct_FMovieSceneTrackLabels_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackLabels(FMovieSceneTrackLabels::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackLabels"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackLabels
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackLabels()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackLabels")),new UScriptStruct::TCppStructOps<FMovieSceneTrackLabels>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackLabels;
	struct Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Strings;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Strings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Structure for labels that can be assigned to movie scene tracks." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackLabels>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings = { UE4CodeGen_Private::EPropertyClass::Array, "Strings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTrackLabels, Strings), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Strings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTrackLabels",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneTrackLabels),
		alignof(FMovieSceneTrackLabels),
		Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackLabels()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackLabels_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackLabels"), sizeof(FMovieSceneTrackLabels), Get_Z_Construct_UScriptStruct_FMovieSceneTrackLabels_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackLabels_CRC() { return 1801752871U; }
class UScriptStruct* FMovieSceneEditorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEditorData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEditorData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEditorData"), sizeof(FMovieSceneEditorData), Get_Z_Construct_UScriptStruct_FMovieSceneEditorData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEditorData(FMovieSceneEditorData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEditorData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEditorData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEditorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEditorData")),new UScriptStruct::TCppStructOps<FMovieSceneEditorData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEditorData;
	struct Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkingRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorkingRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkedFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_MarkedFrames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MarkedFrames_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_WorkEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_WorkStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_ViewEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_ViewStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpansionStates_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ExpansionStates;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExpansionStates_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpansionStates_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Editor only data that needs to be saved between sessions for editing but has no runtime purpose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEditorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewRange = { UE4CodeGen_Private::EPropertyClass::Struct, "ViewRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, ViewRange_DEPRECATED), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkingRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkingRange = { UE4CodeGen_Private::EPropertyClass::Struct, "WorkingRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, WorkingRange_DEPRECATED), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkingRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkingRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The set of user-marked frames for display convenience" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames = { UE4CodeGen_Private::EPropertyClass::Set, "MarkedFrames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, MarkedFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames_ElementProp = { UE4CodeGen_Private::EPropertyClass::Struct, "MarkedFrames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined working range end in which the entire sequence should reside." },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkEnd = { UE4CodeGen_Private::EPropertyClass::Double, "WorkEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, WorkEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkEnd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined working range start in which the entire sequence should reside." },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkStart = { UE4CodeGen_Private::EPropertyClass::Double, "WorkStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, WorkStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkStart_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The last view-range end that the user was observing" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewEnd = { UE4CodeGen_Private::EPropertyClass::Double, "ViewEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, ViewEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewEnd_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The last view-range start that the user was observing" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewStart = { UE4CodeGen_Private::EPropertyClass::Double, "ViewStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, ViewStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewStart_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Map of node path -> expansion state." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates = { UE4CodeGen_Private::EPropertyClass::Map, "ExpansionStates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEditorData, ExpansionStates), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "ExpansionStates_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpansionStates", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneExpansionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkingRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEditorData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneEditorData),
		alignof(FMovieSceneEditorData),
		Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEditorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEditorData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEditorData"), sizeof(FMovieSceneEditorData), Get_Z_Construct_UScriptStruct_FMovieSceneEditorData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEditorData_CRC() { return 3351146955U; }
class UScriptStruct* FMovieSceneTimecodeSource::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimecodeSource, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTimecodeSource"), sizeof(FMovieSceneTimecodeSource), Get_Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTimecodeSource(FMovieSceneTimecodeSource::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTimecodeSource"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTimecodeSource
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTimecodeSource()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTimecodeSource")),new UScriptStruct::TCppStructOps<FMovieSceneTimecodeSource>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTimecodeSource;
	struct Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timecode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timecode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTimecodeSource>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::NewProp_DeltaFrame_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The delta from the original placement of this target" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::NewProp_DeltaFrame = { UE4CodeGen_Private::EPropertyClass::Struct, "DeltaFrame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTimecodeSource, DeltaFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::NewProp_DeltaFrame_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::NewProp_DeltaFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::NewProp_Timecode_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The global timecode at which this target is based (ie. the timecode at the beginning of the movie scene section when it was recorded)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::NewProp_Timecode = { UE4CodeGen_Private::EPropertyClass::Struct, "Timecode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTimecodeSource, Timecode), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::NewProp_Timecode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::NewProp_Timecode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::NewProp_DeltaFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::NewProp_Timecode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTimecodeSource",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneTimecodeSource),
		alignof(FMovieSceneTimecodeSource),
		Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimecodeSource()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTimecodeSource"), sizeof(FMovieSceneTimecodeSource), Get_Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_CRC() { return 2127265039U; }
class UScriptStruct* FMovieSceneExpansionState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneExpansionState_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneExpansionState, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneExpansionState"), sizeof(FMovieSceneExpansionState), Get_Z_Construct_UScriptStruct_FMovieSceneExpansionState_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneExpansionState(FMovieSceneExpansionState::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneExpansionState"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneExpansionState
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneExpansionState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneExpansionState")),new UScriptStruct::TCppStructOps<FMovieSceneExpansionState>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneExpansionState;
	struct Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExpanded_MetaData[];
#endif
		static void NewProp_bExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExpanded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "@todo: remove this type when support for intrinsics on TMap values is added?" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneExpansionState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded_SetBit(void* Obj)
	{
		((FMovieSceneExpansionState*)Obj)->bExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded = { UE4CodeGen_Private::EPropertyClass::Bool, "bExpanded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneExpansionState), &Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneExpansionState",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneExpansionState),
		alignof(FMovieSceneExpansionState),
		Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneExpansionState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneExpansionState_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneExpansionState"), sizeof(FMovieSceneExpansionState), Get_Z_Construct_UScriptStruct_FMovieSceneExpansionState_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneExpansionState_CRC() { return 3631508223U; }
	void UMovieScene::StaticRegisterNativesUMovieScene()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene_NoRegister()
	{
		return UMovieScene::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedFrameInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixedFrameInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceFixedFrameIntervalPlayback_MetaData[];
#endif
		static void NewProp_bForceFixedFrameIntervalPlayback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceFixedFrameIntervalPlayback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootFolders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RootFolders;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootFolders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectsToLabels_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ObjectsToLabels;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectsToLabels_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectsToLabels_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectsToDisplayNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ObjectsToDisplayNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ObjectsToDisplayNames_Key_KeyProp;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ObjectsToDisplayNames_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaybackRangeLocked_MetaData[];
#endif
		static void NewProp_bPlaybackRangeLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaybackRangeLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReadOnly_MetaData[];
#endif
		static void NewProp_bReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReadOnly;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClockSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ClockSource;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClockSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EvaluationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EvaluationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaybackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraCutTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraCutTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MasterTracks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterTracks_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MasterTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBindings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectBindings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBindings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Possessables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Possessables;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Possessables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawnables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spawnables;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spawnables_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimecodeSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimecodeSource;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieScene.h" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Implements a movie scene asset." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_FixedFrameInterval_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_FixedFrameInterval = { UE4CodeGen_Private::EPropertyClass::Float, "FixedFrameInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, FixedFrameInterval_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_FixedFrameInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_FixedFrameInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	void Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback_SetBit(void* Obj)
	{
		((UMovieScene*)Obj)->bForceFixedFrameIntervalPlayback_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceFixedFrameIntervalPlayback", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000820000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieScene), &Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_EndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_EndTime = { UE4CodeGen_Private::EPropertyClass::Float, "EndTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, EndTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_EndTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, StartTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_StartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_OutTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_OutTime = { UE4CodeGen_Private::EPropertyClass::Float, "OutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, OutTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_OutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_OutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_InTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_InTime = { UE4CodeGen_Private::EPropertyClass::Float, "InTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, InTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_InTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_InTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The root folders for this movie scene." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders = { UE4CodeGen_Private::EPropertyClass::Array, "RootFolders", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008800000008, 1, nullptr, STRUCT_OFFSET(UMovieScene, RootFolders), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "RootFolders", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_EditorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Editor only data that needs to be saved between sessions for editing but has no runtime purpose" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_EditorData = { UE4CodeGen_Private::EPropertyClass::Struct, "EditorData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, EditorData), Z_Construct_UScriptStruct_FMovieSceneEditorData, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_EditorData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_EditorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Maps object GUIDs to user defined labels." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels = { UE4CodeGen_Private::EPropertyClass::Map, "ObjectsToLabels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, ObjectsToLabels), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "ObjectsToLabels_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectsToLabels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneTrackLabels, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Maps object GUIDs to user defined display names." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames = { UE4CodeGen_Private::EPropertyClass::Map, "ObjectsToDisplayNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, ObjectsToDisplayNames), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "ObjectsToDisplayNames_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_ValueProp = { UE4CodeGen_Private::EPropertyClass::Text, "ObjectsToDisplayNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined playback range is locked." },
	};
#endif
	void Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked_SetBit(void* Obj)
	{
		((UMovieScene*)Obj)->bPlaybackRangeLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlaybackRangeLocked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieScene), &Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Indicates whether this movie scene is read only" },
	};
#endif
	void Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly_SetBit(void* Obj)
	{
		((UMovieScene*)Obj)->bReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieScene), &Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource = { UE4CodeGen_Private::EPropertyClass::Enum, "ClockSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, ClockSource), Z_Construct_UEnum_MovieScene_EUpdateClockSource, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The type of evaluation to use when playing back this sequence" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType = { UE4CodeGen_Private::EPropertyClass::Enum, "EvaluationType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, EvaluationType), Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_DisplayRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The rate at which we should interact with this moviescene data on UI, and to movie scene players. Also defines the frame locked frame rate." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_DisplayRate = { UE4CodeGen_Private::EPropertyClass::Struct, "DisplayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, DisplayRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_DisplayRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_DisplayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_TickResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The resolution at which all frame numbers within this movie-scene data are stored" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_TickResolution = { UE4CodeGen_Private::EPropertyClass::Struct, "TickResolution", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, TickResolution), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_TickResolution_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_TickResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_PlaybackRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined playback range for this movie scene. Must be a finite range. Relative to this movie-scene's 0-time origin." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_PlaybackRange = { UE4CodeGen_Private::EPropertyClass::Struct, "PlaybackRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, PlaybackRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_PlaybackRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_PlaybackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_SelectionRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined selection range." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_SelectionRange = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectionRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, SelectionRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_SelectionRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_SelectionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_CameraCutTrack_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The camera cut track is a specialized track for switching between cameras on a cinematic" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_CameraCutTrack = { UE4CodeGen_Private::EPropertyClass::Object, "CameraCutTrack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0042000000080008, 1, nullptr, STRUCT_OFFSET(UMovieScene, CameraCutTrack), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_CameraCutTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_CameraCutTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Master tracks which are not bound to spawned or possessed objects" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks = { UE4CodeGen_Private::EPropertyClass::Array, "MasterTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UMovieScene, MasterTracks), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Master tracks which are not bound to spawned or possessed objects" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MasterTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Tracks bound to possessed or spawned objects" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectBindings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, ObjectBindings), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectBindings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBinding, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Typed slots for already-spawned objects that we are able to control with this MovieScene" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables = { UE4CodeGen_Private::EPropertyClass::Array, "Possessables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, Possessables), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Possessables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieScenePossessable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Data-only blueprints for all of the objects that we we're able to spawn.\nThese describe objects and actors that we may instantiate at runtime,\nor create proxy objects for previewing in the editor." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables = { UE4CodeGen_Private::EPropertyClass::Array, "Spawnables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, Spawnables), METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Spawnables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneSpawnable, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene_Statics::NewProp_TimecodeSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The timecode at which this movie scene section is based (ie. when it was recorded)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_TimecodeSource = { UE4CodeGen_Private::EPropertyClass::Struct, "TimecodeSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UMovieScene, TimecodeSource), Z_Construct_UScriptStruct_FMovieSceneTimecodeSource, METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::NewProp_TimecodeSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::NewProp_TimecodeSource_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_FixedFrameInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_OutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_InTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_EditorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_DisplayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_TickResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_PlaybackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_SelectionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_CameraCutTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_TimecodeSource,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene_Statics::ClassParams = {
		&UMovieScene::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMovieScene_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScene_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScene, 4012696858);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene(Z_Construct_UClass_UMovieScene, &UMovieScene::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieScene"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieScene)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
