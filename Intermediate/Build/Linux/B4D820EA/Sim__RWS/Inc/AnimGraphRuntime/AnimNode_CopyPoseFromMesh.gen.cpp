// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_CopyPoseFromMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CopyPoseFromMesh() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimNode_CopyPoseFromMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_CopyPoseFromMesh"), sizeof(FAnimNode_CopyPoseFromMesh), Get_Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_CopyPoseFromMesh(FAnimNode_CopyPoseFromMesh::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_CopyPoseFromMesh"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CopyPoseFromMesh
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CopyPoseFromMesh()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_CopyPoseFromMesh")),new UScriptStruct::TCppStructOps<FAnimNode_CopyPoseFromMesh>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CopyPoseFromMesh;
	struct Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyCurves_MetaData[];
#endif
		static void NewProp_bCopyCurves_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyCurves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAttachedParent_MetaData[];
#endif
		static void NewProp_bUseAttachedParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAttachedParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SourceMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CopyPoseFromMesh.h" },
		{ "ToolTip", "Simple controller to copy a bone's transform to another one." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CopyPoseFromMesh>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bCopyCurves_MetaData[] = {
		{ "Category", "Copy" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CopyPoseFromMesh.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "Copy curves also from SouceMeshComponent. This will copy the curves if this instance also contains" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bCopyCurves_SetBit(void* Obj)
	{
		((FAnimNode_CopyPoseFromMesh*)Obj)->bCopyCurves = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bCopyCurves = { UE4CodeGen_Private::EPropertyClass::Bool, "bCopyCurves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_CopyPoseFromMesh), &Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bCopyCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bCopyCurves_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bCopyCurves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bUseAttachedParent_MetaData[] = {
		{ "Category", "Copy" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CopyPoseFromMesh.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "If SourceMeshComponent is not valid, and if this is true, it will look for attahced parent as a source" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bUseAttachedParent_SetBit(void* Obj)
	{
		((FAnimNode_CopyPoseFromMesh*)Obj)->bUseAttachedParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bUseAttachedParent = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAttachedParent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_CopyPoseFromMesh), &Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bUseAttachedParent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bUseAttachedParent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bUseAttachedParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_SourceMeshComponent_MetaData[] = {
		{ "Category", "Copy" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_CopyPoseFromMesh.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "This is used by default if it's valid" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_SourceMeshComponent = { UE4CodeGen_Private::EPropertyClass::WeakObject, "SourceMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001400000008000d, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyPoseFromMesh, SourceMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_SourceMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_SourceMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bCopyCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_bUseAttachedParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::NewProp_SourceMeshComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_CopyPoseFromMesh",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		sizeof(FAnimNode_CopyPoseFromMesh),
		alignof(FAnimNode_CopyPoseFromMesh),
		Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_CopyPoseFromMesh"), sizeof(FAnimNode_CopyPoseFromMesh), Get_Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh_CRC() { return 293004334U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
