// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Beam/ParticleModuleBeamTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleBeamTarget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamTarget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamTarget();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetMethod();
// End Cross Module References
	void UParticleModuleBeamTarget::StaticRegisterNativesUParticleModuleBeamTarget()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleBeamTarget_NoRegister()
	{
		return UParticleModuleBeamTarget::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleBeamTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LockRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockTargetStength_MetaData[];
#endif
		static void NewProp_bLockTargetStength_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockTargetStength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockTargetTangent_MetaData[];
#endif
		static void NewProp_bLockTargetTangent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockTargetTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTangentMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetTangentMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLockTarget_MetaData[];
#endif
		static void NewProp_bLockTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTargetAbsolute_MetaData[];
#endif
		static void NewProp_bTargetAbsolute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTargetAbsolute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleBeamTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleBeamBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Target" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_LockRadius_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "Default target-point information to use if the beam method is endpoint." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_LockRadius = { UE4CodeGen_Private::EPropertyClass::Float, "LockRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamTarget, LockRadius), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_LockRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_LockRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetStength_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "Whether to lock the Target to the life of the particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetStength_SetBit(void* Obj)
	{
		((UParticleModuleBeamTarget*)Obj)->bLockTargetStength = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetStength = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockTargetStength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamTarget), &Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetStength_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetStength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetStength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetStrength_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "The strength of the tangent from the Target point for each beam." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetStrength = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamTarget, TargetStrength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetTangent_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "Whether to lock the Target to the life of the particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetTangent_SetBit(void* Obj)
	{
		((UParticleModuleBeamTarget*)Obj)->bLockTargetTangent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetTangent = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockTargetTangent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamTarget), &Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetTangent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetTangent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangent_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "The tangent for the Target point for each beam." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangent = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetTangent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamTarget, TargetTangent), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangentMethod_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "The method to use for the Target tangent." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangentMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "TargetTangentMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamTarget, TargetTangentMethod), Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangentMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangentMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTarget_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "Whether to lock the Target to the life of the particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTarget_SetBit(void* Obj)
	{
		((UParticleModuleBeamTarget*)Obj)->bLockTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTarget = { UE4CodeGen_Private::EPropertyClass::Bool, "bLockTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamTarget), &Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bTargetAbsolute_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "Whether to treat the as an absolute position in world space." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bTargetAbsolute_SetBit(void* Obj)
	{
		((UParticleModuleBeamTarget*)Obj)->bTargetAbsolute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bTargetAbsolute = { UE4CodeGen_Private::EPropertyClass::Bool, "bTargetAbsolute", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleBeamTarget), &Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bTargetAbsolute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bTargetAbsolute_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bTargetAbsolute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "Default target-point information to use if the beam method is endpoint." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Struct, "Target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamTarget, Target), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_Target_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetName_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "The target point sources of each beam, when using the end point method." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetName = { UE4CodeGen_Private::EPropertyClass::Name, "TargetName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamTarget, TargetName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetMethod_MetaData[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "The method flag." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "TargetMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleBeamTarget, TargetMethod), Z_Construct_UEnum_Engine_Beam2SourceTargetMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleBeamTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_LockRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetStength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangentMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bTargetAbsolute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetMethod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleBeamTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleBeamTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::ClassParams = {
		&UParticleModuleBeamTarget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008810A0u,
		nullptr, 0,
		Z_Construct_UClass_UParticleModuleBeamTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleBeamTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleBeamTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleBeamTarget, 557271193);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleBeamTarget(Z_Construct_UClass_UParticleModuleBeamTarget, &UParticleModuleBeamTarget::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleBeamTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleBeamTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
