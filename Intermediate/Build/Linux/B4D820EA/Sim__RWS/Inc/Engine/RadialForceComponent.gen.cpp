// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/RadialForceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadialForceComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UFunction* Z_Construct_UFunction_URadialForceComponent_FireImpulse();
	ENGINE_API UFunction* Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERadialImpulseFalloff();
// End Cross Module References
	void URadialForceComponent::StaticRegisterNativesURadialForceComponent()
	{
		UClass* Class = URadialForceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddObjectTypeToAffect", &URadialForceComponent::execAddObjectTypeToAffect },
			{ "FireImpulse", &URadialForceComponent::execFireImpulse },
			{ "RemoveObjectTypeToAffect", &URadialForceComponent::execRemoveObjectTypeToAffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics
	{
		struct RadialForceComponent_eventAddObjectTypeToAffect_Parms
		{
			TEnumAsByte<EObjectTypeQuery> ObjectType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::NewProp_ObjectType = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RadialForceComponent_eventAddObjectTypeToAffect_Parms, ObjectType), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::NewProp_ObjectType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|RadialForce" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "Add an object type for this radial force to affect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialForceComponent, "AddObjectTypeToAffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(RadialForceComponent_eventAddObjectTypeToAffect_Parms), Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|RadialForce" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "Fire a single impulse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialForceComponent, "FireImpulse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialForceComponent_FireImpulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadialForceComponent_FireImpulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics
	{
		struct RadialForceComponent_eventRemoveObjectTypeToAffect_Parms
		{
			TEnumAsByte<EObjectTypeQuery> ObjectType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::NewProp_ObjectType = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RadialForceComponent_eventRemoveObjectTypeToAffect_Parms, ObjectType), Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::NewProp_ObjectType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|RadialForce" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "Remove an object type that is affected by this radial force" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadialForceComponent, "RemoveObjectTypeToAffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(RadialForceComponent_eventRemoveObjectTypeToAffect_Parms), Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URadialForceComponent_NoRegister()
	{
		return URadialForceComponent::StaticClass();
	}
	struct Z_Construct_UClass_URadialForceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypesToAffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypesToAffect;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypesToAffect_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestructibleDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestructibleDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreOwningActor_MetaData[];
#endif
		static void NewProp_bIgnoreOwningActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreOwningActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImpulseVelChange_MetaData[];
#endif
		static void NewProp_bImpulseVelChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImpulseVelChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Falloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URadialForceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URadialForceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URadialForceComponent_AddObjectTypeToAffect, "AddObjectTypeToAffect" }, // 2158007202
		{ &Z_Construct_UFunction_URadialForceComponent_FireImpulse, "FireImpulse" }, // 1215427486
		{ &Z_Construct_UFunction_URadialForceComponent_RemoveObjectTypeToAffect, "RemoveObjectTypeToAffect" }, // 705947992
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "HideCategories", "Object Mobility LOD Physics PhysicsVolume" },
		{ "IncludePath", "PhysicsEngine/RadialForceComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "Used to emit a radial force or impulse that can affect physics objects and or destructible objects." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect_MetaData[] = {
		{ "Category", "RadialForceComponent" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "The object types that are affected by this radial force" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect = { UE4CodeGen_Private::EPropertyClass::Array, "ObjectTypesToAffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(URadialForceComponent, ObjectTypesToAffect), METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ObjectTypesToAffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_DestructibleDamage_MetaData[] = {
		{ "Category", "Destructible" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "If > 0.f, will cause damage to destructible meshes as well" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_DestructibleDamage = { UE4CodeGen_Private::EPropertyClass::Float, "DestructibleDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(URadialForceComponent, DestructibleDamage), METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_DestructibleDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_DestructibleDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ForceStrength_MetaData[] = {
		{ "Category", "Force" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "How strong the force should be" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ForceStrength = { UE4CodeGen_Private::EPropertyClass::Float, "ForceStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(URadialForceComponent, ForceStrength), METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ForceStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ForceStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor_MetaData[] = {
		{ "Category", "Impulse" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "If true, do not apply force/impulse to any physics objects that are part of the Actor that owns this component." },
	};
#endif
	void Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor_SetBit(void* Obj)
	{
		((URadialForceComponent*)Obj)->bIgnoreOwningActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreOwningActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URadialForceComponent), &Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange_MetaData[] = {
		{ "Category", "Impulse" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "If true, the impulse will ignore mass of objects and will always result in a fixed velocity change" },
	};
#endif
	void Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange_SetBit(void* Obj)
	{
		((URadialForceComponent*)Obj)->bImpulseVelChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange = { UE4CodeGen_Private::EPropertyClass::Bool, "bImpulseVelChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URadialForceComponent), &Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ImpulseStrength_MetaData[] = {
		{ "Category", "Impulse" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "How strong the impulse should be" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ImpulseStrength = { UE4CodeGen_Private::EPropertyClass::Float, "ImpulseStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(URadialForceComponent, ImpulseStrength), METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ImpulseStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ImpulseStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Falloff_MetaData[] = {
		{ "Category", "RadialForceComponent" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "How the force or impulse should fall off as object are further away from the center" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Falloff = { UE4CodeGen_Private::EPropertyClass::Byte, "Falloff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(URadialForceComponent, Falloff), Z_Construct_UEnum_Engine_ERadialImpulseFalloff, METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Falloff_MetaData, ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Falloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "RadialForceComponent" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceComponent.h" },
		{ "ToolTip", "The radius to apply the force or impulse in" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000005, 1, nullptr, STRUCT_OFFSET(URadialForceComponent, Radius), METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URadialForceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ObjectTypesToAffect_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_DestructibleDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ForceStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bIgnoreOwningActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_bImpulseVelChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_ImpulseStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadialForceComponent_Statics::NewProp_Radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URadialForceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadialForceComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URadialForceComponent_Statics::ClassParams = {
		&URadialForceComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_URadialForceComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_URadialForceComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_URadialForceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URadialForceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URadialForceComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URadialForceComponent, 4065969623);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URadialForceComponent(Z_Construct_UClass_URadialForceComponent, &URadialForceComponent::StaticClass, TEXT("/Script/Engine"), TEXT("URadialForceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URadialForceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
