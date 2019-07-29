// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_BlueprintBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlueprintBase_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlueprintBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage();
	AIMODULE_API UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId();
// End Cross Module References
	static FName NAME_UBTTask_BlueprintBase_ReceiveAbort = FName(TEXT("ReceiveAbort"));
	void UBTTask_BlueprintBase::ReceiveAbort(AActor* OwnerActor)
	{
		BTTask_BlueprintBase_eventReceiveAbort_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveAbort),&Parms);
	}
	static FName NAME_UBTTask_BlueprintBase_ReceiveAbortAI = FName(TEXT("ReceiveAbortAI"));
	void UBTTask_BlueprintBase::ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTTask_BlueprintBase_eventReceiveAbortAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveAbortAI),&Parms);
	}
	static FName NAME_UBTTask_BlueprintBase_ReceiveExecute = FName(TEXT("ReceiveExecute"));
	void UBTTask_BlueprintBase::ReceiveExecute(AActor* OwnerActor)
	{
		BTTask_BlueprintBase_eventReceiveExecute_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveExecute),&Parms);
	}
	static FName NAME_UBTTask_BlueprintBase_ReceiveExecuteAI = FName(TEXT("ReceiveExecuteAI"));
	void UBTTask_BlueprintBase::ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn)
	{
		BTTask_BlueprintBase_eventReceiveExecuteAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveExecuteAI),&Parms);
	}
	static FName NAME_UBTTask_BlueprintBase_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UBTTask_BlueprintBase::ReceiveTick(AActor* OwnerActor, float DeltaSeconds)
	{
		BTTask_BlueprintBase_eventReceiveTick_Parms Parms;
		Parms.OwnerActor=OwnerActor;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveTick),&Parms);
	}
	static FName NAME_UBTTask_BlueprintBase_ReceiveTickAI = FName(TEXT("ReceiveTickAI"));
	void UBTTask_BlueprintBase::ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds)
	{
		BTTask_BlueprintBase_eventReceiveTickAI_Parms Parms;
		Parms.OwnerController=OwnerController;
		Parms.ControlledPawn=ControlledPawn;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UBTTask_BlueprintBase_ReceiveTickAI),&Parms);
	}
	void UBTTask_BlueprintBase::StaticRegisterNativesUBTTask_BlueprintBase()
	{
		UClass* Class = UBTTask_BlueprintBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishAbort", &UBTTask_BlueprintBase::execFinishAbort },
			{ "FinishExecute", &UBTTask_BlueprintBase::execFinishExecute },
			{ "IsTaskAborting", &UBTTask_BlueprintBase::execIsTaskAborting },
			{ "IsTaskExecuting", &UBTTask_BlueprintBase::execIsTaskExecuting },
			{ "SetFinishOnMessage", &UBTTask_BlueprintBase::execSetFinishOnMessage },
			{ "SetFinishOnMessageWithId", &UBTTask_BlueprintBase::execSetFinishOnMessageWithId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "aborts task execution" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "FinishAbort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics
	{
		struct BTTask_BlueprintBase_eventFinishExecute_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((BTTask_BlueprintBase_eventFinishExecute_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::NewProp_bSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BTTask_BlueprintBase_eventFinishExecute_Parms), &Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "finishes task execution with Success or Fail result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "FinishExecute", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(BTTask_BlueprintBase_eventFinishExecute_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics
	{
		struct BTTask_BlueprintBase_eventIsTaskAborting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BTTask_BlueprintBase_eventIsTaskAborting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BTTask_BlueprintBase_eventIsTaskAborting_Parms), &Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "check if task is currently being aborted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "IsTaskAborting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(BTTask_BlueprintBase_eventIsTaskAborting_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics
	{
		struct BTTask_BlueprintBase_eventIsTaskExecuting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BTTask_BlueprintBase_eventIsTaskExecuting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BTTask_BlueprintBase_eventIsTaskExecuting_Parms), &Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "check if task is currently being executed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "IsTaskExecuting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54080401, sizeof(BTTask_BlueprintBase_eventIsTaskExecuting_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveAbort_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "if blueprint graph contains this event, task will stay active until FinishAbort is called\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "ReceiveAbort", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTTask_BlueprintBase_eventReceiveAbort_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveAbortAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveAbortAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::NewProp_OwnerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveAbort\n    @see ReceiveAbort for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "ReceiveAbortAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTTask_BlueprintBase_eventReceiveAbortAI_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveExecute_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "entry point, task will stay active until FinishExecute is called.\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "ReceiveExecute", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTTask_BlueprintBase_eventReceiveExecute_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveExecuteAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveExecuteAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::NewProp_OwnerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of ReceiveExecute\n     @see ReceiveExecute for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "ReceiveExecuteAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTTask_BlueprintBase_eventReceiveExecuteAI_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::NewProp_OwnerActor = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveTick_Parms, OwnerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::NewProp_DeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::NewProp_OwnerActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "tick function\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "ReceiveTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTTask_BlueprintBase_eventReceiveTick_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveTickAI_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::NewProp_ControlledPawn = { UE4CodeGen_Private::EPropertyClass::Object, "ControlledPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveTickAI_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventReceiveTickAI_Parms, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::NewProp_DeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::NewProp_ControlledPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::NewProp_OwnerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "Alternative AI version of tick function.\n    @see ReceiveTick for more details\n    @Note that if both generic and AI event versions are implemented only the more\n    suitable one will be called, meaning the AI version if called for AI, generic one otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "ReceiveTickAI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(BTTask_BlueprintBase_eventReceiveTickAI_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics
	{
		struct BTTask_BlueprintBase_eventSetFinishOnMessage_Parms
		{
			FName MessageName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MessageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::NewProp_MessageName = { UE4CodeGen_Private::EPropertyClass::Name, "MessageName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventSetFinishOnMessage_Parms, MessageName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::NewProp_MessageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "task execution will be finished (with result 'Success') after receiving specified message" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "SetFinishOnMessage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(BTTask_BlueprintBase_eventSetFinishOnMessage_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics
	{
		struct BTTask_BlueprintBase_eventSetFinishOnMessageWithId_Parms
		{
			FName MessageName;
			int32 RequestID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequestID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MessageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::NewProp_RequestID = { UE4CodeGen_Private::EPropertyClass::Int, "RequestID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventSetFinishOnMessageWithId_Parms, RequestID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::NewProp_MessageName = { UE4CodeGen_Private::EPropertyClass::Name, "MessageName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BTTask_BlueprintBase_eventSetFinishOnMessageWithId_Parms, MessageName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::NewProp_RequestID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::NewProp_MessageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "CPP_Default_RequestID", "-1" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "task execution will be finished (with result 'Success') after receiving specified message with indicated ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_BlueprintBase, "SetFinishOnMessageWithId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(BTTask_BlueprintBase_eventSetFinishOnMessageWithId_Parms), Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBTTask_BlueprintBase_NoRegister()
	{
		return UBTTask_BlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_BlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPropertyDetails_MetaData[];
#endif
		static void NewProp_bShowPropertyDetails_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPropertyDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_BlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBTTask_BlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_FinishAbort, "FinishAbort" }, // 2458870406
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_FinishExecute, "FinishExecute" }, // 3134616008
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskAborting, "IsTaskAborting" }, // 279522571
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_IsTaskExecuting, "IsTaskExecuting" }, // 3823895892
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbort, "ReceiveAbort" }, // 3690028094
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveAbortAI, "ReceiveAbortAI" }, // 3355532216
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecute, "ReceiveExecute" }, // 1999941858
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveExecuteAI, "ReceiveExecuteAI" }, // 1587569814
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTick, "ReceiveTick" }, // 633294023
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_ReceiveTickAI, "ReceiveTickAI" }, // 432941428
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessage, "SetFinishOnMessage" }, // 486868046
		{ &Z_Construct_UFunction_UBTTask_BlueprintBase_SetFinishOnMessageWithId, "SetFinishOnMessageWithId" }, // 1530149376
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "Base class for blueprint based task nodes. Do NOT use it for creating native c++ classes!\n\nWhen task receives Abort event, all latent actions associated this instance are being removed.\nThis prevents from resuming activity started by Execute, but does not handle external events.\nPlease use them safely (unregister at abort) and call IsTaskExecuting() when in doubt." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_bShowPropertyDetails_MetaData[] = {
		{ "Category", "Description" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "show detailed information about properties" },
	};
#endif
	void Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_bShowPropertyDetails_SetBit(void* Obj)
	{
		((UBTTask_BlueprintBase*)Obj)->bShowPropertyDetails = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_bShowPropertyDetails = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowPropertyDetails", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000801, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBTTask_BlueprintBase), &Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_bShowPropertyDetails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_bShowPropertyDetails_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_bShowPropertyDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_ActorOwner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "Cached actor owner of BehaviorTreeComponent." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_ActorOwner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UBTTask_BlueprintBase, ActorOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_ActorOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_ActorOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_AIOwner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Tasks/BTTask_BlueprintBase.h" },
		{ "ToolTip", "Cached AIController owner of BehaviorTreeComponent." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_AIOwner = { UE4CodeGen_Private::EPropertyClass::Object, "AIOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UBTTask_BlueprintBase, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_AIOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_AIOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_BlueprintBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_bShowPropertyDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_ActorOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_BlueprintBase_Statics::NewProp_AIOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_BlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_BlueprintBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_BlueprintBase_Statics::ClassParams = {
		&UBTTask_BlueprintBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UBTTask_BlueprintBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_BlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_BlueprintBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_BlueprintBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_BlueprintBase, 2974064400);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_BlueprintBase(Z_Construct_UClass_UBTTask_BlueprintBase, &UBTTask_BlueprintBase::StaticClass, TEXT("/Script/AIModule"), TEXT("UBTTask_BlueprintBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_BlueprintBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
