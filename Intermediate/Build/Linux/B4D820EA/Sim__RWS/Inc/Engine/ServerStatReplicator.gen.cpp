// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/ServerStatReplicator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerStatReplicator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AServerStatReplicator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AServerStatReplicator();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AServerStatReplicator::StaticRegisterNativesAServerStatReplicator()
	{
	}
	UClass* Z_Construct_UClass_AServerStatReplicator_NoRegister()
	{
		return AServerStatReplicator::StaticClass();
	}
	struct Z_Construct_UClass_AServerStatReplicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetSaturated_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetSaturated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetGUIDInRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetGUIDInRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetGUIDOutRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetGUIDOutRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjPathBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ObjPathBytes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumNetGUIDsUnAckd_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumNetGUIDsUnAckd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumNetGUIDsPending_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumNetGUIDsPending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumNetGUIDsAckd_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumNetGUIDsAckd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInitiallyDormantActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumInitiallyDormantActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDormantActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumDormantActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumNetActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumNetActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumReplicatedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumReplicatedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumReplicatedActorAttempts_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumReplicatedActorAttempts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumRelevantDeletedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumRelevantDeletedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumRelevantActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumRelevantActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrioritizedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PrioritizedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumConsideredActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumConsideredActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumActorChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumActorChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentOutVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PercentOutVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentInVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PercentInVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoicePacketsRecv_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_VoicePacketsRecv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoicePacketsSent_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_VoicePacketsSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceBytesRecv_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_VoiceBytesRecv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceBytesSent_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_VoiceBytesSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLoss_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InLoss;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutLoss_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutLoss;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutBunches_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutBunches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBunches_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InBunches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPackets_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutPackets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPackets_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InPackets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetNumClients_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetNumClients;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPacketsClientAvg_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutPacketsClientAvg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPacketsClientMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutPacketsClientMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPacketsClientMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutPacketsClientMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutRateClientAvg_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutRateClientAvg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutRateClientMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutRateClientMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutRateClientMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutRateClientMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPacketsClientAvg_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InPacketsClientAvg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPacketsClientMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InPacketsClientMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPacketsClientMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InPacketsClientMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRateClientAvg_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InRateClientAvg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRateClientMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InRateClientMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRateClientMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InRateClientMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPacketOverhead_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxPacketOverhead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutSaturation_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutSaturation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Channels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverwriteClientStats_MetaData[];
#endif
		static void NewProp_bOverwriteClientStats_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverwriteClientStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateStatNet_MetaData[];
