// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieScene3DConstraintSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DConstraintSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMovieScene3DConstraintSection::StaticRegisterNativesUMovieScene3DConstraintSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene3DConstraintSection_NoRegister()
	{
		return UMovieScene3DConstraintSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DConstraintSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintBindingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintBindingID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieScene3DConstraintSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "Base class for 3D constraint section" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "The constraint binding that this movie Constraint uses" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstraintBindingID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMovieScene3DConstraintSection, ConstraintBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DConstraintSection.h" },
		{ "ToolTip", "The possessable guid that this constraint uses" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstraintId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080020000000, 1, nullptr, STRUCT_OFFSET(UMovieScene3DConstraintSection, ConstraintId_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintBindingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::NewProp_ConstraintId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DConstraintSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::ClassParams = {
		&UMovieScene3DConstraintSection::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x002800A0u,
		nullptr, 0,
		Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DConstraintSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieScene3DConstraintSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieScene3DConstraintSection, 1733131025);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene3DConstraintSection(Z_Construct_UClass_UMovieScene3DConstraintSection, &UMovieScene3DConstraintSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScene3DConstraintSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DConstraintSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
