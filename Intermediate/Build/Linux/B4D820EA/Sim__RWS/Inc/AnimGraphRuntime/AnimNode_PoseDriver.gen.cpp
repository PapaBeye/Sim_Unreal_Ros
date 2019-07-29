// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/AnimNodes/AnimNode_PoseDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_PoseDriver() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseDriver();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseHandler();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPoseDriverTarget();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPoseDriverTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EPoseDriverOutput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EPoseDriverOutput"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPoseDriverOutput(EPoseDriverOutput_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EPoseDriverOutput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_CRC() { return 470906867U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPoseDriverOutput"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPoseDriverOutput::DrivePoses", (int64)EPoseDriverOutput::DrivePoses },
				{ "EPoseDriverOutput::DriveCurves", (int64)EPoseDriverOutput::DriveCurves },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DriveCurves.ToolTip", "Use the target's DrivenName to drive curves" },
				{ "DrivePoses.ToolTip", "Use target's DrivenName to drive poses from the assigned PoseAsset" },
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
				{ "ToolTip", "Options for what PoseDriver should be driving" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPoseDriverOutput",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPoseDriverOutput",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPoseDriverSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EPoseDriverSource"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPoseDriverSource(EPoseDriverSource_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EPoseDriverSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_CRC() { return 722051344U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPoseDriverSource"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPoseDriverSource::Rotation", (int64)EPoseDriverSource::Rotation },
				{ "EPoseDriverSource::Translation", (int64)EPoseDriverSource::Translation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
				{ "Rotation.ToolTip", "Drive using rotation" },
				{ "ToolTip", "Transform aspect used to drive interpolation" },
				{ "Translation.ToolTip", "Driver using translation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPoseDriverSource",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPoseDriverSource",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPoseDriverType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EPoseDriverType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPoseDriverType(EPoseDriverType_StaticEnum, TEXT("/Script/AnimGraphRuntime"), TEXT("EPoseDriverType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_CRC() { return 935886885U; }
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPoseDriverType"), 0, Get_Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPoseDriverType::SwingAndTwist", (int64)EPoseDriverType::SwingAndTwist },
				{ "EPoseDriverType::SwingOnly", (int64)EPoseDriverType::SwingOnly },
				{ "EPoseDriverType::Translation", (int64)EPoseDriverType::Translation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
				{ "ToolTip", "Deprecated" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EPoseDriverType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EPoseDriverType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAnimNode_PoseDriver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PoseDriver_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseDriver, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_PoseDriver"), sizeof(FAnimNode_PoseDriver), Get_Z_Construct_UScriptStruct_FAnimNode_PoseDriver_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_PoseDriver(FAnimNode_PoseDriver::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("AnimNode_PoseDriver"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_PoseDriver
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_PoseDriver()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_PoseDriver")),new UScriptStruct::TCppStructOps<FAnimNode_PoseDriver>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFAnimNode_PoseDriver;
	struct Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialScaling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadialScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TwistAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PoseTargets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PoseTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriveOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DriveOutput;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DriveOutput_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DriveSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DriveSource;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DriveSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RBFParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RBFParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvalSpaceBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EvalSpaceBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlyDriveBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnlyDriveBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnlyDriveBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyDriveSelectedBones_MetaData[];
#endif
		static void NewProp_bOnlyDriveSelectedBones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyDriveSelectedBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourcePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "RBF based orientation driver" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PoseDriver>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RadialScaling_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RadialScaling = { UE4CodeGen_Private::EPropertyClass::Float, "RadialScaling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, RadialScaling_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RadialScaling_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RadialScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, Type_DEPRECATED), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_TwistAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "TwistAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, TwistAxis_DEPRECATED), Z_Construct_UEnum_Engine_EBoneAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_TwistAxis_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_TwistAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBone_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBone = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, SourceBone_DEPRECATED), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Targets used to compare with current pose and drive morphs/poses" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets = { UE4CodeGen_Private::EPropertyClass::Array, "PoseTargets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, PoseTargets), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PoseTargets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPoseDriverTarget, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Whether we should drive poses or curves" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput = { UE4CodeGen_Private::EPropertyClass::Enum, "DriveOutput", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, DriveOutput), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Which part of the transform is read" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource = { UE4CodeGen_Private::EPropertyClass::Enum, "DriveSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, DriveSource), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RBFParams_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Parameters used by RBF solver" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RBFParams = { UE4CodeGen_Private::EPropertyClass::Struct, "RBFParams", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, RBFParams), Z_Construct_UScriptStruct_FRBFParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RBFParams_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RBFParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_EvalSpaceBone_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Optional other bone space to use when reading SourceBone transform.\nIf not specified, we just use local space of SourceBone (ie relative to parent bone)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_EvalSpaceBone = { UE4CodeGen_Private::EPropertyClass::Struct, "EvalSpaceBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, EvalSpaceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_EvalSpaceBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_EvalSpaceBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "EditCondition", "bOnlyDriveSelectedBones" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "If bFilterDrivenBones is specified, only these bones will be modified by this node" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones = { UE4CodeGen_Private::EPropertyClass::Array, "OnlyDriveBones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, OnlyDriveBones), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OnlyDriveBones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bOnlyDriveSelectedBones_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "If we should filter bones to be driven using the DrivenBonesFilter array" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bOnlyDriveSelectedBones_SetBit(void* Obj)
	{
		((FAnimNode_PoseDriver*)Obj)->bOnlyDriveSelectedBones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bOnlyDriveSelectedBones = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlyDriveSelectedBones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimNode_PoseDriver), &Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bOnlyDriveSelectedBones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bOnlyDriveSelectedBones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bOnlyDriveSelectedBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Bone to use for driving parameters based on its orientation" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones = { UE4CodeGen_Private::EPropertyClass::Array, "SourceBones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, SourceBones), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceBones", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Bones to use for driving parameters based on their transform" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourcePose = { UE4CodeGen_Private::EPropertyClass::Struct, "SourcePose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000045, 1, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourcePose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourcePose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RadialScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_TwistAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RBFParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_EvalSpaceBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bOnlyDriveSelectedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourcePose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_PoseHandler,
		&NewStructOps,
		"AnimNode_PoseDriver",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_PoseDriver),
		alignof(FAnimNode_PoseDriver),
		Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseDriver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PoseDriver_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_PoseDriver"), sizeof(FAnimNode_PoseDriver), Get_Z_Construct_UScriptStruct_FAnimNode_PoseDriver_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_PoseDriver_CRC() { return 2407966883U; }
class UScriptStruct* FPoseDriverTarget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPoseDriverTarget_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseDriverTarget, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("PoseDriverTarget"), sizeof(FPoseDriverTarget), Get_Z_Construct_UScriptStruct_FPoseDriverTarget_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPoseDriverTarget(FPoseDriverTarget::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("PoseDriverTarget"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFPoseDriverTarget
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFPoseDriverTarget()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PoseDriverTarget")),new UScriptStruct::TCppStructOps<FPoseDriverTarget>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFPoseDriverTarget;
	struct Z_Construct_UScriptStruct_FPoseDriverTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrivenName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DrivenName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bApplyCustomCurve_MetaData[];
#endif
		static void NewProp_bApplyCustomCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bApplyCustomCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneTransforms_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneTransforms;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneTransforms_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Information about each target in the PoseDriver" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseDriverTarget>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DrivenName_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Name of item to drive - depends on DriveOutput setting.\nIf DriveOutput is DrivePoses, this should be the name of a pose in the assigned PoseAsset\nIf DriveOutput is DriveCurves, this is the name of the curve (morph target, material param etc) to drive" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DrivenName = { UE4CodeGen_Private::EPropertyClass::Name, "DrivenName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPoseDriverTarget, DrivenName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DrivenName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DrivenName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Custom curve mapping to apply if bApplyCustomCurve is true" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_CustomCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPoseDriverTarget, CustomCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_CustomCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "If we should apply a custom curve mapping to how this target activates" },
	};
#endif
	void Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve_SetBit(void* Obj)
	{
		((FPoseDriverTarget*)Obj)->bApplyCustomCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve = { UE4CodeGen_Private::EPropertyClass::Bool, "bApplyCustomCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPoseDriverTarget), &Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetScale_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Scale applied to this target's function - a larger value will activate this target sooner" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetScale = { UE4CodeGen_Private::EPropertyClass::Float, "TargetScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPoseDriverTarget, TargetScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Rotation of this target" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPoseDriverTarget, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Translation of this target" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms = { UE4CodeGen_Private::EPropertyClass::Array, "BoneTransforms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPoseDriverTarget, BoneTransforms), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneTransforms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPoseDriverTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DrivenName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_CustomCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"PoseDriverTarget",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FPoseDriverTarget),
		alignof(FPoseDriverTarget),
		Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseDriverTarget()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPoseDriverTarget_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PoseDriverTarget"), sizeof(FPoseDriverTarget), Get_Z_Construct_UScriptStruct_FPoseDriverTarget_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPoseDriverTarget_CRC() { return 2496338884U; }
class UScriptStruct* FPoseDriverTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMGRAPHRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPoseDriverTransform_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseDriverTransform, Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("PoseDriverTransform"), sizeof(FPoseDriverTransform), Get_Z_Construct_UScriptStruct_FPoseDriverTransform_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPoseDriverTransform(FPoseDriverTransform::StaticStruct, TEXT("/Script/AnimGraphRuntime"), TEXT("PoseDriverTransform"), false, nullptr, nullptr);
static struct FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFPoseDriverTransform
{
	FScriptStruct_AnimGraphRuntime_StaticRegisterNativesFPoseDriverTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PoseDriverTransform")),new UScriptStruct::TCppStructOps<FPoseDriverTransform>);
	}
} ScriptStruct_AnimGraphRuntime_StaticRegisterNativesFPoseDriverTransform;
	struct Z_Construct_UScriptStruct_FPoseDriverTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTranslation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Translation and rotation for a particular bone at a particular target" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseDriverTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Rotation of this target" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPoseDriverTransform, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetTranslation_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Translation of this target" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPoseDriverTransform, TargetTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetTranslation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetTranslation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"PoseDriverTransform",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPoseDriverTransform),
		alignof(FPoseDriverTransform),
		Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseDriverTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPoseDriverTransform_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimGraphRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PoseDriverTransform"), sizeof(FPoseDriverTransform), Get_Z_Construct_UScriptStruct_FPoseDriverTransform_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPoseDriverTransform_CRC() { return 4085153681U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
