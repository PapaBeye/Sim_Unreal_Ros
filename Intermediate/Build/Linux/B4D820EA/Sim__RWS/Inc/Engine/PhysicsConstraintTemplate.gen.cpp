// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsConstraintTemplate() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintProfileProperties();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintTemplate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularConstraintMotion();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELinearConstraintMotion();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstance();
// End Cross Module References
class UScriptStruct* FPhysicsConstraintProfileHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle, Z_Construct_UPackage__Script_Engine(), TEXT("PhysicsConstraintProfileHandle"), sizeof(FPhysicsConstraintProfileHandle), Get_Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicsConstraintProfileHandle(FPhysicsConstraintProfileHandle::StaticStruct, TEXT("/Script/Engine"), TEXT("PhysicsConstraintProfileHandle"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPhysicsConstraintProfileHandle
{
	FScriptStruct_Engine_StaticRegisterNativesFPhysicsConstraintProfileHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicsConstraintProfileHandle")),new UScriptStruct::TCppStructOps<FPhysicsConstraintProfileHandle>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPhysicsConstraintProfileHandle;
	struct Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProfileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileProperties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsConstraintProfileHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileName_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "ProfileName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPhysicsConstraintProfileHandle, ProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileProperties = { UE4CodeGen_Private::EPropertyClass::Struct, "ProfileProperties", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPhysicsConstraintProfileHandle, ProfileProperties), Z_Construct_UScriptStruct_FConstraintProfileProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileProperties_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileProperties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::NewProp_ProfileProperties,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PhysicsConstraintProfileHandle",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPhysicsConstraintProfileHandle),
		alignof(FPhysicsConstraintProfileHandle),
		Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicsConstraintProfileHandle"), sizeof(FPhysicsConstraintProfileHandle), Get_Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_CRC() { return 637795145U; }
	void UPhysicsConstraintTemplate::StaticRegisterNativesUPhysicsConstraintTemplate()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister()
	{
		return UPhysicsConstraintTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsConstraintTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularBreakThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAngularBreakable_MetaData[];
#endif
		static void NewProp_bAngularBreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistLimitDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistLimitDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistLimitStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistLimitStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingLimitDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwingLimitDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwingLimitStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwingLimitStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwistLimitAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistLimitAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Swing2LimitAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Swing1LimitAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTwistLimitSoft_MetaData[];
#endif
		static void NewProp_bTwistLimitSoft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTwistLimitSoft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSwingLimitSoft_MetaData[];
#endif
		static void NewProp_bSwingLimitSoft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSwingLimitSoft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularTwistMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularTwistMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularSwing2Motion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularSwing2Motion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularSwing1Motion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AngularSwing1Motion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearBreakThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearBreakable_MetaData[];
#endif
		static void NewProp_bLinearBreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearLimitDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearLimitDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearLimitStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearLimitStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLinearLimitSoft_MetaData[];
#endif
		static void NewProp_bLinearLimitSoft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearLimitSoft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearLimitSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearLimitSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearZMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinearZMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearYMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinearYMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearXMotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LinearXMotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionAngularTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectionLinearTolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearTolerance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableProjection_MetaData[];
#endif
		static void NewProp_bEnableProjection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableProjection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecAxis2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecAxis2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriAxis2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PriAxis2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pos2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pos2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecAxis1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecAxis1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriAxis1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PriAxis1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pos1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pos1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintBone2_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConstraintBone2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintBone1_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConstraintBone1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_JointName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileHandles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProfileHandles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileHandles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicsEngine/PhysicsConstraintTemplate.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularBreakThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularBreakThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "AngularBreakThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, AngularBreakThreshold_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularBreakThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularBreakThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bAngularBreakable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bAngularBreakable_SetBit(void* Obj)
	{
		((UPhysicsConstraintTemplate*)Obj)->bAngularBreakable_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bAngularBreakable = { UE4CodeGen_Private::EPropertyClass::Bool, "bAngularBreakable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPhysicsConstraintTemplate), &Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bAngularBreakable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bAngularBreakable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bAngularBreakable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitDamping = { UE4CodeGen_Private::EPropertyClass::Float, "TwistLimitDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, TwistLimitDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "TwistLimitStiffness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, TwistLimitStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitDamping = { UE4CodeGen_Private::EPropertyClass::Float, "SwingLimitDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, SwingLimitDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "SwingLimitStiffness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, SwingLimitStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitAngle = { UE4CodeGen_Private::EPropertyClass::Float, "TwistLimitAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, TwistLimitAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing2LimitAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing2LimitAngle = { UE4CodeGen_Private::EPropertyClass::Float, "Swing2LimitAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, Swing2LimitAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing2LimitAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing2LimitAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing1LimitAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing1LimitAngle = { UE4CodeGen_Private::EPropertyClass::Float, "Swing1LimitAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, Swing1LimitAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing1LimitAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing1LimitAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bTwistLimitSoft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bTwistLimitSoft_SetBit(void* Obj)
	{
		((UPhysicsConstraintTemplate*)Obj)->bTwistLimitSoft_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bTwistLimitSoft = { UE4CodeGen_Private::EPropertyClass::Bool, "bTwistLimitSoft", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPhysicsConstraintTemplate), &Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bTwistLimitSoft_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bTwistLimitSoft_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bTwistLimitSoft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bSwingLimitSoft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bSwingLimitSoft_SetBit(void* Obj)
	{
		((UPhysicsConstraintTemplate*)Obj)->bSwingLimitSoft_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bSwingLimitSoft = { UE4CodeGen_Private::EPropertyClass::Bool, "bSwingLimitSoft", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPhysicsConstraintTemplate), &Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bSwingLimitSoft_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bSwingLimitSoft_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bSwingLimitSoft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularTwistMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularTwistMotion = { UE4CodeGen_Private::EPropertyClass::Byte, "AngularTwistMotion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, AngularTwistMotion_DEPRECATED), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularTwistMotion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularTwistMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing2Motion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing2Motion = { UE4CodeGen_Private::EPropertyClass::Byte, "AngularSwing2Motion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, AngularSwing2Motion_DEPRECATED), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing2Motion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing2Motion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing1Motion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing1Motion = { UE4CodeGen_Private::EPropertyClass::Byte, "AngularSwing1Motion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, AngularSwing1Motion_DEPRECATED), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing1Motion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing1Motion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearBreakThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearBreakThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "LinearBreakThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, LinearBreakThreshold_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearBreakThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearBreakThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearBreakable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearBreakable_SetBit(void* Obj)
	{
		((UPhysicsConstraintTemplate*)Obj)->bLinearBreakable_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearBreakable = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearBreakable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPhysicsConstraintTemplate), &Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearBreakable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearBreakable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearBreakable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitDamping = { UE4CodeGen_Private::EPropertyClass::Float, "LinearLimitDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, LinearLimitDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "LinearLimitStiffness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, LinearLimitStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearLimitSoft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearLimitSoft_SetBit(void* Obj)
	{
		((UPhysicsConstraintTemplate*)Obj)->bLinearLimitSoft_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearLimitSoft = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearLimitSoft", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPhysicsConstraintTemplate), &Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearLimitSoft_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearLimitSoft_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearLimitSoft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitSize = { UE4CodeGen_Private::EPropertyClass::Float, "LinearLimitSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, LinearLimitSize_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearZMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearZMotion = { UE4CodeGen_Private::EPropertyClass::Byte, "LinearZMotion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, LinearZMotion_DEPRECATED), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearZMotion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearZMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearYMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearYMotion = { UE4CodeGen_Private::EPropertyClass::Byte, "LinearYMotion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, LinearYMotion_DEPRECATED), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearYMotion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearYMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearXMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearXMotion = { UE4CodeGen_Private::EPropertyClass::Byte, "LinearXMotion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, LinearXMotion_DEPRECATED), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearXMotion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearXMotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionAngularTolerance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionAngularTolerance = { UE4CodeGen_Private::EPropertyClass::Float, "ProjectionAngularTolerance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, ProjectionAngularTolerance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionAngularTolerance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionAngularTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionLinearTolerance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionLinearTolerance = { UE4CodeGen_Private::EPropertyClass::Float, "ProjectionLinearTolerance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, ProjectionLinearTolerance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionLinearTolerance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionLinearTolerance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bEnableProjection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bEnableProjection_SetBit(void* Obj)
	{
		((UPhysicsConstraintTemplate*)Obj)->bEnableProjection_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bEnableProjection = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableProjection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPhysicsConstraintTemplate), &Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bEnableProjection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bEnableProjection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bEnableProjection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis2 = { UE4CodeGen_Private::EPropertyClass::Struct, "SecAxis2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, SecAxis2_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis2 = { UE4CodeGen_Private::EPropertyClass::Struct, "PriAxis2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, PriAxis2_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos2 = { UE4CodeGen_Private::EPropertyClass::Struct, "Pos2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, Pos2_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis1 = { UE4CodeGen_Private::EPropertyClass::Struct, "SecAxis1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, SecAxis1_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis1 = { UE4CodeGen_Private::EPropertyClass::Struct, "PriAxis1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, PriAxis1_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos1 = { UE4CodeGen_Private::EPropertyClass::Struct, "Pos1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, Pos1_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone2 = { UE4CodeGen_Private::EPropertyClass::Name, "ConstraintBone2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, ConstraintBone2_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone1 = { UE4CodeGen_Private::EPropertyClass::Name, "ConstraintBone1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, ConstraintBone1_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_JointName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_JointName = { UE4CodeGen_Private::EPropertyClass::Name, "JointName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, JointName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_JointName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_JointName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultProfile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
		{ "ToolTip", "When no profile is selected, use these settings. Only needed in editor as we serialize it into DefaultInstance on save" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultProfile = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, DefaultProfile), Z_Construct_UScriptStruct_FConstraintProfileProperties, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProfileHandles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
		{ "ToolTip", "Handles to the constraint profiles applicable to this constraint" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProfileHandles = { UE4CodeGen_Private::EPropertyClass::Array, "ProfileHandles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, ProfileHandles), METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProfileHandles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProfileHandles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProfileHandles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ProfileHandles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultInstance_MetaData[] = {
		{ "Category", "Joint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintTemplate.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultInstance = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintTemplate, DefaultInstance), Z_Construct_UScriptStruct_FConstraintInstance, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularBreakThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bAngularBreakable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SwingLimitStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_TwistLimitAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing2LimitAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Swing1LimitAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bTwistLimitSoft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bSwingLimitSoft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularTwistMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing2Motion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_AngularSwing1Motion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearBreakThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearBreakable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bLinearLimitSoft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearLimitSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearZMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearYMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_LinearXMotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionAngularTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProjectionLinearTolerance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_bEnableProjection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_SecAxis1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_PriAxis1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_Pos1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ConstraintBone1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_JointName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProfileHandles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_ProfileHandles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::NewProp_DefaultInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsConstraintTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::ClassParams = {
		&UPhysicsConstraintTemplate::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsConstraintTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsConstraintTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsConstraintTemplate, 3215609585);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsConstraintTemplate(Z_Construct_UClass_UPhysicsConstraintTemplate, &UPhysicsConstraintTemplate::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsConstraintTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsConstraintTemplate);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPhysicsConstraintTemplate)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
