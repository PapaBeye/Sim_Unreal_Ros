// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScreenShotComparisonTools/Public/ImageComparer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageComparer() {}
// Cross Module References
	SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FImageComparisonResult();
	UPackage* Z_Construct_UPackage__Script_ScreenShotComparisonTools();
	SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FImageTolerance();
// End Cross Module References
class UScriptStruct* FImageComparisonResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCREENSHOTCOMPARISONTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FImageComparisonResult_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageComparisonResult, Z_Construct_UPackage__Script_ScreenShotComparisonTools(), TEXT("ImageComparisonResult"), sizeof(FImageComparisonResult), Get_Z_Construct_UScriptStruct_FImageComparisonResult_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImageComparisonResult(FImageComparisonResult::StaticStruct, TEXT("/Script/ScreenShotComparisonTools"), TEXT("ImageComparisonResult"), false, nullptr, nullptr);
static struct FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageComparisonResult
{
	FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageComparisonResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImageComparisonResult")),new UScriptStruct::TCppStructOps<FImageComparisonResult>);
	}
} ScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageComparisonResult;
	struct Z_Construct_UScriptStruct_FImageComparisonResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalDifference_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_GlobalDifference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLocalDifference_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_MaxLocalDifference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportComparisonFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportComparisonFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportIncomingFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportIncomingFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReportApprovedFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReportApprovedFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComparisonFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComparisonFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncomingFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IncomingFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApprovedFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApprovedFile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageComparisonResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Tolerance_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Tolerance = { UE4CodeGen_Private::EPropertyClass::Struct, "Tolerance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, Tolerance), Z_Construct_UScriptStruct_FImageTolerance, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Tolerance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Tolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Text, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ErrorMessage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_GlobalDifference_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_GlobalDifference = { UE4CodeGen_Private::EPropertyClass::Double, "GlobalDifference", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, GlobalDifference), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_GlobalDifference_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_GlobalDifference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_MaxLocalDifference_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_MaxLocalDifference = { UE4CodeGen_Private::EPropertyClass::Double, "MaxLocalDifference", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, MaxLocalDifference), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_MaxLocalDifference_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_MaxLocalDifference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportComparisonFile_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportComparisonFile = { UE4CodeGen_Private::EPropertyClass::Str, "ReportComparisonFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, ReportComparisonFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportComparisonFile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportComparisonFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportIncomingFile_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportIncomingFile = { UE4CodeGen_Private::EPropertyClass::Str, "ReportIncomingFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, ReportIncomingFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportIncomingFile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportIncomingFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportApprovedFile_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportApprovedFile = { UE4CodeGen_Private::EPropertyClass::Str, "ReportApprovedFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, ReportApprovedFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportApprovedFile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportApprovedFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ComparisonFile_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ComparisonFile = { UE4CodeGen_Private::EPropertyClass::Str, "ComparisonFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, ComparisonFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ComparisonFile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ComparisonFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IncomingFile_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IncomingFile = { UE4CodeGen_Private::EPropertyClass::Str, "IncomingFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, IncomingFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IncomingFile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IncomingFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ApprovedFile_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ApprovedFile = { UE4CodeGen_Private::EPropertyClass::Str, "ApprovedFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageComparisonResult, ApprovedFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ApprovedFile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ApprovedFile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageComparisonResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_Tolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_GlobalDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_MaxLocalDifference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportComparisonFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportIncomingFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ReportApprovedFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ComparisonFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_IncomingFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageComparisonResult_Statics::NewProp_ApprovedFile,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageComparisonResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScreenShotComparisonTools,
		nullptr,
		&NewStructOps,
		"ImageComparisonResult",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FImageComparisonResult),
		alignof(FImageComparisonResult),
		Z_Construct_UScriptStruct_FImageComparisonResult_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageComparisonResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImageComparisonResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImageComparisonResult_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImageComparisonResult"), sizeof(FImageComparisonResult), Get_Z_Construct_UScriptStruct_FImageComparisonResult_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImageComparisonResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImageComparisonResult_CRC() { return 1903812488U; }
class UScriptStruct* FImageTolerance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCREENSHOTCOMPARISONTOOLS_API uint32 Get_Z_Construct_UScriptStruct_FImageTolerance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageTolerance, Z_Construct_UPackage__Script_ScreenShotComparisonTools(), TEXT("ImageTolerance"), sizeof(FImageTolerance), Get_Z_Construct_UScriptStruct_FImageTolerance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImageTolerance(FImageTolerance::StaticStruct, TEXT("/Script/ScreenShotComparisonTools"), TEXT("ImageTolerance"), false, nullptr, nullptr);
static struct FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageTolerance
{
	FScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageTolerance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImageTolerance")),new UScriptStruct::TCppStructOps<FImageTolerance>);
	}
} ScriptStruct_ScreenShotComparisonTools_StaticRegisterNativesFImageTolerance;
	struct Z_Construct_UScriptStruct_FImageTolerance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumGlobalError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumGlobalError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumLocalError_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumLocalError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreColors_MetaData[];
#endif
		static void NewProp_IgnoreColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreAntiAliasing_MetaData[];
#endif
		static void NewProp_IgnoreAntiAliasing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreAntiAliasing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MinBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blue_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Blue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Green_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Green;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Red_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Red;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImageTolerance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageTolerance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumGlobalError_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumGlobalError = { UE4CodeGen_Private::EPropertyClass::Float, "MaximumGlobalError", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, MaximumGlobalError), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumGlobalError_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumGlobalError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumLocalError_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumLocalError = { UE4CodeGen_Private::EPropertyClass::Float, "MaximumLocalError", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, MaximumLocalError), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumLocalError_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumLocalError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors_SetBit(void* Obj)
	{
		((FImageTolerance*)Obj)->IgnoreColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors = { UE4CodeGen_Private::EPropertyClass::Bool, "IgnoreColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FImageTolerance), &Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing_SetBit(void* Obj)
	{
		((FImageTolerance*)Obj)->IgnoreAntiAliasing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing = { UE4CodeGen_Private::EPropertyClass::Bool, "IgnoreAntiAliasing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FImageTolerance), &Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaxBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaxBrightness = { UE4CodeGen_Private::EPropertyClass::Byte, "MaxBrightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, MaxBrightness), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaxBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaxBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MinBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MinBrightness = { UE4CodeGen_Private::EPropertyClass::Byte, "MinBrightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, MinBrightness), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MinBrightness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MinBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Alpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Byte, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, Alpha), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Alpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Blue_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Blue = { UE4CodeGen_Private::EPropertyClass::Byte, "Blue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, Blue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Blue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Blue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Green_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Green = { UE4CodeGen_Private::EPropertyClass::Byte, "Green", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, Green), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Green_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Green_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Red_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageComparer.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Red = { UE4CodeGen_Private::EPropertyClass::Byte, "Red", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FImageTolerance, Red), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Red_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Red_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageTolerance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumGlobalError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaximumLocalError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_IgnoreAntiAliasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MaxBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_MinBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Blue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Green,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageTolerance_Statics::NewProp_Red,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageTolerance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScreenShotComparisonTools,
		nullptr,
		&NewStructOps,
		"ImageTolerance",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FImageTolerance),
		alignof(FImageTolerance),
		Z_Construct_UScriptStruct_FImageTolerance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImageTolerance_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageTolerance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImageTolerance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImageTolerance_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImageTolerance"), sizeof(FImageTolerance), Get_Z_Construct_UScriptStruct_FImageTolerance_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImageTolerance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImageTolerance_CRC() { return 96927705U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
