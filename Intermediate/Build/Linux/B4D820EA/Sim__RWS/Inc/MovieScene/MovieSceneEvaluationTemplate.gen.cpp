// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackFieldData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationField();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSectionData();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
// End Cross Module References
class UScriptStruct* FMovieSceneEvaluationTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationTemplate"), sizeof(FMovieSceneEvaluationTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationTemplate(FMovieSceneEvaluationTemplate::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTemplate
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTemplate>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSectionFieldData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubSectionFieldData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackFieldData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackFieldData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateLedger_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemplateLedger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateSerialNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemplateSerialNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceSignature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SequenceSignature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hierarchy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluationField_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvaluationField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Tracks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tracks_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tracks_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Template that is used for efficient runtime evaluation of a movie scene sequence. Potentially serialized into the asset." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SubSectionFieldData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SubSectionFieldData = { UE4CodeGen_Private::EPropertyClass::Struct, "SubSectionFieldData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, SubSectionFieldData), Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SubSectionFieldData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SubSectionFieldData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TrackFieldData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TrackFieldData = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackFieldData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, TrackFieldData), Z_Construct_UScriptStruct_FMovieSceneTrackFieldData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TrackFieldData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TrackFieldData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateLedger_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateLedger = { UE4CodeGen_Private::EPropertyClass::Struct, "TemplateLedger", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, TemplateLedger), Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateLedger_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateLedger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateSerialNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Serial number that is incremented every time this template is re-generated through FMovieSceneEvaluationTemplateGenerator" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateSerialNumber = { UE4CodeGen_Private::EPropertyClass::Struct, "TemplateSerialNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, TemplateSerialNumber), Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateSerialNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateSerialNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SequenceSignature_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SequenceSignature = { UE4CodeGen_Private::EPropertyClass::Struct, "SequenceSignature", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, SequenceSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SequenceSignature_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SequenceSignature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Hierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Map of all sequences found in this template (recursively)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Hierarchy = { UE4CodeGen_Private::EPropertyClass::Struct, "Hierarchy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, Hierarchy), Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Hierarchy_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Hierarchy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_EvaluationField_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Evaluation field for efficient runtime evaluation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_EvaluationField = { UE4CodeGen_Private::EPropertyClass::Struct, "EvaluationField", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, EvaluationField), Z_Construct_UScriptStruct_FMovieSceneEvaluationField, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_EvaluationField_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_EvaluationField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Map of evaluation tracks from identifier to track" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks = { UE4CodeGen_Private::EPropertyClass::Map, "Tracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplate, Tracks), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Tracks_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "Tracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SubSectionFieldData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TrackFieldData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateLedger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_TemplateSerialNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_SequenceSignature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Hierarchy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_EvaluationField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::NewProp_Tracks_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationTemplate",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FMovieSceneEvaluationTemplate),
		alignof(FMovieSceneEvaluationTemplate),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationTemplate"), sizeof(FMovieSceneEvaluationTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate_CRC() { return 428959929U; }
class UScriptStruct* FMovieSceneEvaluationTemplateSerialNumber::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationTemplateSerialNumber"), sizeof(FMovieSceneEvaluationTemplateSerialNumber), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber(FMovieSceneEvaluationTemplateSerialNumber::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEvaluationTemplateSerialNumber"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTemplateSerialNumber
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTemplateSerialNumber()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEvaluationTemplateSerialNumber")),new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTemplateSerialNumber>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEvaluationTemplateSerialNumber;
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Sereal number used to identify evaluation template state that can only ever increase over its lifetime.\nOnly to be stored internally on FMovieSceneEvaluationTemplate." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationTemplateSerialNumber>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "The internal value of the serial number" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::UInt32, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationTemplateSerialNumber, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationTemplateSerialNumber",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneEvaluationTemplateSerialNumber),
		alignof(FMovieSceneEvaluationTemplateSerialNumber),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEvaluationTemplateSerialNumber"), sizeof(FMovieSceneEvaluationTemplateSerialNumber), Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplateSerialNumber_CRC() { return 2123293340U; }
class UScriptStruct* FMovieSceneSubSectionFieldData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSubSectionFieldData"), sizeof(FMovieSceneSubSectionFieldData), Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSubSectionFieldData(FMovieSceneSubSectionFieldData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSubSectionFieldData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSectionFieldData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSectionFieldData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSubSectionFieldData")),new UScriptStruct::TCppStructOps<FMovieSceneSubSectionFieldData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSectionFieldData;
	struct Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Custom serialized track field data that allows efficient lookup of each sub section contained within this template for a given time" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSubSectionFieldData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSubSectionFieldData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneSubSectionFieldData),
		alignof(FMovieSceneSubSectionFieldData),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSubSectionFieldData"), sizeof(FMovieSceneSubSectionFieldData), Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionFieldData_CRC() { return 720869641U; }
