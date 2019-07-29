// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstFloatMaterialParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstFloatMaterialParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatMaterialParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatMaterialParam_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimitiveMaterialRef();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	void UInterpTrackInstFloatMaterialParam::StaticRegisterNativesUInterpTrackInstFloatMaterialParam()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_NoRegister()
	{
		return UInterpTrackInstFloatMaterialParam::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveMaterialRefs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimitiveMaterialRefs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimitiveMaterialRefs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetFloats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResetFloats;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetFloats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstFloatMaterialParam.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatMaterialParam.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_InstancedTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatMaterialParam.h" },
		{ "ToolTip", "track we are an instance of - used in the editor to propagate changes to the track's Materials array immediately" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_InstancedTrack = { UE4CodeGen_Private::EPropertyClass::Object, "InstancedTrack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstFloatMaterialParam, InstancedTrack), Z_Construct_UClass_UInterpTrackFloatMaterialParam_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_InstancedTrack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_InstancedTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_PrimitiveMaterialRefs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatMaterialParam.h" },
		{ "ToolTip", "Primitive components on which materials have been overridden." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_PrimitiveMaterialRefs = { UE4CodeGen_Private::EPropertyClass::Array, "PrimitiveMaterialRefs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstFloatMaterialParam, PrimitiveMaterialRefs), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_PrimitiveMaterialRefs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_PrimitiveMaterialRefs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_PrimitiveMaterialRefs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimitiveMaterialRefs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPrimitiveMaterialRef, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_ResetFloats_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatMaterialParam.h" },
		{ "ToolTip", "Saved values for restoring state when exiting Matinee." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_ResetFloats = { UE4CodeGen_Private::EPropertyClass::Array, "ResetFloats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstFloatMaterialParam, ResetFloats), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_ResetFloats_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_ResetFloats_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_ResetFloats_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "ResetFloats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_MaterialInstances_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatMaterialParam.h" },
		{ "ToolTip", "MIDs we're using to set the desired parameter." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_MaterialInstances = { UE4CodeGen_Private::EPropertyClass::Array, "MaterialInstances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstFloatMaterialParam, MaterialInstances), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_MaterialInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_MaterialInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_MaterialInstances_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialInstances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_InstancedTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_PrimitiveMaterialRefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_PrimitiveMaterialRefs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_ResetFloats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_ResetFloats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_MaterialInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_MaterialInstances_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstFloatMaterialParam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::ClassParams = {
		&UInterpTrackInstFloatMaterialParam::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstFloatMaterialParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpTrackInstFloatMaterialParam, 1972677551);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstFloatMaterialParam(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam, &UInterpTrackInstFloatMaterialParam::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstFloatMaterialParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstFloatMaterialParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
