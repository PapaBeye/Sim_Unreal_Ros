// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationCore/Public/CommonAnimTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonAnimTypes() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FAxis::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONCORE_API uint32 Get_Z_Construct_UScriptStruct_FAxis_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxis, Z_Construct_UPackage__Script_AnimationCore(), TEXT("Axis"), sizeof(FAxis), Get_Z_Construct_UScriptStruct_FAxis_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAxis(FAxis::StaticStruct, TEXT("/Script/AnimationCore"), TEXT("Axis"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationCore_StaticRegisterNativesFAxis
{
	FScriptStruct_AnimationCore_StaticRegisterNativesFAxis()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Axis")),new UScriptStruct::TCppStructOps<FAxis>);
	}
} ScriptStruct_AnimationCore_StaticRegisterNativesFAxis;
	struct Z_Construct_UScriptStruct_FAxis_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInLocalSpace_MetaData[];
#endif
		static void NewProp_bInLocalSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInLocalSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxis_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonAnimTypes.h" },
		{ "ToolTip", "Axis to represent direction" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAxis_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxis>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace_MetaData[] = {
		{ "Category", "FAxis" },
		{ "ModuleRelativePath", "Public/CommonAnimTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace_SetBit(void* Obj)
	{
		((FAxis*)Obj)->bInLocalSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bInLocalSpace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAxis), &Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxis_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "FAxis" },
		{ "ModuleRelativePath", "Public/CommonAnimTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAxis_Statics::NewProp_Axis = { UE4CodeGen_Private::EPropertyClass::Struct, "Axis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAxis, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAxis_Statics::NewProp_Axis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAxis_Statics::NewProp_Axis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxis_Statics::NewProp_bInLocalSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxis_Statics::NewProp_Axis,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAxis_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"Axis",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAxis),
		alignof(FAxis),
		Z_Construct_UScriptStruct_FAxis_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAxis_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAxis_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAxis_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAxis()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAxis_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Axis"), sizeof(FAxis), Get_Z_Construct_UScriptStruct_FAxis_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAxis_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAxis_CRC() { return 3965896539U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
