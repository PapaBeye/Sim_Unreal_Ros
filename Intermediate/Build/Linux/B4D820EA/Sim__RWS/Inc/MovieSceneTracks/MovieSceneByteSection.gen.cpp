// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneByteSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneByteSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneByteSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneByteSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
// End Cross Module References
	void UMovieSceneByteSection::StaticRegisterNativesUMovieSceneByteSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneByteSection_NoRegister()
	{
		return UMovieSceneByteSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneByteSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByteCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ByteCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneByteSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneByteSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneByteSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneByteSection.h" },
		{ "ToolTip", "A single byte section." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneByteSection_Statics::NewProp_ByteCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneByteSection.h" },
		{ "ToolTip", "Ordered curve data" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneByteSection_Statics::NewProp_ByteCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "ByteCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneByteSection, ByteCurve), Z_Construct_UScriptStruct_FMovieSceneByteChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneByteSection_Statics::NewProp_ByteCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneByteSection_Statics::NewProp_ByteCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneByteSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneByteSection_Statics::NewProp_ByteCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneByteSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneByteSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneByteSection_Statics::ClassParams = {
		&UMovieSceneByteSection::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x002800A0u,
		nullptr, 0,
		Z_Construct_UClass_UMovieSceneByteSection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneByteSection_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneByteSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneByteSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneByteSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneByteSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneByteSection, 2537502144);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneByteSection(Z_Construct_UClass_UMovieSceneByteSection, &UMovieSceneByteSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneByteSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneByteSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
