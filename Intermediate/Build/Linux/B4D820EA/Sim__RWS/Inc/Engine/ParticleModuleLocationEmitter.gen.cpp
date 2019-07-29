// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Location/ParticleModuleLocationEmitter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationEmitter() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationEmitter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationEmitter();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
// End Cross Module References
	static UEnum* ELocationEmitterSelectionMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod, Z_Construct_UPackage__Script_Engine(), TEXT("ELocationEmitterSelectionMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocationEmitterSelectionMethod(ELocationEmitterSelectionMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("ELocationEmitterSelectionMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod_CRC() { return 1174544176U; }
	UEnum* Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocationEmitterSelectionMethod"), 0, Get_Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELESM_Random", (int64)ELESM_Random },
				{ "ELESM_Sequential", (int64)ELESM_Sequential },
				{ "ELESM_MAX", (int64)ELESM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELocationEmitterSelectionMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ELocationEmitterSelectionMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleModuleLocationEmitter::StaticRegisterNativesUParticleModuleLocationEmitter()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationEmitter_NoRegister()
	{
		return UParticleModuleLocationEmitter::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritSourceRotationScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InheritSourceRotationScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritSourceRotation_MetaData[];
#endif
		static void NewProp_bInheritSourceRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritSourceRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritSourceVelocityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InheritSourceVelocityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritSourceVelocity_MetaData[];
#endif
		static void NewProp_InheritSourceVelocity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InheritSourceVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Emitter Initial Location" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceRotationScale_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "Amount to scale the source rotation by when inheriting it." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceRotationScale = { UE4CodeGen_Private::EPropertyClass::Float, "InheritSourceRotationScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationEmitter, InheritSourceRotationScale), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceRotationScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceRotationScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "If true, the spawned particle should inherit the rotation of the source particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation_SetBit(void* Obj)
	{
		((UParticleModuleLocationEmitter*)Obj)->bInheritSourceRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bInheritSourceRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationEmitter), &Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocityScale_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "Amount to scale the source velocity by when inheriting it." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocityScale = { UE4CodeGen_Private::EPropertyClass::Float, "InheritSourceVelocityScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationEmitter, InheritSourceVelocityScale), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocityScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "If true, the spawned particle should inherit the velocity of the source particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity_SetBit(void* Obj)
	{
		((UParticleModuleLocationEmitter*)Obj)->InheritSourceVelocity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "InheritSourceVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationEmitter), &Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_SelectionMethod_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "The method to use when selecting a spawn target particle from the emitter.\nCan be one of the following:\n        ELESM_Random            Randomly select a particle from the source emitter.\n        ELESM_Sequential        Step through each particle from the source emitter in order." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_SelectionMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "SelectionMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationEmitter, SelectionMethod), Z_Construct_UEnum_Engine_ELocationEmitterSelectionMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_SelectionMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_SelectionMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_EmitterName_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationEmitter.h" },
		{ "ToolTip", "The name of the emitter to use that the source location for particle." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_EmitterName = { UE4CodeGen_Private::EPropertyClass::Name, "EmitterName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000002000009, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationEmitter, EmitterName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_EmitterName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_EmitterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceRotationScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_bInheritSourceRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_InheritSourceVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_SelectionMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::NewProp_EmitterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationEmitter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::ClassParams = {
		&UParticleModuleLocationEmitter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001010A0u,
		nullptr, 0,
		Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationEmitter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleLocationEmitter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleLocationEmitter, 1686340199);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationEmitter(Z_Construct_UClass_UParticleModuleLocationEmitter, &UParticleModuleLocationEmitter::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocationEmitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationEmitter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
