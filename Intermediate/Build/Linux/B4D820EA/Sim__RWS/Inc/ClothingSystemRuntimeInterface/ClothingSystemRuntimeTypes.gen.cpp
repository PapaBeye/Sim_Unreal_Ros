// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeInterface/Public/ClothingSystemRuntimeTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSystemRuntimeTypes() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FClothCollisionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionData, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionData"), sizeof(FClothCollisionData), Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionData(FClothCollisionData::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionData"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionData
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionData")),new UScriptStruct::TCppStructOps<FClothCollisionData>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionData;
	struct Z_Construct_UScriptStruct_FClothCollisionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Convexes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Convexes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Convexes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SphereConnections;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereConnections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spheres;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spheres_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_MetaData[] = {
		{ "Category", "Collison" },
		{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
		{ "ToolTip", "Convex Data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes = { UE4CodeGen_Private::EPropertyClass::Array, "Convexes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothCollisionData, Convexes), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Convexes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_Convex, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_MetaData[] = {
		{ "Category", "Collison" },
		{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
		{ "ToolTip", "Capsule data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections = { UE4CodeGen_Private::EPropertyClass::Array, "SphereConnections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothCollisionData, SphereConnections), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SphereConnections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_MetaData[] = {
		{ "Category", "Collison" },
		{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
		{ "ToolTip", "Sphere data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres = { UE4CodeGen_Private::EPropertyClass::Array, "Spheres", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FClothCollisionData, Spheres), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Spheres", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
		nullptr,
		&NewStructOps,
		"ClothCollisionData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FClothCollisionData),
		alignof(FClothCollisionData),
		Z_Construct_UScriptStruct_FClothCollisionData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionData"), sizeof(FClothCollisionData), Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothCollisionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC() { return 2138111605U; }
class UScriptStruct* FClothCollisionPrim_Convex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_Convex"), sizeof(FClothCollisionPrim_Convex), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionPrim_Convex(FClothCollisionPrim_Convex::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionPrim_Convex"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Convex
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Convex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionPrim_Convex")),new UScriptStruct::TCppStructOps<FClothCollisionPrim_Convex>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Convex;
	struct Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Planes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Planes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Planes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
		{ "ToolTip", "Data for a single convex element\nA convex is a collection of planes, in which the clothing will attempt to stay outside of the\nshape created by the planes combined." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionPrim_Convex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_BoneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_BoneIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BoneIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothCollisionPrim_Convex, BoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_BoneIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_BoneIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes = { UE4CodeGen_Private::EPropertyClass::Array, "Planes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothCollisionPrim_Convex, Planes), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Planes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_BoneIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
		nullptr,
		&NewStructOps,
		"ClothCollisionPrim_Convex",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FClothCollisionPrim_Convex),
		alignof(FClothCollisionPrim_Convex),
		Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionPrim_Convex"), sizeof(FClothCollisionPrim_Convex), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC() { return 3008256723U; }
class UScriptStruct* FClothCollisionPrim_SphereConnection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_SphereConnection"), sizeof(FClothCollisionPrim_SphereConnection), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionPrim_SphereConnection(FClothCollisionPrim_SphereConnection::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionPrim_SphereConnection"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_SphereConnection
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_SphereConnection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionPrim_SphereConnection")),new UScriptStruct::TCppStructOps<FClothCollisionPrim_SphereConnection>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_SphereConnection;
	struct Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SphereIndices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
		{ "ToolTip", "Data for a single connected sphere primitive. This should be configured after all spheres have\nbeen processed as they are really just indexing the existing spheres" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionPrim_SphereConnection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewProp_SphereIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewProp_SphereIndices = { UE4CodeGen_Private::EPropertyClass::Int, "SphereIndices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, CPP_ARRAY_DIM(SphereIndices, FClothCollisionPrim_SphereConnection), nullptr, STRUCT_OFFSET(FClothCollisionPrim_SphereConnection, SphereIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewProp_SphereIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewProp_SphereIndices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewProp_SphereIndices,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
		nullptr,
		&NewStructOps,
		"ClothCollisionPrim_SphereConnection",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FClothCollisionPrim_SphereConnection),
		alignof(FClothCollisionPrim_SphereConnection),
		Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionPrim_SphereConnection"), sizeof(FClothCollisionPrim_SphereConnection), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC() { return 3062196461U; }
class UScriptStruct* FClothCollisionPrim_Sphere::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMEINTERFACE_API uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_Sphere"), sizeof(FClothCollisionPrim_Sphere), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothCollisionPrim_Sphere(FClothCollisionPrim_Sphere::StaticStruct, TEXT("/Script/ClothingSystemRuntimeInterface"), TEXT("ClothCollisionPrim_Sphere"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Sphere
{
	FScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Sphere()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothCollisionPrim_Sphere")),new UScriptStruct::TCppStructOps<FClothCollisionPrim_Sphere>);
	}
} ScriptStruct_ClothingSystemRuntimeInterface_StaticRegisterNativesFClothCollisionPrim_Sphere;
	struct Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
		{ "ToolTip", "Data for a single sphere primitive in the clothing simulation. This can either be a\nsphere on its own, or part of a capsule referenced by the indices in FClothCollisionPrim_Capsule" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionPrim_Sphere>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_LocalPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_LocalPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothCollisionPrim_Sphere, LocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_LocalPosition_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_LocalPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothCollisionPrim_Sphere, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_BoneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothingSystemRuntimeTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_BoneIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BoneIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FClothCollisionPrim_Sphere, BoneIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_BoneIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_BoneIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_LocalPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_BoneIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
		nullptr,
		&NewStructOps,
		"ClothCollisionPrim_Sphere",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FClothCollisionPrim_Sphere),
		alignof(FClothCollisionPrim_Sphere),
		Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothCollisionPrim_Sphere"), sizeof(FClothCollisionPrim_Sphere), Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC() { return 2250220289U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
