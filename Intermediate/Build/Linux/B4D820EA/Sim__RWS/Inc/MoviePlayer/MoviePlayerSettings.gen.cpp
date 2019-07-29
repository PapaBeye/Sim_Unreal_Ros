// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePlayer/Public/MoviePlayerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePlayerSettings() {}
// Cross Module References
	MOVIEPLAYER_API UClass* Z_Construct_UClass_UMoviePlayerSettings_NoRegister();
	MOVIEPLAYER_API UClass* Z_Construct_UClass_UMoviePlayerSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MoviePlayer();
// End Cross Module References
	void UMoviePlayerSettings::StaticRegisterNativesUMoviePlayerSettings()
	{
	}
	UClass* Z_Construct_UClass_UMoviePlayerSettings_NoRegister()
	{
		return UMoviePlayerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePlayerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartupMovies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StartupMovies;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StartupMovies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMoviesAreSkippable_MetaData[];
#endif
		static void NewProp_bMoviesAreSkippable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMoviesAreSkippable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitForMoviesToComplete_MetaData[];
#endif
		static void NewProp_bWaitForMoviesToComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitForMoviesToComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePlayerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MoviePlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePlayerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoviePlayerSettings.h" },
		{ "ModuleRelativePath", "Public/MoviePlayerSettings.h" },
		{ "ToolTip", "Implements the settings for the Windows target platform." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_StartupMovies_MetaData[] = {
		{ "Category", "Movies" },
		{ "ModuleRelativePath", "Public/MoviePlayerSettings.h" },
		{ "ToolTip", "Movies to play on startup. Note that these must be in your game's Game/Content/Movies directory." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_StartupMovies = { UE4CodeGen_Private::EPropertyClass::Array, "StartupMovies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UMoviePlayerSettings, StartupMovies), METADATA_PARAMS(Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_StartupMovies_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_StartupMovies_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_StartupMovies_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "StartupMovies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bMoviesAreSkippable_MetaData[] = {
		{ "Category", "Movies" },
		{ "ModuleRelativePath", "Public/MoviePlayerSettings.h" },
		{ "ToolTip", "If enabled, Startup movies can be skipped by the user when a mouse button is pressed." },
	};
#endif
	void Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bMoviesAreSkippable_SetBit(void* Obj)
	{
		((UMoviePlayerSettings*)Obj)->bMoviesAreSkippable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bMoviesAreSkippable = { UE4CodeGen_Private::EPropertyClass::Bool, "bMoviesAreSkippable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMoviePlayerSettings), &Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bMoviesAreSkippable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bMoviesAreSkippable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bMoviesAreSkippable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bWaitForMoviesToComplete_MetaData[] = {
		{ "Category", "Movies" },
		{ "ModuleRelativePath", "Public/MoviePlayerSettings.h" },
		{ "ToolTip", "If enabled, The game waits for startup movies to complete even if loading has finished." },
	};
#endif
	void Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bWaitForMoviesToComplete_SetBit(void* Obj)
	{
		((UMoviePlayerSettings*)Obj)->bWaitForMoviesToComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bWaitForMoviesToComplete = { UE4CodeGen_Private::EPropertyClass::Bool, "bWaitForMoviesToComplete", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMoviePlayerSettings), &Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bWaitForMoviesToComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bWaitForMoviesToComplete_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bWaitForMoviesToComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePlayerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_StartupMovies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_StartupMovies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bMoviesAreSkippable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePlayerSettings_Statics::NewProp_bWaitForMoviesToComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePlayerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePlayerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoviePlayerSettings_Statics::ClassParams = {
		&UMoviePlayerSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A6u,
		nullptr, 0,
		Z_Construct_UClass_UMoviePlayerSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMoviePlayerSettings_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePlayerSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMoviePlayerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePlayerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoviePlayerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoviePlayerSettings, 3704608089);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoviePlayerSettings(Z_Construct_UClass_UMoviePlayerSettings, &UMoviePlayerSettings::StaticClass, TEXT("/Script/MoviePlayer"), TEXT("UMoviePlayerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePlayerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
