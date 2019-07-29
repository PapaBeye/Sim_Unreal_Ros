// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildPatchServices/Private/Data/ManifestUObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManifestUObject() {}
// Cross Module References
	BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FFileManifestData();
	UPackage* Z_Construct_UPackage__Script_BuildPatchServices();
	BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FChunkPartData();
	BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FSHAHashData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FChunkInfoData();
	BUILDPATCHSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomFieldData();
	BUILDPATCHSERVICES_API UClass* Z_Construct_UClass_UBuildPatchManifest_NoRegister();
	BUILDPATCHSERVICES_API UClass* Z_Construct_UClass_UBuildPatchManifest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FFileManifestData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FFileManifestData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileManifestData, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("FileManifestData"), sizeof(FFileManifestData), Get_Z_Construct_UScriptStruct_FFileManifestData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFileManifestData(FFileManifestData::StaticStruct, TEXT("/Script/BuildPatchServices"), TEXT("FileManifestData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildPatchServices_StaticRegisterNativesFFileManifestData
{
	FScriptStruct_BuildPatchServices_StaticRegisterNativesFFileManifestData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FileManifestData")),new UScriptStruct::TCppStructOps<FFileManifestData>);
	}
} ScriptStruct_BuildPatchServices_StaticRegisterNativesFFileManifestData;
	struct Z_Construct_UScriptStruct_FFileManifestData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCompressed_MetaData[];
#endif
		static void NewProp_bIsCompressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCompressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[];
#endif
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SymlinkTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SymlinkTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUnixExecutable_MetaData[];
#endif
		static void NewProp_bIsUnixExecutable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUnixExecutable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstallTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstallTags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstallTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileChunkParts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FileChunkParts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileChunkParts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFileManifestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFileManifestData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed_SetBit(void* Obj)
	{
		((FFileManifestData*)Obj)->bIsCompressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCompressed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFileManifestData), &Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((FFileManifestData*)Obj)->bIsReadOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsReadOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFileManifestData), &Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_SymlinkTarget_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_SymlinkTarget = { UE4CodeGen_Private::EPropertyClass::Str, "SymlinkTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFileManifestData, SymlinkTarget), METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_SymlinkTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_SymlinkTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable_SetBit(void* Obj)
	{
		((FFileManifestData*)Obj)->bIsUnixExecutable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsUnixExecutable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FFileManifestData), &Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags = { UE4CodeGen_Private::EPropertyClass::Array, "InstallTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFileManifestData, InstallTags), METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "InstallTags", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts = { UE4CodeGen_Private::EPropertyClass::Array, "FileChunkParts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFileManifestData, FileChunkParts), METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FileChunkParts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FChunkPartData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileHash_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileHash = { UE4CodeGen_Private::EPropertyClass::Struct, "FileHash", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFileManifestData, FileHash), Z_Construct_UScriptStruct_FSHAHashData, METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileHash_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_Filename_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_Filename = { UE4CodeGen_Private::EPropertyClass::Str, "Filename", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FFileManifestData, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFileManifestData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsCompressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsReadOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_SymlinkTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_bIsUnixExecutable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_InstallTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileChunkParts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_FileHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileManifestData_Statics::NewProp_Filename,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFileManifestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
		nullptr,
		&NewStructOps,
		"FileManifestData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FFileManifestData),
		alignof(FFileManifestData),
		Z_Construct_UScriptStruct_FFileManifestData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFileManifestData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFileManifestData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFileManifestData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFileManifestData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FileManifestData"), sizeof(FFileManifestData), Get_Z_Construct_UScriptStruct_FFileManifestData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFileManifestData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFileManifestData_CRC() { return 981548844U; }
class UScriptStruct* FChunkPartData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FChunkPartData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkPartData, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("ChunkPartData"), sizeof(FChunkPartData), Get_Z_Construct_UScriptStruct_FChunkPartData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChunkPartData(FChunkPartData::StaticStruct, TEXT("/Script/BuildPatchServices"), TEXT("ChunkPartData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkPartData
{
	FScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkPartData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChunkPartData")),new UScriptStruct::TCppStructOps<FChunkPartData>);
	}
} ScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkPartData;
	struct Z_Construct_UScriptStruct_FChunkPartData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkPartData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkPartData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkPartData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Size = { UE4CodeGen_Private::EPropertyClass::UInt32, "Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkPartData, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::UInt32, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkPartData, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Guid = { UE4CodeGen_Private::EPropertyClass::Struct, "Guid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkPartData, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Guid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Guid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkPartData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkPartData_Statics::NewProp_Guid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkPartData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
		nullptr,
		&NewStructOps,
		"ChunkPartData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FChunkPartData),
		alignof(FChunkPartData),
		Z_Construct_UScriptStruct_FChunkPartData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPartData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkPartData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkPartData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChunkPartData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChunkPartData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChunkPartData"), sizeof(FChunkPartData), Get_Z_Construct_UScriptStruct_FChunkPartData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChunkPartData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChunkPartData_CRC() { return 1976930780U; }
class UScriptStruct* FChunkInfoData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FChunkInfoData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkInfoData, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("ChunkInfoData"), sizeof(FChunkInfoData), Get_Z_Construct_UScriptStruct_FChunkInfoData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChunkInfoData(FChunkInfoData::StaticStruct, TEXT("/Script/BuildPatchServices"), TEXT("ChunkInfoData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkInfoData
{
	FScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkInfoData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChunkInfoData")),new UScriptStruct::TCppStructOps<FChunkInfoData>);
	}
} ScriptStruct_BuildPatchServices_StaticRegisterNativesFChunkInfoData;
	struct Z_Construct_UScriptStruct_FChunkInfoData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GroupNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_FileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShaHash_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShaHash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_Hash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfoData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkInfoData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_GroupNumber_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_GroupNumber = { UE4CodeGen_Private::EPropertyClass::Byte, "GroupNumber", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkInfoData, GroupNumber), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_GroupNumber_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_GroupNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_FileSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_FileSize = { UE4CodeGen_Private::EPropertyClass::Int64, "FileSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkInfoData, FileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_FileSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_FileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_ShaHash_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_ShaHash = { UE4CodeGen_Private::EPropertyClass::Struct, "ShaHash", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkInfoData, ShaHash), Z_Construct_UScriptStruct_FSHAHashData, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_ShaHash_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_ShaHash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Hash = { UE4CodeGen_Private::EPropertyClass::UInt64, "Hash", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkInfoData, Hash), METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Hash_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Hash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Guid = { UE4CodeGen_Private::EPropertyClass::Struct, "Guid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FChunkInfoData, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Guid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Guid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkInfoData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_GroupNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_FileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_ShaHash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Hash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkInfoData_Statics::NewProp_Guid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkInfoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
		nullptr,
		&NewStructOps,
		"ChunkInfoData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FChunkInfoData),
		alignof(FChunkInfoData),
		Z_Construct_UScriptStruct_FChunkInfoData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChunkInfoData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkInfoData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChunkInfoData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChunkInfoData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChunkInfoData"), sizeof(FChunkInfoData), Get_Z_Construct_UScriptStruct_FChunkInfoData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChunkInfoData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChunkInfoData_CRC() { return 4057306942U; }
class UScriptStruct* FSHAHashData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FSHAHashData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSHAHashData, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("SHAHashData"), sizeof(FSHAHashData), Get_Z_Construct_UScriptStruct_FSHAHashData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSHAHashData(FSHAHashData::StaticStruct, TEXT("/Script/BuildPatchServices"), TEXT("SHAHashData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildPatchServices_StaticRegisterNativesFSHAHashData
{
	FScriptStruct_BuildPatchServices_StaticRegisterNativesFSHAHashData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SHAHashData")),new UScriptStruct::TCppStructOps<FSHAHashData>);
	}
} ScriptStruct_BuildPatchServices_StaticRegisterNativesFSHAHashData;
	struct Z_Construct_UScriptStruct_FSHAHashData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHAHashData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSHAHashData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSHAHashData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSHAHashData_Statics::NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSHAHashData_Statics::NewProp_Hash = { UE4CodeGen_Private::EPropertyClass::Byte, "Hash", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, CPP_ARRAY_DIM(Hash, FSHAHashData), nullptr, STRUCT_OFFSET(FSHAHashData, Hash), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSHAHashData_Statics::NewProp_Hash_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSHAHashData_Statics::NewProp_Hash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSHAHashData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSHAHashData_Statics::NewProp_Hash,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSHAHashData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
		nullptr,
		&NewStructOps,
		"SHAHashData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSHAHashData),
		alignof(FSHAHashData),
		Z_Construct_UScriptStruct_FSHAHashData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSHAHashData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSHAHashData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSHAHashData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSHAHashData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSHAHashData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SHAHashData"), sizeof(FSHAHashData), Get_Z_Construct_UScriptStruct_FSHAHashData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSHAHashData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSHAHashData_CRC() { return 3355716780U; }
class UScriptStruct* FCustomFieldData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDPATCHSERVICES_API uint32 Get_Z_Construct_UScriptStruct_FCustomFieldData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomFieldData, Z_Construct_UPackage__Script_BuildPatchServices(), TEXT("CustomFieldData"), sizeof(FCustomFieldData), Get_Z_Construct_UScriptStruct_FCustomFieldData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomFieldData(FCustomFieldData::StaticStruct, TEXT("/Script/BuildPatchServices"), TEXT("CustomFieldData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildPatchServices_StaticRegisterNativesFCustomFieldData
{
	FScriptStruct_BuildPatchServices_StaticRegisterNativesFCustomFieldData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomFieldData")),new UScriptStruct::TCppStructOps<FCustomFieldData>);
	}
} ScriptStruct_BuildPatchServices_StaticRegisterNativesFCustomFieldData;
	struct Z_Construct_UScriptStruct_FCustomFieldData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFieldData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomFieldData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Str, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCustomFieldData, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FCustomFieldData, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomFieldData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomFieldData_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomFieldData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
		nullptr,
		&NewStructOps,
		"CustomFieldData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCustomFieldData),
		alignof(FCustomFieldData),
		Z_Construct_UScriptStruct_FCustomFieldData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFieldData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomFieldData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomFieldData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomFieldData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomFieldData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildPatchServices();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomFieldData"), sizeof(FCustomFieldData), Get_Z_Construct_UScriptStruct_FCustomFieldData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomFieldData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomFieldData_CRC() { return 3867468662U; }
	void UBuildPatchManifest::StaticRegisterNativesUBuildPatchManifest()
	{
	}
	UClass* Z_Construct_UClass_UBuildPatchManifest_NoRegister()
	{
		return UBuildPatchManifest::StaticClass();
	}
	struct Z_Construct_UClass_UBuildPatchManifest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomFields_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomFields;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomFields_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChunkList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChunkList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileManifestList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FileManifestList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FileManifestList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrereqArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrereqArgs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrereqPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrereqPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrereqName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrereqName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrereqIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PrereqIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrereqIds_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LaunchCommand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchExe_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LaunchExe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFileData_MetaData[];
#endif
		static void NewProp_bIsFileData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFileData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManifestFileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ManifestFileVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuildPatchManifest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildPatchServices,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Data/ManifestUObject.h" },
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields = { UE4CodeGen_Private::EPropertyClass::Array, "CustomFields", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, CustomFields), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomFields", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCustomFieldData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList = { UE4CodeGen_Private::EPropertyClass::Array, "ChunkList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, ChunkList), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ChunkList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FChunkInfoData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList = { UE4CodeGen_Private::EPropertyClass::Array, "FileManifestList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, FileManifestList), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "FileManifestList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFileManifestData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqArgs_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqArgs = { UE4CodeGen_Private::EPropertyClass::Str, "PrereqArgs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, PrereqArgs), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqArgs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqArgs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqPath = { UE4CodeGen_Private::EPropertyClass::Str, "PrereqPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, PrereqPath), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqName = { UE4CodeGen_Private::EPropertyClass::Str, "PrereqName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, PrereqName), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds = { UE4CodeGen_Private::EPropertyClass::Set, "PrereqIds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, PrereqIds), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds_ElementProp = { UE4CodeGen_Private::EPropertyClass::Str, "PrereqIds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchCommand_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchCommand = { UE4CodeGen_Private::EPropertyClass::Str, "LaunchCommand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, LaunchCommand), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchCommand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchCommand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchExe_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchExe = { UE4CodeGen_Private::EPropertyClass::Str, "LaunchExe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, LaunchExe), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchExe_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchExe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_BuildVersion_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_BuildVersion = { UE4CodeGen_Private::EPropertyClass::Str, "BuildVersion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, BuildVersion), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_BuildVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_BuildVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppName = { UE4CodeGen_Private::EPropertyClass::Str, "AppName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, AppName), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppID_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppID = { UE4CodeGen_Private::EPropertyClass::UInt32, "AppID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, AppID), METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	void Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData_SetBit(void* Obj)
	{
		((UBuildPatchManifest*)Obj)->bIsFileData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFileData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuildPatchManifest), &Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ManifestFileVersion_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/ManifestUObject.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ManifestFileVersion = { UE4CodeGen_Private::EPropertyClass::Byte, "ManifestFileVersion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBuildPatchManifest, ManifestFileVersion), nullptr, METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ManifestFileVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ManifestFileVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuildPatchManifest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_CustomFields_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ChunkList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_FileManifestList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_PrereqIds_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_LaunchExe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_BuildVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_bIsFileData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuildPatchManifest_Statics::NewProp_ManifestFileVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuildPatchManifest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildPatchManifest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBuildPatchManifest_Statics::ClassParams = {
		&UBuildPatchManifest::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		Z_Construct_UClass_UBuildPatchManifest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBuildPatchManifest_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBuildPatchManifest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuildPatchManifest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBuildPatchManifest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuildPatchManifest, 3429008149);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuildPatchManifest(Z_Construct_UClass_UBuildPatchManifest, &UBuildPatchManifest::StaticClass, TEXT("/Script/BuildPatchServices"), TEXT("UBuildPatchManifest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildPatchManifest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
