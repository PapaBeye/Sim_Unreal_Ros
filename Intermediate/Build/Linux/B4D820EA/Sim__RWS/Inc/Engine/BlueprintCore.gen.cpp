// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/BlueprintCore.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintCore() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintCore_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UBlueprintCore::StaticRegisterNativesUBlueprintCore()
	{
	}
	UClass* Z_Construct_UClass_UBlueprintCore_NoRegister()
	{
		return UBlueprintCore::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlueprintGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLegacyGeneratedClassIsAuthoritative_MetaData[];
#endif
		static void NewProp_bLegacyGeneratedClassIsAuthoritative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLegacyGeneratedClassIsAuthoritative;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLegacyNeedToPurgeSkelRefs_MetaData[];
#endif
		static void NewProp_bLegacyNeedToPurgeSkelRefs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLegacyNeedToPurgeSkelRefs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GeneratedClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonGeneratedClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SkeletonGeneratedClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCore_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/BlueprintCore.h" },
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCore_Statics::NewProp_BlueprintGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
		{ "ToolTip", "Blueprint Guid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintCore_Statics::NewProp_BlueprintGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "BlueprintGuid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UBlueprintCore, BlueprintGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_BlueprintGuid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_BlueprintGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyGeneratedClassIsAuthoritative_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
		{ "ToolTip", "BackCompat: Whether or not this blueprint's authoritative CDO data has been migrated from the SkeletonGeneratedClass CDO to the GeneratedClass CDO" },
	};
#endif
	void Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyGeneratedClassIsAuthoritative_SetBit(void* Obj)
	{
		((UBlueprintCore*)Obj)->bLegacyGeneratedClassIsAuthoritative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyGeneratedClassIsAuthoritative = { UE4CodeGen_Private::EPropertyClass::Bool, "bLegacyGeneratedClassIsAuthoritative", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBlueprintCore), &Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyGeneratedClassIsAuthoritative_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyGeneratedClassIsAuthoritative_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyGeneratedClassIsAuthoritative_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
		{ "ToolTip", "BackCompat:  Whether or not we need to purge references in this blueprint to the skeleton generated during compile-on-load" },
	};
#endif
	void Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs_SetBit(void* Obj)
	{
		((UBlueprintCore*)Obj)->bLegacyNeedToPurgeSkelRefs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs = { UE4CodeGen_Private::EPropertyClass::Bool, "bLegacyNeedToPurgeSkelRefs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBlueprintCore), &Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCore_Statics::NewProp_GeneratedClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
		{ "ToolTip", "Pointer to the 'most recent' fully generated class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprintCore_Statics::NewProp_GeneratedClass = { UE4CodeGen_Private::EPropertyClass::Class, "GeneratedClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000400000000, 1, nullptr, STRUCT_OFFSET(UBlueprintCore, GeneratedClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_GeneratedClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_GeneratedClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintCore_Statics::NewProp_SkeletonGeneratedClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlueprintCore.h" },
		{ "ToolTip", "Pointer to the skeleton class; this is regenerated any time a member variable or function is added but\n      is usually incomplete (no code or hidden autogenerated variables are added to it)" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprintCore_Statics::NewProp_SkeletonGeneratedClass = { UE4CodeGen_Private::EPropertyClass::Class, "SkeletonGeneratedClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000400002000, 1, nullptr, STRUCT_OFFSET(UBlueprintCore, SkeletonGeneratedClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_SkeletonGeneratedClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::NewProp_SkeletonGeneratedClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCore_Statics::NewProp_BlueprintGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyGeneratedClassIsAuthoritative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCore_Statics::NewProp_bLegacyNeedToPurgeSkelRefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCore_Statics::NewProp_GeneratedClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintCore_Statics::NewProp_SkeletonGeneratedClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintCore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintCore_Statics::ClassParams = {
		&UBlueprintCore::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UBlueprintCore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintCore_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintCore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintCore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintCore, 1935492234);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintCore(Z_Construct_UClass_UBlueprintCore, &UBlueprintCore::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprintCore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintCore);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBlueprintCore)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
