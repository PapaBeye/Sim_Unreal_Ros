// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foliage/Public/FoliageInstancedStaticMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageInstancedStaticMeshComponent() {}
// Cross Module References
	FOLIAGE_API UFunction* Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	FOLIAGE_API UFunction* Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics
	{
		struct _Script_Foliage_eventInstanceRadialDamageSignature_Parms
		{
			TArray<int32> Instances;
			TArray<float> Damages;
			AController* InstigatedBy;
			FVector Origin;
			float MaxRadius;
			const UDamageType* DamageType;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Damages;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Instances;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Instances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_MaxRadius = { UE4CodeGen_Private::EPropertyClass::Float, "MaxRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, MaxRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Origin = { UE4CodeGen_Private::EPropertyClass::Struct, "Origin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages = { UE4CodeGen_Private::EPropertyClass::Array, "Damages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, Damages), METADATA_PARAMS(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "Damages", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances = { UE4CodeGen_Private::EPropertyClass::Array, "Instances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstanceRadialDamageSignature_Parms, Instances), METADATA_PARAMS(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Instances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_MaxRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Damages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::NewProp_Instances_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Foliage, "InstanceRadialDamageSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Foliage_eventInstanceRadialDamageSignature_Parms), Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics
	{
		struct _Script_Foliage_eventInstancePointDamageSignature_Parms
		{
			int32 InstanceIndex;
			float Damage;
			AController* InstigatedBy;
			FVector HitLocation;
			FVector ShotFromDirection;
			const UDamageType* DamageType;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_ShotFromDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "ShotFromDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_HitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "HitLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_Damage = { UE4CodeGen_Private::EPropertyClass::Float, "Damage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_InstanceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InstanceIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Foliage_eventInstancePointDamageSignature_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_ShotFromDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::NewProp_InstanceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Foliage, "InstancePointDamageSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Foliage_eventInstancePointDamageSignature_Parms), Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFoliageInstancedStaticMeshComponent::StaticRegisterNativesUFoliageInstancedStaticMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister()
	{
		return UFoliageInstancedStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageHiddenEditorViews_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_FoliageHiddenEditorViews;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInstanceTakeRadialDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInstanceTakeRadialDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInstanceTakePointDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInstanceTakePointDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Foliage" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "FoliageInstancedStaticMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_FoliageHiddenEditorViews_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_FoliageHiddenEditorViews = { UE4CodeGen_Private::EPropertyClass::UInt64, "FoliageHiddenEditorViews", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UFoliageInstancedStaticMeshComponent, FoliageHiddenEditorViews), METADATA_PARAMS(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_FoliageHiddenEditorViews_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_FoliageHiddenEditorViews_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakeRadialDamage_MetaData[] = {
		{ "Category", "Game|Damage" },
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakeRadialDamage = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnInstanceTakeRadialDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFoliageInstancedStaticMeshComponent, OnInstanceTakeRadialDamage), Z_Construct_UDelegateFunction_Foliage_InstanceRadialDamageSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakeRadialDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakeRadialDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakePointDamage_MetaData[] = {
		{ "Category", "Game|Damage" },
		{ "ModuleRelativePath", "Public/FoliageInstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakePointDamage = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnInstanceTakePointDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFoliageInstancedStaticMeshComponent, OnInstanceTakePointDamage), Z_Construct_UDelegateFunction_Foliage_InstancePointDamageSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakePointDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakePointDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_FoliageHiddenEditorViews,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakeRadialDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::NewProp_OnInstanceTakePointDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageInstancedStaticMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::ClassParams = {
		&UFoliageInstancedStaticMeshComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A4u,
		nullptr, 0,
		Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFoliageInstancedStaticMeshComponent, 751160765);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFoliageInstancedStaticMeshComponent(Z_Construct_UClass_UFoliageInstancedStaticMeshComponent, &UFoliageInstancedStaticMeshComponent::StaticClass, TEXT("/Script/Foliage"), TEXT("UFoliageInstancedStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageInstancedStaticMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
