// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneEventSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionData();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FEventPayload();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventParameters();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNameCurve();
// End Cross Module References
class UScriptStruct* FMovieSceneEventSectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventSectionData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventSectionData"), sizeof(FMovieSceneEventSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventSectionData(FMovieSceneEventSectionData::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventSectionData"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionData
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventSectionData")),new UScriptStruct::TCppStructOps<FMovieSceneEventSectionData>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionData;
	struct Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyTimes;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KeyTimes_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyValues;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyValues_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Times_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ToolTip", "A curve of events" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventSectionData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes = { UE4CodeGen_Private::EPropertyClass::Array, "KeyTimes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000820000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEventSectionData, KeyTimes_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "KeyTimes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000820000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ToolTip", "Array of values that correspond to each key time" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues = { UE4CodeGen_Private::EPropertyClass::Array, "KeyValues", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEventSectionData, KeyValues), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "KeyValues", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEventPayload, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times = { UE4CodeGen_Private::EPropertyClass::Array, "Times", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEventSectionData, Times), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Times", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneEventSectionData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMovieSceneEventSectionData),
		alignof(FMovieSceneEventSectionData),
		Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventSectionData"), sizeof(FMovieSceneEventSectionData), Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionData_CRC() { return 3503827361U; }
class UScriptStruct* FEventPayload::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FEventPayload_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventPayload, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EventPayload"), sizeof(FEventPayload), Get_Z_Construct_UScriptStruct_FEventPayload_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEventPayload(FEventPayload::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("EventPayload"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFEventPayload
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFEventPayload()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EventPayload")),new UScriptStruct::TCppStructOps<FEventPayload>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFEventPayload;
	struct Z_Construct_UScriptStruct_FEventPayload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventPayload>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The event parameters" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_Parameters = { UE4CodeGen_Private::EPropertyClass::Struct, "Parameters", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FEventPayload, Parameters), Z_Construct_UScriptStruct_FMovieSceneEventParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_Parameters_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_Parameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ToolTip", "The name of the event to trigger" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Name, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEventPayload, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_EventName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventPayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_EventName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"EventPayload",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FEventPayload),
		alignof(FEventPayload),
		Z_Construct_UScriptStruct_FEventPayload_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventPayload_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventPayload_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEventPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventPayload()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEventPayload_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EventPayload"), sizeof(FEventPayload), Get_Z_Construct_UScriptStruct_FEventPayload_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEventPayload_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEventPayload_CRC() { return 1272243064U; }
class UScriptStruct* FMovieSceneEventParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventParameters_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventParameters, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventParameters"), sizeof(FMovieSceneEventParameters), Get_Z_Construct_UScriptStruct_FMovieSceneEventParameters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventParameters(FMovieSceneEventParameters::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventParameters"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventParameters
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventParameters")),new UScriptStruct::TCppStructOps<FMovieSceneEventParameters>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventParameters;
	struct Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventParameters>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneEventParameters",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMovieSceneEventParameters),
		alignof(FMovieSceneEventParameters),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventParameters_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventParameters"), sizeof(FMovieSceneEventParameters), Get_Z_Construct_UScriptStruct_FMovieSceneEventParameters_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventParameters_CRC() { return 1098040541U; }
	void UMovieSceneEventSection::StaticRegisterNativesUMovieSceneEventSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneEventSection_NoRegister()
	{
		return UMovieSceneEventSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEventSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Events;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEventSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneEventSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ToolTip", "Implements a section in movie scene event tracks." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_EventData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_EventData = { UE4CodeGen_Private::EPropertyClass::Struct, "EventData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneEventSection, EventData), Z_Construct_UScriptStruct_FMovieSceneEventSectionData, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_EventData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_EventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_Events_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_Events = { UE4CodeGen_Private::EPropertyClass::Struct, "Events", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneEventSection, Events_DEPRECATED), Z_Construct_UScriptStruct_FNameCurve, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_Events_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_Events_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEventSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_EventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_Events,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEventSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventSection_Statics::ClassParams = {
		&UMovieSceneEventSection::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x002800A0u,
		nullptr, 0,
		Z_Construct_UClass_UMovieSceneEventSection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSection_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEventSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneEventSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneEventSection, 1778140550);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneEventSection(Z_Construct_UClass_UMovieSceneEventSection, &UMovieSceneEventSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneEventSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
