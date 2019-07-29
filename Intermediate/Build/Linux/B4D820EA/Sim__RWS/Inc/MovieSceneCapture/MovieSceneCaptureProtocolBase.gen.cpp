// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCapture/Public/MovieSceneCaptureProtocolBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureProtocolBase() {}
// Cross Module References
	MOVIESCENECAPTURE_API UEnum* Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FFrameMetrics();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase();
// End Cross Module References
	static UEnum* EMovieSceneCaptureProtocolState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState, Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("EMovieSceneCaptureProtocolState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieSceneCaptureProtocolState(EMovieSceneCaptureProtocolState_StaticEnum, TEXT("/Script/MovieSceneCapture"), TEXT("EMovieSceneCaptureProtocolState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState_CRC() { return 844023666U; }
	UEnum* Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneCapture();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieSceneCaptureProtocolState"), 0, Get_Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieSceneCaptureProtocolState::Idle", (int64)EMovieSceneCaptureProtocolState::Idle },
				{ "EMovieSceneCaptureProtocolState::Initialized", (int64)EMovieSceneCaptureProtocolState::Initialized },
				{ "EMovieSceneCaptureProtocolState::Capturing", (int64)EMovieSceneCaptureProtocolState::Capturing },
				{ "EMovieSceneCaptureProtocolState::Finalizing", (int64)EMovieSceneCaptureProtocolState::Finalizing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Capturing.ToolTip", "The protocol has been initialized, bound to a viewport and is capturing data" },
				{ "Finalizing.ToolTip", "The protocol has finished capturing data, and is pending finalization" },
				{ "Idle.ToolTip", "The protocol is idle, and has not even been initialized" },
				{ "Initialized.ToolTip", "The protocol has been initialized (and bound to a viewport) but is not capturing frames yet" },
				{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneCapture,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMovieSceneCaptureProtocolState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMovieSceneCaptureProtocolState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFrameMetrics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENECAPTURE_API uint32 Get_Z_Construct_UScriptStruct_FFrameMetrics_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFrameMetrics, Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("FrameMetrics"), sizeof(FFrameMetrics), Get_Z_Construct_UScriptStruct_FFrameMetrics_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFrameMetrics(FFrameMetrics::StaticStruct, TEXT("/Script/MovieSceneCapture"), TEXT("FrameMetrics"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneCapture_StaticRegisterNativesFFrameMetrics
{
	FScriptStruct_MovieSceneCapture_StaticRegisterNativesFFrameMetrics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FrameMetrics")),new UScriptStruct::TCppStructOps<FFrameMetrics>);
	}
} ScriptStruct_MovieSceneCapture_StaticRegisterNativesFFrameMetrics;
	struct Z_Construct_UScriptStruct_FFrameMetrics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDroppedFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumDroppedFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalElapsedTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameMetrics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "Metrics that correspond to a particular frame" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFrameMetrics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_NumDroppedFrames_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "The number of frames we dropped in-between this frame, and the last one we captured" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_NumDroppedFrames = { UE4CodeGen_Private::EPropertyClass::Int, "NumDroppedFrames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFrameMetrics, NumDroppedFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_NumDroppedFrames_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_NumDroppedFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameNumber_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "The index of this frame from the start of the capture, including dropped frames" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameNumber = { UE4CodeGen_Private::EPropertyClass::Int, "FrameNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFrameMetrics, FrameNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameDelta_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "The total amount of time, in seconds, that this specific frame took to render (not accounting for dropped frames)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameDelta = { UE4CodeGen_Private::EPropertyClass::Float, "FrameDelta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFrameMetrics, FrameDelta), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameDelta_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_TotalElapsedTime_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "The total amount of time, in seconds, since the capture started" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_TotalElapsedTime = { UE4CodeGen_Private::EPropertyClass::Float, "TotalElapsedTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(FFrameMetrics, TotalElapsedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_TotalElapsedTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_TotalElapsedTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFrameMetrics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_NumDroppedFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_FrameDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameMetrics_Statics::NewProp_TotalElapsedTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFrameMetrics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
		nullptr,
		&NewStructOps,
		"FrameMetrics",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFrameMetrics),
		alignof(FFrameMetrics),
		Z_Construct_UScriptStruct_FFrameMetrics_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameMetrics_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameMetrics_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameMetrics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFrameMetrics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFrameMetrics_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneCapture();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FrameMetrics"), sizeof(FFrameMetrics), Get_Z_Construct_UScriptStruct_FFrameMetrics_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFrameMetrics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFrameMetrics_CRC() { return 2001738535U; }
	void UMovieSceneCaptureProtocolBase::StaticRegisterNativesUMovieSceneCaptureProtocolBase()
	{
		UClass* Class = UMovieSceneCaptureProtocolBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetState", &UMovieSceneCaptureProtocolBase::execGetState },
			{ "IsCapturing", &UMovieSceneCaptureProtocolBase::execIsCapturing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics
	{
		struct MovieSceneCaptureProtocolBase_eventGetState_Parms
		{
			EMovieSceneCaptureProtocolState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovieSceneCaptureProtocolBase_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "Get the current state of this capture protocol" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureProtocolBase, "GetState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MovieSceneCaptureProtocolBase_eventGetState_Parms), Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics
	{
		struct MovieSceneCaptureProtocolBase_eventIsCapturing_Parms
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
	void Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneCaptureProtocolBase_eventIsCapturing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MovieSceneCaptureProtocolBase_eventIsCapturing_Parms), &Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "Check whether we can capture a frame from this protocol" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureProtocolBase, "IsCapturing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MovieSceneCaptureProtocolBase_eventIsCapturing_Parms), Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolBase_NoRegister()
	{
		return UMovieSceneCaptureProtocolBase::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFrameRequested_MetaData[];
#endif
		static void NewProp_bFrameRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFrameRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_GetState, "GetState" }, // 3867358826
		{ &Z_Construct_UFunction_UMovieSceneCaptureProtocolBase_IsCapturing, "IsCapturing" }, // 3347330582
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneCaptureProtocolBase.h" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A capture protocol responsible for dealing with captured frames using some custom method (writing out to disk, streaming, etc)\n\nA typical process for capture consits of the following process:\n    Setup -> [ Warm up -> [ Capture Frame ] ] -> Begin Finalize -> [ HasFinishedProcessing ] -> Finalize" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_bFrameRequested_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "True if the current frame is to be captured - persists until the next frame's PreTick" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_bFrameRequested_SetBit(void* Obj)
	{
		((UMovieSceneCaptureProtocolBase*)Obj)->bFrameRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_bFrameRequested = { UE4CodeGen_Private::EPropertyClass::Bool, "bFrameRequested", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneCaptureProtocolBase), &Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_bFrameRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_bFrameRequested_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_bFrameRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ToolTip", "The current state of the protocol" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State = { UE4CodeGen_Private::EPropertyClass::Enum, "State", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UMovieSceneCaptureProtocolBase, State), Z_Construct_UEnum_MovieSceneCapture_EMovieSceneCaptureProtocolState, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_bFrameRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::NewProp_State_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCaptureProtocolBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::ClassParams = {
		&UMovieSceneCaptureProtocolBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001004A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::PropPointers),
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCaptureProtocolBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCaptureProtocolBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCaptureProtocolBase, 869456875);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCaptureProtocolBase(Z_Construct_UClass_UMovieSceneCaptureProtocolBase, &UMovieSceneCaptureProtocolBase::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UMovieSceneCaptureProtocolBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCaptureProtocolBase);
	void UMovieSceneImageCaptureProtocolBase::StaticRegisterNativesUMovieSceneImageCaptureProtocolBase()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister()
	{
		return UMovieSceneImageCaptureProtocolBase::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneCaptureProtocolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneCaptureProtocolBase.h" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A class to inherit from for image capture protocols. Used to filter the UI for protocols used on the image capture pass." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneImageCaptureProtocolBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::ClassParams = {
		&UMovieSceneImageCaptureProtocolBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001004A1u,
		nullptr, 0,
		nullptr, 0,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneImageCaptureProtocolBase, 3453366773);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneImageCaptureProtocolBase(Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase, &UMovieSceneImageCaptureProtocolBase::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UMovieSceneImageCaptureProtocolBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneImageCaptureProtocolBase);
	void UMovieSceneAudioCaptureProtocolBase::StaticRegisterNativesUMovieSceneAudioCaptureProtocolBase()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister()
	{
		return UMovieSceneAudioCaptureProtocolBase::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneCaptureProtocolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneCaptureProtocolBase.h" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureProtocolBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A class to inherit from for audio capture protocols. Used to filter the UI for protocols used on the audio capture pass." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAudioCaptureProtocolBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::ClassParams = {
		&UMovieSceneAudioCaptureProtocolBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001004A1u,
		nullptr, 0,
		nullptr, 0,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAudioCaptureProtocolBase, 379495960);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAudioCaptureProtocolBase(Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase, &UMovieSceneAudioCaptureProtocolBase::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UMovieSceneAudioCaptureProtocolBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAudioCaptureProtocolBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
