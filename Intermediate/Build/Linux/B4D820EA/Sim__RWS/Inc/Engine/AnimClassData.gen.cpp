// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimClassData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimClassData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStructProperty();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationStateMachine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimClassInterface_NoRegister();
// End Cross Module References
	void UAnimClassData::StaticRegisterNativesUAnimClassData()
	{
	}
	UClass* Z_Construct_UClass_UAnimClassData_NoRegister()
	{
		return UAnimClassData::StaticClass();
	}
	struct Z_Construct_UClass_UAnimClassData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncGroupNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SyncGroupNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SyncGroupNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimNodeProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimNodeProperties;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimNodeProperties_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootAnimNodeProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootAnimNodeProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderedSavedPoseIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OrderedSavedPoseIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OrderedSavedPoseIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootAnimNodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RootAnimNodeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimNotifies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimNotifies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimNotifies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakedStateMachines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BakedStateMachines;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BakedStateMachines_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimClassData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimClassData.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_SyncGroupNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "Array of sync group names in the order that they are requested during compile" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_SyncGroupNames = { UE4CodeGen_Private::EPropertyClass::Array, "SyncGroupNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimClassData, SyncGroupNames), METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_SyncGroupNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_SyncGroupNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_SyncGroupNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "SyncGroupNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNodeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "The array of anim nodes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNodeProperties = { UE4CodeGen_Private::EPropertyClass::Array, "AnimNodeProperties", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimClassData, AnimNodeProperties), METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNodeProperties_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNodeProperties_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNodeProperties_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AnimNodeProperties", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UStructProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_RootAnimNodeProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_RootAnimNodeProperty = { UE4CodeGen_Private::EPropertyClass::Object, "RootAnimNodeProperty", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimClassData, RootAnimNodeProperty), Z_Construct_UClass_UStructProperty, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_RootAnimNodeProperty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_RootAnimNodeProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "Indices for each of the saved pose nodes that require updating, in the order they need to get updates." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndices = { UE4CodeGen_Private::EPropertyClass::Array, "OrderedSavedPoseIndices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimClassData, OrderedSavedPoseIndices), METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndices_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "OrderedSavedPoseIndices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_RootAnimNodeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "The index of the root node in the animation tree" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_RootAnimNodeIndex = { UE4CodeGen_Private::EPropertyClass::Int, "RootAnimNodeIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimClassData, RootAnimNodeIndex), METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_RootAnimNodeIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_RootAnimNodeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNotifies_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "A list of anim notifies that state machines (or anything else) may reference" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNotifies = { UE4CodeGen_Private::EPropertyClass::Array, "AnimNotifies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UAnimClassData, AnimNotifies), METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNotifies_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNotifies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNotifies_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimNotifies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "Target skeleton for this blueprint class" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_TargetSkeleton = { UE4CodeGen_Private::EPropertyClass::Object, "TargetSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimClassData, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_TargetSkeleton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_TargetSkeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimClassData_Statics::NewProp_BakedStateMachines_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimClassData.h" },
		{ "ToolTip", "List of state machines present in this blueprint class" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_BakedStateMachines = { UE4CodeGen_Private::EPropertyClass::Array, "BakedStateMachines", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimClassData, BakedStateMachines), METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::NewProp_BakedStateMachines_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::NewProp_BakedStateMachines_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimClassData_Statics::NewProp_BakedStateMachines_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BakedStateMachines", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBakedAnimationStateMachine, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimClassData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_SyncGroupNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_SyncGroupNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNodeProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNodeProperties_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_RootAnimNodeProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_OrderedSavedPoseIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_RootAnimNodeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNotifies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_AnimNotifies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_TargetSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_BakedStateMachines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimClassData_Statics::NewProp_BakedStateMachines_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimClassData_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimClassInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimClassData, IAnimClassInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimClassData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimClassData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimClassData_Statics::ClassParams = {
		&UAnimClassData::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_UAnimClassData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UAnimClassData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimClassData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimClassData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimClassData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimClassData, 1088801254);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimClassData(Z_Construct_UClass_UAnimClassData, &UAnimClassData::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimClassData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimClassData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
