// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/Public/Widgets/Text/ISlateEditableTextWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISlateEditableTextWidget() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	static UEnum* EVirtualKeyboardDismissAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction, Z_Construct_UPackage__Script_Slate(), TEXT("EVirtualKeyboardDismissAction"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVirtualKeyboardDismissAction(EVirtualKeyboardDismissAction_StaticEnum, TEXT("/Script/Slate"), TEXT("EVirtualKeyboardDismissAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction_CRC() { return 132581084U; }
	UEnum* Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Slate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVirtualKeyboardDismissAction"), 0, Get_Z_Construct_UEnum_Slate_EVirtualKeyboardDismissAction_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVirtualKeyboardDismissAction::TextChangeOnDismiss", (int64)EVirtualKeyboardDismissAction::TextChangeOnDismiss },
				{ "EVirtualKeyboardDismissAction::TextCommitOnAccept", (int64)EVirtualKeyboardDismissAction::TextCommitOnAccept },
				{ "EVirtualKeyboardDismissAction::TextCommitOnDismiss", (int64)EVirtualKeyboardDismissAction::TextCommitOnDismiss },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Widgets/Text/ISlateEditableTextWidget.h" },
				{ "TextChangeOnDismiss.ToolTip", "Sends a text changed message when the virtual keyboard is dismissed by the user." },
				{ "TextCommitOnAccept.ToolTip", "Send a text commit message if the user dismisses the keyboard by accepting text. Send a text changed message if the user cancels the virtual keyboard." },
				{ "TextCommitOnDismiss.ToolTip", "Send a text commit message when the virtual keyboard is dismissed by the user." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Slate,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVirtualKeyboardDismissAction",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVirtualKeyboardDismissAction",
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
