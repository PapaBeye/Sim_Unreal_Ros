// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieSceneColorTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneColorTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
// End Cross Module References
class UScriptStruct* FMovieSceneColorSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneColorSectionTemplate"), sizeof(FMovieSceneColorSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneColorSectionTemplate(FMovieSceneColorSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneColorSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneColorSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneColorSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneColorSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneColorSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneColorSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Curves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneColorTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneColorSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_BlendType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneColorTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_BlendType = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneColorSectionTemplate, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_BlendType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_BlendType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_BlendType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_Curves_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneColorTemplate.h" },
		{ "ToolTip", "Curve data as RGBA" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_Curves = { UE4CodeGen_Private::EPropertyClass::Struct, "Curves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, CPP_ARRAY_DIM(Curves, FMovieSceneColorSectionTemplate), nullptr, STRUCT_OFFSET(FMovieSceneColorSectionTemplate, Curves), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_Curves_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_Curves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_BlendType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_BlendType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_Curves,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneColorSectionTemplate",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FMovieSceneColorSectionTemplate),
		alignof(FMovieSceneColorSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneColorSectionTemplate"), sizeof(FMovieSceneColorSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_CRC() { return 182740665U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
