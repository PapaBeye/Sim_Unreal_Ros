// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldLocal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldLocal_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldLocal();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
// End Cross Module References
	void UParticleModuleVectorFieldLocal::StaticRegisterNativesUParticleModuleVectorFieldLocal()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldLocal_NoRegister()
	{
		return UParticleModuleVectorFieldLocal::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixDT_MetaData[];
#endif
		static void NewProp_bUseFixDT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixDT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileZ_MetaData[];
#endif
		static void NewProp_bTileZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileY_MetaData[];
#endif
		static void NewProp_bTileY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTileX_MetaData[];
#endif
		static void NewProp_bTileX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTileX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreComponentTransform_MetaData[];
#endif
		static void NewProp_bIgnoreComponentTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreComponentTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeScale3D_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeScale3D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorField_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VectorField;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Local Vector Field" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bUseFixDT_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Use fix delta time in the simulation?" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bUseFixDT_SetBit(void* Obj)
	{
		((UParticleModuleVectorFieldLocal*)Obj)->bUseFixDT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bUseFixDT = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFixDT", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleVectorFieldLocal), &Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bUseFixDT_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bUseFixDT_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bUseFixDT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileZ_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Tile vector field in z axis?" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileZ_SetBit(void* Obj)
	{
		((UParticleModuleVectorFieldLocal*)Obj)->bTileZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bTileZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleVectorFieldLocal), &Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileY_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Tile vector field in y axis?" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileY_SetBit(void* Obj)
	{
		((UParticleModuleVectorFieldLocal*)Obj)->bTileY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileY = { UE4CodeGen_Private::EPropertyClass::Bool, "bTileY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleVectorFieldLocal), &Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileY_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileX_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Tile vector field in x axis?" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileX_SetBit(void* Obj)
	{
		((UParticleModuleVectorFieldLocal*)Obj)->bTileX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileX = { UE4CodeGen_Private::EPropertyClass::Bool, "bTileX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleVectorFieldLocal), &Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bIgnoreComponentTransform_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Ignore component transform." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bIgnoreComponentTransform_SetBit(void* Obj)
	{
		((UParticleModuleVectorFieldLocal*)Obj)->bIgnoreComponentTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bIgnoreComponentTransform = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreComponentTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleVectorFieldLocal), &Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bIgnoreComponentTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bIgnoreComponentTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bIgnoreComponentTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Tightness_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Tightness tweak value: 0: Force 1: Velocity." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Tightness = { UE4CodeGen_Private::EPropertyClass::Float, "Tightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, Tightness), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Tightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Tightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Intensity of the local vector field." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Intensity = { UE4CodeGen_Private::EPropertyClass::Float, "Intensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, Intensity), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Intensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeScale3D_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Scale of the vector field relative to the emitter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeScale3D = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeScale3D", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, RelativeScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeScale3D_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeScale3D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Rotation of the vector field relative to the emitter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeTranslation_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Translation of the vector field relative to the emitter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeTranslation = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeTranslation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, RelativeTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeTranslation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_VectorField_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Vector field asset to use." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_VectorField = { UE4CodeGen_Private::EPropertyClass::Object, "VectorField", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, VectorField), Z_Construct_UClass_UVectorField_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_VectorField_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_VectorField_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bUseFixDT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bIgnoreComponentTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Tightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Intensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeScale3D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_VectorField,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldLocal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::ClassParams = {
		&UParticleModuleVectorFieldLocal::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000810A0u,
		nullptr, 0,
		Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldLocal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleVectorFieldLocal, 56574662);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVectorFieldLocal(Z_Construct_UClass_UParticleModuleVectorFieldLocal, &UParticleModuleVectorFieldLocal::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVectorFieldLocal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldLocal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
