// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimStateMachineTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimStateMachineTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionLogicType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionBlendMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationStateMachine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedStateExitTransition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationTransitionRule();
	ENGINE_API UClass* Z_Construct_UClass_UAnimStateMachineTypes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimStateMachineTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ETransitionLogicType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionLogicType, Z_Construct_UPackage__Script_Engine(), TEXT("ETransitionLogicType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransitionLogicType(ETransitionLogicType_StaticEnum, TEXT("/Script/Engine"), TEXT("ETransitionLogicType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETransitionLogicType_CRC() { return 2609118342U; }
	UEnum* Z_Construct_UEnum_Engine_ETransitionLogicType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransitionLogicType"), 0, Get_Z_Construct_UEnum_Engine_ETransitionLogicType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransitionLogicType::TLT_StandardBlend", (int64)ETransitionLogicType::TLT_StandardBlend },
				{ "ETransitionLogicType::TLT_Custom", (int64)ETransitionLogicType::TLT_Custom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "TLT_Custom.DisplayName", "Custom" },
				{ "TLT_StandardBlend.DisplayName", "Standard Blend" },
				{ "ToolTip", "@TODO: Document" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETransitionLogicType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETransitionLogicType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETransitionBlendMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionBlendMode, Z_Construct_UPackage__Script_Engine(), TEXT("ETransitionBlendMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETransitionBlendMode(ETransitionBlendMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ETransitionBlendMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETransitionBlendMode_CRC() { return 104840026U; }
	UEnum* Z_Construct_UEnum_Engine_ETransitionBlendMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETransitionBlendMode"), 0, Get_Z_Construct_UEnum_Engine_ETransitionBlendMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETransitionBlendMode::TBM_Linear", (int64)ETransitionBlendMode::TBM_Linear },
				{ "ETransitionBlendMode::TBM_Cubic", (int64)ETransitionBlendMode::TBM_Cubic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
				{ "TBM_Cubic.DisplayName", "Cubic" },
				{ "TBM_Linear.DisplayName", "Linear" },
				{ "ToolTip", "@TODO: Document" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETransitionBlendMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETransitionBlendMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBakedAnimationStateMachine::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBakedAnimationStateMachine_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedAnimationStateMachine, Z_Construct_UPackage__Script_Engine(), TEXT("BakedAnimationStateMachine"), sizeof(FBakedAnimationStateMachine), Get_Z_Construct_UScriptStruct_FBakedAnimationStateMachine_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBakedAnimationStateMachine(FBakedAnimationStateMachine::StaticStruct, TEXT("/Script/Engine"), TEXT("BakedAnimationStateMachine"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBakedAnimationStateMachine
{
	FScriptStruct_Engine_StaticRegisterNativesFBakedAnimationStateMachine()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BakedAnimationStateMachine")),new UScriptStruct::TCppStructOps<FBakedAnimationStateMachine>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBakedAnimationStateMachine;
	struct Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transitions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transitions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_States;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_States_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MachineName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MachineName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedAnimationStateMachine>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_Transitions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "List of all transitions between states" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_Transitions = { UE4CodeGen_Private::EPropertyClass::Array, "Transitions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationStateMachine, Transitions), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_Transitions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_Transitions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_Transitions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Transitions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_States_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "List of all states this machine can be in" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_States = { UE4CodeGen_Private::EPropertyClass::Array, "States", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationStateMachine, States), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_States_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_States_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_States_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "States", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBakedAnimationState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_InitialState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Index of the initial state that the machine will start in" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_InitialState = { UE4CodeGen_Private::EPropertyClass::Int, "InitialState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationStateMachine, InitialState), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_InitialState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_InitialState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_MachineName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Name of this machine (primarily for debugging purposes)" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_MachineName = { UE4CodeGen_Private::EPropertyClass::Name, "MachineName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationStateMachine, MachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_MachineName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_MachineName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_Transitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_Transitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_States,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_States_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_InitialState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_MachineName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BakedAnimationStateMachine",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBakedAnimationStateMachine),
		alignof(FBakedAnimationStateMachine),
		Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationStateMachine()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBakedAnimationStateMachine_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BakedAnimationStateMachine"), sizeof(FBakedAnimationStateMachine), Get_Z_Construct_UScriptStruct_FBakedAnimationStateMachine_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBakedAnimationStateMachine_CRC() { return 458960152U; }
class UScriptStruct* FBakedAnimationState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBakedAnimationState_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedAnimationState, Z_Construct_UPackage__Script_Engine(), TEXT("BakedAnimationState"), sizeof(FBakedAnimationState), Get_Z_Construct_UScriptStruct_FBakedAnimationState_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBakedAnimationState(FBakedAnimationState::StaticStruct, TEXT("/Script/Engine"), TEXT("BakedAnimationState"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBakedAnimationState
{
	FScriptStruct_Engine_StaticRegisterNativesFBakedAnimationState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BakedAnimationState")),new UScriptStruct::TCppStructOps<FBakedAnimationState>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBakedAnimationState;
	struct Z_Construct_UScriptStruct_FBakedAnimationState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysResetOnEntry_MetaData[];
#endif
		static void NewProp_bAlwaysResetOnEntry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysResetOnEntry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerNodeIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerNodeIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerNodeIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryRuleNodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EntryRuleNodeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAConduit_MetaData[];
#endif
		static void NewProp_bIsAConduit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAConduit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullyBlendedNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FullyBlendedNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateRootNodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateRootNodeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transitions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transitions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedAnimationState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bAlwaysResetOnEntry_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Whether or not this state will ALWAYS reset it's state on reentry, regardless of remaining weight" },
	};
#endif
	void Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bAlwaysResetOnEntry_SetBit(void* Obj)
	{
		((FBakedAnimationState*)Obj)->bAlwaysResetOnEntry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bAlwaysResetOnEntry = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysResetOnEntry", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBakedAnimationState), &Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bAlwaysResetOnEntry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bAlwaysResetOnEntry_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bAlwaysResetOnEntry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_PlayerNodeIndices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Indices into the property array for player nodes in the state" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_PlayerNodeIndices = { UE4CodeGen_Private::EPropertyClass::Array, "PlayerNodeIndices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, PlayerNodeIndices), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_PlayerNodeIndices_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_PlayerNodeIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_PlayerNodeIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerNodeIndices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EntryRuleNodeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EntryRuleNodeIndex = { UE4CodeGen_Private::EPropertyClass::Int, "EntryRuleNodeIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, EntryRuleNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EntryRuleNodeIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EntryRuleNodeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bIsAConduit_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bIsAConduit_SetBit(void* Obj)
	{
		((FBakedAnimationState*)Obj)->bIsAConduit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bIsAConduit = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAConduit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBakedAnimationState), &Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bIsAConduit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bIsAConduit_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bIsAConduit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_FullyBlendedNotify_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_FullyBlendedNotify = { UE4CodeGen_Private::EPropertyClass::Int, "FullyBlendedNotify", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, FullyBlendedNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_FullyBlendedNotify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_FullyBlendedNotify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EndNotify_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EndNotify = { UE4CodeGen_Private::EPropertyClass::Int, "EndNotify", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, EndNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EndNotify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EndNotify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StartNotify_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StartNotify = { UE4CodeGen_Private::EPropertyClass::Int, "StartNotify", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, StartNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StartNotify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StartNotify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateRootNodeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The root node index (into the AnimNodeProperties array of the UAnimBlueprintGeneratedClass)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateRootNodeIndex = { UE4CodeGen_Private::EPropertyClass::Int, "StateRootNodeIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, StateRootNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateRootNodeIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateRootNodeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_Transitions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Set of legal transitions out of this state; already in priority order" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_Transitions = { UE4CodeGen_Private::EPropertyClass::Array, "Transitions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, Transitions), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_Transitions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_Transitions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_Transitions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Transitions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBakedStateExitTransition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The name of this state" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateName = { UE4CodeGen_Private::EPropertyClass::Name, "StateName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedAnimationState, StateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakedAnimationState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bAlwaysResetOnEntry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_PlayerNodeIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_PlayerNodeIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EntryRuleNodeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bIsAConduit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_FullyBlendedNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EndNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StartNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateRootNodeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_Transitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_Transitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BakedAnimationState",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBakedAnimationState),
		alignof(FBakedAnimationState),
		Z_Construct_UScriptStruct_FBakedAnimationState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBakedAnimationState_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BakedAnimationState"), sizeof(FBakedAnimationState), Get_Z_Construct_UScriptStruct_FBakedAnimationState_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBakedAnimationState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBakedAnimationState_CRC() { return 1750975966U; }
class UScriptStruct* FBakedStateExitTransition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBakedStateExitTransition_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedStateExitTransition, Z_Construct_UPackage__Script_Engine(), TEXT("BakedStateExitTransition"), sizeof(FBakedStateExitTransition), Get_Z_Construct_UScriptStruct_FBakedStateExitTransition_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBakedStateExitTransition(FBakedStateExitTransition::StaticStruct, TEXT("/Script/Engine"), TEXT("BakedStateExitTransition"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBakedStateExitTransition
{
	FScriptStruct_Engine_StaticRegisterNativesFBakedStateExitTransition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BakedStateExitTransition")),new UScriptStruct::TCppStructOps<FBakedStateExitTransition>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBakedStateExitTransition;
	struct Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoseEvaluatorLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PoseEvaluatorLinks;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PoseEvaluatorLinks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticRemainingTimeRule_MetaData[];
#endif
		static void NewProp_bAutomaticRemainingTimeRule_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticRemainingTimeRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDesiredTransitionReturnValue_MetaData[];
#endif
		static void NewProp_bDesiredTransitionReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDesiredTransitionReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransitionIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomResultNodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustomResultNodeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanTakeDelegateIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CanTakeDelegateIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedStateExitTransition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_PoseEvaluatorLinks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_PoseEvaluatorLinks = { UE4CodeGen_Private::EPropertyClass::Array, "PoseEvaluatorLinks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedStateExitTransition, PoseEvaluatorLinks), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_PoseEvaluatorLinks_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_PoseEvaluatorLinks_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_PoseEvaluatorLinks_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "PoseEvaluatorLinks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bAutomaticRemainingTimeRule_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Automatic Transition Rule based on animation remaining time." },
	};
#endif
	void Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bAutomaticRemainingTimeRule_SetBit(void* Obj)
	{
		((FBakedStateExitTransition*)Obj)->bAutomaticRemainingTimeRule = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bAutomaticRemainingTimeRule = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutomaticRemainingTimeRule", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBakedStateExitTransition), &Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bAutomaticRemainingTimeRule_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bAutomaticRemainingTimeRule_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bAutomaticRemainingTimeRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bDesiredTransitionReturnValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "What the transition rule node needs to return to take this transition (for bidirectional transitions)" },
	};
#endif
	void Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bDesiredTransitionReturnValue_SetBit(void* Obj)
	{
		((FBakedStateExitTransition*)Obj)->bDesiredTransitionReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bDesiredTransitionReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bDesiredTransitionReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FBakedStateExitTransition), &Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bDesiredTransitionReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bDesiredTransitionReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bDesiredTransitionReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_TransitionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The index into the machine table of transitions" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_TransitionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TransitionIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedStateExitTransition, TransitionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_TransitionIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_TransitionIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CustomResultNodeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The blend graph result node index" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CustomResultNodeIndex = { UE4CodeGen_Private::EPropertyClass::Int, "CustomResultNodeIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedStateExitTransition, CustomResultNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CustomResultNodeIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CustomResultNodeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CanTakeDelegateIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The node property index for this rule" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CanTakeDelegateIndex = { UE4CodeGen_Private::EPropertyClass::Int, "CanTakeDelegateIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBakedStateExitTransition, CanTakeDelegateIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CanTakeDelegateIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CanTakeDelegateIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_PoseEvaluatorLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_PoseEvaluatorLinks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bAutomaticRemainingTimeRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bDesiredTransitionReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_TransitionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CustomResultNodeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CanTakeDelegateIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BakedStateExitTransition",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBakedStateExitTransition),
		alignof(FBakedStateExitTransition),
		Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBakedStateExitTransition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBakedStateExitTransition_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BakedStateExitTransition"), sizeof(FBakedStateExitTransition), Get_Z_Construct_UScriptStruct_FBakedStateExitTransition_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBakedStateExitTransition_CRC() { return 623646818U; }
class UScriptStruct* FAnimationTransitionBetweenStates::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationTransitionBetweenStates"), sizeof(FAnimationTransitionBetweenStates), Get_Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationTransitionBetweenStates(FAnimationTransitionBetweenStates::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationTransitionBetweenStates"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationTransitionBetweenStates
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationTransitionBetweenStates()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationTransitionBetweenStates")),new UScriptStruct::TCppStructOps<FAnimationTransitionBetweenStates>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationTransitionBetweenStates;
	struct Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogicType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogicType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlendProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterruptNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterruptNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrossfadeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrossfadeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextState_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NextState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousState_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviousState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "This represents a baked transition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationTransitionBetweenStates>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_LogicType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_LogicType = { UE4CodeGen_Private::EPropertyClass::Byte, "LogicType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, LogicType), Z_Construct_UEnum_Engine_ETransitionLogicType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_LogicType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_LogicType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendProfile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendProfile = { UE4CodeGen_Private::EPropertyClass::Object, "BlendProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendProfile_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CustomCurve = { UE4CodeGen_Private::EPropertyClass::Object, "CustomCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, CustomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CustomCurve_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendMode = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, BlendMode), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendMode_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_InterruptNotify_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_InterruptNotify = { UE4CodeGen_Private::EPropertyClass::Int, "InterruptNotify", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, InterruptNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_InterruptNotify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_InterruptNotify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_EndNotify_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_EndNotify = { UE4CodeGen_Private::EPropertyClass::Int, "EndNotify", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, EndNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_EndNotify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_EndNotify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_StartNotify_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_StartNotify = { UE4CodeGen_Private::EPropertyClass::Int, "StartNotify", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, StartNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_StartNotify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_StartNotify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CrossfadeDuration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CrossfadeDuration = { UE4CodeGen_Private::EPropertyClass::Float, "CrossfadeDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, CrossfadeDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CrossfadeDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CrossfadeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_NextState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Transition-only: State being transitioned to" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_NextState = { UE4CodeGen_Private::EPropertyClass::Int, "NextState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, NextState), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_NextState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_NextState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_PreviousState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Transition-only: State being transitioned from" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_PreviousState = { UE4CodeGen_Private::EPropertyClass::Int, "PreviousState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, PreviousState), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_PreviousState_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_PreviousState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_LogicType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CustomCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_InterruptNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_EndNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_StartNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CrossfadeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_NextState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_PreviousState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimationStateBase,
		&NewStructOps,
		"AnimationTransitionBetweenStates",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimationTransitionBetweenStates),
		alignof(FAnimationTransitionBetweenStates),
		Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationTransitionBetweenStates"), sizeof(FAnimationTransitionBetweenStates), Get_Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_CRC() { return 3457464305U; }
class UScriptStruct* FAnimationState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationState_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationState, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationState"), sizeof(FAnimationState), Get_Z_Construct_UScriptStruct_FAnimationState_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationState(FAnimationState::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationState"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationState
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationState")),new UScriptStruct::TCppStructOps<FAnimationState>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationState;
	struct Z_Construct_UScriptStruct_FAnimationState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullyBlendedNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FullyBlendedNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNotify_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartNotify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateRootNodeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StateRootNodeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transitions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transitions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_FullyBlendedNotify_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The index of the notify to fire when this state is fully entered (weight within the machine becomes one)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_FullyBlendedNotify = { UE4CodeGen_Private::EPropertyClass::Int, "FullyBlendedNotify", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationState, FullyBlendedNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_FullyBlendedNotify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_FullyBlendedNotify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_EndNotify_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The index of the notify to fire when this state is finished exiting (weight within the machine becomes zero)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_EndNotify = { UE4CodeGen_Private::EPropertyClass::Int, "EndNotify", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationState, EndNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_EndNotify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_EndNotify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StartNotify_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The index of the notify to fire when this state is first entered (weight within the machine becomes non-zero)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StartNotify = { UE4CodeGen_Private::EPropertyClass::Int, "StartNotify", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationState, StartNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StartNotify_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StartNotify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StateRootNodeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The root node index (into the AnimNodeProperties array of the UAnimBlueprintGeneratedClass)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StateRootNodeIndex = { UE4CodeGen_Private::EPropertyClass::Int, "StateRootNodeIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationState, StateRootNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StateRootNodeIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StateRootNodeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_Transitions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Set of legal transitions out of this state; already in priority order" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_Transitions = { UE4CodeGen_Private::EPropertyClass::Array, "Transitions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationState, Transitions), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_Transitions_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_Transitions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_Transitions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Transitions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAnimationTransitionRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_FullyBlendedNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_EndNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StartNotify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StateRootNodeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_Transitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_Transitions_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimationStateBase,
		&NewStructOps,
		"AnimationState",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimationState),
		alignof(FAnimationState),
		Z_Construct_UScriptStruct_FAnimationState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationState_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationState_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationState_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationState"), sizeof(FAnimationState), Get_Z_Construct_UScriptStruct_FAnimationState_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationState_CRC() { return 1627284484U; }
class UScriptStruct* FAnimationStateBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationStateBase_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationStateBase, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationStateBase"), sizeof(FAnimationStateBase), Get_Z_Construct_UScriptStruct_FAnimationStateBase_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationStateBase(FAnimationStateBase::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationStateBase"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationStateBase
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationStateBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationStateBase")),new UScriptStruct::TCppStructOps<FAnimationStateBase>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationStateBase;
	struct Z_Construct_UScriptStruct_FAnimationStateBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "This is the base class that both baked states and transitions use" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationStateBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationStateBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateBase_Statics::NewProp_StateName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The name of this state" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationStateBase_Statics::NewProp_StateName = { UE4CodeGen_Private::EPropertyClass::Name, "StateName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationStateBase, StateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateBase_Statics::NewProp_StateName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateBase_Statics::NewProp_StateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateBase_Statics::NewProp_StateName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationStateBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationStateBase",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimationStateBase),
		alignof(FAnimationStateBase),
		Z_Construct_UScriptStruct_FAnimationStateBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateBase_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateBase_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationStateBase_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationStateBase"), sizeof(FAnimationStateBase), Get_Z_Construct_UScriptStruct_FAnimationStateBase_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationStateBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationStateBase_CRC() { return 2160646165U; }
class UScriptStruct* FAnimationTransitionRule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAnimationTransitionRule_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationTransitionRule, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationTransitionRule"), sizeof(FAnimationTransitionRule), Get_Z_Construct_UScriptStruct_FAnimationTransitionRule_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationTransitionRule(FAnimationTransitionRule::StaticStruct, TEXT("/Script/Engine"), TEXT("AnimationTransitionRule"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAnimationTransitionRule
{
	FScriptStruct_Engine_StaticRegisterNativesFAnimationTransitionRule()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationTransitionRule")),new UScriptStruct::TCppStructOps<FAnimationTransitionRule>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAnimationTransitionRule;
	struct Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransitionIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionReturnVal_MetaData[];
#endif
		static void NewProp_TransitionReturnVal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TransitionReturnVal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuleToExecute_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RuleToExecute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "This structure represents a baked transition rule inside a state" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationTransitionRule>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TransitionIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionRule, TransitionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionReturnVal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "What RuleToExecute must return to take transition (for bidirectional transitions)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionReturnVal_SetBit(void* Obj)
	{
		((FAnimationTransitionRule*)Obj)->TransitionReturnVal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionReturnVal = { UE4CodeGen_Private::EPropertyClass::Bool, "TransitionReturnVal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FAnimationTransitionRule), &Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionReturnVal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionReturnVal_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionReturnVal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_RuleToExecute_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_RuleToExecute = { UE4CodeGen_Private::EPropertyClass::Name, "RuleToExecute", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FAnimationTransitionRule, RuleToExecute), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_RuleToExecute_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_RuleToExecute_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionReturnVal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_RuleToExecute,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationTransitionRule",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAnimationTransitionRule),
		alignof(FAnimationTransitionRule),
		Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationTransitionRule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationTransitionRule_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationTransitionRule"), sizeof(FAnimationTransitionRule), Get_Z_Construct_UScriptStruct_FAnimationTransitionRule_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationTransitionRule_CRC() { return 2035675949U; }
	void UAnimStateMachineTypes::StaticRegisterNativesUAnimStateMachineTypes()
	{
	}
	UClass* Z_Construct_UClass_UAnimStateMachineTypes_NoRegister()
	{
		return UAnimStateMachineTypes::StaticClass();
	}
	struct Z_Construct_UClass_UAnimStateMachineTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimStateMachineTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateMachineTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimStateMachineTypes.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimStateMachineTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimStateMachineTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimStateMachineTypes_Statics::ClassParams = {
		&UAnimStateMachineTypes::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimStateMachineTypes_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimStateMachineTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimStateMachineTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimStateMachineTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimStateMachineTypes, 2494979812);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimStateMachineTypes(Z_Construct_UClass_UAnimStateMachineTypes, &UAnimStateMachineTypes::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimStateMachineTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimStateMachineTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
