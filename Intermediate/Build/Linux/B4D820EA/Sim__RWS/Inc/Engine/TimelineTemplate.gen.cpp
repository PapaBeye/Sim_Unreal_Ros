// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TimelineTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimelineTemplate() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTLinearColorTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTTrackBase();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTVectorTrack();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTFloatTrack();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTEventTrack();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableMetaDataEntry();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineLengthMode();
// End Cross Module References
class UScriptStruct* FTTLinearColorTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTLinearColorTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TTLinearColorTrack"), sizeof(FTTLinearColorTrack), Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTLinearColorTrack(FTTLinearColorTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TTLinearColorTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTLinearColorTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTTLinearColorTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTLinearColorTrack")),new UScriptStruct::TCppStructOps<FTTLinearColorTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTLinearColorTrack;
	struct Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveLinearColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveLinearColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one color interpolation track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTLinearColorTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to define color value over time" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor = { UE4CodeGen_Private::EPropertyClass::Object, "CurveLinearColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTTLinearColorTrack, CurveLinearColor), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTTTrackBase,
		&NewStructOps,
		"TTLinearColorTrack",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTTLinearColorTrack),
		alignof(FTTLinearColorTrack),
		Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTLinearColorTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTLinearColorTrack"), sizeof(FTTLinearColorTrack), Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTLinearColorTrack_CRC() { return 429642364U; }
class UScriptStruct* FTTVectorTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTVectorTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTVectorTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TTVectorTrack"), sizeof(FTTVectorTrack), Get_Z_Construct_UScriptStruct_FTTVectorTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTVectorTrack(FTTVectorTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TTVectorTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTVectorTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTTVectorTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTVectorTrack")),new UScriptStruct::TCppStructOps<FTTVectorTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTVectorTrack;
	struct Z_Construct_UScriptStruct_FTTVectorTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTVectorTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one vector interpolation track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTVectorTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to define vector value over time" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector = { UE4CodeGen_Private::EPropertyClass::Object, "CurveVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTTVectorTrack, CurveVector), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTVectorTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTVectorTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTTTrackBase,
		&NewStructOps,
		"TTVectorTrack",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTTVectorTrack),
		alignof(FTTVectorTrack),
		Z_Construct_UScriptStruct_FTTVectorTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTVectorTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTVectorTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTVectorTrack"), sizeof(FTTVectorTrack), Get_Z_Construct_UScriptStruct_FTTVectorTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTTVectorTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTVectorTrack_CRC() { return 2827583168U; }
class UScriptStruct* FTTFloatTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTFloatTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTFloatTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TTFloatTrack"), sizeof(FTTFloatTrack), Get_Z_Construct_UScriptStruct_FTTFloatTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTFloatTrack(FTTFloatTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TTFloatTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTFloatTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTTFloatTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTFloatTrack")),new UScriptStruct::TCppStructOps<FTTFloatTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTFloatTrack;
	struct Z_Construct_UScriptStruct_FTTFloatTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveFloat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTFloatTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one float interpolation track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTFloatTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to define float value over time" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat = { UE4CodeGen_Private::EPropertyClass::Object, "CurveFloat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTTFloatTrack, CurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTFloatTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTFloatTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTTTrackBase,
		&NewStructOps,
		"TTFloatTrack",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTTFloatTrack),
		alignof(FTTFloatTrack),
		Z_Construct_UScriptStruct_FTTFloatTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTFloatTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTFloatTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTFloatTrack"), sizeof(FTTFloatTrack), Get_Z_Construct_UScriptStruct_FTTFloatTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTTFloatTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTFloatTrack_CRC() { return 560583403U; }
