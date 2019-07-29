// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/PlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerState_GetPlayerName();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerState_OnRep_bIsInactive();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerState_OnRep_PlayerId();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerState_OnRep_PlayerName();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerState_OnRep_Score();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerState_OnRep_UniqueId();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerState_ReceiveCopyProperties();
	ENGINE_API UFunction* Z_Construct_UFunction_APlayerState_ReceiveOverrideWith();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FName NAME_APlayerState_ReceiveCopyProperties = FName(TEXT("ReceiveCopyProperties"));
	void APlayerState::ReceiveCopyProperties(APlayerState* NewPlayerState)
	{
		PlayerState_eventReceiveCopyProperties_Parms Parms;
		Parms.NewPlayerState=NewPlayerState;
		ProcessEvent(FindFunctionChecked(NAME_APlayerState_ReceiveCopyProperties),&Parms);
	}
	static FName NAME_APlayerState_ReceiveOverrideWith = FName(TEXT("ReceiveOverrideWith"));
	void APlayerState::ReceiveOverrideWith(APlayerState* OldPlayerState)
	{
		PlayerState_eventReceiveOverrideWith_Parms Parms;
		Parms.OldPlayerState=OldPlayerState;
		ProcessEvent(FindFunctionChecked(NAME_APlayerState_ReceiveOverrideWith),&Parms);
	}
	void APlayerState::StaticRegisterNativesAPlayerState()
	{
		UClass* Class = APlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerName", &APlayerState::execGetPlayerName },
			{ "OnRep_bIsInactive", &APlayerState::execOnRep_bIsInactive },
			{ "OnRep_PlayerId", &APlayerState::execOnRep_PlayerId },
			{ "OnRep_PlayerName", &APlayerState::execOnRep_PlayerName },
			{ "OnRep_Score", &APlayerState::execOnRep_Score },
			{ "OnRep_UniqueId", &APlayerState::execOnRep_UniqueId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerState_GetPlayerName_Statics
	{
		struct PlayerState_eventGetPlayerName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PlayerState_eventGetPlayerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "returns current player name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, "GetPlayerName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PlayerState_eventGetPlayerName_Parms), Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_GetPlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, "OnRep_bIsInactive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_bIsInactive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, "OnRep_PlayerId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_PlayerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, "OnRep_PlayerName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_PlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnRep_Score_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnRep_Score_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Replication Notification Callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnRep_Score_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, "OnRep_Score", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnRep_Score_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnRep_Score_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_Score()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_OnRep_Score_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, "OnRep_UniqueId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_UniqueId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::NewProp_NewPlayerState = { UE4CodeGen_Private::EPropertyClass::Object, "NewPlayerState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerState_eventReceiveCopyProperties_Parms, NewPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::NewProp_NewPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "DisplayName", "CopyProperties" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "* Can be implemented in Blueprint Child to move more properties from old to new PlayerState when traveling to a new level\n*\n* @param NewPlayerState         New PlayerState, which we fill with the current properties" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, "ReceiveCopyProperties", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(PlayerState_eventReceiveCopyProperties_Parms), Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_ReceiveCopyProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::NewProp_OldPlayerState = { UE4CodeGen_Private::EPropertyClass::Object, "OldPlayerState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PlayerState_eventReceiveOverrideWith_Parms, OldPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::NewProp_OldPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "DisplayName", "OverrideWith" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "* Can be implemented in Blueprint Child to move more properties from old to new PlayerState when reconnecting\n*\n* @param OldPlayerState         Old PlayerState, which we use to fill the new one with" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, "ReceiveOverrideWith", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(PlayerState_eventReceiveOverrideWith_Parms), Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_ReceiveOverrideWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerState_NoRegister()
	{
		return APlayerState::StaticClass();
	}
	struct Z_Construct_UClass_APlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerNamePrivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerNamePrivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnPrivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnPrivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedNetworkAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SavedNetworkAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineMessageClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EngineMessageClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFromPreviousLevel_MetaData[];
#endif
		static void NewProp_bFromPreviousLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromPreviousLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInactive_MetaData[];
#endif
		static void NewProp_bIsInactive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInactive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsABot_MetaData[];
#endif
		static void NewProp_bIsABot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsABot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlySpectator_MetaData[];
#endif
		static void NewProp_bOnlySpectator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlySpectator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSpectator_MetaData[];
#endif
		static void NewProp_bIsSpectator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSpectator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldUpdateReplicatedPing_MetaData[];
#endif
		static void NewProp_bShouldUpdateReplicatedPing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldUpdateReplicatedPing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ping_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Ping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerState_GetPlayerName, "GetPlayerName" }, // 1840815437
		{ &Z_Construct_UFunction_APlayerState_OnRep_bIsInactive, "OnRep_bIsInactive" }, // 2471763163
		{ &Z_Construct_UFunction_APlayerState_OnRep_PlayerId, "OnRep_PlayerId" }, // 1085009460
		{ &Z_Construct_UFunction_APlayerState_OnRep_PlayerName, "OnRep_PlayerName" }, // 3735943609
		{ &Z_Construct_UFunction_APlayerState_OnRep_Score, "OnRep_Score" }, // 3852274477
		{ &Z_Construct_UFunction_APlayerState_OnRep_UniqueId, "OnRep_UniqueId" }, // 1492452318
		{ &Z_Construct_UFunction_APlayerState_ReceiveCopyProperties, "ReceiveCopyProperties" }, // 988296804
		{ &Z_Construct_UFunction_APlayerState_ReceiveOverrideWith, "ReceiveOverrideWith" }, // 1810208037
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameFramework/PlayerState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A PlayerState is created for every player on a server (or in a standalone game).\nPlayerStates are replicated to all clients, and contain network game relevant information about the player, such as playername, score, etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerNamePrivate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Player name, or blank if none." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerNamePrivate = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerNamePrivate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_PlayerName", STRUCT_OFFSET(APlayerState, PlayerNamePrivate), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerNamePrivate_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerNamePrivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_PawnPrivate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "The pawn that is controlled by by this player state." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_PawnPrivate = { UE4CodeGen_Private::EPropertyClass::Object, "PawnPrivate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000014, 1, nullptr, STRUCT_OFFSET(APlayerState, PawnPrivate), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_PawnPrivate_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_PawnPrivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_UniqueId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "The id used by the network to uniquely identify a player.\nNOTE: the internals of this property should *never* be exposed to the player as it's transient\nand opaque in meaning (ie it might mean date/time followed by something else).\nIt is OK to use and pass around this property, though." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_UniqueId = { UE4CodeGen_Private::EPropertyClass::Struct, "UniqueId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000100000020, 1, "OnRep_UniqueId", STRUCT_OFFSET(APlayerState, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_UniqueId_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_UniqueId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_SavedNetworkAddress_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Used to match up InactivePlayerState with rejoining playercontroller." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_SavedNetworkAddress = { UE4CodeGen_Private::EPropertyClass::Str, "SavedNetworkAddress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(APlayerState, SavedNetworkAddress), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_SavedNetworkAddress_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_SavedNetworkAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_EngineMessageClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "This is used for sending game agnostic messages that can be localized" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_EngineMessageClass = { UE4CodeGen_Private::EPropertyClass::Class, "EngineMessageClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(APlayerState, EngineMessageClass), Z_Construct_UClass_ULocalMessage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_EngineMessageClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_EngineMessageClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Elapsed time on server when this PlayerState was first created." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Int, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(APlayerState, StartTime), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_StartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "indicates this is a PlayerState from the previous level of a seamless travel,\nwaiting for the player to finish the transition before creating a new one\nthis is used to avoid preserving the PlayerState in the InactivePlayerArray if the player leaves" },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bFromPreviousLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromPreviousLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Means this PlayerState came from the GameMode's InactivePlayerArray" },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bIsInactive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsInactive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000100000020, 1, "OnRep_bIsInactive", sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot_MetaData[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "True if this PlayerState is associated with an AIController" },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bIsABot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsABot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000034, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Whether this player can only ever be a spectator" },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bOnlySpectator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlySpectator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator_MetaData[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Whether this player is currently a spectator" },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bIsSpectator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSpectator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000034, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing_MetaData[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Whether or not this player's replicated Ping value is updated automatically.\nSince player states are always relevant by default, in cases where there are many players replicating,\nreplicating the ping value can cause additional unnecessary overhead on servers if the value isn't\nneeded on clients." },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bShouldUpdateReplicatedPing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldUpdateReplicatedPing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_Ping_MetaData[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Replicated compressed ping for this player (holds ping in msec divided by 4)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_Ping = { UE4CodeGen_Private::EPropertyClass::Byte, "Ping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000034, 1, nullptr, STRUCT_OFFSET(APlayerState, Ping), nullptr, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_Ping_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_Ping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerId_MetaData[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Unique net id number. Actual value varies based on current online subsystem, use it only as a guaranteed unique number per player." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerId = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000100000034, 1, "OnRep_PlayerId", STRUCT_OFFSET(APlayerState, PlayerId), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerId_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerName = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(APlayerState, PlayerName), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerName_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Player's current score." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_Score = { UE4CodeGen_Private::EPropertyClass::Float, "Score", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000100000034, 1, "OnRep_Score", STRUCT_OFFSET(APlayerState, Score), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_Score_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_Score_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerNamePrivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_PawnPrivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_UniqueId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_SavedNetworkAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_EngineMessageClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_Ping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_Score,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerState_Statics::ClassParams = {
		&APlayerState::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APlayerState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerState, 594358199);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerState(Z_Construct_UClass_APlayerState, &APlayerState::StaticClass, TEXT("/Script/Engine"), TEXT("APlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
