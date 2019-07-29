// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/GameSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSession() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameSession_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameSession();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AGameSession::StaticRegisterNativesAGameSession()
	{
	}
	UClass* Z_Construct_UClass_AGameSession_NoRegister()
	{
		return AGameSession::StaticClass();
	}
	struct Z_Construct_UClass_AGameSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SessionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresPushToTalk_MetaData[];
#endif
		static void NewProp_bRequiresPushToTalk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresPushToTalk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSplitscreensPerConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxSplitscreensPerConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPartySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPartySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpectators_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSpectators;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSession_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameFramework/GameSession.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Acts as a game-specific wrapper around the session interface. The game code makes calls to this when it needs to interact with the session interface.\nA game session exists only the server, while running an online game." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSession_Statics::NewProp_SessionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
		{ "ToolTip", "SessionName local copy from PlayerState class.  should really be define in this class, but need to address replication issues" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameSession_Statics::NewProp_SessionName = { UE4CodeGen_Private::EPropertyClass::Name, "SessionName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AGameSession, SessionName), METADATA_PARAMS(Z_Construct_UClass_AGameSession_Statics::NewProp_SessionName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::NewProp_SessionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSession_Statics::NewProp_bRequiresPushToTalk_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
		{ "ToolTip", "Is voice enabled always or via a push to talk keybinding" },
	};
#endif
	void Z_Construct_UClass_AGameSession_Statics::NewProp_bRequiresPushToTalk_SetBit(void* Obj)
	{
		((AGameSession*)Obj)->bRequiresPushToTalk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameSession_Statics::NewProp_bRequiresPushToTalk = { UE4CodeGen_Private::EPropertyClass::Bool, "bRequiresPushToTalk", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AGameSession), &Z_Construct_UClass_AGameSession_Statics::NewProp_bRequiresPushToTalk_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameSession_Statics::NewProp_bRequiresPushToTalk_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::NewProp_bRequiresPushToTalk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSplitscreensPerConnection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
		{ "ToolTip", "Maximum number of splitscreen players to allow from one connection" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSplitscreensPerConnection = { UE4CodeGen_Private::EPropertyClass::Byte, "MaxSplitscreensPerConnection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameSession, MaxSplitscreensPerConnection), nullptr, METADATA_PARAMS(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSplitscreensPerConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSplitscreensPerConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPartySize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
		{ "ToolTip", "Restrictions on the largest party that can join together" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPartySize = { UE4CodeGen_Private::EPropertyClass::Int, "MaxPartySize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AGameSession, MaxPartySize), METADATA_PARAMS(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPartySize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPartySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
		{ "ToolTip", "Maximum number of players allowed by this server." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPlayers = { UE4CodeGen_Private::EPropertyClass::Int, "MaxPlayers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameSession, MaxPlayers), METADATA_PARAMS(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPlayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSpectators_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameSession.h" },
		{ "ToolTip", "Maximum number of spectators allowed by this server." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSpectators = { UE4CodeGen_Private::EPropertyClass::Int, "MaxSpectators", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044000, 1, nullptr, STRUCT_OFFSET(AGameSession, MaxSpectators), METADATA_PARAMS(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSpectators_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSpectators_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSession_Statics::NewProp_SessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSession_Statics::NewProp_bRequiresPushToTalk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSplitscreensPerConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPartySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSession_Statics::NewProp_MaxPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameSession_Statics::NewProp_MaxSpectators,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameSession_Statics::ClassParams = {
		&AGameSession::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		nullptr, 0,
		Z_Construct_UClass_AGameSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGameSession_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameSession, 4221170753);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameSession(Z_Construct_UClass_AGameSession, &AGameSession::StaticClass, TEXT("/Script/Engine"), TEXT("AGameSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
