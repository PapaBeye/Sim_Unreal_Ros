// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Serialization/Private/Tests/StructSerializerTestTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructSerializerTestTypes() {}
// Cross Module References
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerTestStruct();
	UPackage* Z_Construct_UPackage__Script_Serialization();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerMapTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct();
	SERIALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FStructSerializerTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerTestStruct"), sizeof(FStructSerializerTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerTestStruct(FStructSerializerTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Maps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Maps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arrays_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Arrays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Builtins_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Builtins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Objects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Booleans_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Booleans;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Numerics_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Numerics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for all supported types." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps = { UE4CodeGen_Private::EPropertyClass::Struct, "Maps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerTestStruct, Maps), Z_Construct_UScriptStruct_FStructSerializerMapTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays = { UE4CodeGen_Private::EPropertyClass::Struct, "Arrays", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerTestStruct, Arrays), Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins = { UE4CodeGen_Private::EPropertyClass::Struct, "Builtins", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerTestStruct, Builtins), Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects = { UE4CodeGen_Private::EPropertyClass::Struct, "Objects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerTestStruct, Objects), Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans = { UE4CodeGen_Private::EPropertyClass::Struct, "Booleans", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerTestStruct, Booleans), Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics = { UE4CodeGen_Private::EPropertyClass::Struct, "Numerics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerTestStruct, Numerics), Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Maps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Arrays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Builtins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Objects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Booleans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewProp_Numerics,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerTestStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStructSerializerTestStruct),
		alignof(FStructSerializerTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerTestStruct"), sizeof(FStructSerializerTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerTestStruct_CRC() { return 3206142901U; }
class UScriptStruct* FStructSerializerMapTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerMapTestStruct"), sizeof(FStructSerializerMapTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerMapTestStruct(FStructSerializerMapTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerMapTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerMapTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerMapTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerMapTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerMapTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerMapTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrToVec_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StrToVec;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StrToVec_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StrToVec_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrToStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StrToStr;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StrToStr_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StrToStr_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntToStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_IntToStr;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntToStr_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IntToStr_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for map properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerMapTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec = { UE4CodeGen_Private::EPropertyClass::Map, "StrToVec", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerMapTestStruct, StrToVec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "StrToVec_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "StrToVec", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr = { UE4CodeGen_Private::EPropertyClass::Map, "StrToStr", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerMapTestStruct, StrToStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "StrToStr_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_ValueProp = { UE4CodeGen_Private::EPropertyClass::Str, "StrToStr", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr = { UE4CodeGen_Private::EPropertyClass::Map, "IntToStr", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerMapTestStruct, IntToStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "IntToStr_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_ValueProp = { UE4CodeGen_Private::EPropertyClass::Str, "IntToStr", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToVec_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_StrToStr_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewProp_IntToStr_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerMapTestStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStructSerializerMapTestStruct),
		alignof(FStructSerializerMapTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerMapTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerMapTestStruct"), sizeof(FStructSerializerMapTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_CRC() { return 449792375U; }
class UScriptStruct* FStructSerializerArrayTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerArrayTestStruct"), sizeof(FStructSerializerArrayTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerArrayTestStruct(FStructSerializerArrayTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerArrayTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerArrayTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerArrayTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerArrayTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerArrayTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerArrayTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VectorArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticFloatArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaticFloatArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticInt32Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticInt32Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticSingleElement_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StaticSingleElement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Int32Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int32Array_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for array properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerArrayTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray = { UE4CodeGen_Private::EPropertyClass::Array, "VectorArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerArrayTestStruct, VectorArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray = { UE4CodeGen_Private::EPropertyClass::Float, "StaticFloatArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, CPP_ARRAY_DIM(StaticFloatArray, FStructSerializerArrayTestStruct), nullptr, STRUCT_OFFSET(FStructSerializerArrayTestStruct, StaticFloatArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array = { UE4CodeGen_Private::EPropertyClass::Int, "StaticInt32Array", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, CPP_ARRAY_DIM(StaticInt32Array, FStructSerializerArrayTestStruct), nullptr, STRUCT_OFFSET(FStructSerializerArrayTestStruct, StaticInt32Array), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement = { UE4CodeGen_Private::EPropertyClass::Int, "StaticSingleElement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, CPP_ARRAY_DIM(StaticSingleElement, FStructSerializerArrayTestStruct), nullptr, STRUCT_OFFSET(FStructSerializerArrayTestStruct, StaticSingleElement), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array = { UE4CodeGen_Private::EPropertyClass::Array, "Int32Array", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerArrayTestStruct, Int32Array), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Int32Array", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_VectorArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticFloatArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticInt32Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_StaticSingleElement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewProp_Int32Array_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerArrayTestStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStructSerializerArrayTestStruct),
		alignof(FStructSerializerArrayTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerArrayTestStruct"), sizeof(FStructSerializerArrayTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC() { return 3804351817U; }
class UScriptStruct* FStructSerializerBuiltinTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerBuiltinTestStruct"), sizeof(FStructSerializerBuiltinTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerBuiltinTestStruct(FStructSerializerBuiltinTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerBuiltinTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBuiltinTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBuiltinTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerBuiltinTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerBuiltinTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBuiltinTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for properties of various built-in types." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerBuiltinTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String = { UE4CodeGen_Private::EPropertyClass::Str, "String", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid = { UE4CodeGen_Private::EPropertyClass::Struct, "Guid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerBuiltinTestStruct, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Rotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewProp_Guid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerBuiltinTestStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStructSerializerBuiltinTestStruct),
		alignof(FStructSerializerBuiltinTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerBuiltinTestStruct"), sizeof(FStructSerializerBuiltinTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_CRC() { return 2967082710U; }
class UScriptStruct* FStructSerializerObjectTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerObjectTestStruct"), sizeof(FStructSerializerObjectTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerObjectTestStruct(FStructSerializerObjectTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerObjectTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerObjectTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerObjectTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerObjectTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerObjectTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerObjectTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for UObject properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerObjectTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPtr_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPtr = { UE4CodeGen_Private::EPropertyClass::Object, "ObjectPtr", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerObjectTestStruct, ObjectPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPtr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Class = { UE4CodeGen_Private::EPropertyClass::Class, "Class", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerObjectTestStruct, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Class_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_ObjectPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewProp_Class,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerObjectTestStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStructSerializerObjectTestStruct),
		alignof(FStructSerializerObjectTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerObjectTestStruct"), sizeof(FStructSerializerObjectTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC() { return 2196853573U; }
class UScriptStruct* FStructSerializerBooleanTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerBooleanTestStruct"), sizeof(FStructSerializerBooleanTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerBooleanTestStruct(FStructSerializerBooleanTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerBooleanTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBooleanTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBooleanTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerBooleanTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerBooleanTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerBooleanTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bitfield_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Bitfield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolTrue_MetaData[];
#endif
		static void NewProp_BoolTrue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolTrue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolFalse_MetaData[];
#endif
		static void NewProp_BoolFalse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolFalse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for boolean properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerBooleanTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield = { UE4CodeGen_Private::EPropertyClass::UInt32, "Bitfield", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerBooleanTestStruct, Bitfield), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->BoolTrue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue = { UE4CodeGen_Private::EPropertyClass::Bool, "BoolTrue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_SetBit(void* Obj)
	{
		((FStructSerializerBooleanTestStruct*)Obj)->BoolFalse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse = { UE4CodeGen_Private::EPropertyClass::Bool, "BoolFalse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FStructSerializerBooleanTestStruct), &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerBooleanTestStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStructSerializerBooleanTestStruct),
		alignof(FStructSerializerBooleanTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerBooleanTestStruct"), sizeof(FStructSerializerBooleanTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC() { return 3605015259U; }
class UScriptStruct* FStructSerializerNumericTestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SERIALIZATION_API uint32 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct, Z_Construct_UPackage__Script_Serialization(), TEXT("StructSerializerNumericTestStruct"), sizeof(FStructSerializerNumericTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructSerializerNumericTestStruct(FStructSerializerNumericTestStruct::StaticStruct, TEXT("/Script/Serialization"), TEXT("StructSerializerNumericTestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerNumericTestStruct
{
	FScriptStruct_Serialization_StaticRegisterNativesFStructSerializerNumericTestStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructSerializerNumericTestStruct")),new UScriptStruct::TCppStructOps<FStructSerializerNumericTestStruct>);
	}
} ScriptStruct_Serialization_StaticRegisterNativesFStructSerializerNumericTestStruct;
	struct Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Double_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_Double;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Float;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UInt64_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_UInt64;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UInt32_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UInt32;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UInt16_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_UInt16;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UInt8_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UInt8;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int64_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Int64;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int32;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int16_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_Int16;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int8_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_Int8;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
		{ "ToolTip", "Test structure for numeric properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructSerializerNumericTestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double = { UE4CodeGen_Private::EPropertyClass::Double, "Double", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Double), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float = { UE4CodeGen_Private::EPropertyClass::Float, "Float", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64 = { UE4CodeGen_Private::EPropertyClass::UInt64, "UInt64", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt64), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32 = { UE4CodeGen_Private::EPropertyClass::UInt32, "UInt32", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt32), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16 = { UE4CodeGen_Private::EPropertyClass::UInt16, "UInt16", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt16), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8 = { UE4CodeGen_Private::EPropertyClass::Byte, "UInt8", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, UInt8), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64 = { UE4CodeGen_Private::EPropertyClass::Int64, "Int64", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int64), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32 = { UE4CodeGen_Private::EPropertyClass::Int, "Int32", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int32), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16 = { UE4CodeGen_Private::EPropertyClass::Int16, "Int16", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int16), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/StructSerializerTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8 = { UE4CodeGen_Private::EPropertyClass::Int8, "Int8", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FStructSerializerNumericTestStruct, Int8), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Double,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Float,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt64,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt32,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt16,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_UInt8,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int64,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int32,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int16,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewProp_Int8,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Serialization,
		nullptr,
		&NewStructOps,
		"StructSerializerNumericTestStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FStructSerializerNumericTestStruct),
		alignof(FStructSerializerNumericTestStruct),
		Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Serialization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructSerializerNumericTestStruct"), sizeof(FStructSerializerNumericTestStruct), Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC() { return 1170611935U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
