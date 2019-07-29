// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TextureLODSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureLODSettings() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureLODGroup();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLODSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLODSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FTextureLODGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTextureLODGroup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureLODGroup, Z_Construct_UPackage__Script_Engine(), TEXT("TextureLODGroup"), sizeof(FTextureLODGroup), Get_Z_Construct_UScriptStruct_FTextureLODGroup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextureLODGroup(FTextureLODGroup::StaticStruct, TEXT("/Script/Engine"), TEXT("TextureLODGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTextureLODGroup
{
	FScriptStruct_Engine_StaticRegisterNativesFTextureLODGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TextureLODGroup")),new UScriptStruct::TCppStructOps<FTextureLODGroup>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTextureLODGroup;
	struct Z_Construct_UScriptStruct_FTextureLODGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MipFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MipFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinMagFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MinMagFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalMaxLODSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionalMaxLODSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalLODBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionalLODBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLODSize_Smallest_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLODSize_Smallest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLODSize_Smaller_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLODSize_Smaller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLODSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLODSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLODSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLODSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MipGenSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MipGenSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumStreamedMips_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumStreamedMips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODBias_Smallest_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODBias_Smallest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODBias_Smaller_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODBias_Smaller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "LOD settings for a single texture group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureLODGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipFilter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipFilter = { UE4CodeGen_Private::EPropertyClass::Name, "MipFilter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, MipFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipFilter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinMagFilter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinMagFilter = { UE4CodeGen_Private::EPropertyClass::Name, "MinMagFilter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, MinMagFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinMagFilter_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinMagFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalMaxLODSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Put all the mips which have a width / height larger then OptionalLODSize into an optional bulkdata package" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalMaxLODSize = { UE4CodeGen_Private::EPropertyClass::Int, "OptionalMaxLODSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, OptionalMaxLODSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalMaxLODSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalMaxLODSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalLODBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "If this is greater then 0 will put that number of mips into an optional bulkdata package" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalLODBias = { UE4CodeGen_Private::EPropertyClass::Int, "OptionalLODBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, OptionalLODBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalLODBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalLODBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smallest_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smallest = { UE4CodeGen_Private::EPropertyClass::Int, "MaxLODSize_Smallest", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, MaxLODSize_Smallest), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smallest_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smallest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smaller_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smaller = { UE4CodeGen_Private::EPropertyClass::Int, "MaxLODSize_Smaller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, MaxLODSize_Smaller), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smaller_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smaller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize = { UE4CodeGen_Private::EPropertyClass::Int, "MaxLODSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, MaxLODSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinLODSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinLODSize = { UE4CodeGen_Private::EPropertyClass::Int, "MinLODSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, MinLODSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinLODSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinLODSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipGenSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Defines how the the mip-map generation works, e.g. sharpening" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipGenSettings = { UE4CodeGen_Private::EPropertyClass::Byte, "MipGenSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, MipGenSettings), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipGenSettings_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipGenSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_NumStreamedMips_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Number of mip-levels that can be streamed. -1 means all mips can stream." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_NumStreamedMips = { UE4CodeGen_Private::EPropertyClass::Int, "NumStreamedMips", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, NumStreamedMips), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_NumStreamedMips_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_NumStreamedMips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smallest_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smallest = { UE4CodeGen_Private::EPropertyClass::Int, "LODBias_Smallest", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, LODBias_Smallest), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smallest_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smallest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smaller_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smaller = { UE4CodeGen_Private::EPropertyClass::Int, "LODBias_Smaller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, LODBias_Smaller), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smaller_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smaller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Group LOD bias." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias = { UE4CodeGen_Private::EPropertyClass::Int, "LODBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, LODBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Group_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Minimum LOD mip count below which the code won't bias." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Group = { UE4CodeGen_Private::EPropertyClass::Byte, "Group", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FTextureLODGroup, Group), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Group_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureLODGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinMagFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalMaxLODSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalLODBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smallest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smaller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinLODSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipGenSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_NumStreamedMips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smallest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smaller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TextureLODGroup",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FTextureLODGroup),
		alignof(FTextureLODGroup),
		Z_Construct_UScriptStruct_FTextureLODGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureLODGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextureLODGroup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextureLODGroup"), sizeof(FTextureLODGroup), Get_Z_Construct_UScriptStruct_FTextureLODGroup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTextureLODGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextureLODGroup_CRC() { return 3357578581U; }
	void UTextureLODSettings::StaticRegisterNativesUTextureLODSettings()
	{
	}
	UClass* Z_Construct_UClass_UTextureLODSettings_NoRegister()
	{
		return UTextureLODSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTextureLODSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureLODGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureLODGroups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureLODGroups_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureLODSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureLODSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/TextureLODSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Structure containing all information related to an LOD group and providing helper functions to calculate\nthe LOD bias of a given group." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups_MetaData[] = {
		{ "Category", "Texture LOD Settings" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Array of LOD settings with entries per group." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups = { UE4CodeGen_Private::EPropertyClass::Array, "TextureLODGroups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UTextureLODSettings, TextureLODGroups), METADATA_PARAMS(Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureLODGroups", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FTextureLODGroup, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureLODSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureLODSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureLODSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextureLODSettings_Statics::ClassParams = {
		&UTextureLODSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001004A4u,
		nullptr, 0,
		Z_Construct_UClass_UTextureLODSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTextureLODSettings_Statics::PropPointers),
		"DeviceProfiles",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTextureLODSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextureLODSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureLODSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextureLODSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextureLODSettings, 2115322283);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextureLODSettings(Z_Construct_UClass_UTextureLODSettings, &UTextureLODSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UTextureLODSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureLODSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
