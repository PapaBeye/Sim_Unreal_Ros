// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImageWriteQueue/Public/ImageWriteBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageWriteBlueprintLibrary() {}
// Cross Module References
	IMAGEWRITEQUEUE_API UFunction* Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ImageWriteQueue();
	IMAGEWRITEQUEUE_API UScriptStruct* Z_Construct_UScriptStruct_FImageWriteOptions();
	IMAGEWRITEQUEUE_API UEnum* Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat();
	IMAGEWRITEQUEUE_API UClass* Z_Construct_UClass_UImageWriteBlueprintLibrary_NoRegister();
	IMAGEWRITEQUEUE_API UClass* Z_Construct_UClass_UImageWriteBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	IMAGEWRITEQUEUE_API UFunction* Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics
	{
		struct _Script_ImageWriteQueue_eventOnImageWriteComplete_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_ImageWriteQueue_eventOnImageWriteComplete_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_ImageWriteQueue_eventOnImageWriteComplete_Parms), &Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ImageWriteQueue, "OnImageWriteComplete__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_ImageWriteQueue_eventOnImageWriteComplete_Parms), Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FImageWriteOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern IMAGEWRITEQUEUE_API uint32 Get_Z_Construct_UScriptStruct_FImageWriteOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageWriteOptions, Z_Construct_UPackage__Script_ImageWriteQueue(), TEXT("ImageWriteOptions"), sizeof(FImageWriteOptions), Get_Z_Construct_UScriptStruct_FImageWriteOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImageWriteOptions(FImageWriteOptions::StaticStruct, TEXT("/Script/ImageWriteQueue"), TEXT("ImageWriteOptions"), false, nullptr, nullptr);
static struct FScriptStruct_ImageWriteQueue_StaticRegisterNativesFImageWriteOptions
{
	FScriptStruct_ImageWriteQueue_StaticRegisterNativesFImageWriteOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ImageWriteOptions")),new UScriptStruct::TCppStructOps<FImageWriteOptions>);
	}
} ScriptStruct_ImageWriteQueue_StaticRegisterNativesFImageWriteOptions;
	struct Z_Construct_UScriptStruct_FImageWriteOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAsync_MetaData[];
#endif
		static void NewProp_bAsync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAsync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverwriteFile_MetaData[];
#endif
		static void NewProp_bOverwriteFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverwriteFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Format;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageWriteOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "Options specific to writing image files to disk" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageWriteOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync_MetaData[] = {
		{ "Category", "Image" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "Whether to perform the writing asynchronously, or to block the game thread until it is complete" },
	};
#endif
	void Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync_SetBit(void* Obj)
	{
		((FImageWriteOptions*)Obj)->bAsync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync = { UE4CodeGen_Private::EPropertyClass::Bool, "bAsync", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FImageWriteOptions), &Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile_MetaData[] = {
		{ "Category", "Image" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "Whether to overwrite the image if it already exists" },
	};
#endif
	void Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile_SetBit(void* Obj)
	{
		((FImageWriteOptions*)Obj)->bOverwriteFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverwriteFile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FImageWriteOptions), &Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "Image" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "An image format specific compression setting. Either 0 (Default) or 1 (Uncompressed) for EXRs, or a value between 0 and 100." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_CompressionQuality = { UE4CodeGen_Private::EPropertyClass::Int, "CompressionQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FImageWriteOptions, CompressionQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_CompressionQuality_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_CompressionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_OnComplete_MetaData[] = {
		{ "Category", "Image" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "A callback to invoke when the image has been written, or there was an error" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_OnComplete = { UE4CodeGen_Private::EPropertyClass::Delegate, "OnComplete", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080005, 1, nullptr, STRUCT_OFFSET(FImageWriteOptions, OnComplete), Z_Construct_UDelegateFunction_ImageWriteQueue_OnImageWriteComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_OnComplete_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_OnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "Image" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "The desired output image format to write to disk" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format = { UE4CodeGen_Private::EPropertyClass::Enum, "Format", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FImageWriteOptions, Format), Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageWriteOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bAsync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_bOverwriteFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_CompressionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_OnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageWriteOptions_Statics::NewProp_Format_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageWriteOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ImageWriteQueue,
		nullptr,
		&NewStructOps,
		"ImageWriteOptions",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FImageWriteOptions),
		alignof(FImageWriteOptions),
		Z_Construct_UScriptStruct_FImageWriteOptions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FImageWriteOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImageWriteOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImageWriteOptions_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ImageWriteQueue();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImageWriteOptions"), sizeof(FImageWriteOptions), Get_Z_Construct_UScriptStruct_FImageWriteOptions_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImageWriteOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImageWriteOptions_CRC() { return 3676736599U; }
	void UImageWriteBlueprintLibrary::StaticRegisterNativesUImageWriteBlueprintLibrary()
	{
		UClass* Class = UImageWriteBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExportToDisk", &UImageWriteBlueprintLibrary::execExportToDisk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics
	{
		struct ImageWriteBlueprintLibrary_eventExportToDisk_Parms
		{
			UTexture* Texture;
			FString Filename;
			FImageWriteOptions Options;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Options = { UE4CodeGen_Private::EPropertyClass::Struct, "Options", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(ImageWriteBlueprintLibrary_eventExportToDisk_Parms, Options), Z_Construct_UScriptStruct_FImageWriteOptions, METADATA_PARAMS(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Options_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Filename = { UE4CodeGen_Private::EPropertyClass::Str, "Filename", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImageWriteBlueprintLibrary_eventExportToDisk_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ImageWriteBlueprintLibrary_eventExportToDisk_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "Texture" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Export the specified texture to disk\n\n@param Texture         The texture or render target to export\n@param Filename        The filename on disk to save as\n@param Options         Parameters defining the various export options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageWriteBlueprintLibrary, "ExportToDisk", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422403, sizeof(ImageWriteBlueprintLibrary_eventExportToDisk_Parms), Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UImageWriteBlueprintLibrary_NoRegister()
	{
		return UImageWriteBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ImageWriteQueue,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImageWriteBlueprintLibrary_ExportToDisk, "ExportToDisk" }, // 2547936193
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImageWriteBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/ImageWriteBlueprintLibrary.h" },
		{ "ToolTip", "Function library containing utility methods for writing images on a global async queue" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageWriteBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::ClassParams = {
		&UImageWriteBlueprintLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageWriteBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImageWriteBlueprintLibrary, 188872674);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImageWriteBlueprintLibrary(Z_Construct_UClass_UImageWriteBlueprintLibrary, &UImageWriteBlueprintLibrary::StaticClass, TEXT("/Script/ImageWriteQueue"), TEXT("UImageWriteBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageWriteBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
