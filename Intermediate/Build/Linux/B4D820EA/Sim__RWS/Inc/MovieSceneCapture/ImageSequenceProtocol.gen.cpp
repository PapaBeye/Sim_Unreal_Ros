// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneCapture/Public/Protocols/ImageSequenceProtocol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageSequenceProtocol() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UFrameGrabberProtocol();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UCompressedImageSequenceProtocol_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UCompressedImageSequenceProtocol();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_BMP_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_BMP();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_PNG_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_PNG();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_JPG_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_JPG();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_EXR_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UImageSequenceProtocol_EXR();
	MOVIESCENECAPTURE_API UEnum* Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut();
// End Cross Module References
	void UImageSequenceProtocol::StaticRegisterNativesUImageSequenceProtocol()
	{
	}
	UClass* Z_Construct_UClass_UImageSequenceProtocol_NoRegister()
	{
		return UImageSequenceProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UImageSequenceProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageSequenceProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFrameGrabberProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSequenceProtocol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageSequenceProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSequenceProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImageSequenceProtocol_Statics::ClassParams = {
		&UImageSequenceProtocol::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001004A1u,
		nullptr, 0,
		nullptr, 0,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UImageSequenceProtocol_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageSequenceProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImageSequenceProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImageSequenceProtocol, 2262151118);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImageSequenceProtocol(Z_Construct_UClass_UImageSequenceProtocol, &UImageSequenceProtocol::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UImageSequenceProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSequenceProtocol);
	void UCompressedImageSequenceProtocol::StaticRegisterNativesUCompressedImageSequenceProtocol()
	{
	}
	UClass* Z_Construct_UClass_UCompressedImageSequenceProtocol_NoRegister()
	{
		return UCompressedImageSequenceProtocol::StaticClass();
	}
	struct Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressionQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImageSequenceProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "ImageSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ToolTip", "Level of compression to apply to the image, between 1 (worst quality, best compression) and 100 (best quality, worst compression)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::NewProp_CompressionQuality = { UE4CodeGen_Private::EPropertyClass::Int, "CompressionQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UCompressedImageSequenceProtocol, CompressionQuality), METADATA_PARAMS(Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::NewProp_CompressionQuality_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::NewProp_CompressionQuality_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::NewProp_CompressionQuality,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompressedImageSequenceProtocol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::ClassParams = {
		&UCompressedImageSequenceProtocol::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001004A5u,
		nullptr, 0,
		Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::PropPointers),
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompressedImageSequenceProtocol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCompressedImageSequenceProtocol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCompressedImageSequenceProtocol, 3434695393);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCompressedImageSequenceProtocol(Z_Construct_UClass_UCompressedImageSequenceProtocol, &UCompressedImageSequenceProtocol::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UCompressedImageSequenceProtocol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompressedImageSequenceProtocol);
	void UImageSequenceProtocol_BMP::StaticRegisterNativesUImageSequenceProtocol_BMP()
	{
	}
	UClass* Z_Construct_UClass_UImageSequenceProtocol_BMP_NoRegister()
	{
		return UImageSequenceProtocol_BMP::StaticClass();
	}
	struct Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImageSequenceProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "BMP" },
		{ "DisplayName", "Image Sequence (bmp)" },
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSequenceProtocol_BMP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::ClassParams = {
		&UImageSequenceProtocol_BMP::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001004A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageSequenceProtocol_BMP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImageSequenceProtocol_BMP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImageSequenceProtocol_BMP, 3536197500);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImageSequenceProtocol_BMP(Z_Construct_UClass_UImageSequenceProtocol_BMP, &UImageSequenceProtocol_BMP::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UImageSequenceProtocol_BMP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSequenceProtocol_BMP);
	void UImageSequenceProtocol_PNG::StaticRegisterNativesUImageSequenceProtocol_PNG()
	{
	}
	UClass* Z_Construct_UClass_UImageSequenceProtocol_PNG_NoRegister()
	{
		return UImageSequenceProtocol_PNG::StaticClass();
	}
	struct Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompressedImageSequenceProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "PNG" },
		{ "DisplayName", "Image Sequence (png)" },
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSequenceProtocol_PNG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::ClassParams = {
		&UImageSequenceProtocol_PNG::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001004A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageSequenceProtocol_PNG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImageSequenceProtocol_PNG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImageSequenceProtocol_PNG, 58097422);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImageSequenceProtocol_PNG(Z_Construct_UClass_UImageSequenceProtocol_PNG, &UImageSequenceProtocol_PNG::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UImageSequenceProtocol_PNG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSequenceProtocol_PNG);
	void UImageSequenceProtocol_JPG::StaticRegisterNativesUImageSequenceProtocol_JPG()
	{
	}
	UClass* Z_Construct_UClass_UImageSequenceProtocol_JPG_NoRegister()
	{
		return UImageSequenceProtocol_JPG::StaticClass();
	}
	struct Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompressedImageSequenceProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "JPG" },
		{ "DisplayName", "Image Sequence (jpg)" },
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSequenceProtocol_JPG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::ClassParams = {
		&UImageSequenceProtocol_JPG::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001004A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageSequenceProtocol_JPG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImageSequenceProtocol_JPG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImageSequenceProtocol_JPG, 4170668756);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImageSequenceProtocol_JPG(Z_Construct_UClass_UImageSequenceProtocol_JPG, &UImageSequenceProtocol_JPG::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UImageSequenceProtocol_JPG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSequenceProtocol_JPG);
	void UImageSequenceProtocol_EXR::StaticRegisterNativesUImageSequenceProtocol_EXR()
	{
	}
	UClass* Z_Construct_UClass_UImageSequenceProtocol_EXR_NoRegister()
	{
		return UImageSequenceProtocol_EXR::StaticClass();
	}
	struct Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureGamut_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CaptureGamut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompressed_MetaData[];
#endif
		static void NewProp_bCompressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImageSequenceProtocol,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::Class_MetaDataParams[] = {
		{ "CommandLineID", "EXR" },
		{ "DisplayName", "Image Sequence (exr)" },
		{ "IncludePath", "Protocols/ImageSequenceProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_CaptureGamut_MetaData[] = {
		{ "Category", "ImageSettings" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ToolTip", "The color gamut to use when storing HDR captured data." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_CaptureGamut = { UE4CodeGen_Private::EPropertyClass::Byte, "CaptureGamut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UImageSequenceProtocol_EXR, CaptureGamut), Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut, METADATA_PARAMS(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_CaptureGamut_MetaData, ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_CaptureGamut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed_MetaData[] = {
		{ "Category", "ImageSettings" },
		{ "ModuleRelativePath", "Public/Protocols/ImageSequenceProtocol.h" },
		{ "ToolTip", "Whether to write out compressed or uncompressed EXRs" },
	};
#endif
	void Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed_SetBit(void* Obj)
	{
		((UImageSequenceProtocol_EXR*)Obj)->bCompressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed = { UE4CodeGen_Private::EPropertyClass::Bool, "bCompressed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UImageSequenceProtocol_EXR), &Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_CaptureGamut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::NewProp_bCompressed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSequenceProtocol_EXR>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::ClassParams = {
		&UImageSequenceProtocol_EXR::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001004A4u,
		nullptr, 0,
		Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::PropPointers),
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageSequenceProtocol_EXR()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImageSequenceProtocol_EXR_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImageSequenceProtocol_EXR, 622278957);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImageSequenceProtocol_EXR(Z_Construct_UClass_UImageSequenceProtocol_EXR, &UImageSequenceProtocol_EXR::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("UImageSequenceProtocol_EXR"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSequenceProtocol_EXR);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
