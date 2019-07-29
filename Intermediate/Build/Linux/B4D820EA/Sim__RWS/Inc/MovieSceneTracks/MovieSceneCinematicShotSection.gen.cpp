// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneCinematicShotSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCinematicShotSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneCinematicShotSection::StaticRegisterNativesUMovieSceneCinematicShotSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection_NoRegister()
	{
		return UMovieSceneCinematicShotSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailReferenceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThumbnailReferenceOffset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShotDisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSubSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneCinematicShotSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ToolTip", "Implements a cinematic shot section." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ToolTip", "The shot's reference frame offset for single thumbnail rendering" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ThumbnailReferenceOffset = { UE4CodeGen_Private::EPropertyClass::Float, "ThumbnailReferenceOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCinematicShotSection, ThumbnailReferenceOffset), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ThumbnailReferenceOffset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ToolTip", "The Shot's display name" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Text, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCinematicShotSection, DisplayName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ShotDisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCinematicShotSection.h" },
		{ "ToolTip", "The Shot's display name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ShotDisplayName = { UE4CodeGen_Private::EPropertyClass::Str, "ShotDisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCinematicShotSection, ShotDisplayName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ShotDisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ShotDisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ThumbnailReferenceOffset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::NewProp_ShotDisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCinematicShotSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::ClassParams = {
		&UMovieSceneCinematicShotSection::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x003000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCinematicShotSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCinematicShotSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCinematicShotSection, 3181041639);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCinematicShotSection(Z_Construct_UClass_UMovieSceneCinematicShotSection, &UMovieSceneCinematicShotSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneCinematicShotSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCinematicShotSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
