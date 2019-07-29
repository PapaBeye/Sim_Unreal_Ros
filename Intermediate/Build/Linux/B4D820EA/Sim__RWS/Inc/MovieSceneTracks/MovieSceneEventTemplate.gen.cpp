// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieSceneEventTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
// End Cross Module References
class UScriptStruct* FMovieSceneEventRepeaterTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventRepeaterTemplate"), sizeof(FMovieSceneEventRepeaterTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventRepeaterTemplate(FMovieSceneEventRepeaterTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventRepeaterTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventRepeaterTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventRepeaterTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventRepeaterTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneEventRepeaterTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventRepeaterTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventToTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventToTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventRepeaterTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::NewProp_EventToTrigger_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::NewProp_EventToTrigger = { UE4CodeGen_Private::EPropertyClass::Name, "EventToTrigger", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEventRepeaterTemplate, EventToTrigger), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::NewProp_EventToTrigger_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::NewProp_EventToTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::NewProp_EventToTrigger,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase,
		&NewStructOps,
		"MovieSceneEventRepeaterTemplate",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FMovieSceneEventRepeaterTemplate),
		alignof(FMovieSceneEventRepeaterTemplate),
		Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventRepeaterTemplate"), sizeof(FMovieSceneEventRepeaterTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventRepeaterTemplate_CRC() { return 2323438563U; }
class UScriptStruct* FMovieSceneEventTriggerTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventTriggerTemplate"), sizeof(FMovieSceneEventTriggerTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventTriggerTemplate(FMovieSceneEventTriggerTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventTriggerTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventTriggerTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventTriggerTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventTriggerTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneEventTriggerTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventTriggerTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventFunctions;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventFunctions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventTimes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTimes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventTriggerTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventFunctions = { UE4CodeGen_Private::EPropertyClass::Array, "EventFunctions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEventTriggerTemplate, EventFunctions), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventFunctions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventFunctions_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventFunctions_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "EventFunctions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventTimes_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventTimes = { UE4CodeGen_Private::EPropertyClass::Array, "EventTimes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEventTriggerTemplate, EventTimes), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventTimes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventTimes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventTimes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EventTimes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventFunctions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventTimes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::NewProp_EventTimes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase,
		&NewStructOps,
		"MovieSceneEventTriggerTemplate",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FMovieSceneEventTriggerTemplate),
		alignof(FMovieSceneEventTriggerTemplate),
		Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventTriggerTemplate"), sizeof(FMovieSceneEventTriggerTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventTriggerTemplate_CRC() { return 1766467925U; }
class UScriptStruct* FMovieSceneEventSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventSectionTemplate"), sizeof(FMovieSceneEventSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventSectionTemplate(FMovieSceneEventSectionTemplate::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionTemplate
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventSectionTemplate")),new UScriptStruct::TCppStructOps<FMovieSceneEventSectionTemplate>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData = { UE4CodeGen_Private::EPropertyClass::Struct, "EventData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEventSectionTemplate, EventData), Z_Construct_UScriptStruct_FMovieSceneEventSectionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::NewProp_EventData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase,
		&NewStructOps,
		"MovieSceneEventSectionTemplate",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FMovieSceneEventSectionTemplate),
		alignof(FMovieSceneEventSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventSectionTemplate"), sizeof(FMovieSceneEventSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventSectionTemplate_CRC() { return 832103359U; }
class UScriptStruct* FMovieSceneEventTemplateBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventTemplateBase"), sizeof(FMovieSceneEventTemplateBase), Get_Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEventTemplateBase(FMovieSceneEventTemplateBase::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneEventTemplateBase"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventTemplateBase
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventTemplateBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEventTemplateBase")),new UScriptStruct::TCppStructOps<FMovieSceneEventTemplateBase>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneEventTemplateBase;
	struct Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenBackwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenForwards_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventReceivers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventReceivers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventReceivers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventTemplateBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
	{
		((FMovieSceneEventTemplateBase*)Obj)->bFireEventsWhenBackwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenBackwards = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEventsWhenBackwards", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieSceneEventTemplateBase), &Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenBackwards_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenBackwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
	{
		((FMovieSceneEventTemplateBase*)Obj)->bFireEventsWhenForwards = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenForwards = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEventsWhenForwards", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMovieSceneEventTemplateBase), &Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenForwards_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_EventReceivers_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneEventTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_EventReceivers = { UE4CodeGen_Private::EPropertyClass::Array, "EventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEventTemplateBase, EventReceivers), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_EventReceivers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_EventReceivers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_EventReceivers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EventReceivers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenBackwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_bFireEventsWhenForwards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_EventReceivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::NewProp_EventReceivers_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneEventTemplateBase",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FMovieSceneEventTemplateBase),
		alignof(FMovieSceneEventTemplateBase),
		Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEventTemplateBase"), sizeof(FMovieSceneEventTemplateBase), Get_Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEventTemplateBase_CRC() { return 546844095U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
