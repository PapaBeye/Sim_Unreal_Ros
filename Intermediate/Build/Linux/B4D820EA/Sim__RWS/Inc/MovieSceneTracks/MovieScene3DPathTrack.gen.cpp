// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Tracks/MovieScene3DPathTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DPathTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DPathTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DPathTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScene3DPathTrack::StaticRegisterNativesUMovieScene3DPathTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene3DPathTrack_NoRegister()
	{
		return UMovieScene3DPathTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DPathTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DPathTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScene3DConstraintTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DPathTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/MovieScene3DPathTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScene3DPathTrack.h" },
		{ "ToolTip", "Handles manipulation of path tracks in a movie scene" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DPathTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DPathTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DPathTrack_Statics::ClassParams = {
		&UMovieScene3DPathTrack::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A800A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DPathTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DPathTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScene3DPathTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScene3DPathTrack, 2007212991);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene3DPathTrack(Z_Construct_UClass_UMovieScene3DPathTrack, &UMovieScene3DPathTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScene3DPathTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DPathTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
