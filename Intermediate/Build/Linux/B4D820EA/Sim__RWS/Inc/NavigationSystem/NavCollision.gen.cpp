// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem/Public/NavCollision.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavCollision() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavCollisionBox();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavCollisionCylinder();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavCollision_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavCollision();
	ENGINE_API UClass* Z_Construct_UClass_UNavCollisionBase();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FNavCollisionBox::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NAVIGATIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FNavCollisionBox_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavCollisionBox, Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavCollisionBox"), sizeof(FNavCollisionBox), Get_Z_Construct_UScriptStruct_FNavCollisionBox_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavCollisionBox(FNavCollisionBox::StaticStruct, TEXT("/Script/NavigationSystem"), TEXT("NavCollisionBox"), false, nullptr, nullptr);
static struct FScriptStruct_NavigationSystem_StaticRegisterNativesFNavCollisionBox
{
	FScriptStruct_NavigationSystem_StaticRegisterNativesFNavCollisionBox()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavCollisionBox")),new UScriptStruct::TCppStructOps<FNavCollisionBox>);
	}
} ScriptStruct_NavigationSystem_StaticRegisterNativesFNavCollisionBox;
	struct Z_Construct_UScriptStruct_FNavCollisionBox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCollisionBox_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavCollisionBox>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewProp_Extent_MetaData[] = {
		{ "Category", "Box" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewProp_Extent = { UE4CodeGen_Private::EPropertyClass::Struct, "Extent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavCollisionBox, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewProp_Extent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewProp_Extent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Box" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavCollisionBox, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewProp_Offset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavCollisionBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewProp_Extent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCollisionBox_Statics::NewProp_Offset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavCollisionBox_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
		nullptr,
		&NewStructOps,
		"NavCollisionBox",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FNavCollisionBox),
		alignof(FNavCollisionBox),
		Z_Construct_UScriptStruct_FNavCollisionBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCollisionBox_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCollisionBox_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCollisionBox_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavCollisionBox()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavCollisionBox_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_NavigationSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavCollisionBox"), sizeof(FNavCollisionBox), Get_Z_Construct_UScriptStruct_FNavCollisionBox_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavCollisionBox_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavCollisionBox_CRC() { return 164277926U; }
class UScriptStruct* FNavCollisionCylinder::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NAVIGATIONSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FNavCollisionCylinder_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavCollisionCylinder, Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavCollisionCylinder"), sizeof(FNavCollisionCylinder), Get_Z_Construct_UScriptStruct_FNavCollisionCylinder_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavCollisionCylinder(FNavCollisionCylinder::StaticStruct, TEXT("/Script/NavigationSystem"), TEXT("NavCollisionCylinder"), false, nullptr, nullptr);
static struct FScriptStruct_NavigationSystem_StaticRegisterNativesFNavCollisionCylinder
{
	FScriptStruct_NavigationSystem_StaticRegisterNativesFNavCollisionCylinder()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavCollisionCylinder")),new UScriptStruct::TCppStructOps<FNavCollisionCylinder>);
	}
} ScriptStruct_NavigationSystem_StaticRegisterNativesFNavCollisionCylinder;
	struct Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavCollisionCylinder>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Cylinder" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavCollisionCylinder, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Cylinder" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavCollisionCylinder, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Cylinder" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FNavCollisionCylinder, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Offset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::NewProp_Offset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
		nullptr,
		&NewStructOps,
		"NavCollisionCylinder",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FNavCollisionCylinder),
		alignof(FNavCollisionCylinder),
		Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavCollisionCylinder()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavCollisionCylinder_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_NavigationSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavCollisionCylinder"), sizeof(FNavCollisionCylinder), Get_Z_Construct_UScriptStruct_FNavCollisionCylinder_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavCollisionCylinder_CRC() { return 893027726U; }
	void UNavCollision::StaticRegisterNativesUNavCollision()
	{
	}
	UClass* Z_Construct_UClass_UNavCollision_NoRegister()
	{
		return UNavCollision::StaticClass();
	}
	struct Z_Construct_UClass_UNavCollision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGatherConvexGeometry_MetaData[];
#endif
		static void NewProp_bGatherConvexGeometry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGatherConvexGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoxCollision;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxCollision_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CylinderCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CylinderCollision;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CylinderCollision_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavCollision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavCollisionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCollision_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavCollision.h" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCollision_Statics::NewProp_bGatherConvexGeometry_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
		{ "ToolTip", "If set, convex collisions will be exported offline for faster runtime navmesh building (increases memory usage)" },
	};
#endif
	void Z_Construct_UClass_UNavCollision_Statics::NewProp_bGatherConvexGeometry_SetBit(void* Obj)
	{
		((UNavCollision*)Obj)->bGatherConvexGeometry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavCollision_Statics::NewProp_bGatherConvexGeometry = { UE4CodeGen_Private::EPropertyClass::Bool, "bGatherConvexGeometry", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavCollision), &Z_Construct_UClass_UNavCollision_Statics::NewProp_bGatherConvexGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavCollision_Statics::NewProp_bGatherConvexGeometry_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavCollision_Statics::NewProp_bGatherConvexGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCollision_Statics::NewProp_AreaClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
		{ "ToolTip", "navigation area type (empty = default obstacle)" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNavCollision_Statics::NewProp_AreaClass = { UE4CodeGen_Private::EPropertyClass::Class, "AreaClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UNavCollision, AreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UNavCollision_Statics::NewProp_AreaClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavCollision_Statics::NewProp_AreaClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCollision_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
		{ "ToolTip", "list of nav collision boxes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavCollision_Statics::NewProp_BoxCollision = { UE4CodeGen_Private::EPropertyClass::Array, "BoxCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UNavCollision, BoxCollision), METADATA_PARAMS(Z_Construct_UClass_UNavCollision_Statics::NewProp_BoxCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavCollision_Statics::NewProp_BoxCollision_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavCollision_Statics::NewProp_BoxCollision_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNavCollisionBox, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavCollision_Statics::NewProp_CylinderCollision_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavCollision.h" },
		{ "ToolTip", "list of nav collision cylinders" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavCollision_Statics::NewProp_CylinderCollision = { UE4CodeGen_Private::EPropertyClass::Array, "CylinderCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UNavCollision, CylinderCollision), METADATA_PARAMS(Z_Construct_UClass_UNavCollision_Statics::NewProp_CylinderCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavCollision_Statics::NewProp_CylinderCollision_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavCollision_Statics::NewProp_CylinderCollision_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CylinderCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FNavCollisionCylinder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCollision_Statics::NewProp_bGatherConvexGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCollision_Statics::NewProp_AreaClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCollision_Statics::NewProp_BoxCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCollision_Statics::NewProp_BoxCollision_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCollision_Statics::NewProp_CylinderCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavCollision_Statics::NewProp_CylinderCollision_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavCollision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavCollision>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavCollision_Statics::ClassParams = {
		&UNavCollision::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A4u,
		nullptr, 0,
		Z_Construct_UClass_UNavCollision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UNavCollision_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNavCollision_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavCollision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavCollision()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavCollision_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavCollision, 2731878795);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavCollision(Z_Construct_UClass_UNavCollision, &UNavCollision::StaticClass, TEXT("/Script/NavigationSystem"), TEXT("UNavCollision"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavCollision);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNavCollision)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
