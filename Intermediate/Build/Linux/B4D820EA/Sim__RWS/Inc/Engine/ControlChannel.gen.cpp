// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/ControlChannel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlChannel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UControlChannel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UControlChannel();
	ENGINE_API UClass* Z_Construct_UClass_UChannel();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UControlChannel::StaticRegisterNativesUControlChannel()
	{
	}
	UClass* Z_Construct_UClass_UControlChannel_NoRegister()
	{
		return UControlChannel::StaticClass();
	}
	struct Z_Construct_UClass_UControlChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlChannel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ControlChannel.h" },
		{ "ModuleRelativePath", "Classes/Engine/ControlChannel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A channel for exchanging connection control messages." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlChannel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UControlChannel_Statics::ClassParams = {
		&UControlChannel::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UControlChannel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UControlChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlChannel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UControlChannel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UControlChannel, 976304569);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UControlChannel(Z_Construct_UClass_UControlChannel, &UControlChannel::StaticClass, TEXT("/Script/Engine"), TEXT("UControlChannel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlChannel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
