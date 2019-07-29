// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTasks/Classes/Tasks/GameplayTask_TimeLimitedExecution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask_TimeLimitedExecution() {}
// Cross Module References
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_TimeLimitedExecution();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_TimeLimitedExecution.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_TimeLimitedExecution, "TaskFinishDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UGameplayTask_TimeLimitedExecution::StaticRegisterNativesUGameplayTask_TimeLimitedExecution()
	{
	}
	UClass* Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_NoRegister()
	{
		return UGameplayTask_TimeLimitedExecution::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTimeExpired_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimeExpired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature, "TaskFinishDelegate__DelegateSignature" }, // 4119125711
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/GameplayTask_TimeLimitedExecution.h" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_TimeLimitedExecution.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Adds time limit for running a child task\n- child task needs to be created with UGameplayTask_TimeLimitedExecution passed as TaskOwner\n- activations are tied together and when either UGameplayTask_TimeLimitedExecution or child task is activated, other one starts as well\n- OnFinished and OnTimeExpired are mutually exclusive" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::NewProp_OnTimeExpired_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_TimeLimitedExecution.h" },
		{ "ToolTip", "called when time runs out" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::NewProp_OnTimeExpired = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTimeExpired", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGameplayTask_TimeLimitedExecution, OnTimeExpired), Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::NewProp_OnTimeExpired_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::NewProp_OnTimeExpired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::NewProp_OnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_TimeLimitedExecution.h" },
		{ "ToolTip", "called when child task finishes execution before time runs out" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::NewProp_OnFinished = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFinished", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UGameplayTask_TimeLimitedExecution, OnFinished), Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::NewProp_OnFinished_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::NewProp_OnFinished_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::NewProp_OnTimeExpired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::NewProp_OnFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTask_TimeLimitedExecution>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::ClassParams = {
		&UGameplayTask_TimeLimitedExecution::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A4u,
		IF_WITH_EDITOR(FuncInfo, nullptr), IF_WITH_EDITOR(ARRAY_COUNT(FuncInfo), 0),
		Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTask_TimeLimitedExecution()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayTask_TimeLimitedExecution_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTask_TimeLimitedExecution, 2922538480);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTask_TimeLimitedExecution(Z_Construct_UClass_UGameplayTask_TimeLimitedExecution, &UGameplayTask_TimeLimitedExecution::StaticClass, TEXT("/Script/GameplayTasks"), TEXT("UGameplayTask_TimeLimitedExecution"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask_TimeLimitedExecution);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
