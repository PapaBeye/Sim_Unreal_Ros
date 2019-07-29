// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCapture/Public/MovieSceneCaptureEnvironment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCaptureEnvironment() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber();
	MOVIESCENECAPTURE_API UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress();
// End Cross Module References
	void UMovieSceneCaptureEnvironment::StaticRegisterNativesUMovieSceneCaptureEnvironment()
	{
		UClass* Class = UMovieSceneCaptureEnvironment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindAudioCaptureProtocol", &UMovieSceneCaptureEnvironment::execFindAudioCaptureProtocol },
			{ "FindImageCaptureProtocol", &UMovieSceneCaptureEnvironment::execFindImageCaptureProtocol },
			{ "GetCaptureElapsedTime", &UMovieSceneCaptureEnvironment::execGetCaptureElapsedTime },
			{ "GetCaptureFrameNumber", &UMovieSceneCaptureEnvironment::execGetCaptureFrameNumber },
			{ "IsCaptureInProgress", &UMovieSceneCaptureEnvironment::execIsCaptureInProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics
	{
		struct MovieSceneCaptureEnvironment_eventFindAudioCaptureProtocol_Parms
		{
			UMovieSceneAudioCaptureProtocolBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovieSceneCaptureEnvironment_eventFindAudioCaptureProtocol_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneAudioCaptureProtocolBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematics|Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
		{ "ToolTip", "Attempt to locate a capture protocol - may not be in a capturing state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, "FindAudioCaptureProtocol", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MovieSceneCaptureEnvironment_eventFindAudioCaptureProtocol_Parms), Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics
	{
		struct MovieSceneCaptureEnvironment_eventFindImageCaptureProtocol_Parms
		{
			UMovieSceneImageCaptureProtocolBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovieSceneCaptureEnvironment_eventFindImageCaptureProtocol_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematics|Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
		{ "ToolTip", "Attempt to locate a capture protocol - may not be in a capturing state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, "FindImageCaptureProtocol", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MovieSceneCaptureEnvironment_eventFindImageCaptureProtocol_Parms), Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics
	{
		struct MovieSceneCaptureEnvironment_eventGetCaptureElapsedTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovieSceneCaptureEnvironment_eventGetCaptureElapsedTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic|Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
		{ "ToolTip", "Get the total elapsed time of the current capture in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, "GetCaptureElapsedTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MovieSceneCaptureEnvironment_eventGetCaptureElapsedTime_Parms), Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics
	{
		struct MovieSceneCaptureEnvironment_eventGetCaptureFrameNumber_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MovieSceneCaptureEnvironment_eventGetCaptureFrameNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematic|Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
		{ "ToolTip", "Get the frame number of the current capture" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, "GetCaptureFrameNumber", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MovieSceneCaptureEnvironment_eventGetCaptureFrameNumber_Parms), Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics
	{
		struct MovieSceneCaptureEnvironment_eventIsCaptureInProgress_Parms
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
	void Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneCaptureEnvironment_eventIsCaptureInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MovieSceneCaptureEnvironment_eventIsCaptureInProgress_Parms), &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematics|Capture" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
		{ "ToolTip", "Return true if there is any capture currently active (even in a warm-up state).\nUseful for checking whether to do certain operations in BeginPlay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCaptureEnvironment, "IsCaptureInProgress", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MovieSceneCaptureEnvironment_eventIsCaptureInProgress_Parms), Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment_NoRegister()
	{
		return UMovieSceneCaptureEnvironment::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol, "FindAudioCaptureProtocol" }, // 2642225243
		{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_FindImageCaptureProtocol, "FindImageCaptureProtocol" }, // 1369579550
		{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureElapsedTime, "GetCaptureElapsedTime" }, // 1211054251
		{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_GetCaptureFrameNumber, "GetCaptureFrameNumber" }, // 441447009
		{ &Z_Construct_UFunction_UMovieSceneCaptureEnvironment_IsCaptureInProgress, "IsCaptureInProgress" }, // 3268110387
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneCaptureEnvironment.h" },
		{ "ModuleRelativePath", "Public/MovieSceneCaptureEnvironment.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCaptureEnvironment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::ClassParams = {
		&UMovieSceneCaptureEnvironment::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCaptureEnvironment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneCaptureEnvironment, 3983787503);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneCaptureEnvironment(Z_Construct_UClass_UMovieSceneCaptureEnvironment, &UMovieSceneCaptureEnvironment::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UMovieSceneCaptureEnvironment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCaptureEnvironment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
