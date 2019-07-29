// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/TimelineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimelineComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineDirection();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineLengthMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeline();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineLinearColorTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineFloatTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineVectorTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineEventEntry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStructProperty();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFloatProperty();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_GetPlayRate();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_GetTimelineLength();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_IsLooping();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_IsPlaying();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_IsReversing();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_Play();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_PlayFromStart();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_Reverse();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetFloatCurve();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetLooping();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetNewTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetPlayRate();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetTimelineLength();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_SetVectorCurve();
	ENGINE_API UFunction* Z_Construct_UFunction_UTimelineComponent_Stop();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnTimelineLinearColor_Parms
		{
			FLinearColor Output;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::NewProp_Output = { UE4CodeGen_Private::EPropertyClass::Struct, "Output", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnTimelineLinearColor_Parms, Output), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Signature of function to handle linear color track" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnTimelineLinearColor__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_Engine_eventOnTimelineLinearColor_Parms), Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnTimelineVector_Parms
		{
			FVector Output;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::NewProp_Output = { UE4CodeGen_Private::EPropertyClass::Struct, "Output", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnTimelineVector_Parms, Output), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Signature of function to handle timeline vector track" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnTimelineVector__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_Engine_eventOnTimelineVector_Parms), Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnTimelineFloat_Parms
		{
			float Output;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Output;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::NewProp_Output = { UE4CodeGen_Private::EPropertyClass::Float, "Output", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnTimelineFloat_Parms, Output), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::NewProp_Output,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Signature of function to handle timeline float track" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnTimelineFloat__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_Engine_eventOnTimelineFloat_Parms), Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Signature of function to handle a timeline 'event'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnTimelineEvent__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ETimelineDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETimelineDirection, Z_Construct_UPackage__Script_Engine(), TEXT("ETimelineDirection"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETimelineDirection(ETimelineDirection_StaticEnum, TEXT("/Script/Engine"), TEXT("ETimelineDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETimelineDirection_CRC() { return 1894399569U; }
	UEnum* Z_Construct_UEnum_Engine_ETimelineDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETimelineDirection"), 0, Get_Z_Construct_UEnum_Engine_ETimelineDirection_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETimelineDirection::Forward", (int64)ETimelineDirection::Forward },
				{ "ETimelineDirection::Backward", (int64)ETimelineDirection::Backward },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Does timeline play or reverse ?" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETimelineDirection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETimelineDirection::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETimelineLengthMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETimelineLengthMode, Z_Construct_UPackage__Script_Engine(), TEXT("ETimelineLengthMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETimelineLengthMode(ETimelineLengthMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ETimelineLengthMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETimelineLengthMode_CRC() { return 3161424188U; }
	UEnum* Z_Construct_UEnum_Engine_ETimelineLengthMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETimelineLengthMode"), 0, Get_Z_Construct_UEnum_Engine_ETimelineLengthMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TL_TimelineLength", (int64)TL_TimelineLength },
				{ "TL_LastKeyFrame", (int64)TL_LastKeyFrame },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
				{ "ToolTip", "Whether or not the timeline should be finished after the specified length, or the last keyframe in the tracks" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETimelineLengthMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETimelineLengthMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTimeline::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTimeline_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeline, Z_Construct_UPackage__Script_Engine(), TEXT("Timeline"), sizeof(FTimeline), Get_Z_Construct_UScriptStruct_FTimeline_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimeline(FTimeline::StaticStruct, TEXT("/Script/Engine"), TEXT("Timeline"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTimeline
{
	FScriptStruct_Engine_StaticRegisterNativesFTimeline()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Timeline")),new UScriptStruct::TCppStructOps<FTimeline>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTimeline;
	struct Z_Construct_UScriptStruct_FTimeline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirectionProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionPropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DirectionPropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertySetObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PropertySetObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineFinishedFunc_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TimelineFinishedFunc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelinePostUpdateFunc_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_TimelinePostUpdateFunc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpLinearColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InterpLinearColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterpLinearColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpFloats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InterpFloats;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterpFloats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpVectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InterpVectors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterpVectors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlaying_MetaData[];
#endif
		static void NewProp_bPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReversePlayback_MetaData[];
#endif
		static void NewProp_bReversePlayback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReversePlayback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LengthMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimeline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeline>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Cached property pointer for setting timeline direction" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionProperty = { UE4CodeGen_Private::EPropertyClass::Object, "DirectionProperty", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000080002000, 1, nullptr, STRUCT_OFFSET(FTimeline, DirectionProperty), Z_Construct_UClass_UProperty, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionProperty_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionPropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Optional. If set, Timeline will also set ETimelineDirection property on PropertySetObject using the name." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionPropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "DirectionPropertyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, DirectionPropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionPropertyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionPropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PropertySetObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Optional. If set, Timeline will also set float/vector properties on this object using the PropertyName set in the tracks." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PropertySetObject = { UE4CodeGen_Private::EPropertyClass::WeakObject, "PropertySetObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, PropertySetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PropertySetObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PropertySetObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelineFinishedFunc_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Called whenever this timeline is finished. Is not called if 'stop' is used to terminate timeline early" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelineFinishedFunc = { UE4CodeGen_Private::EPropertyClass::Delegate, "TimelineFinishedFunc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000080080000, 1, nullptr, STRUCT_OFFSET(FTimeline, TimelineFinishedFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelineFinishedFunc_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelineFinishedFunc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelinePostUpdateFunc_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Called whenever this timeline is playing and updates - done after all delegates are executed and variables updated" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelinePostUpdateFunc = { UE4CodeGen_Private::EPropertyClass::Delegate, "TimelinePostUpdateFunc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000080080000, 1, nullptr, STRUCT_OFFSET(FTimeline, TimelinePostUpdateFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelinePostUpdateFunc_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelinePostUpdateFunc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Array of linear color interpolations performed during the timeline" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors = { UE4CodeGen_Private::EPropertyClass::Array, "InterpLinearColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, InterpLinearColors), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InterpLinearColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTimelineLinearColorTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Array of float interpolations performed during the timeline" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats = { UE4CodeGen_Private::EPropertyClass::Array, "InterpFloats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, InterpFloats), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InterpFloats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTimelineFloatTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Array of vector interpolations performed during the timeline" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors = { UE4CodeGen_Private::EPropertyClass::Array, "InterpVectors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, InterpVectors), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InterpVectors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTimelineVectorTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Array of events that are fired at various times during the timeline" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events = { UE4CodeGen_Private::EPropertyClass::Array, "Events", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, Events), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Events", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTimelineEventEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Current position in the timeline" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Float, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FTimeline, Position), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PlayRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "How fast we should play through the timeline" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "PlayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(FTimeline, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PlayRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Length_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "How long the timeline is, will stop or loop at the end" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Length", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Length_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Are we currently playing (moving Position)" },
	};
#endif
	void Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying_SetBit(void* Obj)
	{
		((FTimeline*)Obj)->bPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlaying", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FTimeline), &Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "If playback should move the current position backwards instead of forwards" },
	};
#endif
	void Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback_SetBit(void* Obj)
	{
		((FTimeline*)Obj)->bReversePlayback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback = { UE4CodeGen_Private::EPropertyClass::Bool, "bReversePlayback", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FTimeline), &Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Whether timeline should loop when it reaches the end, or stop" },
	};
#endif
	void Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FTimeline*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bLooping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FTimeline), &Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_LengthMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Specified how the timeline determines its own length (e.g. specified length, last keyframe)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_LengthMode = { UE4CodeGen_Private::EPropertyClass::Byte, "LengthMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000080000000, 1, nullptr, STRUCT_OFFSET(FTimeline, LengthMode), Z_Construct_UEnum_Engine_ETimelineLengthMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_LengthMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_LengthMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionPropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PropertySetObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelineFinishedFunc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelinePostUpdateFunc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_LengthMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"Timeline",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FTimeline),
		alignof(FTimeline),
		Z_Construct_UScriptStruct_FTimeline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeline_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimeline()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimeline_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Timeline"), sizeof(FTimeline), Get_Z_Construct_UScriptStruct_FTimeline_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimeline_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimeline_CRC() { return 743168320U; }
class UScriptStruct* FTimelineLinearColorTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTimelineLinearColorTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineLinearColorTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TimelineLinearColorTrack"), sizeof(FTimelineLinearColorTrack), Get_Z_Construct_UScriptStruct_FTimelineLinearColorTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimelineLinearColorTrack(FTimelineLinearColorTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TimelineLinearColorTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTimelineLinearColorTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTimelineLinearColorTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimelineLinearColorTrack")),new UScriptStruct::TCppStructOps<FTimelineLinearColorTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTimelineLinearColorTrack;
	struct Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LinearColorProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorPropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LinearColorPropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpFunc_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InterpFunc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LinearColorCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Struct that contains one entry for each linear color interpolation performed by the timeline" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineLinearColorTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Cached linear color struct property pointer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorProperty = { UE4CodeGen_Private::EPropertyClass::Object, "LinearColorProperty", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FTimelineLinearColorTrack, LinearColorProperty), Z_Construct_UClass_UStructProperty, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorProperty_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorPropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of property that we should update from this curve" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorPropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "LinearColorPropertyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineLinearColorTrack, LinearColorPropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorPropertyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorPropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_TrackName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of track, usually set in Timeline Editor. Used by SetInterpLinearColorCurve function." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_TrackName = { UE4CodeGen_Private::EPropertyClass::Name, "TrackName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineLinearColorTrack, TrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_TrackName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_TrackName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_InterpFunc_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Function that the output from ValueCurve will be passed to" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_InterpFunc = { UE4CodeGen_Private::EPropertyClass::Delegate, "InterpFunc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080000, 1, nullptr, STRUCT_OFFSET(FTimelineLinearColorTrack, InterpFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_InterpFunc_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_InterpFunc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Float curve to be evaluated" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorCurve = { UE4CodeGen_Private::EPropertyClass::Object, "LinearColorCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineLinearColorTrack, LinearColorCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorPropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_TrackName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_InterpFunc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimelineLinearColorTrack",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FTimelineLinearColorTrack),
		alignof(FTimelineLinearColorTrack),
		Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimelineLinearColorTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimelineLinearColorTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimelineLinearColorTrack"), sizeof(FTimelineLinearColorTrack), Get_Z_Construct_UScriptStruct_FTimelineLinearColorTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimelineLinearColorTrack_CRC() { return 1970569790U; }
class UScriptStruct* FTimelineFloatTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTimelineFloatTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineFloatTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TimelineFloatTrack"), sizeof(FTimelineFloatTrack), Get_Z_Construct_UScriptStruct_FTimelineFloatTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimelineFloatTrack(FTimelineFloatTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TimelineFloatTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTimelineFloatTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTimelineFloatTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimelineFloatTrack")),new UScriptStruct::TCppStructOps<FTimelineFloatTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTimelineFloatTrack;
	struct Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatPropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FloatPropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpFunc_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InterpFunc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Struct that contains one entry for each vector interpolation performed by the timeline" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineFloatTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Cached float property pointer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatProperty = { UE4CodeGen_Private::EPropertyClass::Object, "FloatProperty", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FTimelineFloatTrack, FloatProperty), Z_Construct_UClass_UFloatProperty, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatProperty_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatPropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of property that we should update from this curve" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatPropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "FloatPropertyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineFloatTrack, FloatPropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatPropertyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatPropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_TrackName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of track, usually set in Timeline Editor. Used by SetInterpFloatCurve function." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_TrackName = { UE4CodeGen_Private::EPropertyClass::Name, "TrackName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineFloatTrack, TrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_TrackName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_TrackName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_InterpFunc_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Function that the output from ValueCurve will be passed to" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_InterpFunc = { UE4CodeGen_Private::EPropertyClass::Delegate, "InterpFunc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080000, 1, nullptr, STRUCT_OFFSET(FTimelineFloatTrack, InterpFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_InterpFunc_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_InterpFunc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Float curve to be evaluated" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatCurve = { UE4CodeGen_Private::EPropertyClass::Object, "FloatCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineFloatTrack, FloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatPropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_TrackName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_InterpFunc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimelineFloatTrack",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FTimelineFloatTrack),
		alignof(FTimelineFloatTrack),
		Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimelineFloatTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimelineFloatTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimelineFloatTrack"), sizeof(FTimelineFloatTrack), Get_Z_Construct_UScriptStruct_FTimelineFloatTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimelineFloatTrack_CRC() { return 1163161348U; }
class UScriptStruct* FTimelineVectorTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTimelineVectorTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineVectorTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TimelineVectorTrack"), sizeof(FTimelineVectorTrack), Get_Z_Construct_UScriptStruct_FTimelineVectorTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimelineVectorTrack(FTimelineVectorTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TimelineVectorTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTimelineVectorTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTimelineVectorTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimelineVectorTrack")),new UScriptStruct::TCppStructOps<FTimelineVectorTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTimelineVectorTrack;
	struct Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VectorProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorPropertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VectorPropertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpFunc_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InterpFunc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VectorCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Struct that contains one entry for each vector interpolation performed by the timeline" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineVectorTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Cached vector struct property pointer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorProperty = { UE4CodeGen_Private::EPropertyClass::Object, "VectorProperty", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FTimelineVectorTrack, VectorProperty), Z_Construct_UClass_UStructProperty, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorProperty_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorPropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of property that we should update from this curve" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorPropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "VectorPropertyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineVectorTrack, VectorPropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorPropertyName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorPropertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_TrackName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of track, usually set in Timeline Editor. Used by SetInterpVectorCurve function." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_TrackName = { UE4CodeGen_Private::EPropertyClass::Name, "TrackName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineVectorTrack, TrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_TrackName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_TrackName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_InterpFunc_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Function that the output from ValueCurve will be passed to" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_InterpFunc = { UE4CodeGen_Private::EPropertyClass::Delegate, "InterpFunc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080000, 1, nullptr, STRUCT_OFFSET(FTimelineVectorTrack, InterpFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_InterpFunc_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_InterpFunc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Vector curve to be evaluated" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorCurve = { UE4CodeGen_Private::EPropertyClass::Object, "VectorCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineVectorTrack, VectorCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorPropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_TrackName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_InterpFunc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimelineVectorTrack",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FTimelineVectorTrack),
		alignof(FTimelineVectorTrack),
		Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimelineVectorTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimelineVectorTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimelineVectorTrack"), sizeof(FTimelineVectorTrack), Get_Z_Construct_UScriptStruct_FTimelineVectorTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimelineVectorTrack_CRC() { return 2926409629U; }
class UScriptStruct* FTimelineEventEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTimelineEventEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineEventEntry, Z_Construct_UPackage__Script_Engine(), TEXT("TimelineEventEntry"), sizeof(FTimelineEventEntry), Get_Z_Construct_UScriptStruct_FTimelineEventEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimelineEventEntry(FTimelineEventEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("TimelineEventEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTimelineEventEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFTimelineEventEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimelineEventEntry")),new UScriptStruct::TCppStructOps<FTimelineEventEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTimelineEventEntry;
	struct Z_Construct_UScriptStruct_FTimelineEventEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventFunc_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_EventFunc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Struct that contains one entry for an 'event' during the timeline" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineEventEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_EventFunc_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Function to execute when Time is reached" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_EventFunc = { UE4CodeGen_Private::EPropertyClass::Delegate, "EventFunc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080000, 1, nullptr, STRUCT_OFFSET(FTimelineEventEntry, EventFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_EventFunc_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_EventFunc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Time at which event should fire" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_Time = { UE4CodeGen_Private::EPropertyClass::Float, "Time", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTimelineEventEntry, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_Time_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_EventFunc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimelineEventEntry",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FTimelineEventEntry),
		alignof(FTimelineEventEntry),
		Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimelineEventEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimelineEventEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimelineEventEntry"), sizeof(FTimelineEventEntry), Get_Z_Construct_UScriptStruct_FTimelineEventEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimelineEventEntry_CRC() { return 1596556135U; }
	void UTimelineComponent::StaticRegisterNativesUTimelineComponent()
	{
		UClass* Class = UTimelineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIgnoreTimeDilation", &UTimelineComponent::execGetIgnoreTimeDilation },
			{ "GetPlaybackPosition", &UTimelineComponent::execGetPlaybackPosition },
			{ "GetPlayRate", &UTimelineComponent::execGetPlayRate },
			{ "GetTimelineLength", &UTimelineComponent::execGetTimelineLength },
			{ "IsLooping", &UTimelineComponent::execIsLooping },
			{ "IsPlaying", &UTimelineComponent::execIsPlaying },
			{ "IsReversing", &UTimelineComponent::execIsReversing },
			{ "OnRep_Timeline", &UTimelineComponent::execOnRep_Timeline },
			{ "Play", &UTimelineComponent::execPlay },
			{ "PlayFromStart", &UTimelineComponent::execPlayFromStart },
			{ "Reverse", &UTimelineComponent::execReverse },
			{ "ReverseFromEnd", &UTimelineComponent::execReverseFromEnd },
			{ "SetFloatCurve", &UTimelineComponent::execSetFloatCurve },
			{ "SetIgnoreTimeDilation", &UTimelineComponent::execSetIgnoreTimeDilation },
			{ "SetLinearColorCurve", &UTimelineComponent::execSetLinearColorCurve },
			{ "SetLooping", &UTimelineComponent::execSetLooping },
			{ "SetNewTime", &UTimelineComponent::execSetNewTime },
			{ "SetPlaybackPosition", &UTimelineComponent::execSetPlaybackPosition },
			{ "SetPlayRate", &UTimelineComponent::execSetPlayRate },
			{ "SetTimelineLength", &UTimelineComponent::execSetTimelineLength },
			{ "SetTimelineLengthMode", &UTimelineComponent::execSetTimelineLengthMode },
			{ "SetVectorCurve", &UTimelineComponent::execSetVectorCurve },
			{ "Stop", &UTimelineComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics
	{
		struct TimelineComponent_eventGetIgnoreTimeDilation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimelineComponent_eventGetIgnoreTimeDilation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventGetIgnoreTimeDilation_Parms), &Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get whether to ignore time dilation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "GetIgnoreTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(TimelineComponent_eventGetIgnoreTimeDilation_Parms), Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics
	{
		struct TimelineComponent_eventGetPlaybackPosition_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventGetPlaybackPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get the current playback position of the Timeline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "GetPlaybackPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(TimelineComponent_eventGetPlaybackPosition_Parms), Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics
	{
		struct TimelineComponent_eventGetPlayRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get the current play rate for this timeline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "GetPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(TimelineComponent_eventGetPlayRate_Parms), Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_GetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics
	{
		struct TimelineComponent_eventGetTimelineLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventGetTimelineLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get length of the timeline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "GetTimelineLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(TimelineComponent_eventGetTimelineLength_Parms), Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_GetTimelineLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics
	{
		struct TimelineComponent_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimelineComponent_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventIsLooping_Parms), &Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get whether we are looping or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "IsLooping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(TimelineComponent_eventIsLooping_Parms), Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics
	{
		struct TimelineComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimelineComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get whether this timeline is playing or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "IsPlaying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(TimelineComponent_eventIsPlaying_Parms), Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics
	{
		struct TimelineComponent_eventIsReversing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimelineComponent_eventIsReversing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventIsReversing_Parms), &Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get whether we are reversing or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "IsReversing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020403, sizeof(TimelineComponent_eventIsReversing_Parms), Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_IsReversing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "OnRep_Timeline", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Start playback of timeline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "Play", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_Play_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Start playback of timeline from the start" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "PlayFromStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_PlayFromStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_Reverse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_Reverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Start playback of timeline in reverse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_Reverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "Reverse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_Reverse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_Reverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_Reverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_Reverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Start playback of timeline in reverse from the end" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "ReverseFromEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics
	{
		struct TimelineComponent_eventSetFloatCurve_Parms
		{
			UCurveFloat* NewFloatCurve;
			FName FloatTrackName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FloatTrackName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewFloatCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::NewProp_FloatTrackName = { UE4CodeGen_Private::EPropertyClass::Name, "FloatTrackName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetFloatCurve_Parms, FloatTrackName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::NewProp_NewFloatCurve = { UE4CodeGen_Private::EPropertyClass::Object, "NewFloatCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetFloatCurve_Parms, NewFloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::NewProp_FloatTrackName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::NewProp_NewFloatCurve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Update a certain float track's curve" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetFloatCurve", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetFloatCurve_Parms), Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetFloatCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics
	{
		struct TimelineComponent_eventSetIgnoreTimeDilation_Parms
		{
			bool bNewIgnoreTimeDilation;
		};
		static void NewProp_bNewIgnoreTimeDilation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewIgnoreTimeDilation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::NewProp_bNewIgnoreTimeDilation_SetBit(void* Obj)
	{
		((TimelineComponent_eventSetIgnoreTimeDilation_Parms*)Obj)->bNewIgnoreTimeDilation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::NewProp_bNewIgnoreTimeDilation = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewIgnoreTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventSetIgnoreTimeDilation_Parms), &Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::NewProp_bNewIgnoreTimeDilation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::NewProp_bNewIgnoreTimeDilation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Set whether to ignore time dilation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetIgnoreTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetIgnoreTimeDilation_Parms), Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics
	{
		struct TimelineComponent_eventSetLinearColorCurve_Parms
		{
			UCurveLinearColor* NewLinearColorCurve;
			FName LinearColorTrackName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LinearColorTrackName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewLinearColorCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::NewProp_LinearColorTrackName = { UE4CodeGen_Private::EPropertyClass::Name, "LinearColorTrackName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetLinearColorCurve_Parms, LinearColorTrackName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::NewProp_NewLinearColorCurve = { UE4CodeGen_Private::EPropertyClass::Object, "NewLinearColorCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetLinearColorCurve_Parms, NewLinearColorCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::NewProp_LinearColorTrackName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::NewProp_NewLinearColorCurve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Update a certain linear color track's curve" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetLinearColorCurve", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetLinearColorCurve_Parms), Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics
	{
		struct TimelineComponent_eventSetLooping_Parms
		{
			bool bNewLooping;
		};
		static void NewProp_bNewLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewLooping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit(void* Obj)
	{
		((TimelineComponent_eventSetLooping_Parms*)Obj)->bNewLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::NewProp_bNewLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewLooping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventSetLooping_Parms), &Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::NewProp_bNewLooping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "true means we would loop, false means we should not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetLooping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetLooping_Parms), Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics
	{
		struct TimelineComponent_eventSetNewTime_Parms
		{
			float NewTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::NewProp_NewTime = { UE4CodeGen_Private::EPropertyClass::Float, "NewTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetNewTime_Parms, NewTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::NewProp_NewTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Set the new playback position time to use" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetNewTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetNewTime_Parms), Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetNewTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics
	{
		struct TimelineComponent_eventSetPlaybackPosition_Parms
		{
			float NewPosition;
			bool bFireEvents;
			bool bFireUpdate;
		};
		static void NewProp_bFireUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireUpdate;
		static void NewProp_bFireEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFireEvents;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireUpdate_SetBit(void* Obj)
	{
		((TimelineComponent_eventSetPlaybackPosition_Parms*)Obj)->bFireUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireUpdate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventSetPlaybackPosition_Parms), &Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents_SetBit(void* Obj)
	{
		((TimelineComponent_eventSetPlaybackPosition_Parms*)Obj)->bFireEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents = { UE4CodeGen_Private::EPropertyClass::Bool, "bFireEvents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimelineComponent_eventSetPlaybackPosition_Parms), &Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_NewPosition = { UE4CodeGen_Private::EPropertyClass::Float, "NewPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetPlaybackPosition_Parms, NewPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_NewPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bFireUpdate" },
		{ "Category", "Components|Timeline" },
		{ "CPP_Default_bFireUpdate", "true" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Jump to a position in the timeline.\n@param bFireEvents If true, event functions that are between current position and new playback position will fire.\n@param bFireUpdate If true, the update output exec will fire after setting the new playback position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetPlaybackPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetPlaybackPosition_Parms), Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics
	{
		struct TimelineComponent_eventSetPlayRate_Parms
		{
			float NewRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::NewProp_NewRate = { UE4CodeGen_Private::EPropertyClass::Float, "NewRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetPlayRate_Parms, NewRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::NewProp_NewRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Sets the new play rate for this timeline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetPlayRate_Parms), Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics
	{
		struct TimelineComponent_eventSetTimelineLength_Parms
		{
			float NewLength;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::NewProp_NewLength = { UE4CodeGen_Private::EPropertyClass::Float, "NewLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetTimelineLength_Parms, NewLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::NewProp_NewLength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Set length of the timeline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetTimelineLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetTimelineLength_Parms), Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetTimelineLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics
	{
		struct TimelineComponent_eventSetTimelineLengthMode_Parms
		{
			TEnumAsByte<ETimelineLengthMode> NewLengthMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewLengthMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::NewProp_NewLengthMode = { UE4CodeGen_Private::EPropertyClass::Byte, "NewLengthMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetTimelineLengthMode_Parms, NewLengthMode), Z_Construct_UEnum_Engine_ETimelineLengthMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::NewProp_NewLengthMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Sets the length mode of the timeline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetTimelineLengthMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetTimelineLengthMode_Parms), Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics
	{
		struct TimelineComponent_eventSetVectorCurve_Parms
		{
			UCurveVector* NewVectorCurve;
			FName VectorTrackName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VectorTrackName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewVectorCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::NewProp_VectorTrackName = { UE4CodeGen_Private::EPropertyClass::Name, "VectorTrackName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetVectorCurve_Parms, VectorTrackName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::NewProp_NewVectorCurve = { UE4CodeGen_Private::EPropertyClass::Object, "NewVectorCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimelineComponent_eventSetVectorCurve_Parms, NewVectorCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::NewProp_VectorTrackName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::NewProp_NewVectorCurve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Update a certain vector track's curve" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "SetVectorCurve", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(TimelineComponent_eventSetVectorCurve_Parms), Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_SetVectorCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTimelineComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimelineComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Stop playback of timeline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, "Stop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimelineComponent_Stop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimelineComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimelineComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTimelineComponent_NoRegister()
	{
		return UTimelineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTimelineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TheTimeline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimelineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimelineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation, "GetIgnoreTimeDilation" }, // 3243271342
		{ &Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition, "GetPlaybackPosition" }, // 2395666751
		{ &Z_Construct_UFunction_UTimelineComponent_GetPlayRate, "GetPlayRate" }, // 1603739161
		{ &Z_Construct_UFunction_UTimelineComponent_GetTimelineLength, "GetTimelineLength" }, // 1591412571
		{ &Z_Construct_UFunction_UTimelineComponent_IsLooping, "IsLooping" }, // 43355431
		{ &Z_Construct_UFunction_UTimelineComponent_IsPlaying, "IsPlaying" }, // 1482848018
		{ &Z_Construct_UFunction_UTimelineComponent_IsReversing, "IsReversing" }, // 3395478210
		{ &Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline, "OnRep_Timeline" }, // 2182527843
		{ &Z_Construct_UFunction_UTimelineComponent_Play, "Play" }, // 671748350
		{ &Z_Construct_UFunction_UTimelineComponent_PlayFromStart, "PlayFromStart" }, // 3592916826
		{ &Z_Construct_UFunction_UTimelineComponent_Reverse, "Reverse" }, // 2945591128
		{ &Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd, "ReverseFromEnd" }, // 932652310
		{ &Z_Construct_UFunction_UTimelineComponent_SetFloatCurve, "SetFloatCurve" }, // 797269889
		{ &Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation, "SetIgnoreTimeDilation" }, // 1616421797
		{ &Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve, "SetLinearColorCurve" }, // 3802673153
		{ &Z_Construct_UFunction_UTimelineComponent_SetLooping, "SetLooping" }, // 2284949272
		{ &Z_Construct_UFunction_UTimelineComponent_SetNewTime, "SetNewTime" }, // 661682224
		{ &Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition, "SetPlaybackPosition" }, // 3823537585
		{ &Z_Construct_UFunction_UTimelineComponent_SetPlayRate, "SetPlayRate" }, // 436442114
		{ &Z_Construct_UFunction_UTimelineComponent_SetTimelineLength, "SetTimelineLength" }, // 1801304801
		{ &Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode, "SetTimelineLengthMode" }, // 1972861875
		{ &Z_Construct_UFunction_UTimelineComponent_SetVectorCurve, "SetVectorCurve" }, // 1774095927
		{ &Z_Construct_UFunction_UTimelineComponent_Stop, "Stop" }, // 2541098990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/TimelineComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "TimelineComponent holds a series of events, floats, vectors or colors with associated keyframes.\nEvents can be triggered at keyframes along the timeline.\nFloats, vectors, and colors are interpolated between keyframes along the timeline." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "True if global time dilation should be ignored by this timeline, false otherwise." },
	};
#endif
	void Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((UTimelineComponent*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTimelineComponent), &Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineComponent_Statics::NewProp_TheTimeline_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "The actual timeline structure" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineComponent_Statics::NewProp_TheTimeline = { UE4CodeGen_Private::EPropertyClass::Struct, "TheTimeline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008100000020, 1, "OnRep_Timeline", STRUCT_OFFSET(UTimelineComponent, TheTimeline), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(Z_Construct_UClass_UTimelineComponent_Statics::NewProp_TheTimeline_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineComponent_Statics::NewProp_TheTimeline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimelineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineComponent_Statics::NewProp_TheTimeline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimelineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimelineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimelineComponent_Statics::ClassParams = {
		&UTimelineComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A800A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UTimelineComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTimelineComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTimelineComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTimelineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimelineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimelineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimelineComponent, 3598148479);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimelineComponent(Z_Construct_UClass_UTimelineComponent, &UTimelineComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UTimelineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimelineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
