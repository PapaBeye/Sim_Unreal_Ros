// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/EngineMessage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineMessage() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineMessage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineMessage();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UEngineMessage::StaticRegisterNativesUEngineMessage()
	{
	}
	UClass* Z_Construct_UClass_UEngineMessage_NoRegister()
	{
		return UEngineMessage::StaticClass();
	}
	struct Z_Construct_UClass_UEngineMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSpecMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewSpecMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPlayerMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewPlayerMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecEnteredMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpecEnteredMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalNameChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GlobalNameChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeftMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnteredMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnteredMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxedOutMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaxedOutMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailedPlaceMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FailedPlaceMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEngineMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalMessage,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFramework/EngineMessage.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewSpecMessage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a new spectator enters the server (if spectator is unnamed)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewSpecMessage = { UE4CodeGen_Private::EPropertyClass::Str, "NewSpecMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, NewSpecMessage), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewSpecMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewSpecMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewPlayerMessage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a new player enters the server (if player is unnamed)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewPlayerMessage = { UE4CodeGen_Private::EPropertyClass::Str, "NewPlayerMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, NewPlayerMessage), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewPlayerMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewPlayerMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_SpecEnteredMessage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a new spectator enters the server (if spectator has a player name)." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_SpecEnteredMessage = { UE4CodeGen_Private::EPropertyClass::Str, "SpecEnteredMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, SpecEnteredMessage), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_SpecEnteredMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_SpecEnteredMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_GlobalNameChange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a player changes his name." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_GlobalNameChange = { UE4CodeGen_Private::EPropertyClass::Str, "GlobalNameChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, GlobalNameChange), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_GlobalNameChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_GlobalNameChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_LeftMessage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a player leaves the game." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_LeftMessage = { UE4CodeGen_Private::EPropertyClass::Str, "LeftMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, LeftMessage), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_LeftMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_LeftMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_EnteredMessage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when a new player enters the game." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_EnteredMessage = { UE4CodeGen_Private::EPropertyClass::Str, "EnteredMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, EnteredMessage), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_EnteredMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_EnteredMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_MaxedOutMessage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message when player join attempt is refused because the server is at capacity." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_MaxedOutMessage = { UE4CodeGen_Private::EPropertyClass::Str, "MaxedOutMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, MaxedOutMessage), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_MaxedOutMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_MaxedOutMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineMessage_Statics::NewProp_FailedPlaceMessage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/EngineMessage.h" },
		{ "ToolTip", "Message displayed in message dialog when player pawn fails to spawn because no playerstart was available." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEngineMessage_Statics::NewProp_FailedPlaceMessage = { UE4CodeGen_Private::EPropertyClass::Str, "FailedPlaceMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UEngineMessage, FailedPlaceMessage), METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::NewProp_FailedPlaceMessage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::NewProp_FailedPlaceMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEngineMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewSpecMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_NewPlayerMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_SpecEnteredMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_GlobalNameChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_LeftMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_EnteredMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_MaxedOutMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEngineMessage_Statics::NewProp_FailedPlaceMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEngineMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineMessage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEngineMessage_Statics::ClassParams = {
		&UEngineMessage::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A1u,
		nullptr, 0,
		Z_Construct_UClass_UEngineMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEngineMessage_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEngineMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEngineMessage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEngineMessage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEngineMessage, 1212464057);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEngineMessage(Z_Construct_UClass_UEngineMessage, &UEngineMessage::StaticClass, TEXT("/Script/Engine"), TEXT("UEngineMessage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineMessage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