class UScriptStruct* FMovieSceneSubSectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSectionData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSubSectionData"), sizeof(FMovieSceneSubSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSubSectionData(FMovieSceneSubSectionData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSubSectionData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSectionData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSubSectionData")),new UScriptStruct::TCppStructOps<FMovieSceneSubSectionData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSubSectionData;
	struct Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectBindingId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Section;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Data that represents a single sub-section" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSubSectionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Evaluation flags for the section" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags = { UE4CodeGen_Private::EPropertyClass::Enum, "Flags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSectionData, Flags), Z_Construct_UEnum_MovieScene_ESectionEvaluationFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_ObjectBindingId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "The object binding that the sub section belongs to (usually zero)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_ObjectBindingId = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectBindingId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSectionData, ObjectBindingId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_ObjectBindingId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_ObjectBindingId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Section_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "The sub section itself" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Section = { UE4CodeGen_Private::EPropertyClass::WeakObject, "Section", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000080008, 1, nullptr, STRUCT_OFFSET(FMovieSceneSubSectionData, Section), Z_Construct_UClass_UMovieSceneSubSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Section_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Section_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Flags_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_ObjectBindingId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::NewProp_Section,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSubSectionData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FMovieSceneSubSectionData),
		alignof(FMovieSceneSubSectionData),
		Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSubSectionData"), sizeof(FMovieSceneSubSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSubSectionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSubSectionData_CRC() { return 1758280827U; }
class UScriptStruct* FMovieSceneTrackFieldData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackFieldData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackFieldData"), sizeof(FMovieSceneTrackFieldData), Get_Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTrackFieldData(FMovieSceneTrackFieldData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTrackFieldData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackFieldData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackFieldData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTrackFieldData")),new UScriptStruct::TCppStructOps<FMovieSceneTrackFieldData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTrackFieldData;
	struct Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Custom serialized track field data that allows efficient lookup of each track contained within this template for a given time" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackFieldData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTrackFieldData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneTrackFieldData),
		alignof(FMovieSceneTrackFieldData),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackFieldData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTrackFieldData"), sizeof(FMovieSceneTrackFieldData), Get_Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTrackFieldData_CRC() { return 1811725099U; }
class UScriptStruct* FMovieSceneTemplateGenerationLedger::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTemplateGenerationLedger"), sizeof(FMovieSceneTemplateGenerationLedger), Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTemplateGenerationLedger(FMovieSceneTemplateGenerationLedger::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTemplateGenerationLedger"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTemplateGenerationLedger
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTemplateGenerationLedger()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTemplateGenerationLedger")),new UScriptStruct::TCppStructOps<FMovieSceneTemplateGenerationLedger>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTemplateGenerationLedger;
	struct Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSectionRanges_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SubSectionRanges;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubSectionRanges_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubSectionRanges_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackSignatureToTrackIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TrackSignatureToTrackIdentifier;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackSignatureToTrackIdentifier_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrackSignatureToTrackIdentifier_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTrackIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastTrackIdentifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTemplateGenerationLedger>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Map of sub section ranges that exist in a template" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges = { UE4CodeGen_Private::EPropertyClass::Map, "SubSectionRanges", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTemplateGenerationLedger, SubSectionRanges), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Struct, "SubSectionRanges_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "SubSectionRanges", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
		{ "ToolTip", "Map of track signature to array of track identifiers that it created" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier = { UE4CodeGen_Private::EPropertyClass::Map, "TrackSignatureToTrackIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTemplateGenerationLedger, TrackSignatureToTrackIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackSignatureToTrackIdentifier_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "TrackSignatureToTrackIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_LastTrackIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_LastTrackIdentifier = { UE4CodeGen_Private::EPropertyClass::Struct, "LastTrackIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneTemplateGenerationLedger, LastTrackIdentifier), Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_LastTrackIdentifier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_LastTrackIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_SubSectionRanges_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_TrackSignatureToTrackIdentifier_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::NewProp_LastTrackIdentifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTemplateGenerationLedger",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneTemplateGenerationLedger),
		alignof(FMovieSceneTemplateGenerationLedger),
		Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTemplateGenerationLedger"), sizeof(FMovieSceneTemplateGenerationLedger), Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger_CRC() { return 3533009510U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
