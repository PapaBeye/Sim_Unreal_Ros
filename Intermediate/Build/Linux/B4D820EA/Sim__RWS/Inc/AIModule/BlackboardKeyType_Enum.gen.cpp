// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType_Enum() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Enum_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_Enum();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
// End Cross Module References
	void UBlackboardKeyType_Enum::StaticRegisterNativesUBlackboardKeyType_Enum()
	{
	}
	UClass* Z_Construct_UClass_UBlackboardKeyType_Enum_NoRegister()
	{
		return UBlackboardKeyType_Enum::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardKeyType_Enum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnumNameValid_MetaData[];
#endif
		static void NewProp_bIsEnumNameValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnumNameValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnumName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnumType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlackboardKeyType,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "DisplayName", "Enum" },
		{ "IncludePath", "BehaviorTree/Blackboard/BlackboardKeyType_Enum.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h" },
		{ "ToolTip", "set when EnumName override is valid and active" },
	};
#endif
	void Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid_SetBit(void* Obj)
	{
		((UBlackboardKeyType_Enum*)Obj)->bIsEnumNameValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsEnumNameValid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000030001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBlackboardKeyType_Enum), &Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumName_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h" },
		{ "ToolTip", "name of enum defined in c++ code, will take priority over asset from EnumType property" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumName = { UE4CodeGen_Private::EPropertyClass::Str, "EnumName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UBlackboardKeyType_Enum, EnumName), METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumType_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType_Enum.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumType = { UE4CodeGen_Private::EPropertyClass::Object, "EnumType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UBlackboardKeyType_Enum, EnumType), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_bIsEnumNameValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::NewProp_EnumType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyType_Enum>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::ClassParams = {
		&UBlackboardKeyType_Enum::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001030A0u,
		nullptr, 0,
		Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardKeyType_Enum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlackboardKeyType_Enum_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlackboardKeyType_Enum, 4028463650);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackboardKeyType_Enum(Z_Construct_UClass_UBlackboardKeyType_Enum, &UBlackboardKeyType_Enum::StaticClass, TEXT("/Script/AIModule"), TEXT("UBlackboardKeyType_Enum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType_Enum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
