// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Camera/ParticleModuleCameraOffset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleCameraOffset() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraOffset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraOffset();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleCameraBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	static UEnum* EParticleCameraOffsetUpdateMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleCameraOffsetUpdateMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleCameraOffsetUpdateMethod(EParticleCameraOffsetUpdateMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleCameraOffsetUpdateMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_CRC() { return 4164033564U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleCameraOffsetUpdateMethod"), 0, Get_Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPCOUM_DirectSet", (int64)EPCOUM_DirectSet },
				{ "EPCOUM_Additive", (int64)EPCOUM_Additive },
				{ "EPCOUM_Scalar", (int64)EPCOUM_Scalar },
				{ "EPCOUM_MAX", (int64)EPCOUM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "EPCOUM_Additive.DisplayName", "Additive" },
				{ "EPCOUM_DirectSet.DisplayName", "Direct Set" },
				{ "EPCOUM_Scalar.DisplayName", "Scalar" },
				{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
				{ "ToolTip", "The update method for the offset" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EParticleCameraOffsetUpdateMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EParticleCameraOffsetUpdateMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleModuleCameraOffset::StaticRegisterNativesUParticleModuleCameraOffset()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleCameraOffset_NoRegister()
	{
		return UParticleModuleCameraOffset::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleCameraOffset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpdateMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnTimeOnly_MetaData[];
#endif
		static void NewProp_bSpawnTimeOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnTimeOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleCameraOffset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleCameraBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCameraOffset_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Camera Offset" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ToolTip", "How to update the offset for this module.\nDirectSet - Set the value directly (overwrite any previous setting)\nAdditive  - Add the offset of this module to the existing offset\nScalar    - Scale the existing offset by the value of this module" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "UpdateMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleCameraOffset, UpdateMethod), Z_Construct_UEnum_Engine_EParticleCameraOffsetUpdateMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ToolTip", "If true, the offset will only be processed at spawn time" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_SetBit(void* Obj)
	{
		((UParticleModuleCameraOffset*)Obj)->bSpawnTimeOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bSpawnTimeOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleCameraOffset), &Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Particles/Camera/ParticleModuleCameraOffset.h" },
		{ "ToolTip", "The camera-relative offset to apply to sprite location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleCameraOffset, CameraOffset), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleCameraOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_UpdateMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_bSpawnTimeOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleCameraOffset_Statics::NewProp_CameraOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleCameraOffset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleCameraOffset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleCameraOffset_Statics::ClassParams = {
		&UParticleModuleCameraOffset::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008010A0u,
		nullptr, 0,
		Z_Construct_UClass_UParticleModuleCameraOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleCameraOffset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleCameraOffset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleCameraOffset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleCameraOffset, 502021942);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleCameraOffset(Z_Construct_UClass_UParticleModuleCameraOffset, &UParticleModuleCameraOffset::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleCameraOffset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleCameraOffset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
