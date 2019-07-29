// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Sound/SoundNodeSwitch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeSwitch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeSwitch();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeSwitch::StaticRegisterNativesUSoundNodeSwitch()
	{
	}
	UClass* Z_Construct_UClass_USoundNodeSwitch_NoRegister()
	{
		return USoundNodeSwitch::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IntParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeSwitch_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Switch" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeSwitch.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeSwitch.h" },
		{ "ToolTip", "Selects a child node based on the value of a integer parameter" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeSwitch_Statics::NewProp_IntParameterName_MetaData[] = {
		{ "Category", "Switch" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeSwitch.h" },
		{ "ToolTip", "The name of the integer parameter to use to determine which branch we should take" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USoundNodeSwitch_Statics::NewProp_IntParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "IntParameterName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USoundNodeSwitch, IntParameterName), METADATA_PARAMS(Z_Construct_UClass_USoundNodeSwitch_Statics::NewProp_IntParameterName_MetaData, ARRAY_COUNT(Z_Construct_UClass_USoundNodeSwitch_Statics::NewProp_IntParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeSwitch_Statics::NewProp_IntParameterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeSwitch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeSwitch_Statics::ClassParams = {
		&USoundNodeSwitch::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000810A0u,
		nullptr, 0,
		Z_Construct_UClass_USoundNodeSwitch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USoundNodeSwitch_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeSwitch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USoundNodeSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeSwitch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundNodeSwitch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundNodeSwitch, 1204407721);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundNodeSwitch(Z_Construct_UClass_USoundNodeSwitch, &USoundNodeSwitch::StaticClass, TEXT("/Script/Engine"), TEXT("USoundNodeSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
