// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/SkeletalMeshReductionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshReductionSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
	static UEnum* SkeletalMeshOptimizationImportance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshOptimizationImportance"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SkeletalMeshOptimizationImportance(SkeletalMeshOptimizationImportance_StaticEnum, TEXT("/Script/Engine"), TEXT("SkeletalMeshOptimizationImportance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance_CRC() { return 3875128610U; }
	UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshOptimizationImportance"), 0, Get_Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SMOI_Off", (int64)SMOI_Off },
				{ "SMOI_Lowest", (int64)SMOI_Lowest },
				{ "SMOI_Low", (int64)SMOI_Low },
				{ "SMOI_Normal", (int64)SMOI_Normal },
				{ "SMOI_High", (int64)SMOI_High },
				{ "SMOI_Highest", (int64)SMOI_Highest },
				{ "SMOI_MAX", (int64)SMOI_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
				{ "SMOI_High.DisplayName", "High" },
				{ "SMOI_Highest.DisplayName", "Highest" },
				{ "SMOI_Low.DisplayName", "Low" },
				{ "SMOI_Lowest.DisplayName", "Lowest" },
				{ "SMOI_MAX.Hidden", "" },
				{ "SMOI_Normal.DisplayName", "Normal" },
				{ "SMOI_Off.DisplayName", "Off" },
				{ "ToolTip", "Enum specifying the importance of properties when simplifying skeletal meshes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"SkeletalMeshOptimizationImportance",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"SkeletalMeshOptimizationImportance",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* SkeletalMeshOptimizationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshOptimizationType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SkeletalMeshOptimizationType(SkeletalMeshOptimizationType_StaticEnum, TEXT("/Script/Engine"), TEXT("SkeletalMeshOptimizationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType_CRC() { return 3580374710U; }
	UEnum* Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshOptimizationType"), 0, Get_Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SMOT_NumOfTriangles", (int64)SMOT_NumOfTriangles },
				{ "SMOT_MaxDeviation", (int64)SMOT_MaxDeviation },
				{ "SMOT_TriangleOrDeviation", (int64)SMOT_TriangleOrDeviation },
				{ "SMOT_MAX", (int64)SMOT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
				{ "SMOT_MAX.Hidden", "" },
				{ "SMOT_MaxDeviation.DisplayName", "Accuracy" },
				{ "SMOT_MaxDeviation.ToolTip", "Accuracy requirement will be used for simplification." },
				{ "SMOT_NumOfTriangles.DisplayName", "Triangles" },
				{ "SMOT_NumOfTriangles.ToolTip", "Triangle requirement will be used for simplification." },
				{ "SMOT_TriangleOrDeviation.DisplayName", "Any" },
				{ "SMOT_TriangleOrDeviation.ToolTip", "Simplification will continue until either Triangle or Accuracy requirement is met." },
				{ "ToolTip", "Enum specifying the reduction type to use when simplifying skeletal meshes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"SkeletalMeshOptimizationType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"SkeletalMeshOptimizationType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSkeletalMeshOptimizationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshOptimizationSettings"), sizeof(FSkeletalMeshOptimizationSettings), Get_Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshOptimizationSettings(FSkeletalMeshOptimizationSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshOptimizationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshOptimizationSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshOptimizationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshOptimizationSettings")),new UScriptStruct::TCppStructOps<FSkeletalMeshOptimizationSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshOptimizationSettings;
	struct Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BakePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BonesToRemove;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BonesToRemove_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBonesPerVertex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBonesPerVertex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalsThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalsThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecalcNormals_MetaData[];
#endif
		static void NewProp_bRecalcNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecalcNormals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemapMorphTargets_MetaData[];
#endif
		static void NewProp_bRemapMorphTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemapMorphTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinningImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkinningImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadingImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ShadingImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SilhouetteImportance_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SilhouetteImportance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReductionMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDeviationPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDeviationPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfTrianglesPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumOfTrianglesPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "FSkeletalMeshOptimizationSettings - The settings used to optimize a skeletal mesh LOD." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshOptimizationSettings>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BakePose_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BakePose = { UE4CodeGen_Private::EPropertyClass::Object, "BakePose", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, BakePose_DEPRECATED), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BakePose_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BakePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove = { UE4CodeGen_Private::EPropertyClass::Array, "BonesToRemove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, BonesToRemove_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BonesToRemove", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000820000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BaseLOD_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Base LOD index to generate this LOD. By default, we generate from LOD 0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BaseLOD = { UE4CodeGen_Private::EPropertyClass::Int, "BaseLOD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, BaseLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BaseLOD_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BaseLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxBonesPerVertex_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "DisplayName", "Max Bones Influence" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Maximum number of bones that can be assigned to each vertex." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxBonesPerVertex = { UE4CodeGen_Private::EPropertyClass::Int, "MaxBonesPerVertex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxBonesPerVertex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxBonesPerVertex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxBonesPerVertex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NormalsThreshold_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "DisplayName", "Hard Edge Angle" },
		{ "EditCondition", "bRecalcNormals" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "If the angle between two triangles are above this value, the normals will not be\n      smooth over the edge between those two triangles. Set in degrees. This is only used when bRecalcNormals is set to true" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NormalsThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "NormalsThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, NormalsThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NormalsThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NormalsThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_WeldingThreshold_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The welding threshold distance. Vertices under this distance will be welded." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_WeldingThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "WeldingThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, WeldingThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_WeldingThreshold_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_WeldingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "DisplayName", "Recompute Normal" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Whether Normal smoothing groups should be preserved. If true then Hard Edge Angle (NormalsThreshold) is used *" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_SetBit(void* Obj)
	{
		((FSkeletalMeshOptimizationSettings*)Obj)->bRecalcNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals = { UE4CodeGen_Private::EPropertyClass::Bool, "bRecalcNormals", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSkeletalMeshOptimizationSettings), &Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "Remap the morph targets from the base LOD onto the reduce LOD." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets_SetBit(void* Obj)
	{
		((FSkeletalMeshOptimizationSettings*)Obj)->bRemapMorphTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets = { UE4CodeGen_Private::EPropertyClass::Bool, "bRemapMorphTargets", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSkeletalMeshOptimizationSettings), &Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SkinningImportance_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "DisplayName", "Skinning" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "How important skinning quality is." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SkinningImportance = { UE4CodeGen_Private::EPropertyClass::Byte, "SkinningImportance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, SkinningImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SkinningImportance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SkinningImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ShadingImportance_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "DisplayName", "Shading" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "How important shading quality is." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ShadingImportance = { UE4CodeGen_Private::EPropertyClass::Byte, "ShadingImportance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, ShadingImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ShadingImportance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ShadingImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TextureImportance_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "DisplayName", "Texture" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "How important texture density is." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TextureImportance = { UE4CodeGen_Private::EPropertyClass::Byte, "TextureImportance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, TextureImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TextureImportance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TextureImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance_MetaData[] = {
		{ "Category", "FSkeletalMeshOptimizationSettings" },
		{ "DisplayName", "Silhouette" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "How important the shape of the geometry is." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance = { UE4CodeGen_Private::EPropertyClass::Byte, "SilhouetteImportance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, SilhouetteImportance), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationImportance, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ReductionMethod_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "The method to use when optimizing the skeletal mesh LOD" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ReductionMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "ReductionMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, ReductionMethod), Z_Construct_UEnum_Engine_SkeletalMeshOptimizationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ReductionMethod_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ReductionMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "If ReductionMethod equals MaxDeviation this value is the maximum deviation from the base mesh as a percentage of the bounding sphere.\nIn code, it ranges from [0, 1]. In the editor UI, it ranges from [0, 100]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDeviationPercentage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, MaxDeviationPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage_MetaData[] = {
		{ "Category", "ReductionMethod" },
		{ "ModuleRelativePath", "Public/SkeletalMeshReductionSettings.h" },
		{ "ToolTip", "If ReductionMethod equals NumOfTriangles this value is the ratio of triangles percentage to remove from the mesh.\nIn code, it ranges from [0, 1]. In the editor UI, it ranges from [0, 100]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "NumOfTrianglesPercentage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSkeletalMeshOptimizationSettings, NumOfTrianglesPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BakePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BonesToRemove_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_BaseLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxBonesPerVertex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NormalsThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_WeldingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRecalcNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_bRemapMorphTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SkinningImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ShadingImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_TextureImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_SilhouetteImportance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_ReductionMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_MaxDeviationPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::NewProp_NumOfTrianglesPercentage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshOptimizationSettings",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSkeletalMeshOptimizationSettings),
		alignof(FSkeletalMeshOptimizationSettings),
		Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshOptimizationSettings"), sizeof(FSkeletalMeshOptimizationSettings), Get_Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings_CRC() { return 3443212369U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
