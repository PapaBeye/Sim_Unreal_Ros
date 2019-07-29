// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTarget2D() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	static UEnum* ETextureRenderTargetFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureRenderTargetFormat"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureRenderTargetFormat(ETextureRenderTargetFormat_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureRenderTargetFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_CRC() { return 1754475714U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureRenderTargetFormat"), 0, Get_Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "RTF_R8", (int64)RTF_R8 },
				{ "RTF_RG8", (int64)RTF_RG8 },
				{ "RTF_RGBA8", (int64)RTF_RGBA8 },
				{ "RTF_R16f", (int64)RTF_R16f },
				{ "RTF_RG16f", (int64)RTF_RG16f },
				{ "RTF_RGBA16f", (int64)RTF_RGBA16f },
				{ "RTF_R32f", (int64)RTF_R32f },
				{ "RTF_RG32f", (int64)RTF_RG32f },
				{ "RTF_RGBA32f", (int64)RTF_RGBA32f },
				{ "RTF_RGB10A2", (int64)RTF_RGB10A2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
				{ "RTF_R16f.ToolTip", "R channel, 16 bit per channel floating point, range [-65504, 65504]" },
				{ "RTF_R32f.ToolTip", "R channel, 32 bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38]" },
				{ "RTF_R8.ToolTip", "R channel, 8 bit per channel fixed point, range [0, 1]." },
				{ "RTF_RG16f.ToolTip", "RG channels, 16 bit per channel floating point, range [-65504, 65504]" },
				{ "RTF_RG32f.ToolTip", "RG channels, 32 bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38]" },
				{ "RTF_RG8.ToolTip", "RG channels, 8 bit per channel fixed point, range [0, 1]." },
				{ "RTF_RGB10A2.ToolTip", "RGBA channels, 10 bit per channel fixed point and 2 bit of alpha" },
				{ "RTF_RGBA16f.ToolTip", "RGBA channels, 16 bit per channel floating point, range [-65504, 65504]" },
				{ "RTF_RGBA32f.ToolTip", "RGBA channels, 32 bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38]" },
				{ "RTF_RGBA8.ToolTip", "RGBA channels, 8 bit per channel fixed point, range [0, 1]." },
				{ "ToolTip", "Subset of EPixelFormat exposed to UTextureRenderTarget2D" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETextureRenderTargetFormat",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ETextureRenderTargetFormat",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UTextureRenderTarget2D::StaticRegisterNativesUTextureRenderTarget2D()
	{
	}
	UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister()
	{
		return UTextureRenderTarget2D::StaticClass();
	}
	struct Z_Construct_UClass_UTextureRenderTarget2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverrideFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTargetFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RenderTargetFormat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoGenerateMips_MetaData[];
#endif
		static void NewProp_bAutoGenerateMips_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoGenerateMips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGPUSharedFlag_MetaData[];
#endif
		static void NewProp_bGPUSharedFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGPUSharedFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHDR_MetaData[];
#endif
		static void NewProp_bHDR_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHDR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceLinearGamma_MetaData[];
#endif
		static void NewProp_bForceLinearGamma_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceLinearGamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureRenderTarget2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureRenderTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Texture Compression Adjustments Compositing" },
		{ "IncludePath", "Engine/TextureRenderTarget2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "TextureRenderTarget2D\n\n2D render target texture resource. This can be used as a target\nfor rendering as well as rendered as a regular 2D texture resource." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_OverrideFormat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Normally the format is derived from RenderTargetFormat, this allows code to set the format explicitly." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_OverrideFormat = { UE4CodeGen_Private::EPropertyClass::Byte, "OverrideFormat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, OverrideFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_OverrideFormat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_OverrideFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_RenderTargetFormat_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Format of the texture render target.\nData written to the render target will be quantized to this format, which can limit the range and precision.\nThe largest format (RTF_RGBA32f) uses 16x more memory and bandwidth than the smallest (RTF_R8) and can greatly affect performance.\nUse the smallest format that has enough precision and range for what you are doing." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_RenderTargetFormat = { UE4CodeGen_Private::EPropertyClass::Byte, "RenderTargetFormat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000000015, 1, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, RenderTargetFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_RenderTargetFormat_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_RenderTargetFormat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Whether to support Mip maps for this render target texture" },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips_SetBit(void* Obj)
	{
		((UTextureRenderTarget2D*)Obj)->bAutoGenerateMips = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoGenerateMips", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTextureRenderTarget2D), &Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "DisplayName", "Shared" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Whether to support GPU sharing of the underlying native texture resource." },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag_SetBit(void* Obj)
	{
		((UTextureRenderTarget2D*)Obj)->bGPUSharedFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag = { UE4CodeGen_Private::EPropertyClass::Bool, "bGPUSharedFlag", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010050000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTextureRenderTarget2D), &Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Whether to support storing HDR values, which requires more memory." },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR_SetBit(void* Obj)
	{
		((UTextureRenderTarget2D*)Obj)->bHDR_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR = { UE4CodeGen_Private::EPropertyClass::Bool, "bHDR", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTextureRenderTarget2D), &Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "True to force linear gamma space for this render target" },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma_SetBit(void* Obj)
	{
		((UTextureRenderTarget2D*)Obj)->bForceLinearGamma = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceLinearGamma", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTextureRenderTarget2D), &Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressY = { UE4CodeGen_Private::EPropertyClass::Byte, "AddressY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000000005, 1, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressX = { UE4CodeGen_Private::EPropertyClass::Byte, "AddressX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000000005, 1, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_ClearColor_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "the color the texture is cleared to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_ClearColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ClearColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_ClearColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_ClearColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "The height of the texture." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeY = { UE4CodeGen_Private::EPropertyClass::Int, "SizeY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000000015, 1, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, SizeY), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "The width of the texture." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeX = { UE4CodeGen_Private::EPropertyClass::Int, "SizeX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000000015, 1, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, SizeX), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureRenderTarget2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_OverrideFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_RenderTargetFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_ClearColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureRenderTarget2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureRenderTarget2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::ClassParams = {
		&UTextureRenderTarget2D::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		nullptr, 0,
		Z_Construct_UClass_UTextureRenderTarget2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureRenderTarget2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextureRenderTarget2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureRenderTarget2D, 687898703);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureRenderTarget2D(Z_Construct_UClass_UTextureRenderTarget2D, &UTextureRenderTarget2D::StaticClass, TEXT("/Script/Engine"), TEXT("UTextureRenderTarget2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTarget2D);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTextureRenderTarget2D)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
