// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundSourceBus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSourceBus() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESourceBusChannels();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave();
// End Cross Module References
	static UEnum* ESourceBusChannels_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESourceBusChannels, Z_Construct_UPackage__Script_Engine(), TEXT("ESourceBusChannels"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESourceBusChannels(ESourceBusChannels_StaticEnum, TEXT("/Script/Engine"), TEXT("ESourceBusChannels"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESourceBusChannels_CRC() { return 3416694204U; }
	UEnum* Z_Construct_UEnum_Engine_ESourceBusChannels()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESourceBusChannels"), 0, Get_Z_Construct_UEnum_Engine_ESourceBusChannels_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESourceBusChannels::Mono", (int64)ESourceBusChannels::Mono },
				{ "ESourceBusChannels::Stereo", (int64)ESourceBusChannels::Stereo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
				{ "ToolTip", "The number of channels to mix audio into the source bus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESourceBusChannels",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESourceBusChannels",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USoundSourceBus::StaticRegisterNativesUSoundSourceBus()
	{
	}
	UClass* Z_Construct_UClass_USoundSourceBus_NoRegister()
	{
		return USoundSourceBus::StaticClass();
	}
	struct Z_Construct_UClass_USoundSourceBus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDeactivateWhenSilent_MetaData[];
#endif
		static void NewProp_bAutoDeactivateWhenSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDeactivateWhenSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBusDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceBusDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBusChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceBusChannels;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceBusChannels_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSourceBus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWave,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Sound" },
		{ "HideCategories", "Compression SoundWave Streaming Subtitles Sound Info ImportSettings Object Object" },
		{ "IncludePath", "Sound/SoundSourceBus.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "A source bus is a type of USoundBase and can be \"played\" like any sound." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "Stop the source bus when the volume goes to zero." },
		{ "UIMin", "0.000000" },
	};
#endif
	void Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_SetBit(void* Obj)
	{
		((USoundSourceBus*)Obj)->bAutoDeactivateWhenSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoDeactivateWhenSilent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundSourceBus), &Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "The duration (in seconds) to use for the source bus. A duration of 0.0 indicates to play the source bus indefinitely." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration = { UE4CodeGen_Private::EPropertyClass::Float, "SourceBusDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundSourceBus, SourceBusDuration), METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "How many channels to use for the source bus." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels = { UE4CodeGen_Private::EPropertyClass::Enum, "SourceBusChannels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundSourceBus, SourceBusChannels), Z_Construct_UEnum_Engine_ESourceBusChannels, METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSourceBus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSourceBus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSourceBus>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundSourceBus_Statics::ClassParams = {
		&USoundSourceBus::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009010A0u,
		nullptr, 0,
		Z_Construct_UClass_USoundSourceBus_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSourceBus()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundSourceBus_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundSourceBus, 1277952925);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundSourceBus(Z_Construct_UClass_USoundSourceBus, &USoundSourceBus::StaticClass, TEXT("/Script/Engine"), TEXT("USoundSourceBus"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSourceBus);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
