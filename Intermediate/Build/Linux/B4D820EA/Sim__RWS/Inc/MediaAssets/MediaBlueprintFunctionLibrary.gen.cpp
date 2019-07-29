// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssets/Public/Misc/MediaBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaBlueprintFunctionLibrary() {}
// Cross Module References
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter();
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter();
	MEDIAASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaCaptureDevice();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices();
// End Cross Module References
	static UEnum* EMediaWebcamCaptureDeviceFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter, Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaWebcamCaptureDeviceFilter"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaWebcamCaptureDeviceFilter(EMediaWebcamCaptureDeviceFilter_StaticEnum, TEXT("/Script/MediaAssets"), TEXT("EMediaWebcamCaptureDeviceFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter_CRC() { return 2550803901U; }
	UEnum* Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaWebcamCaptureDeviceFilter"), 0, Get_Z_Construct_UEnum_MediaAssets_EMediaWebcamCaptureDeviceFilter_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaWebcamCaptureDeviceFilter::DepthSensor", (int64)EMediaWebcamCaptureDeviceFilter::DepthSensor },
				{ "EMediaWebcamCaptureDeviceFilter::Front", (int64)EMediaWebcamCaptureDeviceFilter::Front },
				{ "EMediaWebcamCaptureDeviceFilter::Rear", (int64)EMediaWebcamCaptureDeviceFilter::Rear },
				{ "EMediaWebcamCaptureDeviceFilter::Unknown", (int64)EMediaWebcamCaptureDeviceFilter::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BitFlags", "" },
				{ "BlueprintType", "true" },
				{ "DepthSensor.ToolTip", "Depth sensor." },
				{ "Front.ToolTip", "Front facing web cam." },
				{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "Rear.ToolTip", "Rear facing web cam." },
				{ "ToolTip", "Filter flags for the EnumerateWebcamCaptureDevices BP function." },
				{ "Unknown.ToolTip", "Unknown web cam types." },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMediaWebcamCaptureDeviceFilter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMediaWebcamCaptureDeviceFilter",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMediaVideoCaptureDeviceFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter, Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaVideoCaptureDeviceFilter"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaVideoCaptureDeviceFilter(EMediaVideoCaptureDeviceFilter_StaticEnum, TEXT("/Script/MediaAssets"), TEXT("EMediaVideoCaptureDeviceFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter_CRC() { return 1872969262U; }
	UEnum* Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaVideoCaptureDeviceFilter"), 0, Get_Z_Construct_UEnum_MediaAssets_EMediaVideoCaptureDeviceFilter_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaVideoCaptureDeviceFilter::Card", (int64)EMediaVideoCaptureDeviceFilter::Card },
				{ "EMediaVideoCaptureDeviceFilter::Software", (int64)EMediaVideoCaptureDeviceFilter::Software },
				{ "EMediaVideoCaptureDeviceFilter::Unknown", (int64)EMediaVideoCaptureDeviceFilter::Unknown },
				{ "EMediaVideoCaptureDeviceFilter::Webcam", (int64)EMediaVideoCaptureDeviceFilter::Webcam },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BitFlags", "" },
				{ "BlueprintType", "true" },
				{ "Card.ToolTip", "Video capture card." },
				{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "Software.ToolTip", "Software video capture device." },
				{ "ToolTip", "Filter flags for the EnumerateVideoCaptureDevices BP function." },
				{ "Unknown.ToolTip", "Unknown video capture device types." },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
				{ "Webcam.ToolTip", "Web cam." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMediaVideoCaptureDeviceFilter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMediaVideoCaptureDeviceFilter",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMediaAudioCaptureDeviceFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter, Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaAudioCaptureDeviceFilter"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaAudioCaptureDeviceFilter(EMediaAudioCaptureDeviceFilter_StaticEnum, TEXT("/Script/MediaAssets"), TEXT("EMediaAudioCaptureDeviceFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter_CRC() { return 2062479039U; }
	UEnum* Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaAudioCaptureDeviceFilter"), 0, Get_Z_Construct_UEnum_MediaAssets_EMediaAudioCaptureDeviceFilter_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaAudioCaptureDeviceFilter::Card", (int64)EMediaAudioCaptureDeviceFilter::Card },
				{ "EMediaAudioCaptureDeviceFilter::Microphone", (int64)EMediaAudioCaptureDeviceFilter::Microphone },
				{ "EMediaAudioCaptureDeviceFilter::Software", (int64)EMediaAudioCaptureDeviceFilter::Software },
				{ "EMediaAudioCaptureDeviceFilter::Unknown", (int64)EMediaAudioCaptureDeviceFilter::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BitFlags", "" },
				{ "BlueprintType", "true" },
				{ "Card.ToolTip", "Audio capture cards." },
				{ "Microphone.ToolTip", "Microphone." },
				{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
				{ "Software.ToolTip", "Software device." },
				{ "ToolTip", "Filter flags for the EnumerateAudioCaptureDevices BP function." },
				{ "Unknown.ToolTip", "Unknown audio capture device types." },
				{ "UseEnumValuesAsMaskValuesInEditor", "true" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMediaAudioCaptureDeviceFilter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMediaAudioCaptureDeviceFilter",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMediaCaptureDevice::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MEDIAASSETS_API uint32 Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaCaptureDevice, Z_Construct_UPackage__Script_MediaAssets(), TEXT("MediaCaptureDevice"), sizeof(FMediaCaptureDevice), Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMediaCaptureDevice(FMediaCaptureDevice::StaticStruct, TEXT("/Script/MediaAssets"), TEXT("MediaCaptureDevice"), false, nullptr, nullptr);
static struct FScriptStruct_MediaAssets_StaticRegisterNativesFMediaCaptureDevice
{
	FScriptStruct_MediaAssets_StaticRegisterNativesFMediaCaptureDevice()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MediaCaptureDevice")),new UScriptStruct::TCppStructOps<FMediaCaptureDevice>);
	}
} ScriptStruct_MediaAssets_StaticRegisterNativesFMediaCaptureDevice;
	struct Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Information about a capture device." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaCaptureDevice>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "Media Capture Device" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Media URL string for use with media players." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_Url = { UE4CodeGen_Private::EPropertyClass::Str, "Url", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002014, 1, nullptr, STRUCT_OFFSET(FMediaCaptureDevice, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_Url_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Media Capture Device" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Human readable display name." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Text, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002014, 1, nullptr, STRUCT_OFFSET(FMediaCaptureDevice, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
		nullptr,
		&NewStructOps,
		"MediaCaptureDevice",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FMediaCaptureDevice),
		alignof(FMediaCaptureDevice),
		Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaCaptureDevice()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MediaCaptureDevice"), sizeof(FMediaCaptureDevice), Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMediaCaptureDevice_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMediaCaptureDevice_CRC() { return 2840495627U; }
	void UMediaBlueprintFunctionLibrary::StaticRegisterNativesUMediaBlueprintFunctionLibrary()
	{
		UClass* Class = UMediaBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnumerateAudioCaptureDevices", &UMediaBlueprintFunctionLibrary::execEnumerateAudioCaptureDevices },
			{ "EnumerateVideoCaptureDevices", &UMediaBlueprintFunctionLibrary::execEnumerateVideoCaptureDevices },
			{ "EnumerateWebcamCaptureDevices", &UMediaBlueprintFunctionLibrary::execEnumerateWebcamCaptureDevices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics
	{
		struct MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms
		{
			TArray<FMediaCaptureDevice> OutDevices;
			int32 Filter;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDevices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDevices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_Filter = { UE4CodeGen_Private::EPropertyClass::Int, "Filter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms, Filter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_OutDevices = { UE4CodeGen_Private::EPropertyClass::Array, "OutDevices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms, OutDevices), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_OutDevices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutDevices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMediaCaptureDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_OutDevices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::NewProp_OutDevices_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Capture" },
		{ "CPP_Default_Filter", "-1" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Enumerate available audio capture devices.\n\nTo filter for a specific subset of devices, use the MakeBitmask node\nwith EMediaAudioCaptureDeviceFilter as the Bitmask Enum.\n\n@param OutDevices Will contain the available capture devices.\n@param Filter The types of capture devices to return (-1 = all)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBlueprintFunctionLibrary, "EnumerateAudioCaptureDevices", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MediaBlueprintFunctionLibrary_eventEnumerateAudioCaptureDevices_Parms), Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics
	{
		struct MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms
		{
			TArray<FMediaCaptureDevice> OutDevices;
			int32 Filter;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDevices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDevices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_Filter = { UE4CodeGen_Private::EPropertyClass::Int, "Filter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms, Filter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_OutDevices = { UE4CodeGen_Private::EPropertyClass::Array, "OutDevices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms, OutDevices), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_OutDevices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutDevices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMediaCaptureDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_OutDevices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::NewProp_OutDevices_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Capture" },
		{ "CPP_Default_Filter", "-1" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Enumerate available audio capture devices.\n\nTo filter for a specific subset of devices, use the MakeBitmask node\nwith EMediaVideoCaptureDeviceFilter as the Bitmask Enum.\n\n@param OutDevices Will contain the available capture devices.\n@param Filter The types of capture devices to return (-1 = all)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBlueprintFunctionLibrary, "EnumerateVideoCaptureDevices", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MediaBlueprintFunctionLibrary_eventEnumerateVideoCaptureDevices_Parms), Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics
	{
		struct MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms
		{
			TArray<FMediaCaptureDevice> OutDevices;
			int32 Filter;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDevices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutDevices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_Filter = { UE4CodeGen_Private::EPropertyClass::Int, "Filter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms, Filter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_OutDevices = { UE4CodeGen_Private::EPropertyClass::Array, "OutDevices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms, OutDevices), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_OutDevices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OutDevices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMediaCaptureDevice, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_OutDevices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::NewProp_OutDevices_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Capture" },
		{ "CPP_Default_Filter", "-1" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Enumerate available audio capture devices.\n\nTo filter for a specific subset of devices, use the MakeBitmask node\nwith EMediaWebcamCaptureDeviceFilter as the Bitmask Enum.\n\n@param OutDevices Will contain the available capture devices.\n@param Filter The types of capture devices to return (-1 = all)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaBlueprintFunctionLibrary, "EnumerateWebcamCaptureDevices", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MediaBlueprintFunctionLibrary_eventEnumerateWebcamCaptureDevices_Parms), Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary_NoRegister()
	{
		return UMediaBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices, "EnumerateAudioCaptureDevices" }, // 2241084551
		{ &Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices, "EnumerateVideoCaptureDevices" }, // 1867529643
		{ &Z_Construct_UFunction_UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices, "EnumerateWebcamCaptureDevices" }, // 1824460573
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Misc/MediaBlueprintFunctionLibrary.h" },
		{ "ScriptName", "MediaLibrary" },
		{ "ToolTip", "Blueprint library for Media related functions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::ClassParams = {
		&UMediaBlueprintFunctionLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaBlueprintFunctionLibrary, 2299204455);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaBlueprintFunctionLibrary(Z_Construct_UClass_UMediaBlueprintFunctionLibrary, &UMediaBlueprintFunctionLibrary::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UMediaBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
