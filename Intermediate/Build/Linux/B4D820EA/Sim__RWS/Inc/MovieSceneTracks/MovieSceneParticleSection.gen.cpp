// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneParticleSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneParticleSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_EParticleKey();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParticleChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParticleSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParticleSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
	static UEnum* EParticleKey_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EParticleKey, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EParticleKey"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleKey(EParticleKey_StaticEnum, TEXT("/Script/MovieSceneTracks"), TEXT("EParticleKey"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MovieSceneTracks_EParticleKey_CRC() { return 4091523010U; }
	UEnum* Z_Construct_UEnum_MovieSceneTracks_EParticleKey()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleKey"), 0, Get_Z_Construct_UEnum_MovieSceneTracks_EParticleKey_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EParticleKey::Activate", (int64)EParticleKey::Activate },
				{ "EParticleKey::Deactivate", (int64)EParticleKey::Deactivate },
				{ "EParticleKey::Trigger", (int64)EParticleKey::Trigger },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Sections/MovieSceneParticleSection.h" },
				{ "ToolTip", "Defines the types of particle keys." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EParticleKey",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EParticleKey",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMovieSceneParticleChannel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVIESCENETRACKS_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneParticleChannel_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneParticleChannel, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneParticleChannel"), sizeof(FMovieSceneParticleChannel), Get_Z_Construct_UScriptStruct_FMovieSceneParticleChannel_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneParticleChannel(FMovieSceneParticleChannel::StaticStruct, TEXT("/Script/MovieSceneTracks"), TEXT("MovieSceneParticleChannel"), false, nullptr, nullptr);
static struct FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneParticleChannel
{
	FScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneParticleChannel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MovieSceneParticleChannel")),new UScriptStruct::TCppStructOps<FMovieSceneParticleChannel>);
	}
} ScriptStruct_MovieSceneTracks_StaticRegisterNativesFMovieSceneParticleChannel;
	struct Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParticleSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneParticleChannel>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneByteChannel,
		&NewStructOps,
		"MovieSceneParticleChannel",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMovieSceneParticleChannel),
		alignof(FMovieSceneParticleChannel),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParticleChannel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneParticleChannel_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MovieSceneTracks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneParticleChannel"), sizeof(FMovieSceneParticleChannel), Get_Z_Construct_UScriptStruct_FMovieSceneParticleChannel_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneParticleChannel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneParticleChannel_CRC() { return 2808993284U; }
	void UMovieSceneParticleSection::StaticRegisterNativesUMovieSceneParticleSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneParticleSection_NoRegister()
	{
		return UMovieSceneParticleSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneParticleSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneParticleSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParticleSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneParticleSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParticleSection.h" },
		{ "ToolTip", "Particle section, for particle toggling and triggering." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneParticleSection_Statics::NewProp_ParticleKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneParticleSection.h" },
		{ "ToolTip", "Curve containing the particle keys." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneParticleSection_Statics::NewProp_ParticleKeys = { UE4CodeGen_Private::EPropertyClass::Struct, "ParticleKeys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneParticleSection, ParticleKeys), Z_Construct_UScriptStruct_FMovieSceneParticleChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParticleSection_Statics::NewProp_ParticleKeys_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParticleSection_Statics::NewProp_ParticleKeys_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneParticleSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneParticleSection_Statics::NewProp_ParticleKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneParticleSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneParticleSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneParticleSection_Statics::ClassParams = {
		&UMovieSceneParticleSection::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x002800A0u,
		nullptr, 0,
		Z_Construct_UClass_UMovieSceneParticleSection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParticleSection_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneParticleSection_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneParticleSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneParticleSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneParticleSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneParticleSection, 3318057576);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneParticleSection(Z_Construct_UClass_UMovieSceneParticleSection, &UMovieSceneParticleSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneParticleSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneParticleSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
