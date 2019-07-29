// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_SpringBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SpringBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBone();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_SpringBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SpringBone_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SpringBone, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_SpringBone"), sizeof(FAnimNode_SpringBone), Get_Z_Construct_UScriptStruct_FAnimNode_SpringBone_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_SpringBone(FAnimNode_SpringBone::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_SpringBone"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SpringBone
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SpringBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_SpringBone")),new UScriptStruct::TCppStructOps<FAnimNode_SpringBone>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_SpringBone;
	struct Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateZ_MetaData[];
#endif
		static void NewProp_bRotateZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateY_MetaData[];
#endif
		static void NewProp_bRotateY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateX_MetaData[];
#endif
		static void NewProp_bRotateX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTranslateZ_MetaData[];
#endif
		static void NewProp_bTranslateZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTranslateZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTranslateY_MetaData[];
#endif
		static void NewProp_bTranslateY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTranslateY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTranslateX_MetaData[];
#endif
		static void NewProp_bTranslateX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTranslateX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoZSpring_MetaData[];
#endif
		static void NewProp_bNoZSpring_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoZSpring;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorResetThresh_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErrorResetThresh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDisplacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDisplacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLimitDisplacement_MetaData[];
#endif
		static void NewProp_bLimitDisplacement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLimitDisplacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpringBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SpringBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for rotation in Z" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bRotateZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bRotateZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for rotation in Y" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bRotateY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY = { UE4CodeGen_Private::EPropertyClass::Bool, "bRotateY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for rotation in X" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bRotateX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX = { UE4CodeGen_Private::EPropertyClass::Bool, "bRotateX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for translation in Z" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bTranslateZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bTranslateZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for translation in Y" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bTranslateY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY = { UE4CodeGen_Private::EPropertyClass::Bool, "bTranslateY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX_MetaData[] = {
		{ "Category", "FilterChannels" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true take the spring calculation for translation in X" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bTranslateX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX = { UE4CodeGen_Private::EPropertyClass::Bool, "bTranslateX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If true, Z position is always correct, no spring applied" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bNoZSpring_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoZSpring", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_ErrorResetThresh_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If spring stretches more than this, reset it. Useful for catching teleports etc" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_ErrorResetThresh = { UE4CodeGen_Private::EPropertyClass::Float, "ErrorResetThresh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_SpringBone, ErrorResetThresh), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_ErrorResetThresh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_ErrorResetThresh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringDamping_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Damping of spring" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringDamping = { UE4CodeGen_Private::EPropertyClass::Float, "SpringDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_SpringBone, SpringDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringDamping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Stiffness of spring" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "SpringStiffness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_SpringBone, SpringStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringStiffness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_MaxDisplacement_MetaData[] = {
		{ "Category", "Spring" },
		{ "EditCondition", "bLimitDisplacement" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "If bLimitDisplacement is true, this indicates how long a bone can stretch beyond its length in the ref-pose." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_MaxDisplacement = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDisplacement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_SpringBone, MaxDisplacement), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_MaxDisplacement_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_MaxDisplacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "Limit the amount that a bone can stretch from its ref-pose length." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement_SetBit(void* Obj)
	{
		((FAnimNode_SpringBone*)Obj)->bLimitDisplacement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement = { UE4CodeGen_Private::EPropertyClass::Bool, "bLimitDisplacement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_SpringBone), &Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringBone_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SpringBone.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringBone = { UE4CodeGen_Private::EPropertyClass::Struct, "SpringBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_SpringBone, SpringBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bRotateX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bTranslateX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bNoZSpring,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_ErrorResetThresh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_MaxDisplacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_bLimitDisplacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::NewProp_SpringBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_SpringBone",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_SpringBone),
		alignof(FAnimNode_SpringBone),
		Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SpringBone_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_SpringBone"), sizeof(FAnimNode_SpringBone), Get_Z_Construct_UScriptStruct_FAnimNode_SpringBone_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_SpringBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_SpringBone_CRC() { return 1126006900U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
