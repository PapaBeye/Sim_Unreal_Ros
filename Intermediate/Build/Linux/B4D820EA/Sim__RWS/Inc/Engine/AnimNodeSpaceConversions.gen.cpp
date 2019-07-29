// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimNodeSpaceConversions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodeSpaceConversions() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink();
// End Cross Module References
class UScriptStruct* FAnimNode_ConvertLocalToComponentSpace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_ConvertLocalToComponentSpace"), sizeof(FAnimNode_ConvertLocalToComponentSpace), Get_Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace(FAnimNode_ConvertLocalToComponentSpace::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_ConvertLocalToComponentSpace"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertLocalToComponentSpace
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertLocalToComponentSpace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ConvertLocalToComponentSpace")),new UScriptStruct::TCppStructOps<FAnimNode_ConvertLocalToComponentSpace>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertLocalToComponentSpace;
	struct Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ConvertLocalToComponentSpace>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewProp_LocalPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewProp_LocalPose = { UE4CodeGen_Private::EPropertyClass::Struct, "LocalPose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ConvertLocalToComponentSpace, LocalPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewProp_LocalPose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewProp_LocalPose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::NewProp_LocalPose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_ConvertLocalToComponentSpace",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_ConvertLocalToComponentSpace),
		alignof(FAnimNode_ConvertLocalToComponentSpace),
		Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ConvertLocalToComponentSpace"), sizeof(FAnimNode_ConvertLocalToComponentSpace), Get_Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ConvertLocalToComponentSpace_CRC() { return 4255105449U; }
class UScriptStruct* FAnimNode_ConvertComponentToLocalSpace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace, Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_ConvertComponentToLocalSpace"), sizeof(FAnimNode_ConvertComponentToLocalSpace), Get_Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace(FAnimNode_ConvertComponentToLocalSpace::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimNode_ConvertComponentToLocalSpace"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertComponentToLocalSpace
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertComponentToLocalSpace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ConvertComponentToLocalSpace")),new UScriptStruct::TCppStructOps<FAnimNode_ConvertComponentToLocalSpace>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimNode_ConvertComponentToLocalSpace;
	struct Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ConvertComponentToLocalSpace>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewProp_ComponentPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeSpaceConversions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewProp_ComponentPose = { UE4CodeGen_Private::EPropertyClass::Struct, "ComponentPose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ConvertComponentToLocalSpace, ComponentPose), Z_Construct_UScriptStruct_FComponentSpacePoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewProp_ComponentPose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewProp_ComponentPose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::NewProp_ComponentPose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_ConvertComponentToLocalSpace",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_ConvertComponentToLocalSpace),
		alignof(FAnimNode_ConvertComponentToLocalSpace),
		Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ConvertComponentToLocalSpace"), sizeof(FAnimNode_ConvertComponentToLocalSpace), Get_Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ConvertComponentToLocalSpace_CRC() { return 1833680829U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
