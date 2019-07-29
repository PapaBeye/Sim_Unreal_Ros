// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFloatChannel() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentData();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode();
// End Cross Module References
class UScriptStruct* FMovieSceneFloatChannel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannel_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatChannel, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneFloatChannel"), sizeof(FMovieSceneFloatChannel), Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannel_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneFloatChannel(FMovieSceneFloatChannel::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneFloatChannel"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneFloatChannel
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneFloatChannel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneFloatChannel")),new UScriptStruct::TCppStructOps<FMovieSceneFloatChannel>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneFloatChannel;
	struct Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TickResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyHandles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyHandles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultValue_MetaData[];
#endif
		static void NewProp_bHasDefaultValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostInfinityExtrap_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PostInfinityExtrap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreInfinityExtrap_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreInfinityExtrap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatChannel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_TickResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_TickResolution = { UE4CodeGen_Private::EPropertyClass::Struct, "TickResolution", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannel, TickResolution), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_TickResolution_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_TickResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_KeyHandles_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
		{ "ToolTip", "This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_KeyHandles = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyHandles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannel, KeyHandles), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_KeyHandles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_KeyHandles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bHasDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bHasDefaultValue_SetBit(void* Obj)
	{
		((FMovieSceneFloatChannel*)Obj)->bHasDefaultValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bHasDefaultValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasDefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneFloatChannel), &Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bHasDefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bHasDefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bHasDefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_DefaultValue = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannel, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_DefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Values = { UE4CodeGen_Private::EPropertyClass::Array, "Values", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannel, Values), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Values_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Values_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Values", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneFloatValue, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Times_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Times = { UE4CodeGen_Private::EPropertyClass::Array, "Times", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannel, Times), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Times_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Times_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Times_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Times", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PostInfinityExtrap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
		{ "ToolTip", "Post-infinity extrapolation state" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PostInfinityExtrap = { UE4CodeGen_Private::EPropertyClass::Byte, "PostInfinityExtrap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannel, PostInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PostInfinityExtrap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PostInfinityExtrap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PreInfinityExtrap_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
		{ "ToolTip", "Pre-infinity extrapolation state" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PreInfinityExtrap = { UE4CodeGen_Private::EPropertyClass::Byte, "PreInfinityExtrap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannel, PreInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PreInfinityExtrap_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PreInfinityExtrap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_TickResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_KeyHandles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bHasDefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Times,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Times_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PostInfinityExtrap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PreInfinityExtrap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneFloatChannel",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMovieSceneFloatChannel),
		alignof(FMovieSceneFloatChannel),
		Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannel_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneFloatChannel"), sizeof(FMovieSceneFloatChannel), Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannel_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatChannel_CRC() { return 4243502569U; }
class UScriptStruct* FMovieSceneFloatValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatValue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatValue, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneFloatValue"), sizeof(FMovieSceneFloatValue), Get_Z_Construct_UScriptStruct_FMovieSceneFloatValue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneFloatValue(FMovieSceneFloatValue::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneFloatValue"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneFloatValue
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneFloatValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneFloatValue")),new UScriptStruct::TCppStructOps<FMovieSceneFloatValue>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneFloatValue;
	struct Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TangentMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Tangent_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Tangent = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatValue, Tangent), Z_Construct_UScriptStruct_FMovieSceneTangentData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Tangent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Tangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_TangentMode_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_TangentMode = { UE4CodeGen_Private::EPropertyClass::Byte, "TangentMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatValue, TangentMode), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_TangentMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_TangentMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_InterpMode_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_InterpMode = { UE4CodeGen_Private::EPropertyClass::Byte, "InterpMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatValue, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_InterpMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_InterpMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneFloatValue, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Tangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_TangentMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_InterpMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneFloatValue",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneFloatValue),
		alignof(FMovieSceneFloatValue),
		Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatValue_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneFloatValue"), sizeof(FMovieSceneFloatValue), Get_Z_Construct_UScriptStruct_FMovieSceneFloatValue_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneFloatValue_CRC() { return 943023893U; }
class UScriptStruct* FMovieSceneTangentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTangentData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTangentData, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTangentData"), sizeof(FMovieSceneTangentData), Get_Z_Construct_UScriptStruct_FMovieSceneTangentData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneTangentData(FMovieSceneTangentData::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneTangentData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTangentData
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTangentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneTangentData")),new UScriptStruct::TCppStructOps<FMovieSceneTangentData>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneTangentData;
	struct Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeaveTangentWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArriveTangentWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentWeightMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TangentWeightMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaveTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeaveTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArriveTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArriveTangent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTangentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangentWeight_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
		{ "ToolTip", "If RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the right tangent" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangentWeight = { UE4CodeGen_Private::EPropertyClass::Float, "LeaveTangentWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneTangentData, LeaveTangentWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangentWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangentWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangentWeight_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
		{ "ToolTip", "If RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the left tangent" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangentWeight = { UE4CodeGen_Private::EPropertyClass::Float, "ArriveTangentWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneTangentData, ArriveTangentWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangentWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangentWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_TangentWeightMode_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
		{ "ToolTip", "If RCIM_Cubic, the tangent weight mode" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_TangentWeightMode = { UE4CodeGen_Private::EPropertyClass::Byte, "TangentWeightMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneTangentData, TangentWeightMode), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_TangentWeightMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_TangentWeightMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangent_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
		{ "ToolTip", "If RCIM_Cubic, the leaving tangent at this key" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangent = { UE4CodeGen_Private::EPropertyClass::Float, "LeaveTangent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneTangentData, LeaveTangent), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangent_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
		{ "ToolTip", "If RCIM_Cubic, the arriving tangent at this key" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangent = { UE4CodeGen_Private::EPropertyClass::Float, "ArriveTangent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneTangentData, ArriveTangent), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangentWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangentWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_TangentWeightMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_LeaveTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::NewProp_ArriveTangent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTangentData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneTangentData),
		alignof(FMovieSceneTangentData),
		Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTangentData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneTangentData"), sizeof(FMovieSceneTangentData), Get_Z_Construct_UScriptStruct_FMovieSceneTangentData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneTangentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneTangentData_CRC() { return 1233852054U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
