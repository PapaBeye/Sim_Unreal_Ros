// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/AudioVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioVolume() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ReverbPreset();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInteriorSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FReverbSettings();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReverbEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AAudioVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AAudioVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	ENGINE_API UFunction* Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled();
	ENGINE_API UFunction* Z_Construct_UFunction_AAudioVolume_SetEnabled();
	ENGINE_API UFunction* Z_Construct_UFunction_AAudioVolume_SetInteriorSettings();
	ENGINE_API UFunction* Z_Construct_UFunction_AAudioVolume_SetPriority();
	ENGINE_API UFunction* Z_Construct_UFunction_AAudioVolume_SetReverbSettings();
// End Cross Module References
	static UEnum* ReverbPreset_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ReverbPreset, Z_Construct_UPackage__Script_Engine(), TEXT("ReverbPreset"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ReverbPreset(ReverbPreset_StaticEnum, TEXT("/Script/Engine"), TEXT("ReverbPreset"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ReverbPreset_CRC() { return 272838005U; }
	UEnum* Z_Construct_UEnum_Engine_ReverbPreset()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ReverbPreset"), 0, Get_Z_Construct_UEnum_Engine_ReverbPreset_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "REVERB_Default", (int64)REVERB_Default },
				{ "REVERB_Bathroom", (int64)REVERB_Bathroom },
				{ "REVERB_StoneRoom", (int64)REVERB_StoneRoom },
				{ "REVERB_Auditorium", (int64)REVERB_Auditorium },
				{ "REVERB_ConcertHall", (int64)REVERB_ConcertHall },
				{ "REVERB_Cave", (int64)REVERB_Cave },
				{ "REVERB_Hallway", (int64)REVERB_Hallway },
				{ "REVERB_StoneCorridor", (int64)REVERB_StoneCorridor },
				{ "REVERB_Alley", (int64)REVERB_Alley },
				{ "REVERB_Forest", (int64)REVERB_Forest },
				{ "REVERB_City", (int64)REVERB_City },
				{ "REVERB_Mountains", (int64)REVERB_Mountains },
				{ "REVERB_Quarry", (int64)REVERB_Quarry },
				{ "REVERB_Plain", (int64)REVERB_Plain },
				{ "REVERB_ParkingLot", (int64)REVERB_ParkingLot },
				{ "REVERB_SewerPipe", (int64)REVERB_SewerPipe },
				{ "REVERB_Underwater", (int64)REVERB_Underwater },
				{ "REVERB_SmallRoom", (int64)REVERB_SmallRoom },
				{ "REVERB_MediumRoom", (int64)REVERB_MediumRoom },
				{ "REVERB_LargeRoom", (int64)REVERB_LargeRoom },
				{ "REVERB_MediumHall", (int64)REVERB_MediumHall },
				{ "REVERB_LargeHall", (int64)REVERB_LargeHall },
				{ "REVERB_Plate", (int64)REVERB_Plate },
				{ "REVERB_MAX", (int64)REVERB_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
				{ "ToolTip", "DEPRECATED: Exists for backwards compatibility\nIndicates a reverb preset to use." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ReverbPreset",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ReverbPreset",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FInteriorSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInteriorSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteriorSettings, Z_Construct_UPackage__Script_Engine(), TEXT("InteriorSettings"), sizeof(FInteriorSettings), Get_Z_Construct_UScriptStruct_FInteriorSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteriorSettings(FInteriorSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("InteriorSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInteriorSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFInteriorSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InteriorSettings")),new UScriptStruct::TCppStructOps<FInteriorSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInteriorSettings;
	struct Z_Construct_UScriptStruct_FInteriorSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteriorLPFTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteriorLPFTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteriorLPF_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteriorLPF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteriorTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteriorTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteriorVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteriorVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExteriorLPFTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExteriorLPFTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExteriorLPF_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExteriorLPF;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExteriorTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExteriorTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExteriorVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExteriorVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWorldSettings_MetaData[];
#endif
		static void NewProp_bIsWorldSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWorldSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Struct encapsulating settings for interior areas." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteriorSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPFTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current LPF to the desired LPF of sounds inside the volume when the player enters the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPFTime = { UE4CodeGen_Private::EPropertyClass::Float, "InteriorLPFTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInteriorSettings, InteriorLPFTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPFTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPFTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPF_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The desired LPF frequency cutoff in hertz of sounds inside  the volume when the player is outside the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPF = { UE4CodeGen_Private::EPropertyClass::Float, "InteriorLPF", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInteriorSettings, InteriorLPF), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPF_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current volume to the desired volume of sounds inside the volume when the player enters the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorTime = { UE4CodeGen_Private::EPropertyClass::Float, "InteriorTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInteriorSettings, InteriorTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorVolume_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The desired volume of sounds inside the volume when the player is outside the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorVolume = { UE4CodeGen_Private::EPropertyClass::Float, "InteriorVolume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInteriorSettings, InteriorVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorVolume_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPFTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current LPF to the desired LPF of sounds outside the volume when the player enters the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPFTime = { UE4CodeGen_Private::EPropertyClass::Float, "ExteriorLPFTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInteriorSettings, ExteriorLPFTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPFTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPFTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPF_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The desired LPF frequency cutoff in hertz of sounds outside the volume when the player is inside the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPF = { UE4CodeGen_Private::EPropertyClass::Float, "ExteriorLPF", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInteriorSettings, ExteriorLPF), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPF_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPF_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorTime_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The time over which to interpolate from the current volume to the desired volume of sounds outside the volume when the player enters the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorTime = { UE4CodeGen_Private::EPropertyClass::Float, "ExteriorTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInteriorSettings, ExteriorTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorVolume_MetaData[] = {
		{ "Category", "InteriorSettings" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The desired volume of sounds outside the volume when the player is inside the volume" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorVolume = { UE4CodeGen_Private::EPropertyClass::Float, "ExteriorVolume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FInteriorSettings, ExteriorVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorVolume_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Whether these interior settings are the default values for the world" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings_SetBit(void* Obj)
	{
		((FInteriorSettings*)Obj)->bIsWorldSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsWorldSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FInteriorSettings), &Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteriorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPFTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorLPF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_InteriorVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPFTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorLPF,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_ExteriorVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteriorSettings_Statics::NewProp_bIsWorldSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteriorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InteriorSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FInteriorSettings),
		alignof(FInteriorSettings),
		Z_Construct_UScriptStruct_FInteriorSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteriorSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInteriorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteriorSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteriorSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteriorSettings"), sizeof(FInteriorSettings), Get_Z_Construct_UScriptStruct_FInteriorSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteriorSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteriorSettings_CRC() { return 24478864U; }
class UScriptStruct* FReverbSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FReverbSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReverbSettings, Z_Construct_UPackage__Script_Engine(), TEXT("ReverbSettings"), sizeof(FReverbSettings), Get_Z_Construct_UScriptStruct_FReverbSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReverbSettings(FReverbSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("ReverbSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFReverbSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFReverbSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReverbSettings")),new UScriptStruct::TCppStructOps<FReverbSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFReverbSettings;
	struct Z_Construct_UScriptStruct_FReverbSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbPluginEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReverbPluginEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReverbEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReverbType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyReverb_MetaData[];
#endif
		static void NewProp_bApplyReverb_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyReverb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Struct encapsulating settings for reverb effects." },
	};
#endif
	void* Z_Construct_UScriptStruct_FReverbSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReverbSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_FadeTime_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Time to fade from the current reverb settings into this setting, in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_FadeTime = { UE4CodeGen_Private::EPropertyClass::Float, "FadeTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FReverbSettings, FadeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_FadeTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_FadeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Volume level of the reverb affect." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_Volume = { UE4CodeGen_Private::EPropertyClass::Float, "Volume", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FReverbSettings, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_Volume_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbPluginEffect_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "This is used to apply plugin-specific settings when a Reverb Plugin is being used." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbPluginEffect = { UE4CodeGen_Private::EPropertyClass::Object, "ReverbPluginEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FReverbSettings, ReverbPluginEffect), Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbPluginEffect_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbPluginEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbEffect_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The reverb asset to employ." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbEffect = { UE4CodeGen_Private::EPropertyClass::Object, "ReverbEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FReverbSettings, ReverbEffect), Z_Construct_UClass_UReverbEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbEffect_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "The reverb preset to employ." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbType = { UE4CodeGen_Private::EPropertyClass::Byte, "ReverbType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FReverbSettings, ReverbType_DEPRECATED), Z_Construct_UEnum_Engine_ReverbPreset, METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Whether to apply the reverb settings below." },
	};
#endif
	void Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb_SetBit(void* Obj)
	{
		((FReverbSettings*)Obj)->bApplyReverb = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyReverb", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FReverbSettings), &Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReverbSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_FadeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbPluginEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_ReverbType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReverbSettings_Statics::NewProp_bApplyReverb,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReverbSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ReverbSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FReverbSettings),
		alignof(FReverbSettings),
		Z_Construct_UScriptStruct_FReverbSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReverbSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FReverbSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReverbSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReverbSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReverbSettings"), sizeof(FReverbSettings), Get_Z_Construct_UScriptStruct_FReverbSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReverbSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReverbSettings_CRC() { return 1266968066U; }
	void AAudioVolume::StaticRegisterNativesAAudioVolume()
	{
		UClass* Class = AAudioVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_bEnabled", &AAudioVolume::execOnRep_bEnabled },
			{ "SetEnabled", &AAudioVolume::execSetEnabled },
			{ "SetInteriorSettings", &AAudioVolume::execSetInteriorSettings },
			{ "SetPriority", &AAudioVolume::execSetPriority },
			{ "SetReverbSettings", &AAudioVolume::execSetReverbSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, "OnRep_bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics
	{
		struct AudioVolume_eventSetEnabled_Parms
		{
			bool bNewEnabled;
		};
		static void NewProp_bNewEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
	{
		((AudioVolume_eventSetEnabled_Parms*)Obj)->bNewEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AudioVolume_eventSetEnabled_Parms), &Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::NewProp_bNewEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, "SetEnabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AudioVolume_eventSetEnabled_Parms), Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioVolume_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics
	{
		struct AudioVolume_eventSetInteriorSettings_Parms
		{
			FInteriorSettings NewInteriorSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewInteriorSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewInteriorSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::NewProp_NewInteriorSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::NewProp_NewInteriorSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "NewInteriorSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AudioVolume_eventSetInteriorSettings_Parms, NewInteriorSettings), Z_Construct_UScriptStruct_FInteriorSettings, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::NewProp_NewInteriorSettings_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::NewProp_NewInteriorSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::NewProp_NewInteriorSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, "SetInteriorSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AudioVolume_eventSetInteriorSettings_Parms), Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioVolume_SetInteriorSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetInteriorSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAudioVolume_SetPriority_Statics
	{
		struct AudioVolume_eventSetPriority_Parms
		{
			float NewPriority;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::NewProp_NewPriority = { UE4CodeGen_Private::EPropertyClass::Float, "NewPriority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AudioVolume_eventSetPriority_Parms, NewPriority), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::NewProp_NewPriority,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, "SetPriority", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AudioVolume_eventSetPriority_Parms), Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioVolume_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics
	{
		struct AudioVolume_eventSetReverbSettings_Parms
		{
			FReverbSettings NewReverbSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewReverbSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewReverbSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "NewReverbSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AudioVolume_eventSetReverbSettings_Parms, NewReverbSettings), Z_Construct_UScriptStruct_FReverbSettings, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::NewProp_NewReverbSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioVolume, "SetReverbSettings", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(AudioVolume_eventSetReverbSettings_Parms), Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAudioVolume_SetReverbSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAudioVolume_SetReverbSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAudioVolume_NoRegister()
	{
		return AAudioVolume::StaticClass();
	}
	struct Z_Construct_UClass_AAudioVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientZoneSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmbientZoneSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAudioVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAudioVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAudioVolume_OnRep_bEnabled, "OnRep_bEnabled" }, // 4025275592
		{ &Z_Construct_UFunction_AAudioVolume_SetEnabled, "SetEnabled" }, // 986332108
		{ &Z_Construct_UFunction_AAudioVolume_SetInteriorSettings, "SetInteriorSettings" }, // 614173148
		{ &Z_Construct_UFunction_AAudioVolume_SetPriority, "SetPriority" }, // 382266093
		{ &Z_Construct_UFunction_AAudioVolume_SetReverbSettings, "SetReverbSettings" }, // 2759563417
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Advanced Attachment Collision Volume Brush Physics Object Display Rendering Physics Input Blueprint" },
		{ "IncludePath", "Sound/AudioVolume.h" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioVolume_Statics::NewProp_AmbientZoneSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AmbientZone" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Interior settings used for this volume" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_AmbientZoneSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "AmbientZoneSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000015, 1, nullptr, STRUCT_OFFSET(AAudioVolume, AmbientZoneSettings), Z_Construct_UScriptStruct_FInteriorSettings, METADATA_PARAMS(Z_Construct_UClass_AAudioVolume_Statics::NewProp_AmbientZoneSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::NewProp_AmbientZoneSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioVolume_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Reverb" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Reverb settings to use for this volume." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Struct, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000015, 1, nullptr, STRUCT_OFFSET(AAudioVolume, Settings), Z_Construct_UScriptStruct_FReverbSettings, METADATA_PARAMS(Z_Construct_UClass_AAudioVolume_Statics::NewProp_Settings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "whether this volume is currently enabled and able to affect sounds" },
	};
#endif
	void Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AAudioVolume*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000035, 1, "OnRep_bEnabled", sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AAudioVolume), &Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAudioVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AudioVolume" },
		{ "ModuleRelativePath", "Classes/Sound/AudioVolume.h" },
		{ "ToolTip", "Priority of this volume. In the case of overlapping volumes the one with the highest priority\nis chosen. The order is undefined if two or more overlapping volumes have the same priority." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAudioVolume_Statics::NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Float, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000015, 1, nullptr, STRUCT_OFFSET(AAudioVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_AAudioVolume_Statics::NewProp_Priority_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAudioVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_AmbientZoneSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioVolume_Statics::NewProp_Priority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAudioVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAudioVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAudioVolume_Statics::ClassParams = {
		&AAudioVolume::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AAudioVolume_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAudioVolume_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAudioVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAudioVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAudioVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAudioVolume, 2867847394);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAudioVolume(Z_Construct_UClass_AAudioVolume, &AAudioVolume::StaticClass, TEXT("/Script/Engine"), TEXT("AAudioVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAudioVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
