// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/PhysicsSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESettingsLockedAxis();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESettingsDOF();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSurfaceName();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBroadphaseSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionTraceFlag();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFrictionCombineMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRigidBodyErrorCorrection();
// End Cross Module References
	static UEnum* ESettingsLockedAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESettingsLockedAxis, Z_Construct_UPackage__Script_Engine(), TEXT("ESettingsLockedAxis"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESettingsLockedAxis(ESettingsLockedAxis_StaticEnum, TEXT("/Script/Engine"), TEXT("ESettingsLockedAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESettingsLockedAxis_CRC() { return 3718070499U; }
	UEnum* Z_Construct_UEnum_Engine_ESettingsLockedAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESettingsLockedAxis"), 0, Get_Z_Construct_UEnum_Engine_ESettingsLockedAxis_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESettingsLockedAxis::None", (int64)ESettingsLockedAxis::None },
				{ "ESettingsLockedAxis::X", (int64)ESettingsLockedAxis::X },
				{ "ESettingsLockedAxis::Y", (int64)ESettingsLockedAxis::Y },
				{ "ESettingsLockedAxis::Z", (int64)ESettingsLockedAxis::Z },
				{ "ESettingsLockedAxis::Invalid", (int64)ESettingsLockedAxis::Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Invalid.ToolTip", "Used for backwards compatibility. Indicates that we've updated into the new struct." },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "None.ToolTip", "No axis is locked." },
				{ "X.ToolTip", "Lock movement along the x-axis." },
				{ "Y.ToolTip", "Lock movement along the y-axis." },
				{ "Z.ToolTip", "Lock movement along the z-axis." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESettingsLockedAxis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESettingsLockedAxis::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESettingsDOF_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESettingsDOF, Z_Construct_UPackage__Script_Engine(), TEXT("ESettingsDOF"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESettingsDOF(ESettingsDOF_StaticEnum, TEXT("/Script/Engine"), TEXT("ESettingsDOF"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESettingsDOF_CRC() { return 464867652U; }
	UEnum* Z_Construct_UEnum_Engine_ESettingsDOF()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESettingsDOF"), 0, Get_Z_Construct_UEnum_Engine_ESettingsDOF_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESettingsDOF::Full3D", (int64)ESettingsDOF::Full3D },
				{ "ESettingsDOF::YZPlane", (int64)ESettingsDOF::YZPlane },
				{ "ESettingsDOF::XZPlane", (int64)ESettingsDOF::XZPlane },
				{ "ESettingsDOF::XYPlane", (int64)ESettingsDOF::XYPlane },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Full3D.ToolTip", "Allows for full 3D movement and rotation." },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
				{ "XYPlane.ToolTip", "Allows 2D movement along the X-Y plane." },
				{ "XZPlane.ToolTip", "Allows 2D movement along the X-Z plane." },
				{ "YZPlane.ToolTip", "Allows 2D movement along the Y-Z plane." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESettingsDOF",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ESettingsDOF::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPhysicalSurfaceName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalSurfaceName, Z_Construct_UPackage__Script_Engine(), TEXT("PhysicalSurfaceName"), sizeof(FPhysicalSurfaceName), Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalSurfaceName(FPhysicalSurfaceName::StaticStruct, TEXT("/Script/Engine"), TEXT("PhysicalSurfaceName"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPhysicalSurfaceName
{
	FScriptStruct_Engine_StaticRegisterNativesFPhysicalSurfaceName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicalSurfaceName")),new UScriptStruct::TCppStructOps<FPhysicalSurfaceName>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPhysicalSurfaceName;
	struct Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Structure that represents the name of physical surfaces." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalSurfaceName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Name, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPhysicalSurfaceName, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Byte, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPhysicalSurfaceName, Type), Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PhysicalSurfaceName",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPhysicalSurfaceName),
		alignof(FPhysicalSurfaceName),
		Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalSurfaceName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalSurfaceName"), sizeof(FPhysicalSurfaceName), Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_CRC() { return 2027298291U; }
	void UPhysicsSettings::StaticRegisterNativesUPhysicsSettings()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsSettings_NoRegister()
	{
		return UPhysicsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBroadphaseSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultBroadphaseSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalSurfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalSurfaces;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalSurfaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysXTreeRebuildRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PhysXTreeRebuildRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialAverageFrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialAverageFrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncSceneSmoothingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AsyncSceneSmoothingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncSceneSmoothingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SyncSceneSmoothingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSubsteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSubsteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSubstepDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSubstepDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubsteppingAsync_MetaData[];
#endif
		static void NewProp_bSubsteppingAsync_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubsteppingAsync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubstepping_MetaData[];
#endif
		static void NewProp_bSubstepping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubstepping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPhysicsDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPhysicsDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableEnhancedDeterminism_MetaData[];
#endif
		static void NewProp_bEnableEnhancedDeterminism_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableEnhancedDeterminism;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCCD_MetaData[];
#endif
		static void NewProp_bDisableCCD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCCD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableKinematicKinematicPairs_MetaData[];
#endif
		static void NewProp_bDisableKinematicKinematicPairs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableKinematicKinematicPairs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableKinematicStaticPairs_MetaData[];
#endif
		static void NewProp_bDisableKinematicStaticPairs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableKinematicStaticPairs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableActiveActors_MetaData[];
#endif
		static void NewProp_bDisableActiveActors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableActiveActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportUVFromHitResults_MetaData[];
#endif
		static void NewProp_bSupportUVFromHitResults_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportUVFromHitResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressFaceRemapTable_MetaData[];
#endif
		static void NewProp_bSuppressFaceRemapTable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressFaceRemapTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultHasComplexCollision_MetaData[];
#endif
		static void NewProp_bDefaultHasComplexCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultHasComplexCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultShapeComplexity_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultShapeComplexity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulateSkeletalMeshOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bSimulateSkeletalMeshOnDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulateSkeletalMeshOnDedicatedServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxContactOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxContactOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinContactOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinContactOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactOffsetMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ContactOffsetMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDepenetrationVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDepenetrationVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestitutionCombineMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RestitutionCombineMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionCombineMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FrictionCombineMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceThresholdVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceThresholdVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDegreesOfFreedom_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultDegreesOfFreedom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LockedAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicErrorCorrection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicErrorCorrection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable2DPhysics_MetaData[];
#endif
		static void NewProp_bEnable2DPhysics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable2DPhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWarnMissingLocks_MetaData[];
#endif
		static void NewProp_bWarnMissingLocks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWarnMissingLocks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStabilization_MetaData[];
#endif
		static void NewProp_bEnableStabilization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStabilization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePCM_MetaData[];
#endif
		static void NewProp_bEnablePCM_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePCM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableShapeSharing_MetaData[];
#endif
		static void NewProp_bEnableShapeSharing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableShapeSharing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAsyncScene_MetaData[];
#endif
		static void NewProp_bEnableAsyncScene_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAsyncScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriangleMeshTriangleMinAreaThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriangleMeshTriangleMinAreaThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollAggregateThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RagdollAggregateThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulateScratchMemorySize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SimulateScratchMemorySize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFluidFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultFluidFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTerminalVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultTerminalVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGravityZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultGravityZ;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Physics" },
		{ "IncludePath", "PhysicsEngine/PhysicsSettings.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Default physics settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultBroadphaseSettings_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If we want to Enable MPB or not globally. This is then overridden by project settings if not enabled. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultBroadphaseSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultBroadphaseSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, DefaultBroadphaseSettings), Z_Construct_UScriptStruct_FBroadphaseSettings, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultBroadphaseSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultBroadphaseSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces_MetaData[] = {
		{ "Category", "PhysicalSurfaces" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "PhysicalMaterial Surface Types" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces = { UE4CodeGen_Private::EPropertyClass::Array, "PhysicalSurfaces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, PhysicalSurfaces), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PhysicalSurfaces", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPhysicalSurfaceName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysXTreeRebuildRate_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMin", "4" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "The number of frames it takes to rebuild the PhysX scene query AABB tree. The bigger the number, the smaller fetchResults takes per frame, but the more the tree deteriorates until a new tree is built" },
		{ "UIMin", "4" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysXTreeRebuildRate = { UE4CodeGen_Private::EPropertyClass::Int, "PhysXTreeRebuildRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, PhysXTreeRebuildRate), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysXTreeRebuildRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysXTreeRebuildRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_InitialAverageFrameRate_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0013" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Physics delta time initial average." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0013" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_InitialAverageFrameRate = { UE4CodeGen_Private::EPropertyClass::Float, "InitialAverageFrameRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, InitialAverageFrameRate), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_InitialAverageFrameRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_InitialAverageFrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_AsyncSceneSmoothingFactor_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Physics delta time smoothing factor for async scene." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_AsyncSceneSmoothingFactor = { UE4CodeGen_Private::EPropertyClass::Float, "AsyncSceneSmoothingFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, AsyncSceneSmoothingFactor), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_AsyncSceneSmoothingFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_AsyncSceneSmoothingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SyncSceneSmoothingFactor_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Physics delta time smoothing factor for sync scene." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SyncSceneSmoothingFactor = { UE4CodeGen_Private::EPropertyClass::Float, "SyncSceneSmoothingFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, SyncSceneSmoothingFactor), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SyncSceneSmoothingFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SyncSceneSmoothingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubsteps_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "editcondition", "bSubstepping" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Max number of substeps for physics simulation." },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubsteps = { UE4CodeGen_Private::EPropertyClass::Int, "MaxSubsteps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, MaxSubsteps), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubsteps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubsteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubstepDeltaTime_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0013" },
		{ "editcondition", "bSubStepping" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Max delta time (in seconds) for an individual simulation substep." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0013" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubstepDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSubstepDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, MaxSubstepDeltaTime), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubstepDeltaTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubstepDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to substep the async physics simulation. This feature is still experimental. Certain functionality might not work correctly" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bSubsteppingAsync = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync = { UE4CodeGen_Private::EPropertyClass::Bool, "bSubsteppingAsync", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to substep the physics simulation. This feature is still experimental. Certain functionality might not work correctly" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bSubstepping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping = { UE4CodeGen_Private::EPropertyClass::Bool, "bSubstepping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxPhysicsDeltaTime_MetaData[] = {
		{ "Category", "Framerate" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0013" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Max Physics Delta Time to be clamped." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0013" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxPhysicsDeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxPhysicsDeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, MaxPhysicsDeltaTime), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxPhysicsDeltaTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxPhysicsDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableEnhancedDeterminism_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If set to true, the scene will use enhanced determinism at the cost of a bit more resources. See eENABLE_ENHANCED_DETERMINISM to learn about the specifics" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableEnhancedDeterminism_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bEnableEnhancedDeterminism = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableEnhancedDeterminism = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableEnhancedDeterminism", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableEnhancedDeterminism_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableEnhancedDeterminism_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableEnhancedDeterminism_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If true CCD will be ignored. This is an optimization when CCD is never used which removes the need for physx to check it internally." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bDisableCCD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableCCD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to disable generating KK pairs, enabling this speeds up contact generation, however it is required when using APEX destruction." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bDisableKinematicKinematicPairs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableKinematicKinematicPairs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to disable generating KS pairs, enabling this makes switching between dynamic and static slower for actors - but speeds up contact generation by early rejecting these pairs" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bDisableKinematicStaticPairs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableKinematicStaticPairs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If true, physx will not update unreal with any bodies that have moved during the simulation. This should only be used if you have no physx simulation or you are manually updating the unreal data via polling physx." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bDisableActiveActors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableActiveActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Support UV From Hit Results" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If true, store extra information to allow FindCollisionUV to derive UV info from a line trace hit result, using the FindCollisionUV utility" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bSupportUVFromHitResults = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportUVFromHitResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If true, the internal physx face to UE face mapping will not be generated. This is a memory optimization available if you do not rely on face indices returned by scene queries." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bSuppressFaceRemapTable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuppressFaceRemapTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDefaultHasComplexCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If true, static meshes will use per poly collision as complex collision by default. If false the default behavior is the same as UseSimpleAsComplex." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDefaultHasComplexCollision_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bDefaultHasComplexCollision_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDefaultHasComplexCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefaultHasComplexCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020004000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDefaultHasComplexCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDefaultHasComplexCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDefaultHasComplexCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultShapeComplexity_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Determines the default physics shape complexity." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultShapeComplexity = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultShapeComplexity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, DefaultShapeComplexity), Z_Construct_UEnum_Engine_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultShapeComplexity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultShapeComplexity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateSkeletalMeshOnDedicatedServer_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "If true, simulate physics for this component on a dedicated server.\nThis should be set if simulating physics and replicating with a dedicated server." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateSkeletalMeshOnDedicatedServer_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bSimulateSkeletalMeshOnDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateSkeletalMeshOnDedicatedServer = { UE4CodeGen_Private::EPropertyClass::Bool, "bSimulateSkeletalMeshOnDedicatedServer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateSkeletalMeshOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateSkeletalMeshOnDedicatedServer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateSkeletalMeshOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxContactOffset_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Max Contact offset." },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxContactOffset = { UE4CodeGen_Private::EPropertyClass::Float, "MaxContactOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, MaxContactOffset), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxContactOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxContactOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MinContactOffset_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMin", "0.0001" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Min Contact offset." },
		{ "UIMin", "0.0001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MinContactOffset = { UE4CodeGen_Private::EPropertyClass::Float, "MinContactOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, MinContactOffset), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MinContactOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MinContactOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_ContactOffsetMultiplier_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Contact offset multiplier. When creating a physics shape we look at its bounding volume and multiply its minimum value by this multiplier. A bigger number will generate contact points earlier which results in higher stability at the cost of performance." },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_ContactOffsetMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "ContactOffsetMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, ContactOffsetMultiplier), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_ContactOffsetMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_ContactOffsetMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxDepenetrationVelocity_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Max velocity which may be used to depenetrate simulated physics objects. 0 means no maximum." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxDepenetrationVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDepenetrationVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, MaxDepenetrationVelocity), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxDepenetrationVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxDepenetrationVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxAngularVelocity_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Max angular velocity that a simulated object can achieve." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxAngularVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, MaxAngularVelocity), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxAngularVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_RestitutionCombineMode_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Restitution combine mode, controls how restitution is computed for multiple materials." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_RestitutionCombineMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RestitutionCombineMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, RestitutionCombineMode), Z_Construct_UEnum_Engine_EFrictionCombineMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_RestitutionCombineMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_RestitutionCombineMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_FrictionCombineMode_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Friction combine mode, controls how friction is computed for multiple materials." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_FrictionCombineMode = { UE4CodeGen_Private::EPropertyClass::Byte, "FrictionCombineMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, FrictionCombineMode), Z_Construct_UEnum_Engine_EFrictionCombineMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_FrictionCombineMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_FrictionCombineMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_BounceThresholdVelocity_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Minimum relative velocity required for an object to bounce. A typical value for simulation stability is about 0.2 * gravity" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_BounceThresholdVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "BounceThresholdVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, BounceThresholdVelocity), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_BounceThresholdVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_BounceThresholdVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultDegreesOfFreedom_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Useful for constraining all objects in the world, for example if you are making a 2D game using 3D environments." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultDegreesOfFreedom = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultDegreesOfFreedom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, DefaultDegreesOfFreedom), Z_Construct_UEnum_Engine_ESettingsDOF, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultDegreesOfFreedom_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultDegreesOfFreedom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_LockedAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_LockedAxis = { UE4CodeGen_Private::EPropertyClass::Byte, "LockedAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020004000, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, LockedAxis_DEPRECATED), Z_Construct_UEnum_Engine_ESettingsLockedAxis, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_LockedAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_LockedAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicErrorCorrection_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Error correction data for replicating simulated physics (rigid bodies)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicErrorCorrection = { UE4CodeGen_Private::EPropertyClass::Struct, "PhysicErrorCorrection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, PhysicErrorCorrection), Z_Construct_UScriptStruct_FRigidBodyErrorCorrection, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicErrorCorrection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicErrorCorrection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnable2DPhysics_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Can 2D physics be used (Box2D)?" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnable2DPhysics_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bEnable2DPhysics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnable2DPhysics = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable2DPhysics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnable2DPhysics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnable2DPhysics_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnable2DPhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bWarnMissingLocks_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Whether to warn when physics locks are used incorrectly. Turning this off is not recommended and should only be used by very advanced users." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bWarnMissingLocks_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bWarnMissingLocks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bWarnMissingLocks = { UE4CodeGen_Private::EPropertyClass::Bool, "bWarnMissingLocks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bWarnMissingLocks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bWarnMissingLocks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bWarnMissingLocks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableStabilization_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Enables stabilization of contacts for slow moving bodies. This will help improve the stability of stacking." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableStabilization_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bEnableStabilization = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableStabilization = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableStabilization", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableStabilization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableStabilization_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableStabilization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnablePCM_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Enables persistent contact manifolds. This will generate fewer contact points, but with more accuracy. Reduces stability of stacking, but can help energy conservation." },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnablePCM_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bEnablePCM = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnablePCM = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnablePCM", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnablePCM_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnablePCM_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnablePCM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableShapeSharing_MetaData[] = {
		{ "Category", "Simulation" },
		{ "editcondition", "bEnableAsyncScene" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Enables shape sharing between sync and async scene for static rigid actors" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableShapeSharing_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bEnableShapeSharing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableShapeSharing = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableShapeSharing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableShapeSharing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableShapeSharing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableShapeSharing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableAsyncScene_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Enables the use of an async scene" },
	};
#endif
	void Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableAsyncScene_SetBit(void* Obj)
	{
		((UPhysicsSettings*)Obj)->bEnableAsyncScene = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableAsyncScene = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableAsyncScene", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSettings), &Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableAsyncScene_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableAsyncScene_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableAsyncScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_TriangleMeshTriangleMinAreaThreshold_MetaData[] = {
		{ "Category", "Constants" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "-1.0" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Triangles from triangle meshes (BSP) with an area less than or equal to this value will be removed from physics collision data. Set to less than 0 to disable." },
		{ "UIMax", "10.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_TriangleMeshTriangleMinAreaThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "TriangleMeshTriangleMinAreaThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, TriangleMeshTriangleMinAreaThreshold), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_TriangleMeshTriangleMinAreaThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_TriangleMeshTriangleMinAreaThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_RagdollAggregateThreshold_MetaData[] = {
		{ "Category", "Constants" },
		{ "ClampMax", "127" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Threshold for ragdoll bodies above which they will be added to an aggregate before being added to the scene" },
		{ "UIMax", "127" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_RagdollAggregateThreshold = { UE4CodeGen_Private::EPropertyClass::Int, "RagdollAggregateThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, RagdollAggregateThreshold), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_RagdollAggregateThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_RagdollAggregateThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SimulateScratchMemorySize_MetaData[] = {
		{ "Category", "Constants" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Amount of memory to reserve for PhysX simulate(), this is per pxscene and will be rounded up to the next 16K boundary" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SimulateScratchMemorySize = { UE4CodeGen_Private::EPropertyClass::Int, "SimulateScratchMemorySize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, SimulateScratchMemorySize), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SimulateScratchMemorySize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SimulateScratchMemorySize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultFluidFriction_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Default fluid friction for Physics Volumes." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultFluidFriction = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultFluidFriction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, DefaultFluidFriction), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultFluidFriction_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultFluidFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultTerminalVelocity_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Default terminal velocity for Physics Volumes." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultTerminalVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultTerminalVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, DefaultTerminalVelocity), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultTerminalVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultTerminalVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultGravityZ_MetaData[] = {
		{ "Category", "Constants" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSettings.h" },
		{ "ToolTip", "Default gravity." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultGravityZ = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultGravityZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UPhysicsSettings, DefaultGravityZ), METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultGravityZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultGravityZ_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultBroadphaseSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicalSurfaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysXTreeRebuildRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_InitialAverageFrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_AsyncSceneSmoothingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SyncSceneSmoothingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubsteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxSubstepDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubsteppingAsync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSubstepping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxPhysicsDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableEnhancedDeterminism,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableCCD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicKinematicPairs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableKinematicStaticPairs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDisableActiveActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSupportUVFromHitResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSuppressFaceRemapTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bDefaultHasComplexCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultShapeComplexity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bSimulateSkeletalMeshOnDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxContactOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MinContactOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_ContactOffsetMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxDepenetrationVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_MaxAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_RestitutionCombineMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_FrictionCombineMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_BounceThresholdVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultDegreesOfFreedom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_LockedAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_PhysicErrorCorrection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnable2DPhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bWarnMissingLocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableStabilization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnablePCM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableShapeSharing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_bEnableAsyncScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_TriangleMeshTriangleMinAreaThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_RagdollAggregateThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_SimulateScratchMemorySize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultFluidFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultTerminalVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsSettings_Statics::NewProp_DefaultGravityZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsSettings_Statics::ClassParams = {
		&UPhysicsSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A6u,
		nullptr, 0,
		Z_Construct_UClass_UPhysicsSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhysicsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsSettings, 1167987379);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsSettings(Z_Construct_UClass_UPhysicsSettings, &UPhysicsSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
