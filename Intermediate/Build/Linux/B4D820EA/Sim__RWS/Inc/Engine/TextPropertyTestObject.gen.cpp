// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Tests/TextPropertyTestObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextPropertyTestObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextPropertyTestObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextPropertyTestObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTextPropertyTestObject::StaticRegisterNativesUTextPropertyTestObject()
	{
	}
	UClass* Z_Construct_UClass_UTextPropertyTestObject_NoRegister()
	{
		return UTextPropertyTestObject::StaticClass();
	}
	struct Z_Construct_UClass_UTextPropertyTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransientText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TransientText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UndefaultedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_UndefaultedText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultedText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextPropertyTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextPropertyTestObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/TextPropertyTestObject.h" },
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText = { UE4CodeGen_Private::EPropertyClass::Text, "TransientText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTextPropertyTestObject, TransientText), METADATA_PARAMS(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText = { UE4CodeGen_Private::EPropertyClass::Text, "UndefaultedText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTextPropertyTestObject, UndefaultedText), METADATA_PARAMS(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tests/TextPropertyTestObject.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText = { UE4CodeGen_Private::EPropertyClass::Text, "DefaultedText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTextPropertyTestObject, DefaultedText), METADATA_PARAMS(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextPropertyTestObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_TransientText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_UndefaultedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextPropertyTestObject_Statics::NewProp_DefaultedText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextPropertyTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextPropertyTestObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextPropertyTestObject_Statics::ClassParams = {
		&UTextPropertyTestObject::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		Z_Construct_UClass_UTextPropertyTestObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTextPropertyTestObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTextPropertyTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextPropertyTestObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextPropertyTestObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextPropertyTestObject, 2866045455);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextPropertyTestObject(Z_Construct_UClass_UTextPropertyTestObject, &UTextPropertyTestObject::StaticClass, TEXT("/Script/Engine"), TEXT("UTextPropertyTestObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextPropertyTestObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
