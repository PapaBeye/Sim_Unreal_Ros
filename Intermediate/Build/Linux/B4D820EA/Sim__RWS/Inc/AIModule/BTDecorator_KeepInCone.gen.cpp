// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_KeepInCone() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_KeepInCone_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_KeepInCone();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTDecorator_KeepInCone::StaticRegisterNativesUBTDecorator_KeepInCone()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_KeepInCone_NoRegister()
	{
		return UBTDecorator_KeepInCone::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_KeepInCone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSelfAsObserved_MetaData[];
#endif
		static void NewProp_bUseSelfAsObserved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSelfAsObserved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSelfAsOrigin_MetaData[];
#endif
		static void NewProp_bUseSelfAsOrigin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSelfAsOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Observed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Observed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConeOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeHalfAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConeHalfAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
		{ "ToolTip", "Cooldown decorator node.\nA decorator node that bases its condition on whether the observed position is still inside a cone. The cone's direction is calculated when the node first becomes relevant." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsObserved_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
		{ "ToolTip", "deprecated, set value of Observed on initialization" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsObserved_SetBit(void* Obj)
	{
		((UBTDecorator_KeepInCone*)Obj)->bUseSelfAsObserved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsObserved = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseSelfAsObserved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTDecorator_KeepInCone), &Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsObserved_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsObserved_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsObserved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsOrigin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
		{ "ToolTip", "deprecated, set value of ConeOrigin on initialization" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsOrigin_SetBit(void* Obj)
	{
		((UBTDecorator_KeepInCone*)Obj)->bUseSelfAsOrigin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsOrigin = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseSelfAsOrigin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTDecorator_KeepInCone), &Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsOrigin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsOrigin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_Observed_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_Observed = { UE4CodeGen_Private::EPropertyClass::Struct, "Observed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_KeepInCone, Observed), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_Observed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_Observed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_ConeOrigin_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_ConeOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "ConeOrigin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_KeepInCone, ConeOrigin), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_ConeOrigin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_ConeOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_ConeHalfAngle_MetaData[] = {
		{ "Category", "Decorator" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Decorators/BTDecorator_KeepInCone.h" },
		{ "ToolTip", "max allowed time for execution of underlying node" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_ConeHalfAngle = { UE4CodeGen_Private::EPropertyClass::Float, "ConeHalfAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UBTDecorator_KeepInCone, ConeHalfAngle), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_ConeHalfAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_ConeHalfAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsObserved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_bUseSelfAsOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_Observed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_ConeOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::NewProp_ConeHalfAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_KeepInCone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::ClassParams = {
		&UBTDecorator_KeepInCone::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_KeepInCone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_KeepInCone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_KeepInCone, 2287470207);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_KeepInCone(Z_Construct_UClass_UBTDecorator_KeepInCone, &UBTDecorator_KeepInCone::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTDecorator_KeepInCone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_KeepInCone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
