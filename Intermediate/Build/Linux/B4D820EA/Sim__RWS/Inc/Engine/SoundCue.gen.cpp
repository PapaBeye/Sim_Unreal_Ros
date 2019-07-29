// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundCue.h"
#include "Serialization/StructuredArchiveFromArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCue() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundNodeEditorData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
// End Cross Module References
class UScriptStruct* FSoundNodeEditorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundNodeEditorData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundNodeEditorData, Z_Construct_UPackage__Script_Engine(), TEXT("SoundNodeEditorData"), sizeof(FSoundNodeEditorData), Get_Z_Construct_UScriptStruct_FSoundNodeEditorData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundNodeEditorData(FSoundNodeEditorData::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundNodeEditorData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundNodeEditorData
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundNodeEditorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundNodeEditorData")),new UScriptStruct::TCppStructOps<FSoundNodeEditorData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundNodeEditorData;
	struct Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundNodeEditorData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundNodeEditorData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSoundNodeEditorData),
		alignof(FSoundNodeEditorData),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundNodeEditorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundNodeEditorData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundNodeEditorData"), sizeof(FSoundNodeEditorData), Get_Z_Construct_UScriptStruct_FSoundNodeEditorData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundNodeEditorData_CRC() { return 3766646378U; }
	void USoundCue::StaticRegisterNativesUSoundCue()
	{
	}
	UClass* Z_Construct_UClass_USoundCue_NoRegister()
	{
		return USoundCue::StaticClass();
	}
	struct Z_Construct_UClass_USoundCue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubtitlePriority;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCueGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCueGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExcludeFromRandomNodeBranchCulling_MetaData[];
#endif
		static void NewProp_bExcludeFromRandomNodeBranchCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExcludeFromRandomNodeBranchCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCue_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "object Object" },
		{ "IncludePath", "Sound/SoundCue.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "SerializeToFStructuredArchive", "" },
		{ "ToolTip", "The behavior of audio playback is defined within Sound Cues." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCue_Statics::NewProp_SubtitlePriority_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "Tooltip", "The priority of the subtitle.  Defaults to 10000.  Higher values will play instead of lower values." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_SubtitlePriority = { UE4CodeGen_Private::EPropertyClass::Float, "SubtitlePriority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(USoundCue, SubtitlePriority), METADATA_PARAMS(Z_Construct_UClass_USoundCue_Statics::NewProp_SubtitlePriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundCue_Statics::NewProp_SubtitlePriority_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCue_Statics::NewProp_SoundCueGraph_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_SoundCueGraph = { UE4CodeGen_Private::EPropertyClass::Object, "SoundCueGraph", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USoundCue, SoundCueGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundCue_Statics::NewProp_SoundCueGraph_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundCue_Statics::NewProp_SoundCueGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCue_Statics::NewProp_AllNodes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_AllNodes = { UE4CodeGen_Private::EPropertyClass::Array, "AllNodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(USoundCue, AllNodes), METADATA_PARAMS(Z_Construct_UClass_USoundCue_Statics::NewProp_AllNodes_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundCue_Statics::NewProp_AllNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_AllNodes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AllNodes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, Z_Construct_UClass_USoundNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCue_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "AttenuationSettings" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "ToolTip", "Attenuation settings to use if Override Attenuation is set to true" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_AttenuationOverrides = { UE4CodeGen_Private::EPropertyClass::Struct, "AttenuationOverrides", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundCue, AttenuationOverrides), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_USoundCue_Statics::NewProp_AttenuationOverrides_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundCue_Statics::NewProp_AttenuationOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCue_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "ToolTip", "Pitch multiplier for the Sound Cue" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_PitchMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "PitchMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000000001, 1, nullptr, STRUCT_OFFSET(USoundCue, PitchMultiplier), METADATA_PARAMS(Z_Construct_UClass_USoundCue_Statics::NewProp_PitchMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundCue_Statics::NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCue_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "ToolTip", "Volume multiplier for the Sound Cue" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_VolumeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "VolumeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010010000000001, 1, nullptr, STRUCT_OFFSET(USoundCue, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_USoundCue_Statics::NewProp_VolumeMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundCue_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCue_Statics::NewProp_FirstNode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_FirstNode = { UE4CodeGen_Private::EPropertyClass::Object, "FirstNode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USoundCue, FirstNode), Z_Construct_UClass_USoundNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundCue_Statics::NewProp_FirstNode_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundCue_Statics::NewProp_FirstNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCue_Statics::NewProp_bExcludeFromRandomNodeBranchCulling_MetaData[] = {
		{ "Category", "Culling" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "ToolTip", "Makes this sound cue ignore per-platform random node culling for memory purposes" },
	};
#endif
	void Z_Construct_UClass_USoundCue_Statics::NewProp_bExcludeFromRandomNodeBranchCulling_SetBit(void* Obj)
	{
		((USoundCue*)Obj)->bExcludeFromRandomNodeBranchCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_bExcludeFromRandomNodeBranchCulling = { UE4CodeGen_Private::EPropertyClass::Bool, "bExcludeFromRandomNodeBranchCulling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundCue), &Z_Construct_UClass_USoundCue_Statics::NewProp_bExcludeFromRandomNodeBranchCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundCue_Statics::NewProp_bExcludeFromRandomNodeBranchCulling_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundCue_Statics::NewProp_bExcludeFromRandomNodeBranchCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCue_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundCue.h" },
		{ "ToolTip", "Indicates whether attenuation should use the Attenuation Overrides or the Attenuation Settings asset" },
	};
#endif
	void Z_Construct_UClass_USoundCue_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((USoundCue*)Obj)->bOverrideAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundCue_Statics::NewProp_bOverrideAttenuation = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideAttenuation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundCue), &Z_Construct_UClass_USoundCue_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundCue_Statics::NewProp_bOverrideAttenuation_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundCue_Statics::NewProp_bOverrideAttenuation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundCue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_SubtitlePriority,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_SoundCueGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_AllNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_AllNodes_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_AttenuationOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_FirstNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_bExcludeFromRandomNodeBranchCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCue_Statics::NewProp_bOverrideAttenuation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundCue_Statics::ClassParams = {
		&USoundCue::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000810A0u,
		nullptr, 0,
		Z_Construct_UClass_USoundCue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USoundCue_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USoundCue_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundCue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundCue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundCue, 3535489649);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundCue(Z_Construct_UClass_USoundCue, &USoundCue::StaticClass, TEXT("/Script/Engine"), TEXT("USoundCue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCue);
	IMPLEMENT_FARCHIVE_SERIALIZER(USoundCue)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
