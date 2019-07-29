// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoreUObject/Public/UObject/CoreOnline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreOnline() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdWrapper();
	UPackage* Z_Construct_UPackage__Script_CoreUObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FJoinabilitySettings();
// End Cross Module References
	struct Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics
	{
		struct FUniqueNetIdWrapper
		{
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
	};
#endif
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
		nullptr,
		nullptr,
		"UniqueNetIdWrapper",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		sizeof(FUniqueNetIdWrapper),
		alignof(FUniqueNetIdWrapper),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdWrapper()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUniqueNetIdWrapper_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CoreUObject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UniqueNetIdWrapper"), sizeof(Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::FUniqueNetIdWrapper), Get_Z_Construct_UScriptStruct_FUniqueNetIdWrapper_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUniqueNetIdWrapper_CRC() { return 1964108760U; }
	struct Z_Construct_UScriptStruct_FJoinabilitySettings_Statics
	{
		struct FJoinabilitySettings
		{
			FName SessionName;
			bool bPublicSearchable;
			bool bAllowInvites;
			bool bJoinViaPresence;
			bool bJoinViaPresenceFriendsOnly;
			int32 MaxPlayers;
			int32 MaxPartySize;
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPartySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPartySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bJoinViaPresenceFriendsOnly_MetaData[];
#endif
		static void NewProp_bJoinViaPresenceFriendsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJoinViaPresenceFriendsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bJoinViaPresence_MetaData[];
#endif
		static void NewProp_bJoinViaPresence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJoinViaPresence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowInvites_MetaData[];
#endif
		static void NewProp_bAllowInvites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPublicSearchable_MetaData[];
#endif
		static void NewProp_bPublicSearchable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPublicSearchable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
		{ "ToolTip", "Circular dependency on Core vs UHT means we have to noexport these structs so tools can build" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPartySize_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
		{ "ToolTip", "Current max party size in this session" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPartySize = { UE4CodeGen_Private::EPropertyClass::Int, "MaxPartySize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FJoinabilitySettings, MaxPartySize), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPartySize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPartySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
		{ "ToolTip", "Current max players in this session" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPlayers = { UE4CodeGen_Private::EPropertyClass::Int, "MaxPlayers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FJoinabilitySettings, MaxPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPlayers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
		{ "ToolTip", "Does this session allow friends to join via presence" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly_SetBit(void* Obj)
	{
		((FJoinabilitySettings*)Obj)->bJoinViaPresenceFriendsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bJoinViaPresenceFriendsOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FJoinabilitySettings), &Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
		{ "ToolTip", "Does this session allow public join via presence" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence_SetBit(void* Obj)
	{
		((FJoinabilitySettings*)Obj)->bJoinViaPresence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence = { UE4CodeGen_Private::EPropertyClass::Bool, "bJoinViaPresence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FJoinabilitySettings), &Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
		{ "ToolTip", "Does this session allow invites" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((FJoinabilitySettings*)Obj)->bAllowInvites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowInvites", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FJoinabilitySettings), &Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
		{ "ToolTip", "Is this session now publicly searchable" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable_SetBit(void* Obj)
	{
		((FJoinabilitySettings*)Obj)->bPublicSearchable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable = { UE4CodeGen_Private::EPropertyClass::Bool, "bPublicSearchable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FJoinabilitySettings), &Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_SessionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/UObject/CoreOnline.h" },
		{ "ToolTip", "Name of session these settings affect" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_SessionName = { UE4CodeGen_Private::EPropertyClass::Name, "SessionName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FJoinabilitySettings, SessionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_SessionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_SessionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPartySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_SessionName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CoreUObject,
		nullptr,
		nullptr,
		"JoinabilitySettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		sizeof(FJoinabilitySettings),
		alignof(FJoinabilitySettings),
		Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJoinabilitySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJoinabilitySettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_CoreUObject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JoinabilitySettings"), sizeof(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::FJoinabilitySettings), Get_Z_Construct_UScriptStruct_FJoinabilitySettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJoinabilitySettings_CRC() { return 327820166U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
