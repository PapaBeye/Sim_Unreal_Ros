// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneKeyStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneKeyStruct() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
// End Cross Module References
class UScriptStruct* FMovieSceneKeyTimeStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneKeyTimeStruct"), sizeof(FMovieSceneKeyTimeStruct), Get_Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneKeyTimeStruct(FMovieSceneKeyTimeStruct::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneKeyTimeStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneKeyTimeStruct
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneKeyTimeStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneKeyTimeStruct")),new UScriptStruct::TCppStructOps<FMovieSceneKeyTimeStruct>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneKeyTimeStruct;
	struct Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneKeyStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneKeyTimeStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/MovieSceneKeyStruct.h" },
		{ "Units", "s" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Struct, "Time", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneKeyTimeStruct, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
		&NewStructOps,
		"MovieSceneKeyTimeStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneKeyTimeStruct),
		alignof(FMovieSceneKeyTimeStruct),
		Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneKeyTimeStruct"), sizeof(FMovieSceneKeyTimeStruct), Get_Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneKeyTimeStruct_CRC() { return 4290957707U; }
class UScriptStruct* FMovieSceneKeyStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneKeyStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneKeyStruct, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneKeyStruct"), sizeof(FMovieSceneKeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneKeyStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneKeyStruct(FMovieSceneKeyStruct::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneKeyStruct"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneKeyStruct
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneKeyStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneKeyStruct")),new UScriptStruct::TCppStructOps<FMovieSceneKeyStruct>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneKeyStruct;
	struct Z_Construct_UScriptStruct_FMovieSceneKeyStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneKeyStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneKeyStruct.h" },
		{ "ToolTip", "Base class for movie scene section key structs that need to manually\nhave their changes propagated to key values." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneKeyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneKeyStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneKeyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneKeyStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneKeyStruct),
		alignof(FMovieSceneKeyStruct),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneKeyStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneKeyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneKeyStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneKeyStruct"), sizeof(FMovieSceneKeyStruct), Get_Z_Construct_UScriptStruct_FMovieSceneKeyStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneKeyStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneKeyStruct_CRC() { return 834890131U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
