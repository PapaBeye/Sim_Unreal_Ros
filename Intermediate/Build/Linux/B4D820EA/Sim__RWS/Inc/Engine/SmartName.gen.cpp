// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/SmartName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartName() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartNameContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartNameMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveMetaData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveType();
// End Cross Module References
class UScriptStruct* FSmartName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSmartName_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartName, Z_Construct_UPackage__Script_Engine(), TEXT("SmartName"), sizeof(FSmartName), Get_Z_Construct_UScriptStruct_FSmartName_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSmartName(FSmartName::StaticStruct, TEXT("/Script/Engine"), TEXT("SmartName"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSmartName
{
	FScriptStruct_Engine_StaticRegisterNativesFSmartName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SmartName")),new UScriptStruct::TCppStructOps<FSmartName>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSmartName;
	struct Z_Construct_UScriptStruct_FSmartName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartName_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "FSmartName" },
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
		{ "ToolTip", "name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Name, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FSmartName, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SmartName",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FSmartName),
		alignof(FSmartName),
		Z_Construct_UScriptStruct_FSmartName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartName_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartName_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSmartName_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SmartName"), sizeof(FSmartName), Get_Z_Construct_UScriptStruct_FSmartName_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSmartName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSmartName_CRC() { return 1179352275U; }
class UScriptStruct* FSmartNameContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSmartNameContainer_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartNameContainer, Z_Construct_UPackage__Script_Engine(), TEXT("SmartNameContainer"), sizeof(FSmartNameContainer), Get_Z_Construct_UScriptStruct_FSmartNameContainer_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSmartNameContainer(FSmartNameContainer::StaticStruct, TEXT("/Script/Engine"), TEXT("SmartNameContainer"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSmartNameContainer
{
	FScriptStruct_Engine_StaticRegisterNativesFSmartNameContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SmartNameContainer")),new UScriptStruct::TCppStructOps<FSmartNameContainer>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSmartNameContainer;
	struct Z_Construct_UScriptStruct_FSmartNameContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartNameContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartNameContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartNameContainer>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartNameContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SmartNameContainer",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FSmartNameContainer),
		alignof(FSmartNameContainer),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartNameContainer_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartNameContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartNameContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSmartNameContainer_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SmartNameContainer"), sizeof(FSmartNameContainer), Get_Z_Construct_UScriptStruct_FSmartNameContainer_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSmartNameContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSmartNameContainer_CRC() { return 910933768U; }
class UScriptStruct* FSmartNameMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSmartNameMapping_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartNameMapping, Z_Construct_UPackage__Script_Engine(), TEXT("SmartNameMapping"), sizeof(FSmartNameMapping), Get_Z_Construct_UScriptStruct_FSmartNameMapping_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSmartNameMapping(FSmartNameMapping::StaticStruct, TEXT("/Script/Engine"), TEXT("SmartNameMapping"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSmartNameMapping
{
	FScriptStruct_Engine_StaticRegisterNativesFSmartNameMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SmartNameMapping")),new UScriptStruct::TCppStructOps<FSmartNameMapping>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSmartNameMapping;
	struct Z_Construct_UScriptStruct_FSmartNameMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartNameMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartNameMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartNameMapping>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartNameMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SmartNameMapping",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FSmartNameMapping),
		alignof(FSmartNameMapping),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartNameMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartNameMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartNameMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSmartNameMapping_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SmartNameMapping"), sizeof(FSmartNameMapping), Get_Z_Construct_UScriptStruct_FSmartNameMapping_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSmartNameMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSmartNameMapping_CRC() { return 1007307160U; }
class UScriptStruct* FCurveMetaData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCurveMetaData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveMetaData, Z_Construct_UPackage__Script_Engine(), TEXT("CurveMetaData"), sizeof(FCurveMetaData), Get_Z_Construct_UScriptStruct_FCurveMetaData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurveMetaData(FCurveMetaData::StaticStruct, TEXT("/Script/Engine"), TEXT("CurveMetaData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCurveMetaData
{
	FScriptStruct_Engine_StaticRegisterNativesFCurveMetaData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CurveMetaData")),new UScriptStruct::TCppStructOps<FCurveMetaData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCurveMetaData;
	struct Z_Construct_UScriptStruct_FCurveMetaData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveMetaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
		{ "ToolTip", "Curve Meta Data for each name\nUnfortunately this should be linked to FName, but no GUID because we don't have GUID in run-time\nWe only add this if anything changed, by default, it is attribute curve" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveMetaData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CurveMetaData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCurveMetaData),
		alignof(FCurveMetaData),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveMetaData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveMetaData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurveMetaData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurveMetaData"), sizeof(FCurveMetaData), Get_Z_Construct_UScriptStruct_FCurveMetaData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurveMetaData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurveMetaData_CRC() { return 3752276473U; }
class UScriptStruct* FAnimCurveType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimCurveType_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimCurveType, Z_Construct_UPackage__Script_Engine(), TEXT("AnimCurveType"), sizeof(FAnimCurveType), Get_Z_Construct_UScriptStruct_FAnimCurveType_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimCurveType(FAnimCurveType::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimCurveType"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimCurveType
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimCurveType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimCurveType")),new UScriptStruct::TCppStructOps<FAnimCurveType>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimCurveType;
	struct Z_Construct_UScriptStruct_FAnimCurveType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimCurveType_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
		{ "ToolTip", "in the future if we need more bools, please convert to bitfield\nThese are not saved in asset but per skeleton." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimCurveType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimCurveType>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimCurveType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimCurveType",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimCurveType),
		alignof(FAnimCurveType),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimCurveType_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCurveType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimCurveType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimCurveType_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimCurveType"), sizeof(FAnimCurveType), Get_Z_Construct_UScriptStruct_FAnimCurveType_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimCurveType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimCurveType_CRC() { return 4252807749U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
