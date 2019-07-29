// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSection() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEasingSettings();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimecodeSource();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
// End Cross Module References
	static UEnum* EMovieSceneCompletionMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode, Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneCompletionMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovieSceneCompletionMode(EMovieSceneCompletionMode_StaticEnum, TEXT("/Script/MovieScene"), TEXT("EMovieSceneCompletionMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode_CRC() { return 2392987709U; }
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovieSceneCompletionMode"), 0, Get_Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovieSceneCompletionMode::KeepState", (int64)EMovieSceneCompletionMode::KeepState },
				{ "EMovieSceneCompletionMode::RestoreState", (int64)EMovieSceneCompletionMode::RestoreState },
				{ "EMovieSceneCompletionMode::ProjectDefault", (int64)EMovieSceneCompletionMode::ProjectDefault },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
				{ "ToolTip", "Enumeration specifying how to handle state when this section is no longer evaluated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMovieSceneCompletionMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMovieSceneCompletionMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMovieSceneEasingSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEasingSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEasingSettings, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEasingSettings"), sizeof(FMovieSceneEasingSettings), Get_Z_Construct_UScriptStruct_FMovieSceneEasingSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneEasingSettings(FMovieSceneEasingSettings::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneEasingSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEasingSettings
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEasingSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneEasingSettings")),new UScriptStruct::TCppStructOps<FMovieSceneEasingSettings>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneEasingSettings;
	struct Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualEaseOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManualEaseOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualEaseInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManualEaseInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoEaseOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoEaseOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoEaseInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AutoEaseInTime;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualEaseOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ManualEaseOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualEaseOut_MetaData[];
#endif
		static void NewProp_bManualEaseOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualEaseOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EaseOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_EaseOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualEaseInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ManualEaseInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualEaseIn_MetaData[];
#endif
		static void NewProp_bManualEaseIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualEaseIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EaseIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_EaseIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoEaseOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AutoEaseOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoEaseInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AutoEaseInDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEasingSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "ManualEaseOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, ManualEaseOutTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInTime = { UE4CodeGen_Private::EPropertyClass::Float, "ManualEaseInTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, ManualEaseInTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "AutoEaseOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, AutoEaseOutTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInTime = { UE4CodeGen_Private::EPropertyClass::Float, "AutoEaseInTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, AutoEaseInTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInTime_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Manually override this section's ease-out duration in frames" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutDuration = { UE4CodeGen_Private::EPropertyClass::Int, "ManualEaseOutDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, ManualEaseOutDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Whether to manually override this section's ease out time" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseOut_SetBit(void* Obj)
	{
		((FMovieSceneEasingSettings*)Obj)->bManualEaseOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseOut = { UE4CodeGen_Private::EPropertyClass::Bool, "bManualEaseOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneEasingSettings), &Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseOut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseOut_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseOut = { UE4CodeGen_Private::EPropertyClass::Interface, "EaseOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, EaseOut), Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseOut_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Manually override this section's ease in duration in frames" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInDuration = { UE4CodeGen_Private::EPropertyClass::Int, "ManualEaseInDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, ManualEaseInDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseIn_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Whether to manually override this section's ease in time" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseIn_SetBit(void* Obj)
	{
		((FMovieSceneEasingSettings*)Obj)->bManualEaseIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseIn = { UE4CodeGen_Private::EPropertyClass::Bool, "bManualEaseIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneEasingSettings), &Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseIn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseIn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseIn_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseIn = { UE4CodeGen_Private::EPropertyClass::Interface, "EaseIn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, EaseIn), Z_Construct_UClass_UMovieSceneEasingFunction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseIn_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Automatically applied ease out time" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutDuration = { UE4CodeGen_Private::EPropertyClass::Int, "AutoEaseOutDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, AutoEaseOutDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Automatically applied ease in duration in frames" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInDuration = { UE4CodeGen_Private::EPropertyClass::Int, "AutoEaseInDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FMovieSceneEasingSettings, AutoEaseInDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInTime,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_ManualEaseInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_bManualEaseIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_EaseIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::NewProp_AutoEaseInDuration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEasingSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneEasingSettings),
		alignof(FMovieSceneEasingSettings),
		Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEasingSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEasingSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneEasingSettings"), sizeof(FMovieSceneEasingSettings), Get_Z_Construct_UScriptStruct_FMovieSceneEasingSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneEasingSettings_CRC() { return 685473471U; }
class UScriptStruct* FMovieSceneSectionEvalOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENE_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSectionEvalOptions"), sizeof(FMovieSceneSectionEvalOptions), Get_Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneSectionEvalOptions(FMovieSceneSectionEvalOptions::StaticStruct, TEXT("/Script/MovieScene"), TEXT("MovieSceneSectionEvalOptions"), false, nullptr, nullptr);
static struct FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionEvalOptions
{
	FScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionEvalOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneSectionEvalOptions")),new UScriptStruct::TCppStructOps<FMovieSceneSectionEvalOptions>);
	}
} ScriptStruct_MovieScene_StaticRegisterNativesFMovieSceneSectionEvalOptions;
	struct Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompletionMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompletionMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEditCompletionMode_MetaData[];
#endif
		static void NewProp_bCanEditCompletionMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEditCompletionMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSectionEvalOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_CompletionMode_MetaData[] = {
		{ "Category", "Section" },
		{ "DisplayName", "When Finished" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "When set to \"RestoreState\", this section will restore any animation back to its previous state" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_CompletionMode = { UE4CodeGen_Private::EPropertyClass::Enum, "CompletionMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FMovieSceneSectionEvalOptions, CompletionMode), Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_CompletionMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_CompletionMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_CompletionMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_bCanEditCompletionMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_bCanEditCompletionMode_SetBit(void* Obj)
	{
		((FMovieSceneSectionEvalOptions*)Obj)->bCanEditCompletionMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_bCanEditCompletionMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanEditCompletionMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FMovieSceneSectionEvalOptions), &Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_bCanEditCompletionMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_bCanEditCompletionMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_bCanEditCompletionMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_CompletionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_CompletionMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::NewProp_bCanEditCompletionMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSectionEvalOptions",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneSectionEvalOptions),
		alignof(FMovieSceneSectionEvalOptions),
		Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieScene();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneSectionEvalOptions"), sizeof(FMovieSceneSectionEvalOptions), Get_Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_CRC() { return 2275093207U; }
	void UMovieSceneSection::StaticRegisterNativesUMovieSceneSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister()
	{
		return UMovieSceneSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsInfiniteRange_MetaData[];
#endif
		static void NewProp_bSupportsInfiniteRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsInfiniteRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInfinite_MetaData[];
#endif
		static void NewProp_bIsInfinite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInfinite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostRollTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostRollTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreRollTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreRollTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[];
#endif
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverlapPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostRollFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostRollFrames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreRollFrames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreRollFrames;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimecodeSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TimecodeSource;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Easing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Easing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvalOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvalOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneSection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Base class for movie scene sections" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_BlendType_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_BlendType = { UE4CodeGen_Private::EPropertyClass::Struct, "BlendType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, BlendType), Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_BlendType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_BlendType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bSupportsInfiniteRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Does this section support infinite ranges in the track editor?" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bSupportsInfiniteRange_SetBit(void* Obj)
	{
		((UMovieSceneSection*)Obj)->bSupportsInfiniteRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bSupportsInfiniteRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsInfiniteRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMovieSceneSection), &Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bSupportsInfiniteRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bSupportsInfiniteRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bSupportsInfiniteRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsInfinite_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Toggle to set this section to be infinite" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsInfinite_SetBit(void* Obj)
	{
		((UMovieSceneSection*)Obj)->bIsInfinite_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsInfinite = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsInfinite", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieSceneSection), &Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsInfinite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsInfinite_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsInfinite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The amount of time to continue 'postrolling' this section for after evaluation has ended." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollTime = { UE4CodeGen_Private::EPropertyClass::Float, "PostRollTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, PostRollTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The amount of time to prepare this section for evaluation before it actually starts." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollTime = { UE4CodeGen_Private::EPropertyClass::Float, "PreRollTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, PreRollTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The end time of the section" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EndTime = { UE4CodeGen_Private::EPropertyClass::Float, "EndTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, EndTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EndTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The start time of the section" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_StartTime = { UE4CodeGen_Private::EPropertyClass::Float, "StartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080020000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, StartTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_StartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsLocked_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Toggle whether this section is locked/unlocked" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((UMovieSceneSection*)Obj)->bIsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsLocked = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLocked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieSceneSection), &Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsLocked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "Toggle whether this section is active/inactive" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((UMovieSceneSection*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMovieSceneSection), &Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_OverlapPriority_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "This section's priority over overlapping sections" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_OverlapPriority = { UE4CodeGen_Private::EPropertyClass::Int, "OverlapPriority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, OverlapPriority), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_OverlapPriority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_OverlapPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_RowIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The row index that this section sits on" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_RowIndex = { UE4CodeGen_Private::EPropertyClass::Int, "RowIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, RowIndex), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_RowIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_RowIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollFrames_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The amount of time to continue 'postrolling' this section for after evaluation has ended." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollFrames = { UE4CodeGen_Private::EPropertyClass::Struct, "PostRollFrames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040040000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, PostRollFrames), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollFrames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollFrames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollFrames_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The amount of time to prepare this section for evaluation before it actually starts." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollFrames = { UE4CodeGen_Private::EPropertyClass::Struct, "PreRollFrames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040040000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, PreRollFrames), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollFrames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollFrames_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_TimecodeSource_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The timecode at which this movie scene section is based (ie. when it was recorded)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_TimecodeSource = { UE4CodeGen_Private::EPropertyClass::Struct, "TimecodeSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, TimecodeSource), Z_Construct_UScriptStruct_FMovieSceneTimecodeSource, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_TimecodeSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_TimecodeSource_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_SectionRange_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ToolTip", "The range in which this section is active" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_SectionRange = { UE4CodeGen_Private::EPropertyClass::Struct, "SectionRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, SectionRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_SectionRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_SectionRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_Easing_MetaData[] = {
		{ "Category", "Easing" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_Easing = { UE4CodeGen_Private::EPropertyClass::Struct, "Easing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, Easing), Z_Construct_UScriptStruct_FMovieSceneEasingSettings, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_Easing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_Easing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EvalOptions_MetaData[] = {
		{ "Category", "Section" },
		{ "ModuleRelativePath", "Public/MovieSceneSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EvalOptions = { UE4CodeGen_Private::EPropertyClass::Struct, "EvalOptions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneSection, EvalOptions), Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EvalOptions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EvalOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_BlendType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bSupportsInfiniteRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsInfinite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_OverlapPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_RowIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PostRollFrames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_PreRollFrames,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_TimecodeSource,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_SectionRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_Easing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSection_Statics::NewProp_EvalOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSection_Statics::ClassParams = {
		&UMovieSceneSection::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x002800A1u,
		nullptr, 0,
		Z_Construct_UClass_UMovieSceneSection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneSection, 1568178905);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneSection(Z_Construct_UClass_UMovieSceneSection, &UMovieSceneSection::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSection);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSection)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
