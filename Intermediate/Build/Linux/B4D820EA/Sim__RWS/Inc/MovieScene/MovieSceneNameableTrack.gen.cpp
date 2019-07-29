// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneNameableTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNameableTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneNameableTrack::StaticRegisterNativesUMovieSceneNameableTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneNameableTrack_NoRegister()
	{
		return UMovieSceneNameableTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNameableTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNameableTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNameableTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneNameableTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneNameableTrack.h" },
		{ "ToolTip", "Base class for movie scene tracks that can be renamed by the user." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Track" },
		{ "ModuleRelativePath", "Public/MovieSceneNameableTrack.h" },
		{ "ToolTip", "The track's human readable display name." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Text, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneNameableTrack, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNameableTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNameableTrack_Statics::NewProp_DisplayName,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNameableTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNameableTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNameableTrack_Statics::ClassParams = {
		&UMovieSceneNameableTrack::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x002800A1u,
		nullptr, 0,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::PropPointers), 0),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNameableTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNameableTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneNameableTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneNameableTrack, 1044294814);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneNameableTrack(Z_Construct_UClass_UMovieSceneNameableTrack, &UMovieSceneNameableTrack::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneNameableTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNameableTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
