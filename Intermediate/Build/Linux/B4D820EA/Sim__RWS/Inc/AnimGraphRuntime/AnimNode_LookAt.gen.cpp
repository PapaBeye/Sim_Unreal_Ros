// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/BoneControllers/AnimNode_LookAt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LookAt() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LookAt();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAxisOption();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
	static UEnum* EInterpolationBlend_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EInterpolationBlend"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInterpolationBlend(EInterpolationBlend_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EInterpolationBlend"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_CRC() { return 957105357U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInterpolationBlend"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInterpolationBlend::Linear", (int64)EInterpolationBlend::Linear },
				{ "EInterpolationBlend::Cubic", (int64)EInterpolationBlend::Cubic },
				{ "EInterpolationBlend::Sinusoidal", (int64)EInterpolationBlend::Sinusoidal },
				{ "EInterpolationBlend::EaseInOutExponent2", (int64)EInterpolationBlend::EaseInOutExponent2 },
				{ "EInterpolationBlend::EaseInOutExponent3", (int64)EInterpolationBlend::EaseInOutExponent3 },
				{ "EInterpolationBlend::EaseInOutExponent4", (int64)EInterpolationBlend::EaseInOutExponent4 },
				{ "EInterpolationBlend::EaseInOutExponent5", (int64)EInterpolationBlend::EaseInOutExponent5 },
				{ "EInterpolationBlend::MAX", (int64)EInterpolationBlend::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
				{ "ToolTip", "Various ways to interpolate TAlphaBlend." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EInterpolationBlend",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EInterpolationBlend::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_LookAt::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LookAt_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LookAt, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_LookAt"), sizeof(FAnimNode_LookAt), Get_Z_Construct_UScriptStruct_FAnimNode_LookAt_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LookAt(FAnimNode_LookAt::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_LookAt"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LookAt
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LookAt()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_LookAt")),new UScriptStruct::TCppStructOps<FAnimNode_LookAt>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_LookAt;
	struct Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationTriggerThreashold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationTriggerThreashold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpolationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LookAtClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookUp_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookUp_Axis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomLookUpAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomLookUpAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookUpAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LookUpAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLookUpAxis_MetaData[];
#endif
		static void NewProp_bUseLookUpAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLookUpAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAt_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAt_Axis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomLookAtAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomLookAtAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LookAtAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LookAtSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToModify_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneToModify;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Simple controller that make a bone to look at the point or another bone" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LookAt>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold = { UE4CodeGen_Private::EPropertyClass::Float, "InterpolationTriggerThreashold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, InterpolationTriggerThreashold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime = { UE4CodeGen_Private::EPropertyClass::Float, "InterpolationTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, InterpolationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType = { UE4CodeGen_Private::EPropertyClass::Byte, "InterpolationType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, InterpolationType), Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Look at Clamp value in degree - if you're look at axis is Z, only X, Y degree of clamp will be used" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp = { UE4CodeGen_Private::EPropertyClass::Float, "LookAtClamp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookAtClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis = { UE4CodeGen_Private::EPropertyClass::Struct, "LookUp_Axis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookUp_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Custom look up axis in local space. Only used if LookUpAxis==EAxisOption::Custom" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomLookUpAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, CustomLookUpAxis_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Look up axis in local space" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "LookUpAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookUpAxis_DEPRECATED), Z_Construct_UEnum_Engine_EAxisOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Whether or not to use Look up axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_SetBit(void* Obj)
	{
		((FAnimNode_LookAt*)Obj)->bUseLookUpAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLookUpAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_LookAt), &Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis = { UE4CodeGen_Private::EPropertyClass::Struct, "LookAt_Axis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookAt_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Custom look up axis in local space. Only used if LookAtAxis==EAxisOption::Custom" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomLookAtAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, CustomLookAtAxis_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Look at axis, which axis to align to look at point" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "LookAtAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookAtAxis_DEPRECATED), Z_Construct_UEnum_Engine_EAxisOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Target Offset. It's in world space if LookAtBone is empty or it is based on LookAtBone or LookAtSocket in their local space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "LookAtLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Target socket to look at. Used if LookAtBone is empty. - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "LookAtTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookAtTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket = { UE4CodeGen_Private::EPropertyClass::Name, "LookAtSocket", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookAtSocket_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Target Bone to look at - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone = { UE4CodeGen_Private::EPropertyClass::Struct, "LookAtBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookAtBone_DEPRECATED), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneToModify", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, BoneToModify), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_LookAt",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_LookAt),
		alignof(FAnimNode_LookAt),
		Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LookAt()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LookAt_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LookAt"), sizeof(FAnimNode_LookAt), Get_Z_Construct_UScriptStruct_FAnimNode_LookAt_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LookAt_CRC() { return 2446973220U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
