// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeMeshCollisionComponent.h"
#include "Landscape/Classes/LandscapeProxy.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMeshCollisionComponent() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void ULandscapeMeshCollisionComponent::StaticRegisterNativesULandscapeMeshCollisionComponent()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent_NoRegister()
	{
		return ULandscapeMeshCollisionComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "LandscapeMeshCollisionComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeMeshCollisionComponent.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::NewProp_MeshGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMeshCollisionComponent.h" },
		{ "ToolTip", "Guid used to share PhysX heightfield objects in the editor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::NewProp_MeshGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "MeshGuid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeMeshCollisionComponent, MeshGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::NewProp_MeshGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::NewProp_MeshGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::NewProp_MeshGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeMeshCollisionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::ClassParams = {
		&ULandscapeMeshCollisionComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A000A4u,
		nullptr, 0,
		Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeMeshCollisionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeMeshCollisionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeMeshCollisionComponent, 3393438332);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeMeshCollisionComponent(Z_Construct_UClass_ULandscapeMeshCollisionComponent, &ULandscapeMeshCollisionComponent::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeMeshCollisionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeMeshCollisionComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeMeshCollisionComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
