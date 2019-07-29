// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Channels/MovieSceneByteChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneByteChannel() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
// End Cross Module References
class UScriptStruct* FMovieSceneByteChannel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneByteChannel_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneByteChannel, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneByteChannel"), sizeof(FMovieSceneByteChannel), Get_Z_Construct_UScriptStruct_FMovieSceneByteChannel_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneByteChannel(FMovieSceneByteChannel::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneByteChannel"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneByteChannel
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneByteChannel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneByteChannel")),new UScriptStruct::TCppStructOps<FMovieSceneByteChannel>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneByteChannel;
	struct Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultValue_MetaData[];
#endif
		static void NewProp_bHasDefaultValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Times_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneByteChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneByteChannel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneByteChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Enum = { UE4CodeGen_Private::EPropertyClass::Object, "Enum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneByteChannel, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Enum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Enum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneByteChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Values = { UE4CodeGen_Private::EPropertyClass::Array, "Values", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneByteChannel, Values), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Values_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Values_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Values", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_bHasDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneByteChannel.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_bHasDefaultValue_SetBit(void* Obj)
	{
		((FMovieSceneByteChannel*)Obj)->bHasDefaultValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_bHasDefaultValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasDefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneByteChannel), &Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_bHasDefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_bHasDefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_bHasDefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneByteChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneByteChannel, DefaultValue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_DefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Times_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneByteChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Times = { UE4CodeGen_Private::EPropertyClass::Array, "Times", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneByteChannel, Times), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Times_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Times_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Times_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Times", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Enum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_bHasDefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Times,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::NewProp_Times_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneByteChannel",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMovieSceneByteChannel),
		alignof(FMovieSceneByteChannel),
		Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneByteChannel_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneByteChannel"), sizeof(FMovieSceneByteChannel), Get_Z_Construct_UScriptStruct_FMovieSceneByteChannel_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneByteChannel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneByteChannel_CRC() { return 3955936488U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
