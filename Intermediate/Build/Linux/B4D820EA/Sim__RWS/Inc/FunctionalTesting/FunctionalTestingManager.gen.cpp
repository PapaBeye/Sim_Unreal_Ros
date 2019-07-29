// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTesting/Classes/FunctionalTestingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalTestingManager() {}
// Cross Module References
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFunctionalTestingManager_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFunctionalTestingManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_APhasedAutomationActorBase_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_APhasedAutomationActorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin();
	FUNCTIONALTESTING_API UFunction* Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete();
// End Cross Module References
	void UFunctionalTestingManager::StaticRegisterNativesUFunctionalTestingManager()
	{
		UClass* Class = UFunctionalTestingManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunAllFunctionalTests", &UFunctionalTestingManager::execRunAllFunctionalTests },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics
	{
		struct FunctionalTestingManager_eventRunAllFunctionalTests_Parms
		{
			UObject* WorldContextObject;
			bool bNewLog;
			bool bRunLooped;
			FString FailedTestsReproString;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FailedTestsReproString;
		static void NewProp_bRunLooped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunLooped;
		static void NewProp_bNewLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewLog;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FunctionalTestingManager_eventRunAllFunctionalTests_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FunctionalTestingManager_eventRunAllFunctionalTests_Parms), &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_FailedTestsReproString = { UE4CodeGen_Private::EPropertyClass::Str, "FailedTestsReproString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FunctionalTestingManager_eventRunAllFunctionalTests_Parms, FailedTestsReproString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped_SetBit(void* Obj)
	{
		((FunctionalTestingManager_eventRunAllFunctionalTests_Parms*)Obj)->bRunLooped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped = { UE4CodeGen_Private::EPropertyClass::Bool, "bRunLooped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FunctionalTestingManager_eventRunAllFunctionalTests_Parms), &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog_SetBit(void* Obj)
	{
		((FunctionalTestingManager_eventRunAllFunctionalTests_Parms*)Obj)->bNewLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewLog", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FunctionalTestingManager_eventRunAllFunctionalTests_Parms), &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FunctionalTestingManager_eventRunAllFunctionalTests_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_FailedTestsReproString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FunctionalTesting" },
		{ "CPP_Default_bNewLog", "true" },
		{ "CPP_Default_bRunLooped", "false" },
		{ "CPP_Default_FailedTestsReproString", "" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
		{ "ToolTip", "Triggers in sequence all functional tests found on the level.\n@return true if any tests have been triggered" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionalTestingManager, "RunAllFunctionalTests", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FunctionalTestingManager_eventRunAllFunctionalTests_Parms), Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFunctionalTestingManager_NoRegister()
	{
		return UFunctionalTestingManager::StaticClass();
	}
	struct Z_Construct_UClass_UFunctionalTestingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTestsBegin_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTestsBegin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTestsComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTestsComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSetupTests_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetupTests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllTests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllTests;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllTests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TestsLeft;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TestsLeft_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFunctionalTestingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFunctionalTestingManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests, "RunAllFunctionalTests" }, // 3717173763
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FunctionalTestingManager.h" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTestsBegin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFunctionalTestingManager, OnTestsBegin), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnTestsComplete", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFunctionalTestingManager, OnTestsComplete), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSetupTests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFunctionalTestingManager, OnSetupTests), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests = { UE4CodeGen_Private::EPropertyClass::Array, "AllTests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UFunctionalTestingManager, AllTests), METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AllTests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFunctionalTest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft = { UE4CodeGen_Private::EPropertyClass::Array, "TestsLeft", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UFunctionalTestingManager, TestsLeft), METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TestsLeft", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFunctionalTest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFunctionalTestingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFunctionalTestingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFunctionalTestingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFunctionalTestingManager_Statics::ClassParams = {
		&UFunctionalTestingManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFunctionalTestingManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestingManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFunctionalTestingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFunctionalTestingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFunctionalTestingManager, 1694930737);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFunctionalTestingManager(Z_Construct_UClass_UFunctionalTestingManager, &UFunctionalTestingManager::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("UFunctionalTestingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFunctionalTestingManager);
	static FName NAME_APhasedAutomationActorBase_OnFunctionalTestingBegin = FName(TEXT("OnFunctionalTestingBegin"));
	void APhasedAutomationActorBase::OnFunctionalTestingBegin()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhasedAutomationActorBase_OnFunctionalTestingBegin),NULL);
	}
	static FName NAME_APhasedAutomationActorBase_OnFunctionalTestingComplete = FName(TEXT("OnFunctionalTestingComplete"));
	void APhasedAutomationActorBase::OnFunctionalTestingComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_APhasedAutomationActorBase_OnFunctionalTestingComplete),NULL);
	}
	void APhasedAutomationActorBase::StaticRegisterNativesAPhasedAutomationActorBase()
	{
	}
	struct Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhasedAutomationActorBase, "OnFunctionalTestingBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhasedAutomationActorBase, "OnFunctionalTestingComplete", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APhasedAutomationActorBase_NoRegister()
	{
		return APhasedAutomationActorBase::StaticClass();
	}
	struct Z_Construct_UClass_APhasedAutomationActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhasedAutomationActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APhasedAutomationActorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin, "OnFunctionalTestingBegin" }, // 3015558812
		{ &Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete, "OnFunctionalTestingComplete" }, // 1094063669
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhasedAutomationActorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FunctionalTestingManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhasedAutomationActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhasedAutomationActorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhasedAutomationActorBase_Statics::ClassParams = {
		&APhasedAutomationActorBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APhasedAutomationActorBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APhasedAutomationActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhasedAutomationActorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhasedAutomationActorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhasedAutomationActorBase, 1166088347);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhasedAutomationActorBase(Z_Construct_UClass_APhasedAutomationActorBase, &APhasedAutomationActorBase::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("APhasedAutomationActorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhasedAutomationActorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
