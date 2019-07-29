// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/SubUVAnimation.h"
#include "Serialization/StructuredArchiveFromArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubUVAnimation() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOpacitySourceMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount();
	ENGINE_API UClass* Z_Construct_UClass_USubUVAnimation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USubUVAnimation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* EOpacitySourceMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EOpacitySourceMode, Z_Construct_UPackage__Script_Engine(), TEXT("EOpacitySourceMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOpacitySourceMode(EOpacitySourceMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EOpacitySourceMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EOpacitySourceMode_CRC() { return 1313103500U; }
	UEnum* Z_Construct_UEnum_Engine_EOpacitySourceMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOpacitySourceMode"), 0, Get_Z_Construct_UEnum_Engine_EOpacitySourceMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "OSM_Alpha", (int64)OSM_Alpha },
				{ "OSM_ColorBrightness", (int64)OSM_ColorBrightness },
				{ "OSM_RedChannel", (int64)OSM_RedChannel },
				{ "OSM_GreenChannel", (int64)OSM_GreenChannel },
				{ "OSM_BlueChannel", (int64)OSM_BlueChannel },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EOpacitySourceMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EOpacitySourceMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESubUVBoundingVertexCount_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount, Z_Construct_UPackage__Script_Engine(), TEXT("ESubUVBoundingVertexCount"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubUVBoundingVertexCount(ESubUVBoundingVertexCount_StaticEnum, TEXT("/Script/Engine"), TEXT("ESubUVBoundingVertexCount"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount_CRC() { return 3600770676U; }
	UEnum* Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubUVBoundingVertexCount"), 0, Get_Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BVC_FourVertices", (int64)BVC_FourVertices },
				{ "BVC_EightVertices", (int64)BVC_EightVertices },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
				{ "ToolTip", "More bounding vertices results in reduced overdraw, but adds more triangle overhead.\nThe eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\nand when the particles using the texture will be few and large." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESubUVBoundingVertexCount",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESubUVBoundingVertexCount",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USubUVAnimation::StaticRegisterNativesUSubUVAnimation()
	{
	}
	UClass* Z_Construct_UClass_USubUVAnimation_NoRegister()
	{
		return USubUVAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USubUVAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacitySourceMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpacitySourceMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImages_Vertical_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubImages_Vertical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImages_Horizontal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubImages_Horizontal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubUVTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubUVTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubUVAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimation_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object" },
		{ "IncludePath", "Particles/SubUVAnimation.h" },
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
		{ "SerializeToFStructuredArchive", "" },
		{ "ToolTip", "SubUV animation asset, which caches bounding geometry for regions in the SubUVTexture with non-zero opacity.\nParticle emitters with a SubUV module which use this asset leverage the optimal bounding geometry to reduce overdraw." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimation_Statics::NewProp_AlphaThreshold_MetaData[] = {
		{ "Category", "SubUV" },
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
		{ "ToolTip", "Alpha channel values larger than the threshold are considered occupied and will be contained in the bounding geometry.\nRaising this threshold slightly can reduce overdraw in particles using this animation asset." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USubUVAnimation_Statics::NewProp_AlphaThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "AlphaThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USubUVAnimation, AlphaThreshold), METADATA_PARAMS(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_AlphaThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_AlphaThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimation_Statics::NewProp_OpacitySourceMode_MetaData[] = {
		{ "Category", "SubUV" },
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubUVAnimation_Statics::NewProp_OpacitySourceMode = { UE4CodeGen_Private::EPropertyClass::Byte, "OpacitySourceMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USubUVAnimation, OpacitySourceMode), Z_Construct_UEnum_Engine_EOpacitySourceMode, METADATA_PARAMS(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_OpacitySourceMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_OpacitySourceMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimation_Statics::NewProp_BoundingMode_MetaData[] = {
		{ "Category", "SubUV" },
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
		{ "ToolTip", "More bounding vertices results in reduced overdraw, but adds more triangle overhead.\nThe eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\nand when the particles using the texture will be few and large." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubUVAnimation_Statics::NewProp_BoundingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "BoundingMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USubUVAnimation, BoundingMode), Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount, METADATA_PARAMS(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_BoundingMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_BoundingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Vertical_MetaData[] = {
		{ "Category", "SubUV" },
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
		{ "ToolTip", "The number of sub-images vertically in the texture" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Vertical = { UE4CodeGen_Private::EPropertyClass::Int, "SubImages_Vertical", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USubUVAnimation, SubImages_Vertical), METADATA_PARAMS(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Vertical_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Vertical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Horizontal_MetaData[] = {
		{ "Category", "SubUV" },
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
		{ "ToolTip", "The number of sub-images horizontally in the texture" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Horizontal = { UE4CodeGen_Private::EPropertyClass::Int, "SubImages_Horizontal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USubUVAnimation, SubImages_Horizontal), METADATA_PARAMS(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Horizontal_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Horizontal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubUVTexture_MetaData[] = {
		{ "Category", "SubUV" },
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
		{ "ToolTip", "Texture to generate bounding geometry from." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubUVTexture = { UE4CodeGen_Private::EPropertyClass::Object, "SubUVTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USubUVAnimation, SubUVTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubUVTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubUVTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubUVAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubUVAnimation_Statics::NewProp_AlphaThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubUVAnimation_Statics::NewProp_OpacitySourceMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubUVAnimation_Statics::NewProp_BoundingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Vertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Horizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubUVTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubUVAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubUVAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubUVAnimation_Statics::ClassParams = {
		&USubUVAnimation::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_USubUVAnimation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USubUVAnimation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubUVAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubUVAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubUVAnimation, 1290211254);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubUVAnimation(Z_Construct_UClass_USubUVAnimation, &USubUVAnimation::StaticClass, TEXT("/Script/Engine"), TEXT("USubUVAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubUVAnimation);
	IMPLEMENT_FARCHIVE_SERIALIZER(USubUVAnimation)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
