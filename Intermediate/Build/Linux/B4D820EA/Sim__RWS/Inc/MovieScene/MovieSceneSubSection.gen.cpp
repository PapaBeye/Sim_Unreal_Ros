// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Sections/MovieSceneSubSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSubSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionParameters();
// End Cross Module References
	void UMovieSceneSubSection::StaticRegisterNativesUMovieSceneSubSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSubSection_NoRegister()
	{
		return UMovieSceneSubSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSubSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPathToRecordTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPathToRecordTo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSequenceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetSequenceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_ActorToRecord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerollTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PrerollTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSubSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneSubSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Implements a section in sub-sequence tracks." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetPathToRecordTo_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Target path of sequence to record to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetPathToRecordTo = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetPathToRecordTo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, TargetPathToRecordTo), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetPathToRecordTo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetPathToRecordTo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetSequenceName_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Target name of sequence to try to record to (will record automatically to another if this already exists)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetSequenceName = { UE4CodeGen_Private::EPropertyClass::Str, "TargetSequenceName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, TargetSequenceName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetSequenceName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetSequenceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_ActorToRecord_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Target actor to record" },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_ActorToRecord = { UE4CodeGen_Private::EPropertyClass::LazyObject, "ActorToRecord", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, ActorToRecord), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_ActorToRecord_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_ActorToRecord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ToolTip", "Movie scene being played by this section.\n\n@todo Sequencer: Should this be lazy loaded?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence = { UE4CodeGen_Private::EPropertyClass::Object, "SubSequence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, SubSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime = { UE4CodeGen_Private::EPropertyClass::Float, "PrerollTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, PrerollTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale = { UE4CodeGen_Private::EPropertyClass::Float, "TimeScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, TimeScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset = { UE4CodeGen_Private::EPropertyClass::Float, "StartOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, StartOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSubSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters = { UE4CodeGen_Private::EPropertyClass::Struct, "Parameters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSubSection, Parameters), Z_Construct_UScriptStruct_FMovieSceneSectionParameters, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSubSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetPathToRecordTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TargetSequenceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_ActorToRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_SubSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_PrerollTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_StartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSubSection_Statics::NewProp_Parameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSubSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSubSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSubSection_Statics::ClassParams = {
		&UMovieSceneSubSection::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x003000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMovieSceneSubSection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSubSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSubSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSubSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSubSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSubSection, 3518974870);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSubSection(Z_Construct_UClass_UMovieSceneSubSection, &UMovieSceneSubSection::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSubSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSubSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
