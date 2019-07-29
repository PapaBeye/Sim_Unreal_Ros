// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Widgets/Notifications/SProgressBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSProgressBar() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EProgressBarFillType();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	static UEnum* EProgressBarFillType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EProgressBarFillType, Z_Construct_UPackage__Script_Slate(), TEXT("EProgressBarFillType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProgressBarFillType(EProgressBarFillType_StaticEnum, TEXT("/Script/Slate"), TEXT("EProgressBarFillType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_EProgressBarFillType_CRC() { return 1867745929U; }
	UEnum* Z_Construct_UEnum_Slate_EProgressBarFillType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProgressBarFillType"), 0, Get_Z_Construct_UEnum_Slate_EProgressBarFillType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EProgressBarFillType::LeftToRight", (int64)EProgressBarFillType::LeftToRight },
				{ "EProgressBarFillType::RightToLeft", (int64)EProgressBarFillType::RightToLeft },
				{ "EProgressBarFillType::FillFromCenter", (int64)EProgressBarFillType::FillFromCenter },
				{ "EProgressBarFillType::TopToBottom", (int64)EProgressBarFillType::TopToBottom },
				{ "EProgressBarFillType::BottomToTop", (int64)EProgressBarFillType::BottomToTop },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BottomToTop.ToolTip", "will fill up from the bottom to the the top" },
				{ "FillFromCenter.ToolTip", "will fill up from the center to the outer edges" },
				{ "LeftToRight.ToolTip", "will fill up from the left side to the right" },
				{ "ModuleRelativePath", "Public/Widgets/Notifications/SProgressBar.h" },
				{ "RightToLeft.ToolTip", "will fill up from the right side to the left side" },
				{ "ToolTip", "SProgressBar Fill Type" },
				{ "TopToBottom.ToolTip", "will fill up from the top to the the bottom" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EProgressBarFillType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EProgressBarFillType::Type",
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
