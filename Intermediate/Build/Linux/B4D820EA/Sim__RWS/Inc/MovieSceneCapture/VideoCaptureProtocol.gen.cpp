// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCapture/Public/Protocols/VideoCaptureProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVideoCaptureProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UVideoCaptureProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UVideoCaptureProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocol();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References
	void UVideoCaptureProtocol::StaticRegisterNativesUVideoCaptureProtocol()
	{
	}
	UClass* Z_Construct_UClass_UVideoCaptureProtocol_NoRegister()
	{
		return UVideoCaptureProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UVideoCaptureProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoCodec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VideoCodec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompressionQuality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCompression_MetaData[];
#endif
		static void NewProp_bUseCompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCompression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVideoCaptureProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFrameGrabberProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoCaptureProtocol_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "Video" },
		{ "DisplayName", "Video Sequence (avi)" },
		{ "IncludePath", "Protocols/VideoCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/VideoCaptureProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_VideoCodec_MetaData[] = {
		{ "Category", "VideoSettings" },
		{ "ModuleRelativePath", "Public/Protocols/VideoCaptureProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_VideoCodec = { UE4CodeGen_Private::EPropertyClass::Str, "VideoCodec", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UVideoCaptureProtocol, VideoCodec), METADATA_PARAMS(Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_VideoCodec_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_VideoCodec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "VideoSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bUseCompression" },
		{ "ModuleRelativePath", "Public/Protocols/VideoCaptureProtocol.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_CompressionQuality = { UE4CodeGen_Private::EPropertyClass::Float, "CompressionQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UVideoCaptureProtocol, CompressionQuality), METADATA_PARAMS(Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_CompressionQuality_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_CompressionQuality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_MetaData[] = {
		{ "Category", "VideoSettings" },
		{ "ModuleRelativePath", "Public/Protocols/VideoCaptureProtocol.h" },
	};
#endif
	void Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_SetBit(void* Obj)
	{
		((UVideoCaptureProtocol*)Obj)->bUseCompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseCompression", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVideoCaptureProtocol), &Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_MetaData, ARRAY_COUNT(Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVideoCaptureProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_VideoCodec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_CompressionQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVideoCaptureProtocol_Statics::NewProp_bUseCompression,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVideoCaptureProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVideoCaptureProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVideoCaptureProtocol_Statics::ClassParams = {
		&UVideoCaptureProtocol::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001004A4u,
		nullptr, 0,
		Z_Construct_UClass_UVideoCaptureProtocol_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UVideoCaptureProtocol_Statics::PropPointers),
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVideoCaptureProtocol_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVideoCaptureProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVideoCaptureProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVideoCaptureProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVideoCaptureProtocol, 2818423590);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVideoCaptureProtocol(Z_Construct_UClass_UVideoCaptureProtocol, &UVideoCaptureProtocol::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UVideoCaptureProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVideoCaptureProtocol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