#endif
		static void NewProp_bUpdateStatNet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateStatNet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AServerStatReplicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Engine/ServerStatReplicator.h" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Class used to replicate server \"stat net\" data over. For server only values, the client data is\nis overwritten when bUpdateStatNet == true. For data that both the client and server set, the server\ndata will only overwrite if bUpdateStatNet == true && bOverwriteClientStats == true." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetSaturated_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetSaturated = { UE4CodeGen_Private::EPropertyClass::UInt32, "NetSaturated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NetSaturated), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetSaturated_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetSaturated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDInRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDInRate = { UE4CodeGen_Private::EPropertyClass::UInt32, "NetGUIDInRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NetGUIDInRate), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDInRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDInRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDOutRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDOutRate = { UE4CodeGen_Private::EPropertyClass::UInt32, "NetGUIDOutRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NetGUIDOutRate), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDOutRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDOutRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_ObjPathBytes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_ObjPathBytes = { UE4CodeGen_Private::EPropertyClass::UInt32, "ObjPathBytes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, ObjPathBytes), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_ObjPathBytes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_ObjPathBytes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsUnAckd_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsUnAckd = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumNetGUIDsUnAckd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NumNetGUIDsUnAckd), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsUnAckd_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsUnAckd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsPending_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsPending = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumNetGUIDsPending", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NumNetGUIDsPending), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsPending_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsPending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsAckd_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsAckd = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumNetGUIDsAckd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NumNetGUIDsAckd), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsAckd_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsAckd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumInitiallyDormantActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumInitiallyDormantActors = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumInitiallyDormantActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NumInitiallyDormantActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumInitiallyDormantActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumInitiallyDormantActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumDormantActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumDormantActors = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumDormantActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NumDormantActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumDormantActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumDormantActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetActors = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumNetActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NumNetActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActors = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NumActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActors = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumReplicatedActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NumReplicatedActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActorAttempts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActorAttempts = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumReplicatedActorAttempts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NumReplicatedActorAttempts), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActorAttempts_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActorAttempts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantDeletedActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantDeletedActors = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumRelevantDeletedActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NumRelevantDeletedActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantDeletedActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantDeletedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantActors = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumRelevantActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NumRelevantActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PrioritizedActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PrioritizedActors = { UE4CodeGen_Private::EPropertyClass::UInt32, "PrioritizedActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, PrioritizedActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PrioritizedActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PrioritizedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumConsideredActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumConsideredActors = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumConsideredActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NumConsideredActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumConsideredActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumConsideredActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActorChannels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActorChannels = { UE4CodeGen_Private::EPropertyClass::UInt32, "NumActorChannels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NumActorChannels), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActorChannels_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActorChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentOutVoice_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentOutVoice = { UE4CodeGen_Private::EPropertyClass::UInt32, "PercentOutVoice", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, PercentOutVoice), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentOutVoice_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentOutVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentInVoice_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentInVoice = { UE4CodeGen_Private::EPropertyClass::UInt32, "PercentInVoice", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, PercentInVoice), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentInVoice_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentInVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsRecv_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsRecv = { UE4CodeGen_Private::EPropertyClass::UInt32, "VoicePacketsRecv", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, VoicePacketsRecv), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsRecv_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsRecv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsSent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsSent = { UE4CodeGen_Private::EPropertyClass::UInt32, "VoicePacketsSent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, VoicePacketsSent), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsSent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesRecv_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesRecv = { UE4CodeGen_Private::EPropertyClass::UInt32, "VoiceBytesRecv", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, VoiceBytesRecv), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesRecv_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesRecv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesSent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesSent = { UE4CodeGen_Private::EPropertyClass::UInt32, "VoiceBytesSent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, VoiceBytesSent), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesSent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InLoss_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InLoss = { UE4CodeGen_Private::EPropertyClass::UInt32, "InLoss", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, InLoss), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InLoss_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InLoss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutLoss_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutLoss = { UE4CodeGen_Private::EPropertyClass::UInt32, "OutLoss", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, OutLoss), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutLoss_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutLoss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutBunches_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutBunches = { UE4CodeGen_Private::EPropertyClass::UInt32, "OutBunches", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, OutBunches), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutBunches_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutBunches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InBunches_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InBunches = { UE4CodeGen_Private::EPropertyClass::UInt32, "InBunches", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, InBunches), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InBunches_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InBunches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPackets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPackets = { UE4CodeGen_Private::EPropertyClass::UInt32, "OutPackets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, OutPackets), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPackets_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPackets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPackets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPackets = { UE4CodeGen_Private::EPropertyClass::UInt32, "InPackets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, InPackets), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPackets_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPackets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetNumClients_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetNumClients = { UE4CodeGen_Private::EPropertyClass::UInt32, "NetNumClients", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, NetNumClients), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetNumClients_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetNumClients_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientAvg_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientAvg = { UE4CodeGen_Private::EPropertyClass::UInt32, "OutPacketsClientAvg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, OutPacketsClientAvg), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientAvg_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientAvg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMin = { UE4CodeGen_Private::EPropertyClass::UInt32, "OutPacketsClientMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, OutPacketsClientMin), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMax = { UE4CodeGen_Private::EPropertyClass::UInt32, "OutPacketsClientMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, OutPacketsClientMax), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientAvg_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientAvg = { UE4CodeGen_Private::EPropertyClass::UInt32, "OutRateClientAvg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, OutRateClientAvg), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientAvg_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientAvg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMin = { UE4CodeGen_Private::EPropertyClass::UInt32, "OutRateClientMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, OutRateClientMin), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMax = { UE4CodeGen_Private::EPropertyClass::UInt32, "OutRateClientMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, OutRateClientMax), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientAvg_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientAvg = { UE4CodeGen_Private::EPropertyClass::UInt32, "InPacketsClientAvg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, InPacketsClientAvg), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientAvg_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientAvg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMin = { UE4CodeGen_Private::EPropertyClass::UInt32, "InPacketsClientMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, InPacketsClientMin), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMax = { UE4CodeGen_Private::EPropertyClass::UInt32, "InPacketsClientMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, InPacketsClientMax), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientAvg_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientAvg = { UE4CodeGen_Private::EPropertyClass::UInt32, "InRateClientAvg", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, InRateClientAvg), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientAvg_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientAvg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMin = { UE4CodeGen_Private::EPropertyClass::UInt32, "InRateClientMin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, InRateClientMin), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMax = { UE4CodeGen_Private::EPropertyClass::UInt32, "InRateClientMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, InRateClientMax), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_MaxPacketOverhead_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_MaxPacketOverhead = { UE4CodeGen_Private::EPropertyClass::UInt32, "MaxPacketOverhead", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, MaxPacketOverhead), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_MaxPacketOverhead_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_MaxPacketOverhead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutSaturation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutSaturation = { UE4CodeGen_Private::EPropertyClass::UInt32, "OutSaturation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, OutSaturation), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutSaturation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutSaturation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRate = { UE4CodeGen_Private::EPropertyClass::UInt32, "OutRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, OutRate), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRate = { UE4CodeGen_Private::EPropertyClass::UInt32, "InRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, InRate), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_Channels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_Channels = { UE4CodeGen_Private::EPropertyClass::UInt32, "Channels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AServerStatReplicator, Channels), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_Channels_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_Channels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats_MetaData[] = {
		{ "Category", "ServerStats" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "Whether to overwrite client data stat net with data from the server or not" },
	};
#endif
	void Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats_SetBit(void* Obj)
	{
		((AServerStatReplicator*)Obj)->bOverwriteClientStats = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverwriteClientStats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AServerStatReplicator), &Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats_SetBit, METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet_MetaData[] = {
		{ "Category", "ServerStats" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "Whether to update stat net with data from the server or not" },
	};
#endif
	void Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet_SetBit(void* Obj)
	{
		((AServerStatReplicator*)Obj)->bUpdateStatNet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateStatNet", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AServerStatReplicator), &Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet_SetBit, METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet_MetaData, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AServerStatReplicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetSaturated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDInRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDOutRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_ObjPathBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsUnAckd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsPending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsAckd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumInitiallyDormantActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumDormantActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActorAttempts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantDeletedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PrioritizedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumConsideredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActorChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentOutVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentInVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsRecv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesRecv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InLoss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutLoss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutBunches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InBunches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPackets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPackets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetNumClients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientAvg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientAvg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientAvg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientAvg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_MaxPacketOverhead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutSaturation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_Channels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AServerStatReplicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AServerStatReplicator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AServerStatReplicator_Statics::ClassParams = {
		&AServerStatReplicator::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AServerStatReplicator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AServerStatReplicator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AServerStatReplicator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AServerStatReplicator, 1548661096);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AServerStatReplicator(Z_Construct_UClass_AServerStatReplicator, &AServerStatReplicator::StaticClass, TEXT("/Script/Engine"), TEXT("AServerStatReplicator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AServerStatReplicator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
