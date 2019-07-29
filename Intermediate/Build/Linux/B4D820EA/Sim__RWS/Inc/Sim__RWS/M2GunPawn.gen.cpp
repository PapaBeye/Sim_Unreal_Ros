// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sim__RWS/M2GunPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeM2GunPawn() {}
// Cross Module References
	SIM__RWS_API UClass* Z_Construct_UClass_AM2GunPawn_NoRegister();
	SIM__RWS_API UClass* Z_Construct_UClass_AM2GunPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Sim__RWS();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AM2GunPawn::StaticRegisterNativesAM2GunPawn()
	{
	}
	UClass* Z_Construct_UClass_AM2GunPawn_NoRegister()
	{
		return AM2GunPawn::StaticClass();
	}
	struct Z_Construct_UClass_AM2GunPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisibleCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_M2Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_M2Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AM2GunPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Sim__RWS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AM2GunPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "M2GunPawn.h" },
		{ "ModuleRelativePath", "M2GunPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AM2GunPawn_Statics::NewProp_VisibleCamera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "M2GunPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AM2GunPawn_Statics::NewProp_VisibleCamera = { UE4CodeGen_Private::EPropertyClass::Object, "VisibleCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AM2GunPawn, VisibleCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AM2GunPawn_Statics::NewProp_VisibleCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AM2GunPawn_Statics::NewProp_VisibleCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AM2GunPawn_Statics::NewProp_M2Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "M2GunPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AM2GunPawn_Statics::NewProp_M2Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "M2Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AM2GunPawn, M2Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AM2GunPawn_Statics::NewProp_M2Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AM2GunPawn_Statics::NewProp_M2Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AM2GunPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AM2GunPawn_Statics::NewProp_VisibleCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AM2GunPawn_Statics::NewProp_M2Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AM2GunPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AM2GunPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AM2GunPawn_Statics::ClassParams = {
		&AM2GunPawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AM2GunPawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AM2GunPawn_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AM2GunPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AM2GunPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AM2GunPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AM2GunPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AM2GunPawn, 2233692096);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AM2GunPawn(Z_Construct_UClass_AM2GunPawn, &AM2GunPawn::StaticClass, TEXT("/Script/Sim__RWS"), TEXT("AM2GunPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AM2GunPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
