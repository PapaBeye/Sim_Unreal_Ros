// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Evaluation/MovieSceneSectionParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSectionParameters() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionParameters();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
// End Cross Module References
class UScriptStruct* FMovieSceneSectionParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionParameters_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSectionParameters, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSectionParameters"), sizeof(FMovieSceneSectionParameters), Get_Z_Construct_UScriptStruct_FMovieSceneSectionParameters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSectionParameters(FMovieSceneSectionParameters::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSectionParameters"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionParameters
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSectionParameters")),new UScriptStruct::TCppStructOps<FMovieSceneSectionParameters>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionParameters;
	struct Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostrollTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostrollTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerollTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrerollTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HierarchicalBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HierarchicalBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSectionParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PostrollTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PostrollTime = { UE4CodeGen_Private::EPropertyClass::Float, "PostrollTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSectionParameters, PostrollTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PostrollTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PostrollTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PrerollTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PrerollTime = { UE4CodeGen_Private::EPropertyClass::Float, "PrerollTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSectionParameters, PrerollTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PrerollTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PrerollTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartOffset = { UE4CodeGen_Private::EPropertyClass::Float, "StartOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneSectionParameters, StartOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_HierarchicalBias_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Hierachical bias. Higher bias will take precedence." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_HierarchicalBias = { UE4CodeGen_Private::EPropertyClass::Int, "HierarchicalBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneSectionParameters, HierarchicalBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_HierarchicalBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_HierarchicalBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_TimeScale_MetaData[] = {
		{ "Category", "Timing" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Playback time scaling factor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_TimeScale = { UE4CodeGen_Private::EPropertyClass::Float, "TimeScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneSectionParameters, TimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_TimeScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Clipping" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSectionParameters.h" },
		{ "ToolTip", "Number of frames to skip at the beginning of the sub-sequence." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartFrameOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "StartFrameOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneSectionParameters, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartFrameOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartFrameOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PostrollTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_PrerollTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_HierarchicalBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::NewProp_StartFrameOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSectionParameters",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneSectionParameters),
		alignof(FMovieSceneSectionParameters),
		Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionParameters_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSectionParameters"), sizeof(FMovieSceneSectionParameters), Get_Z_Construct_UScriptStruct_FMovieSceneSectionParameters_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSectionParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionParameters_CRC() { return 1040749187U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
