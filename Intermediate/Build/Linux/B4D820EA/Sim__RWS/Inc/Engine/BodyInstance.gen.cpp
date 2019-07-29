// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/BodyInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyInstance() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDynamicActorScene();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDOFMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponse();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponseContainer();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESleepFamily();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FResponseChannel();
// End Cross Module References
	static UEnum* EDynamicActorScene_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDynamicActorScene, Z_Construct_UPackage__Script_Engine(), TEXT("EDynamicActorScene"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDynamicActorScene(EDynamicActorScene_StaticEnum, TEXT("/Script/Engine"), TEXT("EDynamicActorScene"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDynamicActorScene_CRC() { return 2529873504U; }
	UEnum* Z_Construct_UEnum_Engine_EDynamicActorScene()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDynamicActorScene"), 0, Get_Z_Construct_UEnum_Engine_EDynamicActorScene_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDynamicActorScene::Default", (int64)EDynamicActorScene::Default },
				{ "EDynamicActorScene::UseSyncScene", (int64)EDynamicActorScene::UseSyncScene },
				{ "EDynamicActorScene::UseAsyncScene", (int64)EDynamicActorScene::UseAsyncScene },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.ToolTip", "Use whatever the body instance wants" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "ToolTip", "Whether to override the sync/async scene used by a dynamic actor" },
				{ "UseAsyncScene.ToolTip", "use async scene" },
				{ "UseSyncScene.ToolTip", "use sync scene" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDynamicActorScene",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDynamicActorScene",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDOFMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDOFMode, Z_Construct_UPackage__Script_Engine(), TEXT("EDOFMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDOFMode(EDOFMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EDOFMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDOFMode_CRC() { return 263137854U; }
	UEnum* Z_Construct_UEnum_Engine_EDOFMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDOFMode"), 0, Get_Z_Construct_UEnum_Engine_EDOFMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDOFMode::Default", (int64)EDOFMode::Default },
				{ "EDOFMode::SixDOF", (int64)EDOFMode::SixDOF },
				{ "EDOFMode::YZPlane", (int64)EDOFMode::YZPlane },
				{ "EDOFMode::XZPlane", (int64)EDOFMode::XZPlane },
				{ "EDOFMode::XYPlane", (int64)EDOFMode::XYPlane },
				{ "EDOFMode::CustomPlane", (int64)EDOFMode::CustomPlane },
				{ "EDOFMode::None", (int64)EDOFMode::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CustomPlane.ToolTip", "Allows 2D movement along the plane of a given normal" },
				{ "Default.ToolTip", "Inherits the degrees of freedom from the project settings." },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
				{ "None.ToolTip", "No constraints." },
				{ "SixDOF.ToolTip", "Specifies which axis to freeze rotation and movement along." },
				{ "XYPlane.ToolTip", "Allows 2D movement along the X-Y plane." },
				{ "XZPlane.ToolTip", "Allows 2D movement along the X-Z plane." },
				{ "YZPlane.ToolTip", "Allows 2D movement along the Y-Z plane." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDOFMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EDOFMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBodyInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBodyInstance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyInstance, Z_Construct_UPackage__Script_Engine(), TEXT("BodyInstance"), sizeof(FBodyInstance), Get_Z_Construct_UScriptStruct_FBodyInstance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBodyInstance(FBodyInstance::StaticStruct, TEXT("/Script/Engine"), TEXT("BodyInstance"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBodyInstance
{
	FScriptStruct_Engine_StaticRegisterNativesFBodyInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BodyInstance")),new UScriptStruct::TCppStructOps<FBodyInstance>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBodyInstance;
	struct Z_Construct_UScriptStruct_FBodyInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocitySolverIterationCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VelocitySolverIterationCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionSolverIterationCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PositionSolverIterationCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PhysicsBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StabilizationThresholdMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StabilizationThresholdMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSleepThresholdMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomSleepThresholdMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterialOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterialOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkableSlopeOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WalkableSlopeOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InertiaTensorScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InertiaTensorScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MassScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_COMNudge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_COMNudge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDOFPlaneNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomDOFPlaneNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassInKgOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MassInKgOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDepenetrationVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDepenetrationVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionResponses_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionResponses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CollisionProfileName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseToChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResponseToChannels;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterpolateWhenSubStepping_MetaData[];
#endif
		static void NewProp_bInterpolateWhenSubStepping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterpolateWhenSubStepping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideWalkableSlopeOnInstance_MetaData[];
#endif
		static void NewProp_bOverrideWalkableSlopeOnInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideWalkableSlopeOnInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaxDepenetrationVelocity_MetaData[];
#endif
		static void NewProp_bOverrideMaxDepenetrationVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaxDepenetrationVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncScene_MetaData[];
#endif
		static void NewProp_bUseAsyncScene_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaxAngularVelocity_MetaData[];
#endif
		static void NewProp_bOverrideMaxAngularVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaxAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockZRotation_MetaData[];
#endif
		static void NewProp_bLockZRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockZRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockYRotation_MetaData[];
#endif
		static void NewProp_bLockYRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockYRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockXRotation_MetaData[];
#endif
		static void NewProp_bLockXRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockXRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockZTranslation_MetaData[];
#endif
		static void NewProp_bLockZTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockZTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockYTranslation_MetaData[];
#endif
		static void NewProp_bLockYTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockYTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockXTranslation_MetaData[];
#endif
		static void NewProp_bLockXTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockXTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockRotation_MetaData[];
#endif
		static void NewProp_bLockRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockTranslation_MetaData[];
#endif
		static void NewProp_bLockTranslation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateMassWhenScaleChanges_MetaData[];
#endif
		static void NewProp_bUpdateMassWhenScaleChanges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateMassWhenScaleChanges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateWakeEvents_MetaData[];
#endif
		static void NewProp_bGenerateWakeEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateWakeEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartAwake_MetaData[];
#endif
		static void NewProp_bStartAwake_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartAwake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoWeld_MetaData[];
#endif
		static void NewProp_bAutoWeld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoWeld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableGravity_MetaData[];
#endif
		static void NewProp_bEnableGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMass_MetaData[];
#endif
		static void NewProp_bOverrideMass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulatePhysics_MetaData[];
#endif
		static void NewProp_bSimulatePhysics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulatePhysics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotifyRigidBodyCollision_MetaData[];
#endif
		static void NewProp_bNotifyRigidBodyCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotifyRigidBodyCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCCD_MetaData[];
#endif
		static void NewProp_bUseCCD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCCD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DOFMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DOFMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepFamily_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SleepFamily;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SleepFamily_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionEnabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Container for a physics representation of an object" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_VelocitySolverIterationCount_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "This physics body's solver iteration count for velocity. Increasing this will be more CPU intensive, but better stabilized." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_VelocitySolverIterationCount = { UE4CodeGen_Private::EPropertyClass::Int, "VelocitySolverIterationCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, VelocitySolverIterationCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_VelocitySolverIterationCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_VelocitySolverIterationCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PositionSolverIterationCount_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "This physics body's solver iteration count for position. Increasing this will be more CPU intensive, but better stabilized." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PositionSolverIterationCount = { UE4CodeGen_Private::EPropertyClass::Int, "PositionSolverIterationCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, PositionSolverIterationCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PositionSolverIterationCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PositionSolverIterationCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysicsBlendWeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Provide appropriate interface for doing this instead of allowing BlueprintReadWrite *" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysicsBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "PhysicsBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBodyInstance, PhysicsBlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysicsBlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysicsBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_StabilizationThresholdMultiplier_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Stabilization factor for this body if Physics stabilization is enabled. A higher number will cause more aggressive stabilization at the risk of loss of momentum at low speeds. A value of 0 will disable stabilization for this body." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_StabilizationThresholdMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "StabilizationThresholdMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, StabilizationThresholdMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_StabilizationThresholdMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_StabilizationThresholdMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomSleepThresholdMultiplier_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If the SleepFamily is set to custom, multiply the natural sleep threshold by this amount. A higher number will cause the body to sleep sooner." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomSleepThresholdMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "CustomSleepThresholdMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, CustomSleepThresholdMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomSleepThresholdMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomSleepThresholdMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxAngularVelocity_MetaData[] = {
		{ "Category", "Physics" },
		{ "editcondition", "bOverrideMaxAngularVelocity" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "The maximum angular velocity for this instance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxAngularVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, MaxAngularVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxAngularVelocity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysMaterialOverride_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Allows you to override the PhysicalMaterial to use for simple collision on this body." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysMaterialOverride = { UE4CodeGen_Private::EPropertyClass::Object, "PhysMaterialOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, PhysMaterialOverride), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysMaterialOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysMaterialOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_WalkableSlopeOverride_MetaData[] = {
		{ "Category", "Physics" },
		{ "editcondition", "bOverrideWalkableSlopeOnInstance" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Custom walkable slope override setting for this instance.\n@see GetWalkableSlopeOverride(), SetWalkableSlopeOverride()" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_WalkableSlopeOverride = { UE4CodeGen_Private::EPropertyClass::Struct, "WalkableSlopeOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c0000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, WalkableSlopeOverride), Z_Construct_UScriptStruct_FWalkableSlopeOverride, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_WalkableSlopeOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_WalkableSlopeOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_InertiaTensorScale_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Per-instance scaling of inertia (bigger number means  it'll be harder to rotate)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_InertiaTensorScale = { UE4CodeGen_Private::EPropertyClass::Struct, "InertiaTensorScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FBodyInstance, InertiaTensorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_InertiaTensorScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_InertiaTensorScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassScale_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Per-instance scaling of mass" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassScale = { UE4CodeGen_Private::EPropertyClass::Float, "MassScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FBodyInstance, MassScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_COMNudge_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayName", "Center Of Mass Offset" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "User specified offset for the center of mass of this object, from the calculated location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_COMNudge = { UE4CodeGen_Private::EPropertyClass::Struct, "COMNudge", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FBodyInstance, COMNudge), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_COMNudge_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_COMNudge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomDOFPlaneNormal_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayName", "Plane Normal" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Locks physical movement along a custom plane for a given normal." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomDOFPlaneNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "CustomDOFPlaneNormal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBodyInstance, CustomDOFPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomDOFPlaneNormal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomDOFPlaneNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_AngularDamping_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "'Drag' force added to reduce angular movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_AngularDamping = { UE4CodeGen_Private::EPropertyClass::Float, "AngularDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBodyInstance, AngularDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_AngularDamping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_AngularDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_LinearDamping_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "'Drag' force added to reduce linear movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_LinearDamping = { UE4CodeGen_Private::EPropertyClass::Float, "LinearDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FBodyInstance, LinearDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_LinearDamping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_LinearDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassInKgOverride_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0.001" },
		{ "DisplayName", "MassInKg" },
		{ "editcondition", "bOverrideMass" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Mass of the body in KG. By default we compute this based on physical material and mass scale.\n@see bOverrideMass to set this directly" },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassInKgOverride = { UE4CodeGen_Private::EPropertyClass::Float, "MassInKgOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, MassInKgOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassInKgOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassInKgOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxDepenetrationVelocity_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bOverrideMaxDepenetrationVelocity" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "The maximum velocity used to depenetrate this object" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxDepenetrationVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDepenetrationVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200c0000000015, 1, nullptr, STRUCT_OFFSET(FBodyInstance, MaxDepenetrationVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxDepenetrationVelocity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxDepenetrationVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionResponses_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Custom Channels for Responses" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionResponses = { UE4CodeGen_Private::EPropertyClass::Struct, "CollisionResponses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FBodyInstance, CollisionResponses), Z_Construct_UScriptStruct_FCollisionResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionResponses_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionResponses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionProfileName_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Collision Profile Name *" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "CollisionProfileName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FBodyInstance, CollisionProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionProfileName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionProfileName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ResponseToChannels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Types of objects that this physics objects will collide with." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ResponseToChannels = { UE4CodeGen_Private::EPropertyClass::Struct, "ResponseToChannels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(FBodyInstance, ResponseToChannels_DEPRECATED), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ResponseToChannels_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ResponseToChannels_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Internal flag to allow us to quickly check whether we should interpolate when substepping\ne.g. kinematic bodies that are QueryOnly do not need to interpolate as we will not be querying them\nat a sub-position.\nThis is complicated by welding, where multiple the CollisionEnabled flag of the root must be considered." },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bInterpolateWhenSubStepping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping = { UE4CodeGen_Private::EPropertyClass::Bool, "bInterpolateWhenSubStepping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance_MetaData[] = {
		{ "Category", "Physics" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Whether this instance of the object has its own custom walkable slope override setting." },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bOverrideWalkableSlopeOnInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideWalkableSlopeOnInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity_MetaData[] = {
		{ "Category", "Physics" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Whether this body instance has its own custom MaxDepenetrationVelocity" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bOverrideMaxDepenetrationVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideMaxDepenetrationVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseAsyncScene_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If true, this body will be put into the asynchronous physics scene. If false, it will be put into the synchronous physics scene.\nIf the body is static, it will be placed into both scenes regardless of the value of bUseAsyncScene." },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseAsyncScene_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bUseAsyncScene = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseAsyncScene = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAsyncScene", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseAsyncScene_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseAsyncScene_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseAsyncScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity_MetaData[] = {
		{ "Category", "Physics" },
		{ "editcondition", "bSimulatePhysics" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Override the default max angular velocity" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bOverrideMaxAngularVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideMaxAngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayName", "Z" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Lock rotation about the Z-axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockZRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockZRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Lock rotation about the Y-axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockYRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockYRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Lock rotation about the X-axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockXRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockXRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayName", "Z" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Lock translation along the Z-axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockZTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockZTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Lock translation along the Y-axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockYTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockYTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Lock translation along the X-axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockXTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockXTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayName", "Lock Axis Rotation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "When a Locked Axis Mode is selected, will lock rotation to the specified axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayName", "Lock Axis Translation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "When a Locked Axis Mode is selected, will lock translation on the specified axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bLockTranslation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUpdateMassWhenScaleChanges_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If true, it will update mass when scale changes *" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUpdateMassWhenScaleChanges_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bUpdateMassWhenScaleChanges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUpdateMassWhenScaleChanges = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateMassWhenScaleChanges", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUpdateMassWhenScaleChanges_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUpdateMassWhenScaleChanges_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUpdateMassWhenScaleChanges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bGenerateWakeEvents_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Should 'wake/sleep' events fire when this object is woken up or put to sleep by the physics simulation." },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bGenerateWakeEvents_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bGenerateWakeEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bGenerateWakeEvents = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateWakeEvents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bGenerateWakeEvents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bGenerateWakeEvents_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bGenerateWakeEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bStartAwake_MetaData[] = {
		{ "Category", "Physics" },
		{ "editcondition", "bSimulatePhysics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If object should start awake, or if it should initially be sleeping" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bStartAwake_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bStartAwake = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bStartAwake = { UE4CodeGen_Private::EPropertyClass::Bool, "bStartAwake", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bStartAwake_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bStartAwake_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bStartAwake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bAutoWeld_MetaData[] = {
		{ "Category", "Physics" },
		{ "editcondition", "!bSimulatePhysics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If true and is attached to a parent, the two bodies will be joined into a single rigid body. Physical settings like collision profile and body settings are determined by the root" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bAutoWeld_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bAutoWeld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bAutoWeld = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoWeld", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bAutoWeld_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bAutoWeld_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bAutoWeld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bEnableGravity_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If object should have the force of gravity applied" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bEnableGravity_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bEnableGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bEnableGravity = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableGravity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bEnableGravity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bEnableGravity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bEnableGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMass_MetaData[] = {
		{ "Category", "Physics" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If true, mass will not be automatically computed and you must set it directly" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMass_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bOverrideMass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMass = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideMass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bSimulatePhysics_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If true, this body will use simulation. If false, will be 'fixed' (ie kinematic) and move where it is told.\nFor a Skeletal Mesh Component, simulating requires a physics asset setup and assigned on the SkeletalMesh asset.\nFor a Static Mesh Component, simulating requires simple collision to be setup on the StaticMesh asset." },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bSimulatePhysics_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bSimulatePhysics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bSimulatePhysics = { UE4CodeGen_Private::EPropertyClass::Bool, "bSimulatePhysics", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bSimulatePhysics_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bSimulatePhysics_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bSimulatePhysics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "DisplayName", "Simulation Generates Hit Events" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Should 'Hit' events fire when this object collides during physics simulation." },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bNotifyRigidBodyCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bNotifyRigidBodyCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "If true Continuous Collision Detection (CCD) will be used for this component" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD_SetBit(void* Obj)
	{
		((FBodyInstance*)Obj)->bUseCCD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseCCD", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FBodyInstance), &Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_DOFMode_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayName", "Mode" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Locks physical movement along specified axis." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_DOFMode = { UE4CodeGen_Private::EPropertyClass::Byte, "DOFMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBodyInstance, DOFMode), Z_Construct_UEnum_Engine_EDOFMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_DOFMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_DOFMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "The set of values used in considering when put this body to sleep." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily = { UE4CodeGen_Private::EPropertyClass::Enum, "SleepFamily", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(FBodyInstance, SleepFamily), Z_Construct_UEnum_Engine_ESleepFamily, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionEnabled_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Type of collision enabled.\n\n      No Collision      : Will not create any representation in the physics engine. Cannot be used for spatial queries (raycasts, sweeps, overlaps) or simulation (rigid body, constraints). Best performance possible (especially for moving objects)\n      Query Only        : Only used for spatial queries (raycasts, sweeps, and overlaps). Cannot be used for simulation (rigid body, constraints). Useful for character movement and things that do not need physical simulation. Performance gains by keeping data out of simulation tree.\n      Physics Only      : Only used only for physics simulation (rigid body, constraints). Cannot be used for spatial queries (raycasts, sweeps, overlaps). Useful for jiggly bits on characters that do not need per bone detection. Performance gains by keeping data out of query tree\n      Collision Enabled : Can be used for both spatial queries (raycasts, sweeps, overlaps) and simulation (rigid body, constraints)." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionEnabled = { UE4CodeGen_Private::EPropertyClass::Byte, "CollisionEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FBodyInstance, CollisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionEnabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ObjectType_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Enum indicating what type of object this should be considered as when it moves" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ObjectType = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FBodyInstance, ObjectType), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ObjectType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ObjectType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_VelocitySolverIterationCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PositionSolverIterationCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysicsBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_StabilizationThresholdMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomSleepThresholdMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_PhysMaterialOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_WalkableSlopeOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_InertiaTensorScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_COMNudge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CustomDOFPlaneNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_AngularDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_LinearDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MassInKgOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_MaxDepenetrationVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionResponses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionProfileName,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ResponseToChannels,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bInterpolateWhenSubStepping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideWalkableSlopeOnInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxDepenetrationVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseAsyncScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMaxAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockZTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockYTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockXTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bLockTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUpdateMassWhenScaleChanges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bGenerateWakeEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bStartAwake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bAutoWeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bEnableGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bOverrideMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bSimulatePhysics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bNotifyRigidBodyCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_bUseCCD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_DOFMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_SleepFamily_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_CollisionEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyInstance_Statics::NewProp_ObjectType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BodyInstance",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FBodyInstance),
		alignof(FBodyInstance),
		Z_Construct_UScriptStruct_FBodyInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyInstance_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBodyInstance_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BodyInstance"), sizeof(FBodyInstance), Get_Z_Construct_UScriptStruct_FBodyInstance_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBodyInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBodyInstance_CRC() { return 1388152452U; }
class UScriptStruct* FCollisionResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FCollisionResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionResponse, Z_Construct_UPackage__Script_Engine(), TEXT("CollisionResponse"), sizeof(FCollisionResponse), Get_Z_Construct_UScriptStruct_FCollisionResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCollisionResponse(FCollisionResponse::StaticStruct, TEXT("/Script/Engine"), TEXT("CollisionResponse"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFCollisionResponse
{
	FScriptStruct_Engine_StaticRegisterNativesFCollisionResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CollisionResponse")),new UScriptStruct::TCppStructOps<FCollisionResponse>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFCollisionResponse;
	struct Z_Construct_UScriptStruct_FCollisionResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResponseArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResponseArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseToChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResponseToChannels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Custom Channels for Responses" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray = { UE4CodeGen_Private::EPropertyClass::Array, "ResponseArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000001, 1, nullptr, STRUCT_OFFSET(FCollisionResponse, ResponseArray), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ResponseArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FResponseChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseToChannels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/BodyInstance.h" },
		{ "ToolTip", "Types of objects that this physics objects will collide with. // we have to still load them until resave" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseToChannels = { UE4CodeGen_Private::EPropertyClass::Struct, "ResponseToChannels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(FCollisionResponse, ResponseToChannels), Z_Construct_UScriptStruct_FCollisionResponseContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseToChannels_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseToChannels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionResponse_Statics::NewProp_ResponseToChannels,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CollisionResponse",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FCollisionResponse),
		alignof(FCollisionResponse),
		Z_Construct_UScriptStruct_FCollisionResponse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponse_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionResponse_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCollisionResponse_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CollisionResponse"), sizeof(FCollisionResponse), Get_Z_Construct_UScriptStruct_FCollisionResponse_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCollisionResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCollisionResponse_CRC() { return 3220564000U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
