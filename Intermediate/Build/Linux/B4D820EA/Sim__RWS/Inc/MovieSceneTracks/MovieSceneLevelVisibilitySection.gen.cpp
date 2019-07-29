// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneLevelVisibilitySection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLevelVisibilitySection() {}
// Cross Module References
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
	static UEnum* ELevelVisibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ELevelVisibility"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELevelVisibility(ELevelVisibility_StaticEnum, TEXT("/Script/MovieSceneTracks"), TEXT("ELevelVisibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility_CRC() { return 1980774193U; }
	UEnum* Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELevelVisibility"), 0, Get_Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELevelVisibility::Visible", (int64)ELevelVisibility::Visible },
				{ "ELevelVisibility::Hidden", (int64)ELevelVisibility::Hidden },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Hidden.ToolTip", "The streamed levels should be hidden." },
				{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
				{ "ToolTip", "Visibility options for the level visibility section." },
				{ "Visible.ToolTip", "The streamed levels should be visible." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELevelVisibility",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ELevelVisibility",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMovieSceneLevelVisibilitySection::StaticRegisterNativesUMovieSceneLevelVisibilitySection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister()
	{
		return UMovieSceneLevelVisibilitySection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneLevelVisibilitySection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
		{ "ToolTip", "A section for use with the movie scene level visibility track, which controls streamed level visibility." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames_MetaData[] = {
		{ "Category", "LevelVisibility" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
		{ "ToolTip", "The short names of the levels who's visibility is controlled by this section." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames = { UE4CodeGen_Private::EPropertyClass::Array, "LevelNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneLevelVisibilitySection, LevelNames), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "LevelNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility_MetaData[] = {
		{ "Category", "LevelVisibility" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneLevelVisibilitySection.h" },
		{ "ToolTip", "Whether or not the levels in this section should be visible or hidden." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility = { UE4CodeGen_Private::EPropertyClass::Enum, "Visibility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneLevelVisibilitySection, Visibility), Z_Construct_UEnum_MovieSceneTracks_ELevelVisibility, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_LevelNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::NewProp_Visibility_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLevelVisibilitySection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::ClassParams = {
		&UMovieSceneLevelVisibilitySection::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x003000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneLevelVisibilitySection, 2388476586);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneLevelVisibilitySection(Z_Construct_UClass_UMovieSceneLevelVisibilitySection, &UMovieSceneLevelVisibilitySection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneLevelVisibilitySection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLevelVisibilitySection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
