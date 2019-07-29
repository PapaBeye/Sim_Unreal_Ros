// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundSourceBusSend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSourceBusSend() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSourceBusSendInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus_NoRegister();
// End Cross Module References
class UScriptStruct* FSoundSourceBusSendInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SoundSourceBusSendInfo"), sizeof(FSoundSourceBusSendInfo), Get_Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundSourceBusSendInfo(FSoundSourceBusSendInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundSourceBusSendInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundSourceBusSendInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundSourceBusSendInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundSourceBusSendInfo")),new UScriptStruct::TCppStructOps<FSoundSourceBusSendInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundSourceBusSendInfo;
	struct Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundSourceBus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundSourceBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSourceBusSendInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SoundSourceBus_MetaData[] = {
		{ "Category", "SourceBusSend" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "The source bus to send the audio to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SoundSourceBus = { UE4CodeGen_Private::EPropertyClass::Object, "SoundSourceBus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundSourceBusSendInfo, SoundSourceBus), Z_Construct_UClass_USoundSourceBus_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SoundSourceBus_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SoundSourceBus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SendLevel_MetaData[] = {
		{ "Category", "SourceBusSend" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBusSend.h" },
		{ "ToolTip", "The amount of audio to send to the source bus" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SendLevel = { UE4CodeGen_Private::EPropertyClass::Float, "SendLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSoundSourceBusSendInfo, SendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SendLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SendLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SoundSourceBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::NewProp_SendLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundSourceBusSendInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FSoundSourceBusSendInfo),
		alignof(FSoundSourceBusSendInfo),
		Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundSourceBusSendInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundSourceBusSendInfo"), sizeof(FSoundSourceBusSendInfo), Get_Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundSourceBusSendInfo_CRC() { return 4276646061U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
