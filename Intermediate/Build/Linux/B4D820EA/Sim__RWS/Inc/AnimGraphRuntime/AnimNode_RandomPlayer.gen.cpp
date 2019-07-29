// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_RandomPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RandomPlayer() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RandomPlayer();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_RandomPlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RandomPlayer"), sizeof(FAnimNode_RandomPlayer), Get_Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_RandomPlayer(FAnimNode_RandomPlayer::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_RandomPlayer"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RandomPlayer
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RandomPlayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_RandomPlayer")),new UScriptStruct::TCppStructOps<FAnimNode_RandomPlayer>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_RandomPlayer;
	struct Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShuffleMode_MetaData[];
#endif
		static void NewProp_bShuffleMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShuffleMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RandomPlayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "List of sequences to randomly step through" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries = { UE4CodeGen_Private::EPropertyClass::Array, "Entries", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_RandomPlayer, Entries), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Entries", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "When shuffle mode is active we will never loop a sequence beyond MaxLoopCount\nwithout visiting each sequence in turn (no repeats). Enabling this will ignore\nChanceToPlay for each entry" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_SetBit(void* Obj)
	{
		((FAnimNode_RandomPlayer*)Obj)->bShuffleMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bShuffleMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_RandomPlayer), &Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_Entries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::NewProp_bShuffleMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_RandomPlayer",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_RandomPlayer),
		alignof(FAnimNode_RandomPlayer),
		Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RandomPlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_RandomPlayer"), sizeof(FAnimNode_RandomPlayer), Get_Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_RandomPlayer_CRC() { return 1026917430U; }
class UScriptStruct* FRandomPlayerSequenceEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RandomPlayerSequenceEntry"), sizeof(FRandomPlayerSequenceEntry), Get_Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRandomPlayerSequenceEntry(FRandomPlayerSequenceEntry::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("RandomPlayerSequenceEntry"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRandomPlayerSequenceEntry
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRandomPlayerSequenceEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RandomPlayerSequenceEntry")),new UScriptStruct::TCppStructOps<FRandomPlayerSequenceEntry>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFRandomPlayerSequenceEntry;
	struct Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLoopCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLoopCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLoopCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLoopCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChanceToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChanceToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "The random player node holds a list of sequences and parameter ranges which will be played continuously\nIn a random order. If shuffle mode is enabled then each entry will be played once before repeating any" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRandomPlayerSequenceEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_BlendIn_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Blending properties used when this entry is blending in ontop of another entry" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_BlendIn = { UE4CodeGen_Private::EPropertyClass::Struct, "BlendIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, BlendIn), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_BlendIn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_BlendIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxPlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Maximum playrate for this entry" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "MaxPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MaxPlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxPlayRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinPlayRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Minimum playrate for this entry" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinPlayRate = { UE4CodeGen_Private::EPropertyClass::Float, "MinPlayRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MinPlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinPlayRate_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinPlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxLoopCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Maximum number of times this entry will loop before ending" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxLoopCount = { UE4CodeGen_Private::EPropertyClass::Int, "MaxLoopCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MaxLoopCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxLoopCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxLoopCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinLoopCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Minimum number of times this entry will loop before ending" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinLoopCount = { UE4CodeGen_Private::EPropertyClass::Int, "MinLoopCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, MinLoopCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinLoopCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinLoopCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_ChanceToPlay_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "When not in shuffle mode, this is the chance this entry will play (normalized against all other sample chances)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_ChanceToPlay = { UE4CodeGen_Private::EPropertyClass::Float, "ChanceToPlay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, ChanceToPlay), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_ChanceToPlay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_ChanceToPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RandomPlayer.h" },
		{ "ToolTip", "Sequence to play when this entry is picked" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_Sequence = { UE4CodeGen_Private::EPropertyClass::Object, "Sequence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRandomPlayerSequenceEntry, Sequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_Sequence_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_Sequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_BlendIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinPlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MaxLoopCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_MinLoopCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_ChanceToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::NewProp_Sequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"RandomPlayerSequenceEntry",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRandomPlayerSequenceEntry),
		alignof(FRandomPlayerSequenceEntry),
		Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RandomPlayerSequenceEntry"), sizeof(FRandomPlayerSequenceEntry), Get_Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRandomPlayerSequenceEntry_CRC() { return 79200285U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
