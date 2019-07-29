// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_ScaleChainLength.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ScaleChainLength() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
	static UEnum* EScaleChainInitialLength_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EScaleChainInitialLength"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScaleChainInitialLength(EScaleChainInitialLength_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EScaleChainInitialLength"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_CRC() { return 2352520520U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScaleChainInitialLength"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScaleChainInitialLength::FixedDefaultLengthValue", (int64)EScaleChainInitialLength::FixedDefaultLengthValue },
				{ "EScaleChainInitialLength::Distance", (int64)EScaleChainInitialLength::Distance },
				{ "EScaleChainInitialLength::ChainLength", (int64)EScaleChainInitialLength::ChainLength },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChainLength.ToolTip", "Use animated chain length (length in local space of every bone from 'ChainStartBone' to 'ChainEndBone'" },
				{ "Distance.ToolTip", "Use distance between 'ChainStartBone' and 'ChainEndBone' (in Component Space)" },
				{ "FixedDefaultLengthValue.ToolTip", "Use the 'DefaultChainLength' input value." },
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EScaleChainInitialLength",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EScaleChainInitialLength",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_ScaleChainLength::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ScaleChainLength"), sizeof(FAnimNode_ScaleChainLength), Get_Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_ScaleChainLength(FAnimNode_ScaleChainLength::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_ScaleChainLength"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ScaleChainLength
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ScaleChainLength()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_ScaleChainLength")),new UScriptStruct::TCppStructOps<FAnimNode_ScaleChainLength>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_ScaleChainLength;
	struct Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBoneIndicesCached_MetaData[];
#endif
		static void NewProp_bBoneIndicesCached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBoneIndicesCached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActualAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActualAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainInitialLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChainInitialLength;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChainInitialLength_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainEndBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChainEndBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainStartBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChainStartBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultChainLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultChainLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputPose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
		{ "ToolTip", "Scale the length of a chain of bones." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ScaleChainLength>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_bBoneIndicesCached_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_bBoneIndicesCached_SetBit(void* Obj)
	{
		((FAnimNode_ScaleChainLength*)Obj)->bBoneIndicesCached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_bBoneIndicesCached = { UE4CodeGen_Private::EPropertyClass::Bool, "bBoneIndicesCached", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_ScaleChainLength), &Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_bBoneIndicesCached_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_bBoneIndicesCached_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_bBoneIndicesCached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_AlphaScaleBias = { UE4CodeGen_Private::EPropertyClass::Struct, "AlphaScaleBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_AlphaScaleBias_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_AlphaScaleBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ActualAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ActualAlpha = { UE4CodeGen_Private::EPropertyClass::Float, "ActualAlpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, ActualAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ActualAlpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ActualAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Float, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_Alpha_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "ScaleChainLength" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_TargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength_MetaData[] = {
		{ "Category", "ScaleChainLength" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength = { UE4CodeGen_Private::EPropertyClass::Enum, "ChainInitialLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, ChainInitialLength), Z_Construct_UEnum_AnimGraphRuntime_EScaleChainInitialLength, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainEndBone_MetaData[] = {
		{ "Category", "ScaleChainLength" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainEndBone = { UE4CodeGen_Private::EPropertyClass::Struct, "ChainEndBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, ChainEndBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainEndBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainEndBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainStartBone_MetaData[] = {
		{ "Category", "ScaleChainLength" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainStartBone = { UE4CodeGen_Private::EPropertyClass::Struct, "ChainStartBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, ChainStartBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainStartBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainStartBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_DefaultChainLength_MetaData[] = {
		{ "Category", "ScaleChainLength" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Default chain length, as animated." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_DefaultChainLength = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultChainLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, DefaultChainLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_DefaultChainLength_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_DefaultChainLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_InputPose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_ScaleChainLength.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_InputPose = { UE4CodeGen_Private::EPropertyClass::Struct, "InputPose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_ScaleChainLength, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_InputPose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_InputPose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_bBoneIndicesCached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_AlphaScaleBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ActualAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainInitialLength_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainEndBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_ChainStartBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_DefaultChainLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::NewProp_InputPose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_ScaleChainLength",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_ScaleChainLength),
		alignof(FAnimNode_ScaleChainLength),
		Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_ScaleChainLength"), sizeof(FAnimNode_ScaleChainLength), Get_Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_ScaleChainLength_CRC() { return 1721732331U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
