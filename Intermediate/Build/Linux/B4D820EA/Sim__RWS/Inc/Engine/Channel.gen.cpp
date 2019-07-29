// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Channel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChannel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UChannel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChannel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
// End Cross Module References
	void UChannel::StaticRegisterNativesUChannel()
	{
	}
	UClass* Z_Construct_UClass_UChannel_NoRegister()
	{
		return UChannel::StaticClass();
	}
	struct Z_Construct_UClass_UChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChannel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/Channel.h" },
		{ "ModuleRelativePath", "Classes/Engine/Channel.h" },
		{ "ToolTip", "Base class of communication channels." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChannel_Statics::NewProp_Connection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Channel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UChannel_Statics::NewProp_Connection = { UE4CodeGen_Private::EPropertyClass::Object, "Connection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UChannel, Connection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChannel_Statics::NewProp_Connection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChannel_Statics::NewProp_Connection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChannel_Statics::NewProp_Connection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChannel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChannel_Statics::ClassParams = {
		&UChannel::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		Z_Construct_UClass_UChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UChannel_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UChannel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChannel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChannel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChannel, 1984725270);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChannel(Z_Construct_UClass_UChannel, &UChannel::StaticClass, TEXT("/Script/Engine"), TEXT("UChannel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChannel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
