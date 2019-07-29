// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISense_Hearing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Hearing() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAINoiseEvent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Hearing_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Hearing();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FAINoiseEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AIMODULE_API uint32 Get_Z_Construct_UScriptStruct_FAINoiseEvent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAINoiseEvent, Z_Construct_UPackage__Script_AIModule(), TEXT("AINoiseEvent"), sizeof(FAINoiseEvent), Get_Z_Construct_UScriptStruct_FAINoiseEvent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAINoiseEvent(FAINoiseEvent::StaticStruct, TEXT("/Script/AIModule"), TEXT("AINoiseEvent"), false, nullptr, nullptr);
static struct FScriptStruct_AIModule_StaticRegisterNativesFAINoiseEvent
{
	FScriptStruct_AIModule_StaticRegisterNativesFAINoiseEvent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AINoiseEvent")),new UScriptStruct::TCppStructOps<FAINoiseEvent>);
	}
} ScriptStruct_AIModule_StaticRegisterNativesFAINoiseEvent;
	struct Z_Construct_UScriptStruct_FAINoiseEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loudness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Loudness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAINoiseEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAINoiseEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Named identifier for the noise." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Name, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAINoiseEvent, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Tag_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Instigator_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Actor triggering the sound." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Instigator = { UE4CodeGen_Private::EPropertyClass::Object, "Instigator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAINoiseEvent, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Instigator_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Max range at which the sound can be heard. Multiplied by Loudness.\nA value of 0 indicates that there is no range limit, though listeners are still limited by their own hearing range." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_MaxRange = { UE4CodeGen_Private::EPropertyClass::Float, "MaxRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAINoiseEvent, MaxRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_MaxRange_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Loudness_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Loudness modifier of the sound.\nIf MaxRange is non-zero, this modifies the range (by multiplication).\nIf there is no MaxRange, then if Square(DistanceToSound) <= Square(HearingRange) * Loudness, the sound is heard, false otherwise." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Loudness = { UE4CodeGen_Private::EPropertyClass::Float, "Loudness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAINoiseEvent, Loudness), METADATA_PARAMS(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Loudness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Loudness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_NoiseLocation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "if not set Instigator's location will be used" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_NoiseLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NoiseLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAINoiseEvent, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_NoiseLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_NoiseLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAINoiseEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Loudness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_NoiseLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AINoiseEvent",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAINoiseEvent),
		alignof(FAINoiseEvent),
		Z_Construct_UScriptStruct_FAINoiseEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAINoiseEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAINoiseEvent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AINoiseEvent"), sizeof(FAINoiseEvent), Get_Z_Construct_UScriptStruct_FAINoiseEvent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAINoiseEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAINoiseEvent_CRC() { return 340260738U; }
	void UAISense_Hearing::StaticRegisterNativesUAISense_Hearing()
	{
		UClass* Class = UAISense_Hearing::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReportNoiseEvent", &UAISense_Hearing::execReportNoiseEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics
	{
		struct AISense_Hearing_eventReportNoiseEvent_Parms
		{
			UObject* WorldContextObject;
			FVector NoiseLocation;
			float Loudness;
			AActor* Instigator;
			float MaxRange;
			FName Tag;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Loudness;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Name, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_MaxRange = { UE4CodeGen_Private::EPropertyClass::Float, "MaxRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, MaxRange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Instigator = { UE4CodeGen_Private::EPropertyClass::Object, "Instigator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Loudness = { UE4CodeGen_Private::EPropertyClass::Float, "Loudness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, Loudness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_NoiseLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NoiseLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Loudness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_NoiseLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "CPP_Default_Instigator", "None" },
		{ "CPP_Default_Loudness", "1.000000" },
		{ "CPP_Default_MaxRange", "0.000000" },
		{ "CPP_Default_Tag", "None" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Report a noise event.\n\n@param NoiseLocation Location of the noise.\n@param Loudness Loudness of the noise. If MaxRange is non-zero, modifies MaxRange, otherwise modifies the squared distance of the sensor's range.\n@param Instigator Actor that triggered the noise.\n@param MaxRange Max range at which the sound can be heard, multiplied by Loudness. Values <= 0 mean no limit (still limited by listener's range however).\n@param Tag Identifier for the event." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Hearing, "ReportNoiseEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(AISense_Hearing_eventReportNoiseEvent_Parms), Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISense_Hearing_NoRegister()
	{
		return UAISense_Hearing::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Hearing_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedOfSoundSq_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedOfSoundSq;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NoiseEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseEvents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Hearing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISense_Hearing_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent, "ReportNoiseEvent" }, // 2908494399
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Hearing_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Hearing.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_SpeedOfSoundSq_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Defaults to 0 to have instant notification. Setting to > 0 will result in delaying\n    when AI hears the sound based on the distance from the source" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_SpeedOfSoundSq = { UE4CodeGen_Private::EPropertyClass::Float, "SpeedOfSoundSq", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000004000, 1, nullptr, STRUCT_OFFSET(UAISense_Hearing, SpeedOfSoundSq), METADATA_PARAMS(Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_SpeedOfSoundSq_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_SpeedOfSoundSq_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents = { UE4CodeGen_Private::EPropertyClass::Array, "NoiseEvents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UAISense_Hearing, NoiseEvents), METADATA_PARAMS(Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "NoiseEvents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAINoiseEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Hearing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_SpeedOfSoundSq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Hearing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Hearing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Hearing_Statics::ClassParams = {
		&UAISense_Hearing::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAISense_Hearing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAISense_Hearing_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Hearing_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISense_Hearing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Hearing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISense_Hearing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense_Hearing, 3386022813);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Hearing(Z_Construct_UClass_UAISense_Hearing, &UAISense_Hearing::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense_Hearing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Hearing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
