// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_CopyBoneDelta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CopyBoneDelta() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
	static UEnum* CopyBoneDeltaMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("CopyBoneDeltaMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CopyBoneDeltaMode(CopyBoneDeltaMode_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("CopyBoneDeltaMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode_CRC() { return 1800545508U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CopyBoneDeltaMode"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CopyBoneDeltaMode::Accumulate", (int64)CopyBoneDeltaMode::Accumulate },
				{ "CopyBoneDeltaMode::Copy", (int64)CopyBoneDeltaMode::Copy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"CopyBoneDeltaMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"CopyBoneDeltaMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_CopyBoneDelta::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_CopyBoneDelta"), sizeof(FAnimNode_CopyBoneDelta), Get_Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_CopyBoneDelta(FAnimNode_CopyBoneDelta::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_CopyBoneDelta"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CopyBoneDelta
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CopyBoneDelta()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_CopyBoneDelta")),new UScriptStruct::TCppStructOps<FAnimNode_CopyBoneDelta>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_CopyBoneDelta;
	struct Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TranslationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CopyMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CopyMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyScale_MetaData[];
#endif
		static void NewProp_bCopyScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyRotation_MetaData[];
#endif
		static void NewProp_bCopyRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCopyTranslation_MetaData[];
#endif
		static void NewProp_bCopyTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCopyTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
		{ "ToolTip", "Simple controller to copy a transform relative to the ref pose to the target bone,\ninstead of the copy bone node which copies the absolute transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CopyBoneDelta>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_ScaleMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_ScaleMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, ScaleMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_ScaleMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_ScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_RotationMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_RotationMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "RotationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, RotationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_RotationMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_RotationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_TranslationMultiplier_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_TranslationMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "TranslationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, TranslationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_TranslationMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_TranslationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_CopyMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_CopyMode = { UE4CodeGen_Private::EPropertyClass::Enum, "CopyMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, CopyMode), Z_Construct_UEnum_AnimGraphRuntime_CopyBoneDeltaMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_CopyMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_CopyMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_CopyMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyScale_SetBit(void* Obj)
	{
		((FAnimNode_CopyBoneDelta*)Obj)->bCopyScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyScale = { UE4CodeGen_Private::EPropertyClass::Bool, "bCopyScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_CopyBoneDelta), &Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyRotation_SetBit(void* Obj)
	{
		((FAnimNode_CopyBoneDelta*)Obj)->bCopyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bCopyRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_CopyBoneDelta), &Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyTranslation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyTranslation_SetBit(void* Obj)
	{
		((FAnimNode_CopyBoneDelta*)Obj)->bCopyTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyTranslation = { UE4CodeGen_Private::EPropertyClass::Bool, "bCopyTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_CopyBoneDelta), &Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_TargetBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_TargetBone = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_TargetBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_TargetBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_SourceBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CopyBoneDelta.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_SourceBone = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_CopyBoneDelta, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_SourceBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_SourceBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_ScaleMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_RotationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_TranslationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_CopyMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_CopyMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_bCopyTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_TargetBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::NewProp_SourceBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_CopyBoneDelta",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_CopyBoneDelta),
		alignof(FAnimNode_CopyBoneDelta),
		Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_CopyBoneDelta"), sizeof(FAnimNode_CopyBoneDelta), Get_Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_CopyBoneDelta_CRC() { return 4106755839U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
