// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequence() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObject();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
// End Cross Module References
	void ULevelSequence::StaticRegisterNativesULevelSequence()
	{
	}
	UClass* Z_Construct_UClass_ULevelSequence_NoRegister()
	{
		return ULevelSequence::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PossessedObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PossessedObjects;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PossessedObjects_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PossessedObjects_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BindingReferences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectReferences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DirectorClass;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectorBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirectorBlueprint;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequence.h" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Movie scene animation for Actors." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Deprecated property housing old possessed object bindings" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects = { UE4CodeGen_Private::EPropertyClass::Map, "PossessedObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080020000000, 1, nullptr, STRUCT_OFFSET(ULevelSequence, PossessedObjects_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "PossessedObjects_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "PossessedObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000020000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FLevelSequenceObject, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "References to bound objects." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences = { UE4CodeGen_Private::EPropertyClass::Struct, "BindingReferences", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ULevelSequence, BindingReferences), Z_Construct_UScriptStruct_FLevelSequenceBindingReferences, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Legacy object references - should be read-only. Not deprecated because they need to still be saved" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences = { UE4CodeGen_Private::EPropertyClass::Struct, "ObjectReferences", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(ULevelSequence, ObjectReferences), Z_Construct_UScriptStruct_FLevelSequenceObjectReferenceMap, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "The class that is used to spawn this level sequence's director instance.\nDirector instances are allocated on-demand one per sequence during evaluation and are used by event tracks for triggering events." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass = { UE4CodeGen_Private::EPropertyClass::Class, "DirectorClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULevelSequence, DirectorClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "A pointer to the director blueprint that generates this sequence's DirectorClass." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint = { UE4CodeGen_Private::EPropertyClass::Object, "DirectorBlueprint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ULevelSequence, DirectorBlueprint), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequence.h" },
		{ "ToolTip", "Pointer to the movie scene that controls this animation." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene = { UE4CodeGen_Private::EPropertyClass::Object, "MovieScene", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(ULevelSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_PossessedObjects_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_BindingReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_ObjectReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorClass,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_DirectorBlueprint,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequence_Statics::NewProp_MovieScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequence_Statics::ClassParams = {
		&ULevelSequence::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A4u,
		nullptr, 0,
		Z_Construct_UClass_ULevelSequence_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequence_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequence, 3171598835);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequence(Z_Construct_UClass_ULevelSequence, &ULevelSequence::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
