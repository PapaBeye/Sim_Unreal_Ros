// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/PhysicsConstraintActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsConstraintActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APhysicsConstraintActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsConstraintActor();
	ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
// End Cross Module References
	void APhysicsConstraintActor::StaticRegisterNativesAPhysicsConstraintActor()
	{
	}
	UClass* Z_Construct_UClass_APhysicsConstraintActor_NoRegister()
	{
		return APhysicsConstraintActor::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsConstraintActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[];
#endif
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintActor2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintActor2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintActor1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintActor1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsConstraintActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARigidBodyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsConstraintActor_Statics::Class_MetaDataParams[] = {
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "PhysicsEngine/PhysicsConstraintActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintActor.h" },
	};
#endif
	void Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((APhysicsConstraintActor*)Obj)->bDisableCollision_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APhysicsConstraintActor), &Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor2 = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintActor2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(APhysicsConstraintActor, ConstraintActor2_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor2_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor1 = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintActor1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(APhysicsConstraintActor, ConstraintActor1_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor1_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ConstraintActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "JointDrive,Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintComp = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(APhysicsConstraintActor, ConstraintComp), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhysicsConstraintActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsConstraintActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsConstraintActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhysicsConstraintActor_Statics::ClassParams = {
		&APhysicsConstraintActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		nullptr, 0,
		Z_Construct_UClass_APhysicsConstraintActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsConstraintActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsConstraintActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhysicsConstraintActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhysicsConstraintActor, 2875145208);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhysicsConstraintActor(Z_Construct_UClass_APhysicsConstraintActor, &APhysicsConstraintActor::StaticClass, TEXT("/Script/Engine"), TEXT("APhysicsConstraintActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsConstraintActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
