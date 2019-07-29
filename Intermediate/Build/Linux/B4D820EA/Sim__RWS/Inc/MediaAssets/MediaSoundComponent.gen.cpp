// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssets/Public/MediaSoundComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaSoundComponent() {}
// Cross Module References
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaSoundChannels();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UFunction* Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
// End Cross Module References
	static UEnum* EMediaSoundChannels_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_EMediaSoundChannels, Z_Construct_UPackage__Script_MediaAssets(), TEXT("EMediaSoundChannels"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMediaSoundChannels(EMediaSoundChannels_StaticEnum, TEXT("/Script/MediaAssets"), TEXT("EMediaSoundChannels"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MediaAssets_EMediaSoundChannels_CRC() { return 3753689829U; }
	UEnum* Z_Construct_UEnum_MediaAssets_EMediaSoundChannels()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MediaAssets();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMediaSoundChannels"), 0, Get_Z_Construct_UEnum_MediaAssets_EMediaSoundChannels_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMediaSoundChannels::Mono", (int64)EMediaSoundChannels::Mono },
				{ "EMediaSoundChannels::Stereo", (int64)EMediaSoundChannels::Stereo },
				{ "EMediaSoundChannels::Surround", (int64)EMediaSoundChannels::Surround },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
				{ "Mono.ToolTip", "Mono (1 channel)." },
				{ "Stereo.ToolTip", "Stereo (2 channels)." },
				{ "Surround.ToolTip", "Surround sound (7.1 channels; for UI)." },
				{ "ToolTip", "Available media sound channel types." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMediaSoundChannels",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMediaSoundChannels",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMediaSoundComponent::StaticRegisterNativesUMediaSoundComponent()
	{
		UClass* Class = UMediaSoundComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_GetAttenuationSettingsToApply", &UMediaSoundComponent::execBP_GetAttenuationSettingsToApply },
			{ "GetMediaPlayer", &UMediaSoundComponent::execGetMediaPlayer },
			{ "SetMediaPlayer", &UMediaSoundComponent::execSetMediaPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics
	{
		struct MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms
		{
			FSoundAttenuationSettings OutAttenuationSettings;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAttenuationSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms), &Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "OutAttenuationSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms, OutAttenuationSettings), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "DisplayName", "Get Attenuation Settings To Apply" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ScriptName", "GetAttenuationSettingsToApply" },
		{ "ToolTip", "Get the attenuation settings based on the current component settings.\n\n@param OutAttenuationSettings Will contain the attenuation settings, if available.\n@return true if attenuation settings were returned, false if attenuation is disabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, "BP_GetAttenuationSettingsToApply", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MediaSoundComponent_eventBP_GetAttenuationSettingsToApply_Parms), Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics
	{
		struct MediaSoundComponent_eventGetMediaPlayer_Parms
		{
			UMediaPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MediaSoundComponent_eventGetMediaPlayer_Parms, ReturnValue), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Get the media player that provides the audio samples.\n\n@return The component's media player, or nullptr if not set.\n@see SetMediaPlayer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, "GetMediaPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MediaSoundComponent_eventGetMediaPlayer_Parms), Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics
	{
		struct MediaSoundComponent_eventSetMediaPlayer_Parms
		{
			UMediaPlayer* NewMediaPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewMediaPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::NewProp_NewMediaPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "NewMediaPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MediaSoundComponent_eventSetMediaPlayer_Parms, NewMediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::NewProp_NewMediaPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSoundComponent" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Set the media player that provides the audio samples.\n\n@param NewMediaPlayer The player to set.\n@see GetMediaPlayer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSoundComponent, "SetMediaPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MediaSoundComponent_eventSetMediaPlayer_Parms), Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister()
	{
		return UMediaSoundComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMediaSoundComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateAdjustmentRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RateAdjustmentRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RateAdjustmentFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateAdjustmentFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicRateAdjustment_MetaData[];
#endif
		static void NewProp_DynamicRateAdjustment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DynamicRateAdjustment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Channels;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Channels_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaSoundComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaSoundComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaSoundComponent_BP_GetAttenuationSettingsToApply, "BP_GetAttenuationSettingsToApply" }, // 2295807403
		{ &Z_Construct_UFunction_UMediaSoundComponent_GetMediaPlayer, "GetMediaPlayer" }, // 2769834073
		{ &Z_Construct_UFunction_UMediaSoundComponent_SetMediaPlayer, "SetMediaPlayer" }, // 4043808653
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSoundComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Media" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "MediaSoundComponent.h" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a sound component for playing a media player's audio output." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "Media" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "The media player asset associated with this component.\n\nThis property is meant for design-time convenience. To change the\nassociated media player at run-time, use the SetMediaPlayer method.\n\n@see SetMediaPlayer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_MediaPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "MediaPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMediaSoundComponent, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_MediaPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_MediaPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentRange_MetaData[] = {
		{ "Category", "Media" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "The allowed range of dynamic rate adjustment.\n\nIf dynamic rate adjustment is enabled, and the necessary adjustment\nfalls outside of this range, audio samples will be dropped." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentRange = { UE4CodeGen_Private::EPropertyClass::Struct, "RateAdjustmentRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UMediaSoundComponent, RateAdjustmentRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentFactor_MetaData[] = {
		{ "Category", "Media" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Factor for calculating the sample rate adjustment.\n\nIf dynamic rate adjustment is enabled, this number is multiplied with the drift\nbetween the audio and media clock (in 100ns ticks) to determine the adjustment.\nthat is to be multiplied into the current playrate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentFactor = { UE4CodeGen_Private::EPropertyClass::Float, "RateAdjustmentFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UMediaSoundComponent, RateAdjustmentFactor), METADATA_PARAMS(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment_MetaData[] = {
		{ "Category", "Media" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Dynamically adjust the sample rate if audio and media clock desynchronize." },
	};
#endif
	void Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment_SetBit(void* Obj)
	{
		((UMediaSoundComponent*)Obj)->DynamicRateAdjustment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment = { UE4CodeGen_Private::EPropertyClass::Bool, "DynamicRateAdjustment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMediaSoundComponent), &Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels_MetaData[] = {
		{ "Category", "Media" },
		{ "ModuleRelativePath", "Public/MediaSoundComponent.h" },
		{ "ToolTip", "Media sound channel type." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels = { UE4CodeGen_Private::EPropertyClass::Enum, "Channels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMediaSoundComponent, Channels), Z_Construct_UEnum_MediaAssets_EMediaSoundChannels, METADATA_PARAMS(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels_Underlying = { UE4CodeGen_Private::EPropertyClass::Int, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaSoundComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_MediaPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_RateAdjustmentFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_DynamicRateAdjustment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSoundComponent_Statics::NewProp_Channels_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaSoundComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaSoundComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaSoundComponent_Statics::ClassParams = {
		&UMediaSoundComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMediaSoundComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMediaSoundComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMediaSoundComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaSoundComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaSoundComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaSoundComponent, 3306929688);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaSoundComponent(Z_Construct_UClass_UMediaSoundComponent, &UMediaSoundComponent::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UMediaSoundComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaSoundComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
