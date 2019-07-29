// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISense_Blueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Blueprint() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Blueprint_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Blueprint();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated();
	AIMODULE_API UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnUpdate();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FName NAME_UAISense_Blueprint_K2_OnNewPawn = FName(TEXT("K2_OnNewPawn"));
	void UAISense_Blueprint::K2_OnNewPawn(APawn* NewPawn)
	{
		AISense_Blueprint_eventK2_OnNewPawn_Parms Parms;
		Parms.NewPawn=NewPawn;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_K2_OnNewPawn),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnListenerRegistered = FName(TEXT("OnListenerRegistered"));
	void UAISense_Blueprint::OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent)
	{
		AISense_Blueprint_eventOnListenerRegistered_Parms Parms;
		Parms.ActorListener=ActorListener;
		Parms.PerceptionComponent=PerceptionComponent;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnListenerRegistered),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnListenerUnregistered = FName(TEXT("OnListenerUnregistered"));
	void UAISense_Blueprint::OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent)
	{
		AISense_Blueprint_eventOnListenerUnregistered_Parms Parms;
		Parms.ActorListener=ActorListener;
		Parms.PerceptionComponent=PerceptionComponent;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnListenerUnregistered),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnListenerUpdated = FName(TEXT("OnListenerUpdated"));
	void UAISense_Blueprint::OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent)
	{
		AISense_Blueprint_eventOnListenerUpdated_Parms Parms;
		Parms.ActorListener=ActorListener;
		Parms.PerceptionComponent=PerceptionComponent;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnListenerUpdated),&Parms);
	}
	static FName NAME_UAISense_Blueprint_OnUpdate = FName(TEXT("OnUpdate"));
	float UAISense_Blueprint::OnUpdate(TArray<UAISenseEvent*> const& EventsToProcess)
	{
		AISense_Blueprint_eventOnUpdate_Parms Parms;
		Parms.EventsToProcess=EventsToProcess;
		ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnUpdate),&Parms);
		return Parms.ReturnValue;
	}
	void UAISense_Blueprint::StaticRegisterNativesUAISense_Blueprint()
	{
		UClass* Class = UAISense_Blueprint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllListenerActors", &UAISense_Blueprint::execGetAllListenerActors },
			{ "GetAllListenerComponents", &UAISense_Blueprint::execGetAllListenerComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics
	{
		struct AISense_Blueprint_eventGetAllListenerActors_Parms
		{
			TArray<AActor*> ListenerActors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListenerActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListenerActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors = { UE4CodeGen_Private::EPropertyClass::Array, "ListenerActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventGetAllListenerActors_Parms, ListenerActors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ListenerActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, "GetAllListenerActors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(AISense_Blueprint_eventGetAllListenerActors_Parms), Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics
	{
		struct AISense_Blueprint_eventGetAllListenerComponents_Parms
		{
			TArray<UAIPerceptionComponent*> ListenerComponents;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenerComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListenerComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListenerComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents = { UE4CodeGen_Private::EPropertyClass::Array, "ListenerComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000180, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventGetAllListenerComponents_Parms, ListenerComponents), METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ListenerComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080000, 1, nullptr, 0, Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, "GetAllListenerComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(AISense_Blueprint_eventGetAllListenerComponents_Parms), Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::NewProp_NewPawn = { UE4CodeGen_Private::EPropertyClass::Object, "NewPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventK2_OnNewPawn_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::NewProp_NewPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnNewPawn" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ScriptName", "OnNewPawn" },
		{ "ToolTip", "called when sense's instance gets notified about new pawn that has just been spawned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, "K2_OnNewPawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(AISense_Blueprint_eventK2_OnNewPawn_Parms), Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorListener;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PerceptionComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerRegistered_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_ActorListener = { UE4CodeGen_Private::EPropertyClass::Object, "ActorListener", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerRegistered_Parms, ActorListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_ActorListener,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "@param PerceptionComponent is ActorListener's AIPerceptionComponent instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, "OnListenerRegistered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(AISense_Blueprint_eventOnListenerRegistered_Parms), Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorListener;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PerceptionComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUnregistered_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_ActorListener = { UE4CodeGen_Private::EPropertyClass::Object, "ActorListener", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUnregistered_Parms, ActorListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_ActorListener,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "called when a listener unregistered from this sense. Most often this is called due to actor's death\n    @param PerceptionComponent is ActorListener's AIPerceptionComponent instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, "OnListenerUnregistered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(AISense_Blueprint_eventOnListenerUnregistered_Parms), Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorListener;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "PerceptionComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUpdated_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_ActorListener = { UE4CodeGen_Private::EPropertyClass::Object, "ActorListener", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUpdated_Parms, ActorListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_ActorListener,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "@param PerceptionComponent is ActorListener's AIPerceptionComponent instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, "OnListenerUpdated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(AISense_Blueprint_eventOnListenerUpdated_Parms), Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventsToProcess_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventsToProcess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventsToProcess_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnUpdate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess = { UE4CodeGen_Private::EPropertyClass::Array, "EventsToProcess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AISense_Blueprint_eventOnUpdate_Parms, EventsToProcess), METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "EventsToProcess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "returns requested amount of time to pass until next frame.\n    Return 0 to get update every frame (WARNING: hits performance)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, "OnUpdate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(AISense_Blueprint_eventOnUpdate_Parms), Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISense_Blueprint_NoRegister()
	{
		return UAISense_Blueprint::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Blueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnprocessedEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnprocessedEvents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnprocessedEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenerContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListenerContainer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListenerContainer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenerDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ListenerDataType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Blueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISense_Blueprint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors, "GetAllListenerActors" }, // 2533459279
		{ &Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents, "GetAllListenerComponents" }, // 590115677
		{ &Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn, "K2_OnNewPawn" }, // 3729193645
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered, "OnListenerRegistered" }, // 2087605373
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered, "OnListenerUnregistered" }, // 2742563669
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated, "OnListenerUpdated" }, // 283440532
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnUpdate, "OnUpdate" }, // 1349663352
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Blueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Blueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents = { UE4CodeGen_Private::EPropertyClass::Array, "UnprocessedEvents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UAISense_Blueprint, UnprocessedEvents), METADATA_PARAMS(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "UnprocessedEvents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_MetaData[] = {
		{ "Category", "Sense" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer = { UE4CodeGen_Private::EPropertyClass::Array, "ListenerContainer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008800000001c, 1, nullptr, STRUCT_OFFSET(UAISense_Blueprint, ListenerContainer), METADATA_PARAMS(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ListenerContainer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType = { UE4CodeGen_Private::EPropertyClass::Class, "ListenerDataType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000005, 1, nullptr, STRUCT_OFFSET(UAISense_Blueprint, ListenerDataType), Z_Construct_UClass_UUserDefinedStruct_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Blueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Blueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Blueprint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Blueprint_Statics::ClassParams = {
		&UAISense_Blueprint::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x049000A5u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAISense_Blueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Blueprint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Blueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISense_Blueprint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISense_Blueprint, 469127358);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISense_Blueprint(Z_Construct_UClass_UAISense_Blueprint, &UAISense_Blueprint::StaticClass, TEXT("/Script/AIModule"), TEXT("UAISense_Blueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Blueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
