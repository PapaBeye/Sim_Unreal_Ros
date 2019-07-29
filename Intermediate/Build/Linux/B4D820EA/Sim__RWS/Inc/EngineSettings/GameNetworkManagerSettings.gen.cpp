// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineSettings/Classes/GameNetworkManagerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameNetworkManagerSettings() {}
// Cross Module References
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameNetworkManagerSettings_NoRegister();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGameNetworkManagerSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References
	void UGameNetworkManagerSettings::StaticRegisterNativesUGameNetworkManagerSettings()
	{
	}
	UClass* Z_Construct_UClass_UGameNetworkManagerSettings_NoRegister()
	{
		return UGameNetworkManagerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameNetworkManagerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressStandbyWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JoinInProgressStandbyWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentForBadPing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentForBadPing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForTxStandby_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForTxStandby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForRxStandby_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForRxStandby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandbyTxCheatTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandbyTxCheatTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandbyRxCheatTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandbyRxCheatTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStandbyCheckingEnabled_MetaData[];
#endif
		static void NewProp_bIsStandbyCheckingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStandbyCheckingEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadPingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BadPingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNetBandwidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNetBandwidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDynamicBandwidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDynamicBandwidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDynamicBandwidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinDynamicBandwidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameNetworkManagerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameNetworkManagerSettings.h" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Holds the settings for the AGameNetworkManager class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The amount of time to wait before checking a connection for standby issues." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime = { UE4CodeGen_Private::EPropertyClass::Float, "JoinInProgressStandbyWaitTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, JoinInProgressStandbyWaitTime), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The percentage of clients with bad ping before triggering the standby code." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing = { UE4CodeGen_Private::EPropertyClass::Float, "PercentForBadPing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, PercentForBadPing), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The percentage of clients missing TX data before triggering the standby code." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby = { UE4CodeGen_Private::EPropertyClass::Float, "PercentMissingForTxStandby", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, PercentMissingForTxStandby), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The percentage of clients missing RX data before triggering the standby code." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby = { UE4CodeGen_Private::EPropertyClass::Float, "PercentMissingForRxStandby", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, PercentMissingForRxStandby), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The amount of time without packets before triggering the cheat code." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime = { UE4CodeGen_Private::EPropertyClass::Float, "StandbyTxCheatTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, StandbyTxCheatTime), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The amount of time without packets before triggering the cheat code." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime = { UE4CodeGen_Private::EPropertyClass::Float, "StandbyRxCheatTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, StandbyRxCheatTime), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Used to determine if checking for standby cheats should occur." },
	};
#endif
	void Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_SetBit(void* Obj)
	{
		((UGameNetworkManagerSettings*)Obj)->bIsStandbyCheckingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsStandbyCheckingEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UGameNetworkManagerSettings), &Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold_MetaData[] = {
		{ "Category", "StandbyCheats" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "The point we determine the server is either delaying packets or has bad upstream." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold = { UE4CodeGen_Private::EPropertyClass::Int, "BadPingThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, BadPingThreshold), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth_MetaData[] = {
		{ "Category", "Bandwidth" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Total available bandwidth for listen server, split dynamically across net connections." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth = { UE4CodeGen_Private::EPropertyClass::Int, "TotalNetBandwidth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, TotalNetBandwidth), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth_MetaData[] = {
		{ "Category", "Bandwidth" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Maximum bandwidth dynamically set per connection." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth = { UE4CodeGen_Private::EPropertyClass::Int, "MaxDynamicBandwidth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, MaxDynamicBandwidth), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth_MetaData[] = {
		{ "Category", "Bandwidth" },
		{ "ModuleRelativePath", "Classes/GameNetworkManagerSettings.h" },
		{ "ToolTip", "Minimum bandwidth dynamically set per connection." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth = { UE4CodeGen_Private::EPropertyClass::Int, "MinDynamicBandwidth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000044001, 1, nullptr, STRUCT_OFFSET(UGameNetworkManagerSettings, MinDynamicBandwidth), METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameNetworkManagerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_JoinInProgressStandbyWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentForBadPing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForTxStandby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_PercentMissingForRxStandby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyTxCheatTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_StandbyRxCheatTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_bIsStandbyCheckingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_BadPingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_TotalNetBandwidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MaxDynamicBandwidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameNetworkManagerSettings_Statics::NewProp_MinDynamicBandwidth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameNetworkManagerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameNetworkManagerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameNetworkManagerSettings_Statics::ClassParams = {
		&UGameNetworkManagerSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A4u,
		nullptr, 0,
		Z_Construct_UClass_UGameNetworkManagerSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameNetworkManagerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameNetworkManagerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameNetworkManagerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameNetworkManagerSettings, 1124172046);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameNetworkManagerSettings(Z_Construct_UClass_UGameNetworkManagerSettings, &UGameNetworkManagerSettings::StaticClass, TEXT("/Script/EngineSettings"), TEXT("UGameNetworkManagerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameNetworkManagerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
