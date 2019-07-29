// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCapture/Public/Protocols/UserDefinedCaptureProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedCaptureProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FFrameMetrics();
	MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FCapturedPixels();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UUserDefinedCaptureProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UUserDefinedCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UUserDefinedImageCaptureProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UUserDefinedImageCaptureProtocol();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk();
	IMAGEWRITEQUEUE_API UEnum* Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics
	{
		struct _Script_MovieSceneCapture_eventOnReceiveCapturedPixels_Parms
		{
			FCapturedPixels Pixels;
			FName StreamName;
			FFrameMetrics FrameMetrics;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameMetrics;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StreamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pixels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pixels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::NewProp_FrameMetrics = { UE4CodeGen_Private::EPropertyClass::Struct, "FrameMetrics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_MovieSceneCapture_eventOnReceiveCapturedPixels_Parms, FrameMetrics), Z_Construct_UScriptStruct_FFrameMetrics, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::NewProp_StreamName = { UE4CodeGen_Private::EPropertyClass::Name, "StreamName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_MovieSceneCapture_eventOnReceiveCapturedPixels_Parms, StreamName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::NewProp_Pixels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::NewProp_Pixels = { UE4CodeGen_Private::EPropertyClass::Struct, "Pixels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_MovieSceneCapture_eventOnReceiveCapturedPixels_Parms, Pixels), Z_Construct_UScriptStruct_FCapturedPixels, METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::NewProp_Pixels_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::NewProp_Pixels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::NewProp_FrameMetrics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::NewProp_StreamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::NewProp_Pixels,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieSceneCapture, "OnReceiveCapturedPixels__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_MovieSceneCapture_eventOnReceiveCapturedPixels_Parms), Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FCapturedPixels::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENECAPTURE_API uint32 Get_Z_Construct_UScriptStruct_FCapturedPixels_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapturedPixels, Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("CapturedPixels"), sizeof(FCapturedPixels), Get_Z_Construct_UScriptStruct_FCapturedPixels_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCapturedPixels(FCapturedPixels::StaticStruct, TEXT("/Script/MovieSceneCapture"), TEXT("CapturedPixels"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneCapture_StaticRegisterNativesFCapturedPixels
{
	FScriptStruct_MovieSceneCapture_StaticRegisterNativesFCapturedPixels()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CapturedPixels")),new UScriptStruct::TCppStructOps<FCapturedPixels>);
	}
} ScriptStruct_MovieSceneCapture_StaticRegisterNativesFCapturedPixels;
	struct Z_Construct_UScriptStruct_FCapturedPixels_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturedPixels_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapturedPixels_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapturedPixels>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapturedPixels_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
		nullptr,
		&NewStructOps,
		"CapturedPixels",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCapturedPixels),
		alignof(FCapturedPixels),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturedPixels_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPixels_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapturedPixels()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCapturedPixels_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneCapture();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CapturedPixels"), sizeof(FCapturedPixels), Get_Z_Construct_UScriptStruct_FCapturedPixels_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCapturedPixels_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCapturedPixels_CRC() { return 259587530U; }
	static FName NAME_UUserDefinedCaptureProtocol_OnBeginFinalize = FName(TEXT("OnBeginFinalize"));
	void UUserDefinedCaptureProtocol::OnBeginFinalize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnBeginFinalize),NULL);
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnCanFinalize = FName(TEXT("OnCanFinalize"));
	bool UUserDefinedCaptureProtocol::OnCanFinalize() const
	{
		UserDefinedCaptureProtocol_eventOnCanFinalize_Parms Parms;
		const_cast<UUserDefinedCaptureProtocol*>(this)->ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnCanFinalize),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnCaptureFrame = FName(TEXT("OnCaptureFrame"));
	void UUserDefinedCaptureProtocol::OnCaptureFrame()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnCaptureFrame),NULL);
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnFinalize = FName(TEXT("OnFinalize"));
	void UUserDefinedCaptureProtocol::OnFinalize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnFinalize),NULL);
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnPauseCapture = FName(TEXT("OnPauseCapture"));
	void UUserDefinedCaptureProtocol::OnPauseCapture()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnPauseCapture),NULL);
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnPreTick = FName(TEXT("OnPreTick"));
	void UUserDefinedCaptureProtocol::OnPreTick()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnPreTick),NULL);
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnSetup = FName(TEXT("OnSetup"));
	bool UUserDefinedCaptureProtocol::OnSetup()
	{
		UserDefinedCaptureProtocol_eventOnSetup_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnSetup),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnStartCapture = FName(TEXT("OnStartCapture"));
	void UUserDefinedCaptureProtocol::OnStartCapture()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnStartCapture),NULL);
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnTick = FName(TEXT("OnTick"));
	void UUserDefinedCaptureProtocol::OnTick()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnTick),NULL);
	}
	static FName NAME_UUserDefinedCaptureProtocol_OnWarmUp = FName(TEXT("OnWarmUp"));
	void UUserDefinedCaptureProtocol::OnWarmUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnWarmUp),NULL);
	}
	void UUserDefinedCaptureProtocol::StaticRegisterNativesUUserDefinedCaptureProtocol()
	{
		UClass* Class = UUserDefinedCaptureProtocol::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToStream", &UUserDefinedCaptureProtocol::execBindToStream },
			{ "GenerateFilename", &UUserDefinedCaptureProtocol::execGenerateFilename },
			{ "GetCurrentFrameMetrics", &UUserDefinedCaptureProtocol::execGetCurrentFrameMetrics },
			{ "OnCanFinalize", &UUserDefinedCaptureProtocol::execOnCanFinalize },
			{ "OnSetup", &UUserDefinedCaptureProtocol::execOnSetup },
			{ "PushBufferToStream", &UUserDefinedCaptureProtocol::execPushBufferToStream },
			{ "ResolveBuffer", &UUserDefinedCaptureProtocol::execResolveBuffer },
			{ "StartCapturingFinalPixels", &UUserDefinedCaptureProtocol::execStartCapturingFinalPixels },
			{ "StopCapturingFinalPixels", &UUserDefinedCaptureProtocol::execStopCapturingFinalPixels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream_Statics
	{
		struct UserDefinedCaptureProtocol_eventBindToStream_Parms
		{
			FName StreamName;
			FScriptDelegate Handler;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Handler;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StreamName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream_Statics::NewProp_Handler = { UE4CodeGen_Private::EPropertyClass::Delegate, "Handler", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventBindToStream_Parms, Handler), Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream_Statics::NewProp_StreamName = { UE4CodeGen_Private::EPropertyClass::Name, "StreamName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventBindToStream_Parms, StreamName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream_Statics::NewProp_Handler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream_Statics::NewProp_StreamName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Add a handler to the specified stream that will be called whenever it receives data.\nPush data to a stream with either StartCapturingFinalPixels() or PushBufferToStream()\n\n@param StreamName      The name of the stream to bind this handler to. The handler will be invoked whenever pixels are received on that stream.\n@param Handler         A delegate for handling the pixels received on this stream name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "BindToStream", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UserDefinedCaptureProtocol_eventBindToStream_Parms), Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics
	{
		struct UserDefinedCaptureProtocol_eventGenerateFilename_Parms
		{
			FFrameMetrics InFrameMetrics;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFrameMetrics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InFrameMetrics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventGenerateFilename_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_InFrameMetrics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_InFrameMetrics = { UE4CodeGen_Private::EPropertyClass::Struct, "InFrameMetrics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventGenerateFilename_Parms, InFrameMetrics), Z_Construct_UScriptStruct_FFrameMetrics, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_InFrameMetrics_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_InFrameMetrics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_InFrameMetrics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Generate a filename for the current frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "GenerateFilename", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420400, sizeof(UserDefinedCaptureProtocol_eventGenerateFilename_Parms), Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics
	{
		struct UserDefinedCaptureProtocol_eventGetCurrentFrameMetrics_Parms
		{
			FFrameMetrics ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventGetCurrentFrameMetrics_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameMetrics, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Access this protocol's current frame metrics" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "GetCurrentFrameMetrics", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(UserDefinedCaptureProtocol_eventGetCurrentFrameMetrics_Parms), Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when this protocol is going to be shut down - should not capture any more frames" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "OnBeginFinalize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserDefinedCaptureProtocol_eventOnCanFinalize_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UserDefinedCaptureProtocol_eventOnCanFinalize_Parms), &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called to check whether this protocol has finished any pending tasks, and can now be shut down" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "OnCanFinalize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48080C00, sizeof(UserDefinedCaptureProtocol_eventOnCanFinalize_Parms), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when this protocol should capture the current frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "OnCaptureFrame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called to complete finalization of this protocol" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "OnFinalize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when this protocol should temporarily stop capturing frames" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "OnPauseCapture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called before the capture process itself is ticked, before each frame is set up for capture\nUseful for any pre-frame set up or resetting the previous frame's state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "OnPreTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserDefinedCaptureProtocol_eventOnSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UserDefinedCaptureProtocol_eventOnSetup_Parms), &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called once at the start of the capture process, but before any warmup frames\n@return true if this protocol set up successfully, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "OnSetup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080C00, sizeof(UserDefinedCaptureProtocol_eventOnSetup_Parms), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when this protocol should start capturing frames" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "OnStartCapture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called after the capture process itself is ticked, after the frame is set up for capture, but before most actors have ticked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "OnTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when the capture process is warming up. Protocols may transition from either an initialized, or capturing state to warm-up" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "OnWarmUp", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream_Statics
	{
		struct UserDefinedCaptureProtocol_eventPushBufferToStream_Parms
		{
			UTexture* Buffer;
			FName StreamName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StreamName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Buffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream_Statics::NewProp_StreamName = { UE4CodeGen_Private::EPropertyClass::Name, "StreamName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventPushBufferToStream_Parms, StreamName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream_Statics::NewProp_Buffer = { UE4CodeGen_Private::EPropertyClass::Object, "Buffer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventPushBufferToStream_Parms, Buffer), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream_Statics::NewProp_StreamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream_Statics::NewProp_Buffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "* Capture the specified texture buffer using this protocol's settings\n*\n* @param Buffer          The desired buffer to save\n* @param StreamName      The name of the stream to push the buffer onto (e.g. a composition pass name). Bind to the stream with BindStreamHandler." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "PushBufferToStream", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UserDefinedCaptureProtocol_eventPushBufferToStream_Parms), Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics
	{
		struct UserDefinedCaptureProtocol_eventResolveBuffer_Parms
		{
			UTexture* Buffer;
			FName BufferName;
			FScriptDelegate Handler;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Handler;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BufferName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Buffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_Handler = { UE4CodeGen_Private::EPropertyClass::Delegate, "Handler", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventResolveBuffer_Parms, Handler), Z_Construct_UDelegateFunction_MovieSceneCapture_OnReceiveCapturedPixels__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_BufferName = { UE4CodeGen_Private::EPropertyClass::Name, "BufferName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventResolveBuffer_Parms, BufferName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_Buffer = { UE4CodeGen_Private::EPropertyClass::Object, "Buffer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventResolveBuffer_Parms, Buffer), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_Handler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_BufferName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_Buffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "* Resolve the specified buffer and pass it directly to the specified handler when done (does not pass to any bound streams)\n*\n* @param Buffer          The desired buffer to save\n* @param BufferName      The name of this buffer that is passed to the resulting handler (e.g. a composition pass name).\n* @param Handler         A delegate for handling the pixels received on this stream name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "ResolveBuffer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UserDefinedCaptureProtocol_eventResolveBuffer_Parms), Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics
	{
		struct UserDefinedCaptureProtocol_eventStartCapturingFinalPixels_Parms
		{
			FName StreamName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StreamName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::NewProp_StreamName = { UE4CodeGen_Private::EPropertyClass::Name, "StreamName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventStartCapturingFinalPixels_Parms, StreamName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::NewProp_StreamName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Instruct this protocol to start capturing LDR final pixels (including slate widgets and burn-ins)\n\n@param StreamName      The name of the stream to send final pixels to. Bind to streams with BindStreamHandler." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "StartCapturingFinalPixels", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UserDefinedCaptureProtocol_eventStartCapturingFinalPixels_Parms), Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Instruct this protocol to stop capturing LDR final pixels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, "StopCapturingFinalPixels", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUserDefinedCaptureProtocol_NoRegister()
	{
		return UUserDefinedCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_BindToStream, "BindToStream" }, // 2145190831
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename, "GenerateFilename" }, // 1690416867
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics, "GetCurrentFrameMetrics" }, // 4238813557
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize, "OnBeginFinalize" }, // 2386510385
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize, "OnCanFinalize" }, // 267693722
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame, "OnCaptureFrame" }, // 3203160713
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize, "OnFinalize" }, // 1049563697
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture, "OnPauseCapture" }, // 2420211411
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick, "OnPreTick" }, // 3382789878
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup, "OnSetup" }, // 2501015588
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture, "OnStartCapture" }, // 3829437220
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick, "OnTick" }, // 97433258
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp, "OnWarmUp" }, // 229155470
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_PushBufferToStream, "PushBufferToStream" }, // 1908834459
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer, "ResolveBuffer" }, // 2502925299
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels, "StartCapturingFinalPixels" }, // 3756182248
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels, "StopCapturingFinalPixels" }, // 591599119
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Capture Protocol" },
		{ "IncludePath", "Protocols/UserDefinedCaptureProtocol.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A blueprintable capture protocol that defines how to capture frames from the engine" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::NewProp_World_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "World pointer assigned on Setup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002014, 1, nullptr, STRUCT_OFFSET(UUserDefinedCaptureProtocol, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::NewProp_World_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::NewProp_World,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedCaptureProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::ClassParams = {
		&UUserDefinedCaptureProtocol::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001004A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserDefinedCaptureProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserDefinedCaptureProtocol, 2135496876);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserDefinedCaptureProtocol(Z_Construct_UClass_UUserDefinedCaptureProtocol, &UUserDefinedCaptureProtocol::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UUserDefinedCaptureProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedCaptureProtocol);
	void UUserDefinedImageCaptureProtocol::StaticRegisterNativesUUserDefinedImageCaptureProtocol()
	{
		UClass* Class = UUserDefinedImageCaptureProtocol::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateFilenameForBuffer", &UUserDefinedImageCaptureProtocol::execGenerateFilenameForBuffer },
			{ "GenerateFilenameForCurrentFrame", &UUserDefinedImageCaptureProtocol::execGenerateFilenameForCurrentFrame },
			{ "WriteImageToDisk", &UUserDefinedImageCaptureProtocol::execWriteImageToDisk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics
	{
		struct UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms
		{
			UTexture* Buffer;
			FName StreamName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StreamName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Buffer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_StreamName = { UE4CodeGen_Private::EPropertyClass::Name, "StreamName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms, StreamName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_Buffer = { UE4CodeGen_Private::EPropertyClass::Object, "Buffer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms, Buffer), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_StreamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_Buffer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "* Generate a filename for the specified buffer using this protocol's file name formatter\n*\n* @param Buffer          The desired buffer to generate a filename for\n* @param StreamName      The name of the stream for this buffer (e.g. a composition pass name)\n* @return A fully qualified file name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedImageCaptureProtocol, "GenerateFilenameForBuffer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms), Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics
	{
		struct UserDefinedImageCaptureProtocol_eventGenerateFilenameForCurrentFrame_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventGenerateFilenameForCurrentFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "* Generate a filename for the current frame using this protocol's file name formatter\n*\n* @return A fully qualified file name for the current frame number" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedImageCaptureProtocol, "GenerateFilenameForCurrentFrame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UserDefinedImageCaptureProtocol_eventGenerateFilenameForCurrentFrame_Parms), Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics
	{
		struct UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms
		{
			FCapturedPixels PixelData;
			FName StreamName;
			FFrameMetrics FrameMetrics;
			bool bCopyImageData;
		};
		static void NewProp_bCopyImageData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyImageData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameMetrics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameMetrics;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StreamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PixelData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_bCopyImageData_SetBit(void* Obj)
	{
		((UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms*)Obj)->bCopyImageData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_bCopyImageData = { UE4CodeGen_Private::EPropertyClass::Bool, "bCopyImageData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms), &Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_bCopyImageData_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_FrameMetrics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_FrameMetrics = { UE4CodeGen_Private::EPropertyClass::Struct, "FrameMetrics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms, FrameMetrics), Z_Construct_UScriptStruct_FFrameMetrics, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_FrameMetrics_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_FrameMetrics_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_StreamName = { UE4CodeGen_Private::EPropertyClass::Name, "StreamName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms, StreamName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_PixelData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_PixelData = { UE4CodeGen_Private::EPropertyClass::Struct, "PixelData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms, PixelData), Z_Construct_UScriptStruct_FCapturedPixels, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_PixelData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_PixelData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_bCopyImageData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_FrameMetrics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_StreamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_PixelData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "CPP_Default_bCopyImageData", "false" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "* Generate a filename for the current frame using this protocol's file name formatter\n*\n* @return A fully qualified file name for the current frame number" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedImageCaptureProtocol, "WriteImageToDisk", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms), Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUserDefinedImageCaptureProtocol_NoRegister()
	{
		return UUserDefinedImageCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCompression_MetaData[];
#endif
		static void NewProp_bEnableCompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Format;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedCaptureProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer, "GenerateFilenameForBuffer" }, // 2966882376
		{ &Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame, "GenerateFilenameForCurrentFrame" }, // 2163213739
		{ &Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk, "WriteImageToDisk" }, // 545014044
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Capture Protocol" },
		{ "IncludePath", "Protocols/UserDefinedCaptureProtocol.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A blueprintable capture protocol tailored to capturing and exporting frames as images" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "Capture" },
		{ "EditCondition", "bEnableCompression" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "The compression quality for the image type. For EXRs, 0 = Default ZIP compression, 1 = No compression, PNGs and JPEGs expect a value between 0 and 100" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_CompressionQuality = { UE4CodeGen_Private::EPropertyClass::Int, "CompressionQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UUserDefinedImageCaptureProtocol, CompressionQuality), METADATA_PARAMS(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_CompressionQuality_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_CompressionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression_MetaData[] = {
		{ "Category", "Capture" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Whether to save images with compression or not. Not supported for bitmaps." },
	};
#endif
	void Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression_SetBit(void* Obj)
	{
		((UUserDefinedImageCaptureProtocol*)Obj)->bEnableCompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableCompression", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UUserDefinedImageCaptureProtocol), &Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "Capture" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "The image format to save as" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format = { UE4CodeGen_Private::EPropertyClass::Enum, "Format", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004005, 1, nullptr, STRUCT_OFFSET(UUserDefinedImageCaptureProtocol, Format), Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat, METADATA_PARAMS(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_CompressionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedImageCaptureProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::ClassParams = {
		&UUserDefinedImageCaptureProtocol::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001004A5u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::PropPointers),
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserDefinedImageCaptureProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserDefinedImageCaptureProtocol, 514788419);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserDefinedImageCaptureProtocol(Z_Construct_UClass_UUserDefinedImageCaptureProtocol, &UUserDefinedImageCaptureProtocol::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UUserDefinedImageCaptureProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedImageCaptureProtocol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
