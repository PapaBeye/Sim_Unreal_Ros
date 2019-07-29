// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/ParticleModule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModule() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EModuleType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleRandomSeedInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleCurvePair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static UEnum* EParticleSourceSelectionMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSourceSelectionMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleSourceSelectionMethod(EParticleSourceSelectionMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleSourceSelectionMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_CRC() { return 2625769308U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleSourceSelectionMethod"), 0, Get_Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPSSM_Random", (int64)EPSSM_Random },
				{ "EPSSM_Sequential", (int64)EPSSM_Sequential },
				{ "EPSSM_MAX", (int64)EPSSM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EPSSM_Random.DisplayName", "Random" },
				{ "EPSSM_Random.ToolTip", "Random         - select a particle at random" },
				{ "EPSSM_Sequential.DisplayName", "Sequential" },
				{ "EPSSM_Sequential.ToolTip", "Sequential     - select a particle in order" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
				{ "ToolTip", "Particle Selection Method, for any emitters that utilize particles\nas the source points." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EParticleSourceSelectionMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EParticleSourceSelectionMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EModuleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EModuleType, Z_Construct_UPackage__Script_Engine(), TEXT("EModuleType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EModuleType(EModuleType_StaticEnum, TEXT("/Script/Engine"), TEXT("EModuleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EModuleType_CRC() { return 3151827310U; }
	UEnum* Z_Construct_UEnum_Engine_EModuleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EModuleType"), 0, Get_Z_Construct_UEnum_Engine_EModuleType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPMT_General", (int64)EPMT_General },
				{ "EPMT_TypeData", (int64)EPMT_TypeData },
				{ "EPMT_Beam", (int64)EPMT_Beam },
				{ "EPMT_Trail", (int64)EPMT_Trail },
				{ "EPMT_Spawn", (int64)EPMT_Spawn },
				{ "EPMT_Required", (int64)EPMT_Required },
				{ "EPMT_Event", (int64)EPMT_Event },
				{ "EPMT_Light", (int64)EPMT_Light },
				{ "EPMT_SubUV", (int64)EPMT_SubUV },
				{ "EPMT_MAX", (int64)EPMT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EPMT_Beam.DisplayName", "Beam" },
				{ "EPMT_Beam.ToolTip", "Beam - only applied to beam emitters" },
				{ "EPMT_Event.DisplayName", "Event" },
				{ "EPMT_Event.ToolTip", "Event - event related modules" },
				{ "EPMT_General.DisplayName", "General" },
				{ "EPMT_General.ToolTip", "General - all emitter types can use it" },
				{ "EPMT_Light.DisplayName", "Light" },
				{ "EPMT_Light.ToolTip", "Light related modules" },
				{ "EPMT_Required.DisplayName", "Required" },
				{ "EPMT_Required.ToolTip", "Required - all emitter types REQUIRE it" },
				{ "EPMT_Spawn.DisplayName", "Spawn" },
				{ "EPMT_Spawn.ToolTip", "Spawn - all emitter types REQUIRE it" },
				{ "EPMT_SubUV.DisplayName", "SubUV" },
				{ "EPMT_SubUV.ToolTip", "SubUV related modules" },
				{ "EPMT_Trail.DisplayName", "Trail" },
				{ "EPMT_Trail.ToolTip", "Trail - only applied to trail emitters" },
				{ "EPMT_TypeData.DisplayName", "Type Data" },
				{ "EPMT_TypeData.ToolTip", "TypeData - TypeData modules" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
				{ "ToolTip", "ModuleType\n   Indicates the kind of emitter the module can be applied to.\n   ie, EPMT_Beam - only applies to beam emitters.\n\n   The TypeData field is present to speed up finding the TypeData module." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EModuleType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EModuleType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FParticleRandomSeedInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleRandomSeedInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleRandomSeedInfo, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleRandomSeedInfo"), sizeof(FParticleRandomSeedInfo), Get_Z_Construct_UScriptStruct_FParticleRandomSeedInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleRandomSeedInfo(FParticleRandomSeedInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleRandomSeedInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleRandomSeedInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleRandomSeedInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleRandomSeedInfo")),new UScriptStruct::TCppStructOps<FParticleRandomSeedInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleRandomSeedInfo;
	struct Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RandomSeeds;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeeds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomlySelectSeedArray_MetaData[];
#endif
		static void NewProp_bRandomlySelectSeedArray_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomlySelectSeedArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetSeedOnEmitterLooping_MetaData[];
#endif
		static void NewProp_bResetSeedOnEmitterLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetSeedOnEmitterLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstanceSeedIsIndex_MetaData[];
#endif
		static void NewProp_bInstanceSeedIsIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstanceSeedIsIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGetSeedFromInstance_MetaData[];
#endif
		static void NewProp_bGetSeedFromInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGetSeedFromInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleRandomSeedInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The random seed values to utilize for the module.\nMore than 1 means the instance will randomly select one." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds = { UE4CodeGen_Private::EPropertyClass::Array, "RandomSeeds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FParticleRandomSeedInfo, RandomSeeds), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "RandomSeeds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, then randomly select a seed entry from the RandomSeeds array" },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_SetBit(void* Obj)
	{
		((FParticleRandomSeedInfo*)Obj)->bRandomlySelectSeedArray = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandomlySelectSeedArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, then reset the seed upon the emitter looping.\nFor looping environmental effects this should likely be set to false to avoid\na repeating pattern." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_SetBit(void* Obj)
	{
		((FParticleRandomSeedInfo*)Obj)->bResetSeedOnEmitterLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping = { UE4CodeGen_Private::EPropertyClass::Bool, "bResetSeedOnEmitterLooping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the seed value retrieved from the instance will be an\nindex into the array of seeds." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_SetBit(void* Obj)
	{
		((FParticleRandomSeedInfo*)Obj)->bInstanceSeedIsIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex = { UE4CodeGen_Private::EPropertyClass::Bool, "bInstanceSeedIsIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module will attempt to get the seed from the owner\ninstance. If that fails, it will fall back to getting it from\nthe RandomSeeds array." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_SetBit(void* Obj)
	{
		((FParticleRandomSeedInfo*)Obj)->bGetSeedFromInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance = { UE4CodeGen_Private::EPropertyClass::Bool, "bGetSeedFromInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The name to expose to the placed instances for setting this seed" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FParticleRandomSeedInfo, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleRandomSeedInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FParticleRandomSeedInfo),
		alignof(FParticleRandomSeedInfo),
		Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleRandomSeedInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleRandomSeedInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleRandomSeedInfo"), sizeof(FParticleRandomSeedInfo), Get_Z_Construct_UScriptStruct_FParticleRandomSeedInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleRandomSeedInfo_CRC() { return 3429793049U; }
class UScriptStruct* FParticleCurvePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FParticleCurvePair_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleCurvePair, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleCurvePair"), sizeof(FParticleCurvePair), Get_Z_Construct_UScriptStruct_FParticleCurvePair_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FParticleCurvePair(FParticleCurvePair::StaticStruct, TEXT("/Script/Engine"), TEXT("ParticleCurvePair"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFParticleCurvePair
{
	FScriptStruct_Engine_StaticRegisterNativesFParticleCurvePair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ParticleCurvePair")),new UScriptStruct::TCppStructOps<FParticleCurvePair>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFParticleCurvePair;
	struct Z_Construct_UScriptStruct_FParticleCurvePair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleCurvePair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleCurvePair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject = { UE4CodeGen_Private::EPropertyClass::Object, "CurveObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FParticleCurvePair, CurveObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName = { UE4CodeGen_Private::EPropertyClass::Str, "CurveName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FParticleCurvePair, CurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleCurvePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleCurvePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleCurvePair",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FParticleCurvePair),
		alignof(FParticleCurvePair),
		Z_Construct_UScriptStruct_FParticleCurvePair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleCurvePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FParticleCurvePair_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ParticleCurvePair"), sizeof(FParticleCurvePair), Get_Z_Construct_UScriptStruct_FParticleCurvePair_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FParticleCurvePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FParticleCurvePair_CRC() { return 600200087U; }
	void UParticleModule::StaticRegisterNativesUParticleModule()
	{
	}
	UClass* Z_Construct_UClass_UParticleModule_NoRegister()
	{
		return UParticleModule::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleEditorColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModuleEditorColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODValidity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LODValidity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresLoopingNotification_MetaData[];
#endif
		static void NewProp_bRequiresLoopingNotification_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresLoopingNotification;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsRandomSeed_MetaData[];
#endif
		static void NewProp_bSupportsRandomSeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsRandomSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDuplicate_MetaData[];
#endif
		static void NewProp_LODDuplicate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LODDuplicate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditable_MetaData[];
#endif
		static void NewProp_bEditable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupported3DDrawMode_MetaData[];
#endif
		static void NewProp_bSupported3DDrawMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupported3DDrawMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b3DDrawMode_MetaData[];
#endif
		static void NewProp_b3DDrawMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b3DDrawMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCurvesAsColor_MetaData[];
#endif
		static void NewProp_bCurvesAsColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurvesAsColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateForGPUEmitter_MetaData[];
#endif
		static void NewProp_bUpdateForGPUEmitter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateForGPUEmitter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinalUpdateModule_MetaData[];
#endif
		static void NewProp_bFinalUpdateModule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinalUpdateModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateModule_MetaData[];
#endif
		static void NewProp_bUpdateModule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateModule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnModule_MetaData[];
#endif
		static void NewProp_bSpawnModule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnModule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Particles/ParticleModule.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor_MetaData[] = {
		{ "Category", "Cascade" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The color to draw the modules curves in the curve editor.\n    If bCurvesAsColor is true, it overrides this value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ModuleEditorColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UParticleModule, ModuleEditorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The LOD levels this module is present in.\nBit-flags are used to indicate validity for a given LOD level.\nFor example, if\n        ((1 << Level) & LODValidity) != 0\nthen the module is used in that LOD." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity = { UE4CodeGen_Private::EPropertyClass::Byte, "LODValidity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleModule, LODValidity), nullptr, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module should be told when looping" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bRequiresLoopingNotification = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification = { UE4CodeGen_Private::EPropertyClass::Bool, "bRequiresLoopingNotification", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module supports RandomSeed setting" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bSupportsRandomSeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsRandomSeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, this flag indicates that auto-generation for LOD will result in\nan exact duplicate of the module, regardless of the percentage.\nIf false, it will result in a module with different settings." },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->LODDuplicate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate = { UE4CodeGen_Private::EPropertyClass::Bool, "LODDuplicate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module has had editing enabled on it" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bEditable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEditable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module is enabled" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module supports rendering a 3D visualization helper" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bSupported3DDrawMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupported3DDrawMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_MetaData[] = {
		{ "Category", "Cascade" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module should render its 3D visualization helper" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->b3DDrawMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode = { UE4CodeGen_Private::EPropertyClass::Bool, "b3DDrawMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module displays FVector curves as colors" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bCurvesAsColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor = { UE4CodeGen_Private::EPropertyClass::Bool, "bCurvesAsColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during update and/or final update for GPU emitters" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bUpdateForGPUEmitter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateForGPUEmitter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during final update" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bFinalUpdateModule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule = { UE4CodeGen_Private::EPropertyClass::Bool, "bFinalUpdateModule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during Updating" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bUpdateModule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateModule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during Spawning" },
	};
#endif
	void Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_SetBit(void* Obj)
	{
		((UParticleModule*)Obj)->bSpawnModule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule = { UE4CodeGen_Private::EPropertyClass::Bool, "bSpawnModule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModule_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModule_Statics::ClassParams = {
		&UParticleModule::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001010A1u,
		nullptr, 0,
		Z_Construct_UClass_UParticleModule_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModule_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModule, 24756601);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModule(Z_Construct_UClass_UParticleModule, &UParticleModule::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
