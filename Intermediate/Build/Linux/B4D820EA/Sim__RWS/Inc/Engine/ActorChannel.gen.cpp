// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/ActorChannel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorChannel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorChannel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorChannel();
	ENGINE_API UClass* Z_Construct_UClass_UChannel();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UActorChannel::StaticRegisterNativesUActorChannel()
	{
	}
	UClass* Z_Construct_UClass_UActorChannel_NoRegister()
	{
		return UActorChannel::StaticClass();
	}
	struct Z_Construct_UClass_UActorChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateSubObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CreateSubObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreateSubObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorChannel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ActorChannel.h" },
		{ "ModuleRelativePath", "Classes/Engine/ActorChannel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A channel for exchanging actor and its subobject's properties and RPCs.\n\nActorChannel manages the creation and lifetime of a replicated actor. Actual replication of properties and RPCs\nactually happens in FObjectReplicator now (see DataReplication.h).\n\nAn ActorChannel bunch looks like this:\n\n+----------------------+---------------------------------------------------------------------------+\n| SpawnInfo            | (Spawn Info) Initial bunch only                                           |\n|  -Actor Class        |   -Created by ActorChannel                                                |\n|  -Spawn Loc/Rot      |                                                                           |\n| NetGUID assigns      |                                                                           |\n|  -Actor NetGUID      |                                                                           |\n|  -Component NetGUIDs |                                                                           |\n+----------------------+---------------------------------------------------------------------------+\n|                      |                                                                           |\n+----------------------+---------------------------------------------------------------------------+\n| NetGUID ObjRef       | (Content chunks) x number of replicating objects (Actor + any components) |\n|                      |   -Each chunk created by its own FObjectReplicator instance.              |\n+----------------------+---------------------------------------------------------------------------+\n|                      |                                                                           |\n| Properties...        |                                                                           |\n|                      |                                                                           |\n| RPCs...              |                                                                           |\n|                      |                                                                           |\n+----------------------+---------------------------------------------------------------------------+\n| </End Tag>           |                                                                           |\n+----------------------+---------------------------------------------------------------------------+" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ActorChannel.h" },
		{ "ToolTip", "These guids are waiting for their resolves, we need to queue up bunches until these are resolved" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects = { UE4CodeGen_Private::EPropertyClass::Array, "CreateSubObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UActorChannel, CreateSubObjects), METADATA_PARAMS(Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CreateSubObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorChannel_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ActorChannel.h" },
		{ "ToolTip", "Variables." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorChannel_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UActorChannel, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorChannel_Statics::NewProp_Actor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorChannel_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorChannel_Statics::NewProp_Actor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorChannel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorChannel_Statics::ClassParams = {
		&UActorChannel::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		Z_Construct_UClass_UActorChannel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UActorChannel_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UActorChannel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorChannel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorChannel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorChannel, 279588110);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorChannel(Z_Construct_UClass_UActorChannel, &UActorChannel::StaticClass, TEXT("/Script/Engine"), TEXT("UActorChannel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorChannel);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UActorChannel)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
