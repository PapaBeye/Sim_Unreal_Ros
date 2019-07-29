// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foliage/Public/ProceduralFoliageInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFoliageInstance() {}
// Cross Module References
	FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_ESimulationQuery();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_ESimulationOverlap();
	FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FProceduralFoliageInstance();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
// End Cross Module References
	static UEnum* ESimulationQuery_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Foliage_ESimulationQuery, Z_Construct_UPackage__Script_Foliage(), TEXT("ESimulationQuery"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimulationQuery(ESimulationQuery_StaticEnum, TEXT("/Script/Foliage"), TEXT("ESimulationQuery"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Foliage_ESimulationQuery_CRC() { return 827782147U; }
	UEnum* Z_Construct_UEnum_Foliage_ESimulationQuery()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Foliage();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimulationQuery"), 0, Get_Z_Construct_UEnum_Foliage_ESimulationQuery_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimulationQuery::CollisionOverlap", (int64)ESimulationQuery::CollisionOverlap },
				{ "ESimulationQuery::ShadeOverlap", (int64)ESimulationQuery::ShadeOverlap },
				{ "ESimulationQuery::AnyOverlap", (int64)ESimulationQuery::AnyOverlap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnyOverlap.ToolTip", "any overlap" },
				{ "BlueprintType", "true" },
				{ "CollisionOverlap.ToolTip", "Instances overlap with collision" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
				{ "ShadeOverlap.ToolTip", "Instances overlap with shade" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Foliage,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESimulationQuery",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESimulationQuery::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESimulationOverlap_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Foliage_ESimulationOverlap, Z_Construct_UPackage__Script_Foliage(), TEXT("ESimulationOverlap"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESimulationOverlap(ESimulationOverlap_StaticEnum, TEXT("/Script/Foliage"), TEXT("ESimulationOverlap"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Foliage_ESimulationOverlap_CRC() { return 3666763697U; }
	UEnum* Z_Construct_UEnum_Foliage_ESimulationOverlap()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Foliage();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESimulationOverlap"), 0, Get_Z_Construct_UEnum_Foliage_ESimulationOverlap_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESimulationOverlap::CollisionOverlap", (int64)ESimulationOverlap::CollisionOverlap },
				{ "ESimulationOverlap::ShadeOverlap", (int64)ESimulationOverlap::ShadeOverlap },
				{ "ESimulationOverlap::None", (int64)ESimulationOverlap::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CollisionOverlap.ToolTip", "Instances overlap with collision" },
				{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
				{ "None.ToolTip", "No overlap" },
				{ "ShadeOverlap.ToolTip", "Instances overlap with shade" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Foliage,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESimulationOverlap",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESimulationOverlap::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FProceduralFoliageInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOLIAGE_API uint32 Get_Z_Construct_UScriptStruct_FProceduralFoliageInstance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProceduralFoliageInstance, Z_Construct_UPackage__Script_Foliage(), TEXT("ProceduralFoliageInstance"), sizeof(FProceduralFoliageInstance), Get_Z_Construct_UScriptStruct_FProceduralFoliageInstance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProceduralFoliageInstance(FProceduralFoliageInstance::StaticStruct, TEXT("/Script/Foliage"), TEXT("ProceduralFoliageInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Foliage_StaticRegisterNativesFProceduralFoliageInstance
{
	FScriptStruct_Foliage_StaticRegisterNativesFProceduralFoliageInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProceduralFoliageInstance")),new UScriptStruct::TCppStructOps<FProceduralFoliageInstance>);
	}
} ScriptStruct_Foliage_StaticRegisterNativesFProceduralFoliageInstance;
	struct Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Age_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Age;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProceduralFoliageInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Object, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FProceduralFoliageInstance, Type), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Scale_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Scale = { UE4CodeGen_Private::EPropertyClass::Float, "Scale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FProceduralFoliageInstance, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Age_MetaData[] = {
		{ "Category", "ProceduralFoliageInstance" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Age = { UE4CodeGen_Private::EPropertyClass::Float, "Age", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProceduralFoliageInstance, Age), METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Age_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Age_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "ProceduralFoliageInstance" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProceduralFoliageInstance, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Normal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FProceduralFoliageInstance, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "ProceduralFoliageInstance" },
		{ "ModuleRelativePath", "Public/ProceduralFoliageInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FProceduralFoliageInstance, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Age,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
		nullptr,
		&NewStructOps,
		"ProceduralFoliageInstance",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FProceduralFoliageInstance),
		alignof(FProceduralFoliageInstance),
		Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProceduralFoliageInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProceduralFoliageInstance_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Foliage();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProceduralFoliageInstance"), sizeof(FProceduralFoliageInstance), Get_Z_Construct_UScriptStruct_FProceduralFoliageInstance_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProceduralFoliageInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProceduralFoliageInstance_CRC() { return 3316924547U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
