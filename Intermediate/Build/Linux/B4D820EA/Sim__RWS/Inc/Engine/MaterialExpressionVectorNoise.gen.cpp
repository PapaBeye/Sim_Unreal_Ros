// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionVectorNoise.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVectorNoise() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVectorNoiseFunction();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorNoise_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorNoise();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* EVectorNoiseFunction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVectorNoiseFunction, Z_Construct_UPackage__Script_Engine(), TEXT("EVectorNoiseFunction"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVectorNoiseFunction(EVectorNoiseFunction_StaticEnum, TEXT("/Script/Engine"), TEXT("EVectorNoiseFunction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVectorNoiseFunction_CRC() { return 2855810463U; }
	UEnum* Z_Construct_UEnum_Engine_EVectorNoiseFunction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVectorNoiseFunction"), 0, Get_Z_Construct_UEnum_Engine_EVectorNoiseFunction_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VNF_CellnoiseALU", (int64)VNF_CellnoiseALU },
				{ "VNF_VectorALU", (int64)VNF_VectorALU },
				{ "VNF_GradientALU", (int64)VNF_GradientALU },
				{ "VNF_CurlALU", (int64)VNF_CurlALU },
				{ "VNF_VoronoiALU", (int64)VNF_VoronoiALU },
				{ "VNF_MAX", (int64)VNF_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
				{ "VNF_CellnoiseALU.DisplayName", "Cellnoise" },
				{ "VNF_CellnoiseALU.ToolTip", "Random color for each unit cell in 3D space.\nRGB output range 0 to 1\nR only = 9 instructions, RGB = 11 instructions" },
				{ "VNF_CurlALU.DisplayName", "Perlin Curl" },
				{ "VNF_CurlALU.ToolTip", "Curl of Perlin noise, useful for 3D flow directions.\nRGB = signed curl vector\n~162 instructions" },
				{ "VNF_GradientALU.DisplayName", "Perlin Gradient" },
				{ "VNF_GradientALU.ToolTip", "Gradient of Perlin noise, useful for bumps.\nRGB = Gradient of scalar noise (signed 3D vector)\nA = Base scalar noise with range -1 to 1\nA only = ~83 instructions, RGBA = ~106 instructions" },
				{ "VNF_VectorALU.DisplayName", "Perlin 3D Noise" },
				{ "VNF_VectorALU.ToolTip", "Perlin-style noise with 3D vector/color output.\nRGB output range -1 to 1\nR only = ~83 instructions, RGB = ~125 instructions" },
				{ "VNF_VoronoiALU.DisplayName", "Voronoi" },
				{ "VNF_VoronoiALU.ToolTip", "Also known as Worley or Cellular noise.\nRGB = *position* of closest point at center of Voronoi cell\nA = distance to closest point with range 0 to about 4\nQuality levels 1-4 search 8, 16, 27 & 32 cells\nAll ~20 instructions per cell searched" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVectorNoiseFunction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EVectorNoiseFunction",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionVectorNoise::StaticRegisterNativesUMaterialExpressionVectorNoise()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionVectorNoise_NoRegister()
	{
		return UMaterialExpressionVectorNoise::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTiling_MetaData[];
#endif
		static void NewProp_bTiling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseFunction_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NoiseFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionVectorNoise.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "MaterialExpressionVectorNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ToolTip", "How many units in each tile (if Tiling is on)\nFor Perlin noise functions, Tile Size must be a multiple of three" },
		{ "UIMin", "4" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_TileSize = { UE4CodeGen_Private::EPropertyClass::UInt32, "TileSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionVectorNoise, TileSize), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_TileSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling_MetaData[] = {
		{ "Category", "MaterialExpressionVectorNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ToolTip", "Whether tile the noise pattern, useful for baking to seam-free repeating textures" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling_SetBit(void* Obj)
	{
		((UMaterialExpressionVectorNoise*)Obj)->bTiling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling = { UE4CodeGen_Private::EPropertyClass::Bool, "bTiling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionVectorNoise), &Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Quality_MetaData[] = {
		{ "Category", "MaterialExpressionVectorNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ToolTip", "For noise functions where applicable, lower numbers are faster and lower quality, higher numbers are slower and higher quality" },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Quality = { UE4CodeGen_Private::EPropertyClass::Int, "Quality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionVectorNoise, Quality), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Quality_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Quality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_NoiseFunction_MetaData[] = {
		{ "Category", "MaterialExpressionVectorNoise" },
		{ "DisplayName", "Function" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ToolTip", "Noise function, affects performance and look" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_NoiseFunction = { UE4CodeGen_Private::EPropertyClass::Byte, "NoiseFunction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionVectorNoise, NoiseFunction), Z_Construct_UEnum_Engine_EVectorNoiseFunction, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_NoiseFunction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_NoiseFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ToolTip", "2 to 3 dimensional vector" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionVectorNoise, Position), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_TileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Quality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_NoiseFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Position,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVectorNoise>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::ClassParams = {
		&UMaterialExpressionVectorNoise::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionVectorNoise()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionVectorNoise, 1334383995);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionVectorNoise(Z_Construct_UClass_UMaterialExpressionVectorNoise, &UMaterialExpressionVectorNoise::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionVectorNoise"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVectorNoise);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
