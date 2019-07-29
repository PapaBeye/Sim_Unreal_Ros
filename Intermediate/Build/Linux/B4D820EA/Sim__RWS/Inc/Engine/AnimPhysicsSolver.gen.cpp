// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/AnimPhysicsSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimPhysicsSolver() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimPhysCollisionType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimPhysTwistAxis();
// End Cross Module References
	static UEnum* AnimPhysCollisionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_AnimPhysCollisionType, Z_Construct_UPackage__Script_Engine(), TEXT("AnimPhysCollisionType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AnimPhysCollisionType(AnimPhysCollisionType_StaticEnum, TEXT("/Script/Engine"), TEXT("AnimPhysCollisionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_AnimPhysCollisionType_CRC() { return 1869610976U; }
	UEnum* Z_Construct_UEnum_Engine_AnimPhysCollisionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AnimPhysCollisionType"), 0, Get_Z_Construct_UEnum_Engine_AnimPhysCollisionType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AnimPhysCollisionType::CoM", (int64)AnimPhysCollisionType::CoM },
				{ "AnimPhysCollisionType::CustomSphere", (int64)AnimPhysCollisionType::CustomSphere },
				{ "AnimPhysCollisionType::InnerSphere", (int64)AnimPhysCollisionType::InnerSphere },
				{ "AnimPhysCollisionType::OuterSphere", (int64)AnimPhysCollisionType::OuterSphere },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CoM.DisplayName", "CoM" },
				{ "CoM.DisplayValue", "CoM" },
				{ "CoM.ToolTip", "Only limit the center of mass from crossing planes." },
				{ "CustomSphere.ToolTip", "Use the specified sphere radius to collide with planes." },
				{ "InnerSphere.ToolTip", "Use the largest sphere that fits entirely within the body extents to collide with planes." },
				{ "ModuleRelativePath", "Public/Animation/AnimPhysicsSolver.h" },
				{ "OuterSphere.ToolTip", "Use the smallest sphere that wholely contains the body extents to collide with planes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"AnimPhysCollisionType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"AnimPhysCollisionType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* AnimPhysTwistAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_AnimPhysTwistAxis, Z_Construct_UPackage__Script_Engine(), TEXT("AnimPhysTwistAxis"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AnimPhysTwistAxis(AnimPhysTwistAxis_StaticEnum, TEXT("/Script/Engine"), TEXT("AnimPhysTwistAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_AnimPhysTwistAxis_CRC() { return 889836252U; }
	UEnum* Z_Construct_UEnum_Engine_AnimPhysTwistAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AnimPhysTwistAxis"), 0, Get_Z_Construct_UEnum_Engine_AnimPhysTwistAxis_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AnimPhysTwistAxis::AxisX", (int64)AnimPhysTwistAxis::AxisX },
				{ "AnimPhysTwistAxis::AxisY", (int64)AnimPhysTwistAxis::AxisY },
				{ "AnimPhysTwistAxis::AxisZ", (int64)AnimPhysTwistAxis::AxisZ },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Animation/AnimPhysicsSolver.h" },
				{ "ToolTip", "Enum for picking current angular twist axis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"AnimPhysTwistAxis",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"AnimPhysTwistAxis",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
