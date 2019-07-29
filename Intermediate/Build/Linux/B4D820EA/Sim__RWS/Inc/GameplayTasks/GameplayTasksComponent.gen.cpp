// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTasks/Classes/GameplayTasksComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTasksComponent() {}
// Cross Module References
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
	GAMEPLAYTASKS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayResourceSet();
	GAMEPLAYTASKS_API UEnum* Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics
	{
		struct _Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms
		{
			FGameplayResourceSet NewlyClaimed;
			FGameplayResourceSet FreshlyReleased;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FreshlyReleased;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewlyClaimed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::NewProp_FreshlyReleased = { UE4CodeGen_Private::EPropertyClass::Struct, "FreshlyReleased", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms, FreshlyReleased), Z_Construct_UScriptStruct_FGameplayResourceSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::NewProp_NewlyClaimed = { UE4CodeGen_Private::EPropertyClass::Struct, "NewlyClaimed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms, NewlyClaimed), Z_Construct_UScriptStruct_FGameplayResourceSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::NewProp_FreshlyReleased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::NewProp_NewlyClaimed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks, "OnClaimedResourcesChangeSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms), Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EGameplayTaskRunResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult, Z_Construct_UPackage__Script_GameplayTasks(), TEXT("EGameplayTaskRunResult"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameplayTaskRunResult(EGameplayTaskRunResult_StaticEnum, TEXT("/Script/GameplayTasks"), TEXT("EGameplayTaskRunResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_CRC() { return 1824482857U; }
	UEnum* Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTasks();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameplayTaskRunResult"), 0, Get_Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameplayTaskRunResult::Error", (int64)EGameplayTaskRunResult::Error },
				{ "EGameplayTaskRunResult::Failed", (int64)EGameplayTaskRunResult::Failed },
				{ "EGameplayTaskRunResult::Success_Paused", (int64)EGameplayTaskRunResult::Success_Paused },
				{ "EGameplayTaskRunResult::Success_Active", (int64)EGameplayTaskRunResult::Success_Active },
				{ "EGameplayTaskRunResult::Success_Finished", (int64)EGameplayTaskRunResult::Success_Finished },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Error.ToolTip", "When tried running a null-task" },
				{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
				{ "Success_Active.ToolTip", "Successfully activated" },
				{ "Success_Finished.ToolTip", "Successfully activated, but finished instantly" },
				{ "Success_Paused.ToolTip", "Successfully registered for running, but currently paused due to higher priority tasks running" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGameplayTaskRunResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGameplayTaskRunResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UGameplayTasksComponent::StaticRegisterNativesUGameplayTasksComponent()
	{
		UClass* Class = UGameplayTasksComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_RunGameplayTask", &UGameplayTasksComponent::execK2_RunGameplayTask },
			{ "OnRep_SimulatedTasks", &UGameplayTasksComponent::execOnRep_SimulatedTasks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics
	{
		struct GameplayTasksComponent_eventK2_RunGameplayTask_Parms
		{
			TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
			UGameplayTask* Task;
			uint8 Priority;
			TArray<TSubclassOf<UGameplayTaskResource> > AdditionalRequiredResources;
			TArray<TSubclassOf<UGameplayTaskResource> > AdditionalClaimedResources;
			EGameplayTaskRunResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalClaimedResources;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AdditionalClaimedResources_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalRequiredResources;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AdditionalRequiredResources_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_TaskOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, ReturnValue), Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalClaimedResources = { UE4CodeGen_Private::EPropertyClass::Array, "AdditionalClaimedResources", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014040000000080, 1, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, AdditionalClaimedResources), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalClaimedResources_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "AdditionalClaimedResources", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UGameplayTaskResource_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalRequiredResources = { UE4CodeGen_Private::EPropertyClass::Array, "AdditionalRequiredResources", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014040000000080, 1, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, AdditionalRequiredResources), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalRequiredResources_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "AdditionalRequiredResources", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UGameplayTaskResource_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Byte, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, Priority), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_Task = { UE4CodeGen_Private::EPropertyClass::Object, "Task", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, Task), Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_TaskOwner = { UE4CodeGen_Private::EPropertyClass::Interface, "TaskOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, TaskOwner), Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalClaimedResources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalClaimedResources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalRequiredResources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalRequiredResources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_TaskOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AdditionalRequiredResources, AdditionalClaimedResources" },
		{ "AutoCreateRefTerm", "AdditionalRequiredResources, AdditionalClaimedResources" },
		{ "Category", "Gameplay Tasks" },
		{ "DisplayName", "Run Gameplay Task" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ScriptName", "RunGameplayTask" },
		{ "ToolTip", "END IGameplayTaskOwnerInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTasksComponent, "K2_RunGameplayTask", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(GameplayTasksComponent_eventK2_RunGameplayTask_Parms), Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTasksComponent, "OnRep_SimulatedTasks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayTasksComponent_NoRegister()
	{
		return UGameplayTasksComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTasksComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClaimedResourcesChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClaimedResourcesChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnownTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KnownTasks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KnownTasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickingTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TickingTasks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TickingTasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskPriorityQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TaskPriorityQueue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskPriorityQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulatedTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SimulatedTasks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SimulatedTasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNetDirty_MetaData[];
#endif
		static void NewProp_bIsNetDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNetDirty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTasksComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTasksComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask, "K2_RunGameplayTask" }, // 942955409
		{ &Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks, "OnRep_SimulatedTasks" }, // 3784517301
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTasksComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GameplayTasks" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GameplayTasksComponent.h" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The core ActorComponent for interfacing with the GameplayAbilities System" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_OnClaimedResourcesChange_MetaData[] = {
		{ "Category", "Gameplay Tasks" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_OnClaimedResourcesChange = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnClaimedResourcesChange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080004, 1, nullptr, STRUCT_OFFSET(UGameplayTasksComponent, OnClaimedResourcesChange), Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_OnClaimedResourcesChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_OnClaimedResourcesChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ToolTip", "All known tasks (processed by this component) referenced for GC" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks = { UE4CodeGen_Private::EPropertyClass::Array, "KnownTasks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UGameplayTasksComponent, KnownTasks), METADATA_PARAMS(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "KnownTasks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ToolTip", "Array of currently active UGameplayTask that require ticking" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks = { UE4CodeGen_Private::EPropertyClass::Array, "TickingTasks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameplayTasksComponent, TickingTasks), METADATA_PARAMS(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TickingTasks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue = { UE4CodeGen_Private::EPropertyClass::Array, "TaskPriorityQueue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UGameplayTasksComponent, TaskPriorityQueue), METADATA_PARAMS(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TaskPriorityQueue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ToolTip", "Tasks that run on simulated proxies" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks = { UE4CodeGen_Private::EPropertyClass::Array, "SimulatedTasks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_SimulatedTasks", STRUCT_OFFSET(UGameplayTasksComponent, SimulatedTasks), METADATA_PARAMS(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SimulatedTasks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_bIsNetDirty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ToolTip", "Set to indicate that GameplayTasksComponent needs immediate replication. @TODO could just use ForceReplication(), but this allows initial implementation to be game specific." },
	};
#endif
	void Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_bIsNetDirty_SetBit(void* Obj)
	{
		((UGameplayTasksComponent*)Obj)->bIsNetDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_bIsNetDirty = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsNetDirty", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UGameplayTasksComponent), &Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_bIsNetDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_bIsNetDirty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_bIsNetDirty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTasksComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_OnClaimedResourcesChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_bIsNetDirty,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameplayTasksComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UGameplayTasksComponent, IGameplayTaskOwnerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTasksComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTasksComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTasksComponent_Statics::ClassParams = {
		&UGameplayTasksComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UGameplayTasksComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTasksComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTasksComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayTasksComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayTasksComponent, 4185626745);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayTasksComponent(Z_Construct_UClass_UGameplayTasksComponent, &UGameplayTasksComponent::StaticClass, TEXT("/Script/GameplayTasks"), TEXT("UGameplayTasksComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTasksComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
