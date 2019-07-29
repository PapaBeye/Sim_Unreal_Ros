// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneSequence.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequence() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate();
// End Cross Module References
	void UMovieSceneSequence::StaticRegisterNativesUMovieSceneSequence()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister()
	{
		return UMovieSceneSequence::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParentContextsAreSignificant_MetaData[];
#endif
		static void NewProp_bParentContextsAreSignificant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParentContextsAreSignificant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCompletionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultCompletionMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultCompletionMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrecompiledEvaluationTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrecompiledEvaluationTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneSequence.h" },
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Abstract base class for movie scene animations (C++ version)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ToolTip", "true if the result of GetParentObject is significant in object resolution for LocateBoundObjects.\nWhen true, if GetParentObject returns nullptr, the PlaybackContext will be used for LocateBoundObjects, other wise the object's parent will be used\nWhen false, the PlaybackContext will always be used for LocateBoundObjects" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_SetBit(void* Obj)
	{
		((UMovieSceneSequence*)Obj)->bParentContextsAreSignificant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant = { UE4CodeGen_Private::EPropertyClass::Bool, "bParentContextsAreSignificant", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneSequence), &Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
		{ "ToolTip", "The default completion mode for this movie scene when a section's completion mode is set to project default" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode = { UE4CodeGen_Private::EPropertyClass::Enum, "DefaultCompletionMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequence, DefaultCompletionMode), Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_PrecompiledEvaluationTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequence.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_PrecompiledEvaluationTemplate = { UE4CodeGen_Private::EPropertyClass::Struct, "PrecompiledEvaluationTemplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSequence, PrecompiledEvaluationTemplate), Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_PrecompiledEvaluationTemplate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_PrecompiledEvaluationTemplate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_bParentContextsAreSignificant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_DefaultCompletionMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequence_Statics::NewProp_PrecompiledEvaluationTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSequence_Statics::ClassParams = {
		&UMovieSceneSequence::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A4u,
		nullptr, 0,
		Z_Construct_UClass_UMovieSceneSequence_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequence_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSequence, 1668200876);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSequence(Z_Construct_UClass_UMovieSceneSequence, &UMovieSceneSequence::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequence);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSequence)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
