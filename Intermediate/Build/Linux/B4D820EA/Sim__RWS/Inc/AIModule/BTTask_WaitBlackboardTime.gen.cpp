// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_WaitBlackboardTime() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_Wait();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTTask_WaitBlackboardTime::StaticRegisterNativesUBTTask_WaitBlackboardTime()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime_NoRegister()
	{
		return UBTTask_WaitBlackboardTime::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlackboardKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_Wait,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Wait" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h" },
		{ "ToolTip", "Wait task node.\nWait for the time specified by a Blackboard key when executed." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::NewProp_BlackboardKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_WaitBlackboardTime.h" },
		{ "ToolTip", "blackboard key selector" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::NewProp_BlackboardKey = { UE4CodeGen_Private::EPropertyClass::Struct, "BlackboardKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UBTTask_WaitBlackboardTime, BlackboardKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::NewProp_BlackboardKey_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::NewProp_BlackboardKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::NewProp_BlackboardKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_WaitBlackboardTime>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::ClassParams = {
		&UBTTask_WaitBlackboardTime::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_WaitBlackboardTime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_WaitBlackboardTime_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_WaitBlackboardTime, 49072801);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_WaitBlackboardTime(Z_Construct_UClass_UBTTask_WaitBlackboardTime, &UBTTask_WaitBlackboardTime::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_WaitBlackboardTime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_WaitBlackboardTime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
