// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeLooping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeLooping() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeLooping_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeLooping();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeLooping::StaticRegisterNativesUSoundNodeLooping()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeLooping_NoRegister()
	{
		return USoundNodeLooping::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeLooping_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoopIndefinitely_MetaData[];
#endif
		static void NewProp_bLoopIndefinitely_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoopIndefinitely;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoopCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeLooping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeLooping_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Looping" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeLooping.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeLooping.h" },
		{ "ToolTip", "Defines how a sound loops; either indefinitely, or for a set number of times.\nNote: The Looping node should only be used for logical or procedural looping such as introducing a delay.\nThese sounds will not be played seamlessly. If you want a sound to loop seamlessly and indefinitely,\nuse the Looping flag on the Wave Player node for that sound." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_bLoopIndefinitely_MetaData[] = {
		{ "Category", "Looping" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeLooping.h" },
		{ "ToolTip", "If enabled, the node will continue to loop indefinitely regardless of the Loop Count value." },
	};
#endif
	void Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_bLoopIndefinitely_SetBit(void* Obj)
	{
		((USoundNodeLooping*)Obj)->bLoopIndefinitely = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_bLoopIndefinitely = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoopIndefinitely", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(USoundNodeLooping), &Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_bLoopIndefinitely_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_bLoopIndefinitely_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_bLoopIndefinitely_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_LoopCount_MetaData[] = {
		{ "Category", "Looping" },
		{ "ClampMin", "1" },
		{ "EditCondition", "!bLoopIndefinitely" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeLooping.h" },
		{ "ToolTip", "The amount of times to loop" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_LoopCount = { UE4CodeGen_Private::EPropertyClass::Int, "LoopCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeLooping, LoopCount), METADATA_PARAMS(Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_LoopCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_LoopCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_bLoopIndefinitely,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeLooping_Statics::NewProp_LoopCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeLooping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeLooping>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeLooping_Statics::ClassParams = {
		&USoundNodeLooping::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000810A0u,
		nullptr, 0,
		Z_Construct_UClass_USoundNodeLooping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USoundNodeLooping_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeLooping_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeLooping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeLooping()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeLooping_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeLooping, 3830820279);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeLooping(Z_Construct_UClass_USoundNodeLooping, &USoundNodeLooping::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeLooping"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeLooping);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
