// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/ObjectLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UObjectLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UObjectLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UObjectLibrary::StaticRegisterNativesUObjectLibrary()
	{
	}
	UClass* Z_Construct_UClass_UObjectLibrary_NoRegister()
	{
		return UObjectLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UObjectLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFullyLoaded_MetaData[];
#endif
		static void NewProp_bIsFullyLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFullyLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseWeakReferences_MetaData[];
#endif
		static void NewProp_bUseWeakReferences_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseWeakReferences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeakObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeakObjects;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_WeakObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBlueprintClasses_MetaData[];
#endif
		static void NewProp_bHasBlueprintClasses_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBlueprintClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectBaseClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectBaseClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ObjectLibrary.h" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
		{ "ToolTip", "Class that holds a library of Objects" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bIsFullyLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
		{ "ToolTip", "True if we've already fully loaded this library, can't do it twice" },
	};
#endif
	void Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bIsFullyLoaded_SetBit(void* Obj)
	{
		((UObjectLibrary*)Obj)->bIsFullyLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bIsFullyLoaded = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFullyLoaded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UObjectLibrary), &Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bIsFullyLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bIsFullyLoaded_MetaData, ARRAY_COUNT(Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bIsFullyLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bUseWeakReferences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
		{ "ToolTip", "If this library should use weak pointers" },
	};
#endif
	void Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bUseWeakReferences_SetBit(void* Obj)
	{
		((UObjectLibrary*)Obj)->bUseWeakReferences = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bUseWeakReferences = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseWeakReferences", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UObjectLibrary), &Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bUseWeakReferences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bUseWeakReferences_MetaData, ARRAY_COUNT(Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bUseWeakReferences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectLibrary_Statics::NewProp_WeakObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
		{ "ToolTip", "Weak pointers to objects" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_WeakObjects = { UE4CodeGen_Private::EPropertyClass::Array, "WeakObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000000, 1, nullptr, STRUCT_OFFSET(UObjectLibrary, WeakObjects), METADATA_PARAMS(Z_Construct_UClass_UObjectLibrary_Statics::NewProp_WeakObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UObjectLibrary_Statics::NewProp_WeakObjects_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_WeakObjects_Inner = { UE4CodeGen_Private::EPropertyClass::WeakObject, "WeakObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectLibrary_Statics::NewProp_Objects_MetaData[] = {
		{ "Category", "ObjectLibrary" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
		{ "ToolTip", "List of Objects in library" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_Objects = { UE4CodeGen_Private::EPropertyClass::Array, "Objects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UObjectLibrary, Objects), METADATA_PARAMS(Z_Construct_UClass_UObjectLibrary_Statics::NewProp_Objects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UObjectLibrary_Statics::NewProp_Objects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_Objects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Objects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bHasBlueprintClasses_MetaData[] = {
		{ "Category", "ObjectLibrary" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
		{ "ToolTip", "True if this library holds blueprint classes, false if it holds other objects" },
	};
#endif
	void Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bHasBlueprintClasses_SetBit(void* Obj)
	{
		((UObjectLibrary*)Obj)->bHasBlueprintClasses = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bHasBlueprintClasses = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasBlueprintClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UObjectLibrary), &Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bHasBlueprintClasses_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bHasBlueprintClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bHasBlueprintClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectLibrary_Statics::NewProp_ObjectBaseClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "ObjectLibrary" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectLibrary.h" },
		{ "ToolTip", "Class that Objects must be of. If ContainsBlueprints is true, this is the native class that the blueprints are instances of and not UClass" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UObjectLibrary_Statics::NewProp_ObjectBaseClass = { UE4CodeGen_Private::EPropertyClass::Class, "ObjectBaseClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UObjectLibrary, ObjectBaseClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UObjectLibrary_Statics::NewProp_ObjectBaseClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UObjectLibrary_Statics::NewProp_ObjectBaseClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectLibrary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bIsFullyLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bUseWeakReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_WeakObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_WeakObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_Objects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_Objects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_bHasBlueprintClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectLibrary_Statics::NewProp_ObjectBaseClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectLibrary_Statics::ClassParams = {
		&UObjectLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_UObjectLibrary_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UObjectLibrary_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UObjectLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UObjectLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectLibrary, 3663743728);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectLibrary(Z_Construct_UClass_UObjectLibrary, &UObjectLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UObjectLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
