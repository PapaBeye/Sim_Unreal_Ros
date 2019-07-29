// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/WorldPSCPool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPSCPool() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPSCPoolMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPSCPool();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPSCPool();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPSCPoolElem();
// End Cross Module References
	static UEnum* EPSCPoolMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPSCPoolMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EPSCPoolMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPSCPoolMethod(EPSCPoolMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EPSCPoolMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EPSCPoolMethod_CRC() { return 2261110521U; }
	UEnum* Z_Construct_UEnum_Engine_EPSCPoolMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPSCPoolMethod"), 0, Get_Z_Construct_UEnum_Engine_EPSCPoolMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPSCPoolMethod::None", (int64)EPSCPoolMethod::None },
				{ "EPSCPoolMethod::AutoRelease", (int64)EPSCPoolMethod::AutoRelease },
				{ "EPSCPoolMethod::ManualRelease", (int64)EPSCPoolMethod::ManualRelease },
				{ "EPSCPoolMethod::ManualRelease_OnComplete", (int64)EPSCPoolMethod::ManualRelease_OnComplete },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AutoRelease.ToolTip", "PSC is allocated from the pool and will be automatically released back to it.\nUser need not handle this any more that other PSCs but interaction with the PSC after the tick it's spawned in are unsafe.\nThis method is useful for one-shot fx that you don't need to keep a reference to and can fire and forget." },
				{ "ManualRelease.ToolTip", "PSC is allocated from the pool but will NOT be automatically released back to it. User has ownership of the PSC and must call ReleaseToPool when finished with it otherwise the PSC will leak.\nInteraction with the PSC after it has been released are unsafe.\nThis method is useful for persistent FX that you need to modify parameters upon etc over it's lifetime." },
				{ "ManualRelease_OnComplete.Hidden", "" },
				{ "ManualRelease_OnComplete.ToolTip", "Special entry allowing manual release PSCs to be manually released but wait until completion to be returned to the pool." },
				{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
				{ "None.ToolTip", "PSC is will be created fresh and not allocated from the pool." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPSCPoolMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPSCPoolMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FWorldPSCPool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FWorldPSCPool_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPSCPool, Z_Construct_UPackage__Script_Engine(), TEXT("WorldPSCPool"), sizeof(FWorldPSCPool), Get_Z_Construct_UScriptStruct_FWorldPSCPool_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWorldPSCPool(FWorldPSCPool::StaticStruct, TEXT("/Script/Engine"), TEXT("WorldPSCPool"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFWorldPSCPool
{
	FScriptStruct_Engine_StaticRegisterNativesFWorldPSCPool()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WorldPSCPool")),new UScriptStruct::TCppStructOps<FWorldPSCPool>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFWorldPSCPool;
	struct Z_Construct_UScriptStruct_FWorldPSCPool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldParticleSystemPools_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WorldParticleSystemPools;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldParticleSystemPools_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldParticleSystemPools_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPSCPool_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPSCPool>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewProp_WorldParticleSystemPools_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewProp_WorldParticleSystemPools = { UE4CodeGen_Private::EPropertyClass::Map, "WorldParticleSystemPools", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000000, 1, nullptr, STRUCT_OFFSET(FWorldPSCPool, WorldParticleSystemPools), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewProp_WorldParticleSystemPools_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewProp_WorldParticleSystemPools_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewProp_WorldParticleSystemPools_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Object, "WorldParticleSystemPools_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewProp_WorldParticleSystemPools_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldParticleSystemPools", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FPSCPool, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPSCPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewProp_WorldParticleSystemPools,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewProp_WorldParticleSystemPools_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPSCPool_Statics::NewProp_WorldParticleSystemPools_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPSCPool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"WorldPSCPool",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FWorldPSCPool),
		alignof(FWorldPSCPool),
		Z_Construct_UScriptStruct_FWorldPSCPool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPSCPool_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPSCPool_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPSCPool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldPSCPool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWorldPSCPool_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WorldPSCPool"), sizeof(FWorldPSCPool), Get_Z_Construct_UScriptStruct_FWorldPSCPool_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWorldPSCPool_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWorldPSCPool_CRC() { return 2620929486U; }
class UScriptStruct* FPSCPool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPSCPool_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPSCPool, Z_Construct_UPackage__Script_Engine(), TEXT("PSCPool"), sizeof(FPSCPool), Get_Z_Construct_UScriptStruct_FPSCPool_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPSCPool(FPSCPool::StaticStruct, TEXT("/Script/Engine"), TEXT("PSCPool"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPSCPool
{
	FScriptStruct_Engine_StaticRegisterNativesFPSCPool()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PSCPool")),new UScriptStruct::TCppStructOps<FPSCPool>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPSCPool;
	struct Z_Construct_UScriptStruct_FPSCPool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InUseComponents_Manual_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InUseComponents_Manual;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InUseComponents_Manual_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InUseComponents_Auto_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InUseComponents_Auto;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InUseComponents_Auto_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeElements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FreeElements;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FreeElements_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPSCPool_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPSCPool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPSCPool>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_InUseComponents_Manual_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
		{ "ToolTip", "Array of currently in flight components that need manual release." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_InUseComponents_Manual = { UE4CodeGen_Private::EPropertyClass::Array, "InUseComponents_Manual", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000002008, 1, nullptr, STRUCT_OFFSET(FPSCPool, InUseComponents_Manual), METADATA_PARAMS(Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_InUseComponents_Manual_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_InUseComponents_Manual_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_InUseComponents_Manual_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InUseComponents_Manual", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_InUseComponents_Auto_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
		{ "ToolTip", "Array of currently in flight components that will auto release." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_InUseComponents_Auto = { UE4CodeGen_Private::EPropertyClass::Array, "InUseComponents_Auto", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000002008, 1, nullptr, STRUCT_OFFSET(FPSCPool, InUseComponents_Auto), METADATA_PARAMS(Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_InUseComponents_Auto_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_InUseComponents_Auto_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_InUseComponents_Auto_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InUseComponents_Auto", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_FreeElements_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
		{ "ToolTip", "Collection of all currently allocated, free items ready to be grabbed for use.\nTODO: Change this to a FIFO queue to get better usage. May need to make this whole class behave similar to TCircularQueue." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_FreeElements = { UE4CodeGen_Private::EPropertyClass::Array, "FreeElements", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000002000, 1, nullptr, STRUCT_OFFSET(FPSCPool, FreeElements), METADATA_PARAMS(Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_FreeElements_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_FreeElements_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_FreeElements_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FreeElements", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPSCPoolElem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPSCPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_InUseComponents_Manual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_InUseComponents_Manual_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_InUseComponents_Auto,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_InUseComponents_Auto_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_FreeElements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSCPool_Statics::NewProp_FreeElements_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPSCPool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PSCPool",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FPSCPool),
		alignof(FPSCPool),
		Z_Construct_UScriptStruct_FPSCPool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPSCPool_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPSCPool_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPSCPool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPSCPool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPSCPool_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PSCPool"), sizeof(FPSCPool), Get_Z_Construct_UScriptStruct_FPSCPool_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPSCPool_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPSCPool_CRC() { return 1335021855U; }
class UScriptStruct* FPSCPoolElem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPSCPoolElem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPSCPoolElem, Z_Construct_UPackage__Script_Engine(), TEXT("PSCPoolElem"), sizeof(FPSCPoolElem), Get_Z_Construct_UScriptStruct_FPSCPoolElem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPSCPoolElem(FPSCPoolElem::StaticStruct, TEXT("/Script/Engine"), TEXT("PSCPoolElem"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPSCPoolElem
{
	FScriptStruct_Engine_StaticRegisterNativesFPSCPoolElem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PSCPoolElem")),new UScriptStruct::TCppStructOps<FPSCPoolElem>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPSCPoolElem;
	struct Z_Construct_UScriptStruct_FPSCPoolElem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PSC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPSCPoolElem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPSCPoolElem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPSCPoolElem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPSCPoolElem_Statics::NewProp_PSC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/WorldPSCPool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPSCPoolElem_Statics::NewProp_PSC = { UE4CodeGen_Private::EPropertyClass::Object, "PSC", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000082008, 1, nullptr, STRUCT_OFFSET(FPSCPoolElem, PSC), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPSCPoolElem_Statics::NewProp_PSC_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPSCPoolElem_Statics::NewProp_PSC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPSCPoolElem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPSCPoolElem_Statics::NewProp_PSC,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPSCPoolElem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PSCPoolElem",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		sizeof(FPSCPoolElem),
		alignof(FPSCPoolElem),
		Z_Construct_UScriptStruct_FPSCPoolElem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPSCPoolElem_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPSCPoolElem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPSCPoolElem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPSCPoolElem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPSCPoolElem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PSCPoolElem"), sizeof(FPSCPoolElem), Get_Z_Construct_UScriptStruct_FPSCPoolElem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPSCPoolElem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPSCPoolElem_CRC() { return 3371123745U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
