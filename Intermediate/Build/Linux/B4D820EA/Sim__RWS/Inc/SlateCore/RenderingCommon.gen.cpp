// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Rendering/RenderingCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderingCommon() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EColorVisionDeficiency();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static UEnum* EColorVisionDeficiency_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EColorVisionDeficiency, Z_Construct_UPackage__Script_SlateCore(), TEXT("EColorVisionDeficiency"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EColorVisionDeficiency(EColorVisionDeficiency_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EColorVisionDeficiency"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EColorVisionDeficiency_CRC() { return 1069585026U; }
	UEnum* Z_Construct_UEnum_SlateCore_EColorVisionDeficiency()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EColorVisionDeficiency"), 0, Get_Z_Construct_UEnum_SlateCore_EColorVisionDeficiency_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EColorVisionDeficiency::NormalVision", (int64)EColorVisionDeficiency::NormalVision },
				{ "EColorVisionDeficiency::Deuteranope", (int64)EColorVisionDeficiency::Deuteranope },
				{ "EColorVisionDeficiency::Protanope", (int64)EColorVisionDeficiency::Protanope },
				{ "EColorVisionDeficiency::Tritanope", (int64)EColorVisionDeficiency::Tritanope },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Deuteranope.DisplayName", "Deuteranope (green weak/blind) (7% of males, 0.4% of females)" },
				{ "ModuleRelativePath", "Public/Rendering/RenderingCommon.h" },
				{ "NormalVision.DisplayName", "Normal Vision" },
				{ "Protanope.DisplayName", "Protanope (red weak/blind) (2% of males, 0.01% of females)" },
				{ "ToolTip", "Enumerates color vision deficiency types." },
				{ "Tritanope.DisplayName", "Tritanope (blue weak/bind) (0.0003% of males)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EColorVisionDeficiency",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EColorVisionDeficiency",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
