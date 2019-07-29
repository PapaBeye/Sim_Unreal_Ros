// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Tasks/BTTask_PlaySound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PlaySound() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlaySound_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_PlaySound();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void UBTTask_PlaySound::StaticRegisterNativesUBTTask_PlaySound()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_PlaySound_NoRegister()
	{
		return UBTTask_PlaySound::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_PlaySound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundToPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_PlaySound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlaySound_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_PlaySound.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlaySound.h" },
		{ "ToolTip", "Play Sound task node.\nPlays the specified sound when executed." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PlaySound_Statics::NewProp_SoundToPlay_MetaData[] = {
		{ "Category", "Node" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_PlaySound.h" },
		{ "ToolTip", "CUE to play" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_PlaySound_Statics::NewProp_SoundToPlay = { UE4CodeGen_Private::EPropertyClass::Object, "SoundToPlay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_PlaySound, SoundToPlay), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlaySound_Statics::NewProp_SoundToPlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlaySound_Statics::NewProp_SoundToPlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PlaySound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PlaySound_Statics::NewProp_SoundToPlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_PlaySound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PlaySound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PlaySound_Statics::ClassParams = {
		&UBTTask_PlaySound::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UBTTask_PlaySound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlaySound_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_PlaySound_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_PlaySound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_PlaySound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_PlaySound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_PlaySound, 93515284);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_PlaySound(Z_Construct_UClass_UBTTask_PlaySound, &UBTTask_PlaySound::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_PlaySound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PlaySound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
