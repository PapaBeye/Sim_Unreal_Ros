// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieSceneCameraCutTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraCutTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
// End Cross Module References
class UScriptStruct* FMovieSceneCameraCutSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraCutSectionTemplate"), sizeof(FMovieSceneCameraCutSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneCameraCutSectionTemplate(FMovieSceneCameraCutSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneCameraCutSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraCutSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraCutSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneCameraCutSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneCameraCutSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneCameraCutSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasCutTransform_MetaData[];
#endif
		static void NewProp_bHasCutTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasCutTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CutTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBindingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraBindingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraCutTemplate.h" },
		{ "ToolTip", "Camera cut track evaluation template" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraCutSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_bHasCutTransform_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraCutTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_bHasCutTransform_SetBit(void* Obj)
	{
		((FMovieSceneCameraCutSectionTemplate*)Obj)->bHasCutTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_bHasCutTransform = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasCutTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneCameraCutSectionTemplate), &Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_bHasCutTransform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_bHasCutTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_bHasCutTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_CutTransform_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraCutTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_CutTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "CutTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraCutSectionTemplate, CutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_CutTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_CutTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_CameraBindingID_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraCutTemplate.h" },
		{ "ToolTip", "GUID of the camera we should cut to in this sequence" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_CameraBindingID = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraBindingID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneCameraCutSectionTemplate, CameraBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_CameraBindingID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_CameraBindingID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_bHasCutTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_CutTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::NewProp_CameraBindingID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneCameraCutSectionTemplate",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FMovieSceneCameraCutSectionTemplate),
		alignof(FMovieSceneCameraCutSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneCameraCutSectionTemplate"), sizeof(FMovieSceneCameraCutSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneCameraCutSectionTemplate_CRC() { return 2394100687U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
