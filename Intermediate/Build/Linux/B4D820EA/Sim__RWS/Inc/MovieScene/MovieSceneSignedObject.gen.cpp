// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneSignedObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSignedObject() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMovieSceneSignedObject::StaticRegisterNativesUMovieSceneSignedObject()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSignedObject_NoRegister()
	{
		return UMovieSceneSignedObject::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSignedObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Signature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Signature;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSignedObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSignedObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneSignedObject.h" },
		{ "ModuleRelativePath", "Public/MovieSceneSignedObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSignedObject_Statics::NewProp_Signature_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSignedObject.h" },
		{ "ToolTip", "Unique generation signature" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSignedObject_Statics::NewProp_Signature = { UE4CodeGen_Private::EPropertyClass::Struct, "Signature", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSignedObject, Signature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSignedObject_Statics::NewProp_Signature_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSignedObject_Statics::NewProp_Signature_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSignedObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSignedObject_Statics::NewProp_Signature,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSignedObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSignedObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSignedObject_Statics::ClassParams = {
		&UMovieSceneSignedObject::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMovieSceneSignedObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSignedObject_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSignedObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSignedObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSignedObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSignedObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSignedObject, 1955194123);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSignedObject(Z_Construct_UClass_UMovieSceneSignedObject, &UMovieSceneSignedObject::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSignedObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSignedObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