class UScriptStruct* FTTEventTrack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTEventTrack_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTEventTrack, Z_Construct_UPackage__Script_Engine(), TEXT("TTEventTrack"), sizeof(FTTEventTrack), Get_Z_Construct_UScriptStruct_FTTEventTrack_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTEventTrack(FTTEventTrack::StaticStruct, TEXT("/Script/Engine"), TEXT("TTEventTrack"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTEventTrack
{
	FScriptStruct_Engine_StaticRegisterNativesFTTEventTrack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTEventTrack")),new UScriptStruct::TCppStructOps<FTTEventTrack>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTEventTrack;
	struct Z_Construct_UScriptStruct_FTTEventTrack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTEventTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one event track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTEventTrack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to store keys" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys = { UE4CodeGen_Private::EPropertyClass::Object, "CurveKeys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTTEventTrack, CurveKeys), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTEventTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTEventTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTTTrackBase,
		&NewStructOps,
		"TTEventTrack",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTTEventTrack),
		alignof(FTTEventTrack),
		Z_Construct_UScriptStruct_FTTEventTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTEventTrack_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTEventTrack_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTEventTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTEventTrack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTEventTrack_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTEventTrack"), sizeof(FTTEventTrack), Get_Z_Construct_UScriptStruct_FTTEventTrack_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTTEventTrack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTEventTrack_CRC() { return 3893492874U; }
class UScriptStruct* FTTTrackBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTTTrackBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTTrackBase, Z_Construct_UPackage__Script_Engine(), TEXT("TTTrackBase"), sizeof(FTTTrackBase), Get_Z_Construct_UScriptStruct_FTTTrackBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTTTrackBase(FTTTrackBase::StaticStruct, TEXT("/Script/Engine"), TEXT("TTTrackBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTTTrackBase
{
	FScriptStruct_Engine_StaticRegisterNativesFTTTrackBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TTTrackBase")),new UScriptStruct::TCppStructOps<FTTTrackBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTTTrackBase;
	struct Z_Construct_UScriptStruct_FTTTrackBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsExternalCurve_MetaData[];
#endif
		static void NewProp_bIsExternalCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExternalCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTTrackBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTTrackBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Flag to identify internal/external curve" },
	};
#endif
	void Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_SetBit(void* Obj)
	{
		((FTTTrackBase*)Obj)->bIsExternalCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsExternalCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FTTTrackBase), &Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Name of this track" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName = { UE4CodeGen_Private::EPropertyClass::Name, "TrackName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTTTrackBase, TrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTTrackBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TTTrackBase",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTTTrackBase),
		alignof(FTTTrackBase),
		Z_Construct_UScriptStruct_FTTTrackBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTTrackBase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTTrackBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTTTrackBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TTTrackBase"), sizeof(FTTTrackBase), Get_Z_Construct_UScriptStruct_FTTTrackBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTTTrackBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTTTrackBase_CRC() { return 2975744786U; }
	void UTimelineTemplate::StaticRegisterNativesUTimelineTemplate()
	{
	}
	UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister()
	{
		return UTimelineTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UTimelineTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimelineGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MetaDataArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetaDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearColorTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinearColorTracks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinearColorTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorTracks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatTracks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventTracks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTracks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValidatedAsWired_MetaData[];
#endif
		static void NewProp_bValidatedAsWired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValidatedAsWired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicated_MetaData[];
#endif
		static void NewProp_bReplicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LengthMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimelineLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimelineLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimelineTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/TimelineTemplate.h" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "TimelineGuid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000200000, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, TimelineGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Metadata information for this timeline" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray = { UE4CodeGen_Private::EPropertyClass::Array, "MetaDataArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, MetaDataArray), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "MetaDataArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBPVariableMetaDataEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of linear color interpolation tracks" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks = { UE4CodeGen_Private::EPropertyClass::Array, "LinearColorTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, LinearColorTracks), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LinearColorTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTTLinearColorTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of vector interpolation tracks" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks = { UE4CodeGen_Private::EPropertyClass::Array, "VectorTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, VectorTracks), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTTVectorTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of float interpolation tracks" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks = { UE4CodeGen_Private::EPropertyClass::Array, "FloatTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, FloatTracks), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FloatTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTTFloatTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of event tracks" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks = { UE4CodeGen_Private::EPropertyClass::Array, "EventTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, EventTracks), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "EventTracks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTTEventTrack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to ignore global time dilation" },
	};
#endif
	void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((UTimelineTemplate*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreTimeDilation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bValidatedAsWired_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Compiler Validated As Wired up" },
	};
#endif
	void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bValidatedAsWired_SetBit(void* Obj)
	{
		((UTimelineTemplate*)Obj)->bValidatedAsWired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bValidatedAsWired = { UE4CodeGen_Private::EPropertyClass::Bool, "bValidatedAsWired", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bValidatedAsWired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bValidatedAsWired_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bValidatedAsWired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to loop" },
	};
#endif
	void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_SetBit(void* Obj)
	{
		((UTimelineTemplate*)Obj)->bReplicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated = { UE4CodeGen_Private::EPropertyClass::Bool, "bReplicated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to loop" },
	};
#endif
	void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UTimelineTemplate*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to auto-play" },
	};
#endif
	void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((UTimelineTemplate*)Obj)->bAutoPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoPlay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "How we want the timeline to determine its own length (e.g. specified length, last keyframe)" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode = { UE4CodeGen_Private::EPropertyClass::Byte, "LengthMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, LengthMode), Z_Construct_UEnum_Engine_ETimelineLengthMode, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Length of this timeline" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength = { UE4CodeGen_Private::EPropertyClass::Float, "TimelineLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UTimelineTemplate, TimelineLength), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimelineTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bValidatedAsWired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimelineTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimelineTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimelineTemplate_Statics::ClassParams = {
		&UTimelineTemplate::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_UTimelineTemplate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimelineTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimelineTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimelineTemplate, 3543964559);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimelineTemplate(Z_Construct_UClass_UTimelineTemplate, &UTimelineTemplate::StaticClass, TEXT("/Script/Engine"), TEXT("UTimelineTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimelineTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
