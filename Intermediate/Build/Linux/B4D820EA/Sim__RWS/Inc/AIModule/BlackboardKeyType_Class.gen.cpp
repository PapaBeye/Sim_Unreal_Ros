// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType_Class.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType_Class() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Class_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Class();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UBlackboardKeyType_Class::StaticRegisterNativesUBlackboardKeyType_Class()
	{
	}
	UClass* Z_Construct_UClass_UBlackboardKeyType_Class_NoRegister()
	{
		return UBlackboardKeyType_Class::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardKeyType_Class_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BaseClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardKeyType_Class_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlackboardKeyType,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Class_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "DisplayName", "Class" },
		{ "IncludePath", "BehaviorTree/Blackboard/BlackboardKeyType_Class.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Class.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Class_Statics::NewProp_BaseClass_MetaData[] = {
		{ "AllowAbstract", "1" },
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Class.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlackboardKeyType_Class_Statics::NewProp_BaseClass = { UE4CodeGen_Private::EPropertyClass::Class, "BaseClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UBlackboardKeyType_Class, BaseClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Class_Statics::NewProp_BaseClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Class_Statics::NewProp_BaseClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackboardKeyType_Class_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_Class_Statics::NewProp_BaseClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardKeyType_Class_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyType_Class>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyType_Class_Statics::ClassParams = {
		&UBlackboardKeyType_Class::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001030A0u,
		nullptr, 0,
		Z_Construct_UClass_UBlackboardKeyType_Class_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Class_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Class_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Class_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardKeyType_Class()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlackboardKeyType_Class_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlackboardKeyType_Class, 1976390670);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackboardKeyType_Class(Z_Construct_UClass_UBlackboardKeyType_Class, &UBlackboardKeyType_Class::StaticClass, TEXT("/Script/AIModule"), TEXT("UBlackboardKeyType_Class"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType_Class);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
