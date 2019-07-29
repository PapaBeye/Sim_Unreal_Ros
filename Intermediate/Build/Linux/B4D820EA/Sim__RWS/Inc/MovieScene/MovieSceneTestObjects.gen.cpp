// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Private/Tests/MovieSceneTestObjects.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTestObjects() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSequence_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UTestMovieSceneSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
// End Cross Module References
class UScriptStruct* FTestMovieSceneEvalTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate, Z_Construct_UPackage__Script_MovieScene(), TEXT("TestMovieSceneEvalTemplate"), sizeof(FTestMovieSceneEvalTemplate), Get_Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTestMovieSceneEvalTemplate(FTestMovieSceneEvalTemplate::StaticStruct, TEXT("/Script/MovieScene"), TEXT("TestMovieSceneEvalTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFTestMovieSceneEvalTemplate
{
	FScriptStruct_MovieScene_StaticRegisterNativesFTestMovieSceneEvalTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TestMovieSceneEvalTemplate")),new UScriptStruct::TCppStructOps<FTestMovieSceneEvalTemplate>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFTestMovieSceneEvalTemplate;
	struct Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestMovieSceneEvalTemplate>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"TestMovieSceneEvalTemplate",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FTestMovieSceneEvalTemplate),
		alignof(FTestMovieSceneEvalTemplate),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TestMovieSceneEvalTemplate"), sizeof(FTestMovieSceneEvalTemplate), Get_Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTestMovieSceneEvalTemplate_CRC() { return 890707536U; }
	void UTestMovieSceneTrack::StaticRegisterNativesUTestMovieSceneTrack()
	{
	}
	UClass* Z_Construct_UClass_UTestMovieSceneTrack_NoRegister()
	{
		return UTestMovieSceneTrack::StaticClass();
	}
	struct Z_Construct_UClass_UTestMovieSceneTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SectionArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SectionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHighPassFilter_MetaData[];
#endif
		static void NewProp_bHighPassFilter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHighPassFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMovieSceneTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray = { UE4CodeGen_Private::EPropertyClass::Array, "SectionArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UTestMovieSceneTrack, SectionArray), METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SectionArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	void Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_SetBit(void* Obj)
	{
		((UTestMovieSceneTrack*)Obj)->bHighPassFilter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter = { UE4CodeGen_Private::EPropertyClass::Bool, "bHighPassFilter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTestMovieSceneTrack), &Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestMovieSceneTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_SectionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneTrack_Statics::NewProp_bHighPassFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMovieSceneTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneTrack_Statics::ClassParams = {
		&UTestMovieSceneTrack::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A800A0u,
		nullptr, 0,
		Z_Construct_UClass_UTestMovieSceneTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestMovieSceneTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestMovieSceneTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestMovieSceneTrack, 3758372219);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestMovieSceneTrack(Z_Construct_UClass_UTestMovieSceneTrack, &UTestMovieSceneTrack::StaticClass, TEXT("/Script/MovieScene"), TEXT("UTestMovieSceneTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneTrack);
	void UTestMovieSceneSection::StaticRegisterNativesUTestMovieSceneSection()
	{
	}
	UClass* Z_Construct_UClass_UTestMovieSceneSection_NoRegister()
	{
		return UTestMovieSceneSection::StaticClass();
	}
	struct Z_Construct_UClass_UTestMovieSceneSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMovieSceneSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMovieSceneSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneSection_Statics::ClassParams = {
		&UTestMovieSceneSection::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x002800A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestMovieSceneSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestMovieSceneSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestMovieSceneSection, 1608332728);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestMovieSceneSection(Z_Construct_UClass_UTestMovieSceneSection, &UTestMovieSceneSection::StaticClass, TEXT("/Script/MovieScene"), TEXT("UTestMovieSceneSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneSection);
	void UTestMovieSceneSequence::StaticRegisterNativesUTestMovieSceneSequence()
	{
	}
	UClass* Z_Construct_UClass_UTestMovieSceneSequence_NoRegister()
	{
		return UTestMovieSceneSequence::StaticClass();
	}
	struct Z_Construct_UClass_UTestMovieSceneSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestMovieSceneSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneSequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MovieSceneTestObjects.h" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/MovieSceneTestObjects.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene = { UE4CodeGen_Private::EPropertyClass::Object, "MovieScene", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UTestMovieSceneSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestMovieSceneSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestMovieSceneSequence_Statics::NewProp_MovieScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestMovieSceneSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestMovieSceneSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestMovieSceneSequence_Statics::ClassParams = {
		&UTestMovieSceneSequence::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A4u,
		nullptr, 0,
		Z_Construct_UClass_UTestMovieSceneSequence_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSequence_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTestMovieSceneSequence_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTestMovieSceneSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestMovieSceneSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestMovieSceneSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestMovieSceneSequence, 2465163240);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestMovieSceneSequence(Z_Construct_UClass_UTestMovieSceneSequence, &UTestMovieSceneSequence::StaticClass, TEXT("/Script/MovieScene"), TEXT("UTestMovieSceneSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestMovieSceneSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
