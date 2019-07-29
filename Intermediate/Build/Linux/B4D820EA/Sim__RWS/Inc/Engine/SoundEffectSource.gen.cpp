// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundEffectSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundEffectSource() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChainEntry();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FSourceEffectChainEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSourceEffectChainEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectChainEntry, Z_Construct_UPackage__Script_Engine(), TEXT("SourceEffectChainEntry"), sizeof(FSourceEffectChainEntry), Get_Z_Construct_UScriptStruct_FSourceEffectChainEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceEffectChainEntry(FSourceEffectChainEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("SourceEffectChainEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSourceEffectChainEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFSourceEffectChainEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceEffectChainEntry")),new UScriptStruct::TCppStructOps<FSourceEffectChainEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSourceEffectChainEntry;
	struct Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBypass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Preset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectChainEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FSourceEffectChainEntry*)Obj)->bBypass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass = { UE4CodeGen_Private::EPropertyClass::Bool, "bBypass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSourceEffectChainEntry), &Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_Preset_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_Preset = { UE4CodeGen_Private::EPropertyClass::Object, "Preset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FSourceEffectChainEntry, Preset), Z_Construct_UClass_USoundEffectSourcePreset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_Preset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_Preset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_bBypass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::NewProp_Preset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SourceEffectChainEntry",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FSourceEffectChainEntry),
		alignof(FSourceEffectChainEntry),
		Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectChainEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceEffectChainEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceEffectChainEntry"), sizeof(FSourceEffectChainEntry), Get_Z_Construct_UScriptStruct_FSourceEffectChainEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceEffectChainEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceEffectChainEntry_CRC() { return 3019052892U; }
	void USoundEffectSourcePreset::StaticRegisterNativesUSoundEffectSourcePreset()
	{
	}
	UClass* Z_Construct_UClass_USoundEffectSourcePreset_NoRegister()
	{
		return USoundEffectSourcePreset::StaticClass();
	}
	struct Z_Construct_UClass_USoundEffectSourcePreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundEffectSourcePreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundEffectSourcePreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sound/SoundEffectSource.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
		{ "ToolTip", "This is here to make sure users don't mix up source and submix effects in the editor. Asset sorting, drag-n-drop, etc." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundEffectSourcePreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundEffectSourcePreset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundEffectSourcePreset_Statics::ClassParams = {
		&USoundEffectSourcePreset::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001010A1u,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USoundEffectSourcePreset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundEffectSourcePreset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundEffectSourcePreset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundEffectSourcePreset, 2526815615);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundEffectSourcePreset(Z_Construct_UClass_USoundEffectSourcePreset, &USoundEffectSourcePreset::StaticClass, TEXT("/Script/Engine"), TEXT("USoundEffectSourcePreset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundEffectSourcePreset);
	void USoundEffectSourcePresetChain::StaticRegisterNativesUSoundEffectSourcePresetChain()
	{
	}
	UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister()
	{
		return USoundEffectSourcePresetChain::StaticClass();
	}
	struct Z_Construct_UClass_USoundEffectSourcePresetChain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayEffectChainTails_MetaData[];
#endif
		static void NewProp_bPlayEffectChainTails_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayEffectChainTails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chain_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Chain;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Chain_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sound/SoundEffectSource.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
		{ "ToolTip", "Whether to keep the source alive for the duration of the effect chain tails." },
	};
#endif
	void Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails_SetBit(void* Obj)
	{
		((USoundEffectSourcePresetChain*)Obj)->bPlayEffectChainTails = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails = { UE4CodeGen_Private::EPropertyClass::Bool, "bPlayEffectChainTails", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundEffectSourcePresetChain), &Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain_MetaData[] = {
		{ "Category", "SourceEffect" },
		{ "ModuleRelativePath", "Classes/Sound/SoundEffectSource.h" },
		{ "ToolTip", "Chain of source effects to use for this sound source." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain = { UE4CodeGen_Private::EPropertyClass::Array, "Chain", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundEffectSourcePresetChain, Chain), METADATA_PARAMS(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Chain", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSourceEffectChainEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_bPlayEffectChainTails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::NewProp_Chain_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundEffectSourcePresetChain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::ClassParams = {
		&USoundEffectSourcePresetChain::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundEffectSourcePresetChain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundEffectSourcePresetChain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundEffectSourcePresetChain, 2910610805);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundEffectSourcePresetChain(Z_Construct_UClass_USoundEffectSourcePresetChain, &USoundEffectSourcePresetChain::StaticClass, TEXT("/Script/Engine"), TEXT("USoundEffectSourcePresetChain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundEffectSourcePresetChain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
