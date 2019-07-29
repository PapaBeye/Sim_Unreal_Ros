// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/Pawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_AddControllerPitchInput();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_AddControllerRollInput();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_AddControllerYawInput();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_AddMovementInput();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_ConsumeMovementInputVector();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetBaseAimRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetController();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetControlRotation();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetLastMovementInputVector();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetMovementBaseActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetNavAgentLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_GetPendingMovementInputVector();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_IsControlled();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_IsLocallyControlled();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_IsMoveInputIgnored();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_IsPlayerControlled();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_K2_GetMovementInputVector();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_LaunchPawn();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_OnRep_Controller();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_OnRep_PlayerState();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_PawnMakeNoise();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_ReceivePossessed();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_ReceiveUnpossessed();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration();
	ENGINE_API UFunction* Z_Construct_UFunction_APawn_SpawnDefaultController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoPossessAI();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoReceiveInput();
	ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();
// End Cross Module References
	static FName NAME_APawn_ReceivePossessed = FName(TEXT("ReceivePossessed"));
	void APawn::ReceivePossessed(AController* NewController)
	{
		Pawn_eventReceivePossessed_Parms Parms;
		Parms.NewController=NewController;
		ProcessEvent(FindFunctionChecked(NAME_APawn_ReceivePossessed),&Parms);
	}
	static FName NAME_APawn_ReceiveUnpossessed = FName(TEXT("ReceiveUnpossessed"));
	void APawn::ReceiveUnpossessed(AController* OldController)
	{
		Pawn_eventReceiveUnpossessed_Parms Parms;
		Parms.OldController=OldController;
		ProcessEvent(FindFunctionChecked(NAME_APawn_ReceiveUnpossessed),&Parms);
	}
	void APawn::StaticRegisterNativesAPawn()
	{
		UClass* Class = APawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddControllerPitchInput", &APawn::execAddControllerPitchInput },
			{ "AddControllerRollInput", &APawn::execAddControllerRollInput },
			{ "AddControllerYawInput", &APawn::execAddControllerYawInput },
			{ "AddMovementInput", &APawn::execAddMovementInput },
			{ "ConsumeMovementInputVector", &APawn::execConsumeMovementInputVector },
			{ "DetachFromControllerPendingDestroy", &APawn::execDetachFromControllerPendingDestroy },
			{ "GetBaseAimRotation", &APawn::execGetBaseAimRotation },
			{ "GetController", &APawn::execGetController },
			{ "GetControlRotation", &APawn::execGetControlRotation },
			{ "GetLastMovementInputVector", &APawn::execGetLastMovementInputVector },
			{ "GetMovementBaseActor", &APawn::execGetMovementBaseActor },
			{ "GetMovementComponent", &APawn::execGetMovementComponent },
			{ "GetNavAgentLocation", &APawn::execGetNavAgentLocation },
			{ "GetPendingMovementInputVector", &APawn::execGetPendingMovementInputVector },
			{ "IsControlled", &APawn::execIsControlled },
			{ "IsLocallyControlled", &APawn::execIsLocallyControlled },
			{ "IsMoveInputIgnored", &APawn::execIsMoveInputIgnored },
			{ "IsPlayerControlled", &APawn::execIsPlayerControlled },
			{ "K2_GetMovementInputVector", &APawn::execK2_GetMovementInputVector },
			{ "LaunchPawn", &APawn::execLaunchPawn },
			{ "OnRep_Controller", &APawn::execOnRep_Controller },
			{ "OnRep_PlayerState", &APawn::execOnRep_PlayerState },
			{ "PawnMakeNoise", &APawn::execPawnMakeNoise },
			{ "SetCanAffectNavigationGeneration", &APawn::execSetCanAffectNavigationGeneration },
			{ "SpawnDefaultController", &APawn::execSpawnDefaultController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics
	{
		struct Pawn_eventAddControllerPitchInput_Parms
		{
			float Val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::NewProp_Val = { UE4CodeGen_Private::EPropertyClass::Float, "Val", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventAddControllerPitchInput_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Keywords", "up down addpitch" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Add input (affecting Pitch) to the Controller's ControlRotation, if it is a local PlayerController.\nThis value is multiplied by the PlayerController's InputPitchScale value.\n@param Val Amount to add to Pitch. This value is multiplied by the PlayerController's InputPitchScale value.\n@see PlayerController::InputPitchScale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "AddControllerPitchInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Pawn_eventAddControllerPitchInput_Parms), Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_AddControllerPitchInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_AddControllerRollInput_Statics
	{
		struct Pawn_eventAddControllerRollInput_Parms
		{
			float Val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::NewProp_Val = { UE4CodeGen_Private::EPropertyClass::Float, "Val", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventAddControllerRollInput_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Keywords", "addroll" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Add input (affecting Roll) to the Controller's ControlRotation, if it is a local PlayerController.\nThis value is multiplied by the PlayerController's InputRollScale value.\n@param Val Amount to add to Roll. This value is multiplied by the PlayerController's InputRollScale value.\n@see PlayerController::InputRollScale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "AddControllerRollInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Pawn_eventAddControllerRollInput_Parms), Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_AddControllerRollInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_AddControllerYawInput_Statics
	{
		struct Pawn_eventAddControllerYawInput_Parms
		{
			float Val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::NewProp_Val = { UE4CodeGen_Private::EPropertyClass::Float, "Val", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventAddControllerYawInput_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Keywords", "left right turn addyaw" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Add input (affecting Yaw) to the Controller's ControlRotation, if it is a local PlayerController.\nThis value is multiplied by the PlayerController's InputYawScale value.\n@param Val Amount to add to Yaw. This value is multiplied by the PlayerController's InputYawScale value.\n@see PlayerController::InputYawScale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "AddControllerYawInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Pawn_eventAddControllerYawInput_Parms), Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_AddControllerYawInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_AddMovementInput_Statics
	{
		struct Pawn_eventAddMovementInput_Parms
		{
			FVector WorldDirection;
			float ScaleValue;
			bool bForce;
		};
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((Pawn_eventAddMovementInput_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_bForce = { UE4CodeGen_Private::EPropertyClass::Bool, "bForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventAddMovementInput_Parms), &Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_ScaleValue = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventAddMovementInput_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_WorldDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventAddMovementInput_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_AddMovementInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_ScaleValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_WorldDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_AddMovementInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "CPP_Default_bForce", "false" },
		{ "CPP_Default_ScaleValue", "1.000000" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Add movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'. If ScaleValue < 0, movement will be in the opposite direction.\nBase Pawn classes won't automatically apply movement, it's up to the user to do so in a Tick event. Subclasses such as Character and DefaultPawn automatically handle this input and move.\n\n@param WorldDirection        Direction in world space to apply input\n@param ScaleValue            Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value, while -1.0 would reverse the direction.\n@param bForce                        If true always add the input, ignoring the result of IsMoveInputIgnored().\n@see GetPendingMovementInputVector(), GetLastMovementInputVector(), ConsumeMovementInputVector()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_AddMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "AddMovementInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(Pawn_eventAddMovementInput_Parms), Z_Construct_UFunction_APawn_AddMovementInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_AddMovementInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_AddMovementInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_AddMovementInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_AddMovementInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_AddMovementInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics
	{
		struct Pawn_eventConsumeMovementInputVector_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventConsumeMovementInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Keywords", "ConsumeInput" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Returns the pending input vector and resets it to zero.\nThis should be used during a movement update (by the Pawn or PawnMovementComponent) to prevent accumulation of control input between frames.\nCopies the pending input vector to the saved input vector (GetLastMovementInputVector()).\n@return The pending input vector." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "ConsumeMovementInputVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(Pawn_eventConsumeMovementInputVector_Parms), Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_ConsumeMovementInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Keywords", "Delete" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Call this function to detach safely pawn from its controller, knowing that we will be destroyed soon." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "DetachFromControllerPendingDestroy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics
	{
		struct Pawn_eventGetBaseAimRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetBaseAimRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Return the aim rotation for the Pawn.\nIf we have a controller, by default we aim at the player's 'eyes' direction\nthat is by default the Pawn rotation for AI, and camera (crosshair) rotation for human players." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetBaseAimRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820400, sizeof(Pawn_eventGetBaseAimRotation_Parms), Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetBaseAimRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetController_Statics
	{
		struct Pawn_eventGetController_Parms
		{
			AController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_GetController_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetController_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Returns controller for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Pawn_eventGetController_Parms), Z_Construct_UFunction_APawn_GetController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetController_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetController_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_GetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetControlRotation_Statics
	{
		struct Pawn_eventGetControlRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_GetControlRotation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetControlRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetControlRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetControlRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetControlRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Get the rotation of the Controller, often the 'view' rotation of this Pawn." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetControlRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(Pawn_eventGetControlRotation_Parms), Z_Construct_UFunction_APawn_GetControlRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetControlRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetControlRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetControlRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_GetControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics
	{
		struct Pawn_eventGetLastMovementInputVector_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetLastMovementInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Keywords", "GetMovementInput GetInput" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Return the last input vector in world space that was processed by ConsumeMovementInputVector(), which is usually done by the Pawn or PawnMovementComponent.\nAny user that needs to know about the input that last affected movement should use this function.\nFor example an animation update would want to use this, since by default the order of updates in a frame is:\nPlayerController (device input) -> MovementComponent -> Pawn -> Mesh (animations)\n\n@return The last input vector in world space that was processed by ConsumeMovementInputVector().\n@see AddMovementInput(), GetPendingMovementInputVector(), ConsumeMovementInputVector()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetLastMovementInputVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(Pawn_eventGetLastMovementInputVector_Parms), Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetLastMovementInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics
	{
		struct Pawn_eventGetMovementBaseActor_Parms
		{
			const APawn* Pawn;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetMovementBaseActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::NewProp_Pawn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::NewProp_Pawn = { UE4CodeGen_Private::EPropertyClass::Object, "Pawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetMovementBaseActor_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::NewProp_Pawn_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::NewProp_Pawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Gets the owning actor of the Movement Base Component on which the pawn is standing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetMovementBaseActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(Pawn_eventGetMovementBaseActor_Parms), Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetMovementBaseActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetMovementComponent_Statics
	{
		struct Pawn_eventGetMovementComponent_Parms
		{
			UPawnMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_GetMovementComponent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetMovementComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "Tooltip", "Return our PawnMovementComponent, if we have one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetMovementComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(Pawn_eventGetMovementComponent_Parms), Z_Construct_UFunction_APawn_GetMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetMovementComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetMovementComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_GetMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics
	{
		struct Pawn_eventGetNavAgentLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetNavAgentLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Basically retrieved pawn's location on navmesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetNavAgentLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820400, sizeof(Pawn_eventGetNavAgentLocation_Parms), Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetNavAgentLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics
	{
		struct Pawn_eventGetPendingMovementInputVector_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventGetPendingMovementInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Keywords", "GetMovementInput GetInput" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Return the pending input vector in world space. This is the most up-to-date value of the input vector, pending ConsumeMovementInputVector() which clears it,\nUsually only a PawnMovementComponent will want to read this value, or the Pawn itself if it is responsible for movement.\n\n@return The pending input vector in world space.\n@see AddMovementInput(), GetLastMovementInputVector(), ConsumeMovementInputVector()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "GetPendingMovementInputVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(Pawn_eventGetPendingMovementInputVector_Parms), Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetPendingMovementInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_IsControlled_Statics
	{
		struct Pawn_eventIsControlled_Parms
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
	void Z_Construct_UFunction_APawn_IsControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pawn_eventIsControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_IsControlled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventIsControlled_Parms), &Z_Construct_UFunction_APawn_IsControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_IsControlled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_IsControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_IsControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "See if this actor is currently being controlled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_IsControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "IsControlled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Pawn_eventIsControlled_Parms), Z_Construct_UFunction_APawn_IsControlled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_IsControlled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_IsControlled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_IsControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_IsControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_IsControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_IsLocallyControlled_Statics
	{
		struct Pawn_eventIsLocallyControlled_Parms
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
	void Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pawn_eventIsLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventIsLocallyControlled_Parms), &Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "@return true if controlled by a local (not network) Controller." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "IsLocallyControlled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(Pawn_eventIsLocallyControlled_Parms), Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_IsLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics
	{
		struct Pawn_eventIsMoveInputIgnored_Parms
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
	void Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pawn_eventIsMoveInputIgnored_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventIsMoveInputIgnored_Parms), &Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Helper to see if move input is ignored. If our controller is a PlayerController, checks Controller->IsMoveInputIgnored()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "IsMoveInputIgnored", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(Pawn_eventIsMoveInputIgnored_Parms), Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_IsMoveInputIgnored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_IsPlayerControlled_Statics
	{
		struct Pawn_eventIsPlayerControlled_Parms
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
	void Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pawn_eventIsPlayerControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventIsPlayerControlled_Parms), &Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "@return true if controlled by a human player (possessed by a PlayerController)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "IsPlayerControlled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(Pawn_eventIsPlayerControlled_Parms), Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_IsPlayerControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_K2_GetMovementInputVector_Statics
	{
		struct Pawn_eventK2_GetMovementInputVector_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_K2_GetMovementInputVector_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Pawn_eventK2_GetMovementInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_K2_GetMovementInputVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_K2_GetMovementInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_K2_GetMovementInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetMovementInputVector has been deprecated, use either GetPendingMovementInputVector or GetLastMovementInputVector" },
		{ "DisplayName", "GetMovementInputVector" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ScriptName", "GetMovementInputVector" },
		{ "ToolTip", "(Deprecated) Return the input vector in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_K2_GetMovementInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "K2_GetMovementInputVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(Pawn_eventK2_GetMovementInputVector_Parms), Z_Construct_UFunction_APawn_K2_GetMovementInputVector_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_K2_GetMovementInputVector_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_K2_GetMovementInputVector_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_K2_GetMovementInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_K2_GetMovementInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_K2_GetMovementInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_LaunchPawn_Statics
	{
		struct Pawn_eventLaunchPawn_Parms
		{
			FVector LaunchVelocity;
			bool bXYOverride;
			bool bZOverride;
		};
		static void NewProp_bZOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bZOverride;
		static void NewProp_bXYOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bXYOverride;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APawn_LaunchPawn_Statics::NewProp_bZOverride_SetBit(void* Obj)
	{
		((Pawn_eventLaunchPawn_Parms*)Obj)->bZOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_LaunchPawn_Statics::NewProp_bZOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "bZOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventLaunchPawn_Parms), &Z_Construct_UFunction_APawn_LaunchPawn_Statics::NewProp_bZOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APawn_LaunchPawn_Statics::NewProp_bXYOverride_SetBit(void* Obj)
	{
		((Pawn_eventLaunchPawn_Parms*)Obj)->bXYOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_LaunchPawn_Statics::NewProp_bXYOverride = { UE4CodeGen_Private::EPropertyClass::Bool, "bXYOverride", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventLaunchPawn_Parms), &Z_Construct_UFunction_APawn_LaunchPawn_Statics::NewProp_bXYOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_LaunchPawn_Statics::NewProp_LaunchVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "LaunchVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventLaunchPawn_Parms, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_LaunchPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_LaunchPawn_Statics::NewProp_bZOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_LaunchPawn_Statics::NewProp_bXYOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_LaunchPawn_Statics::NewProp_LaunchVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_LaunchPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Character.LaunchCharacter instead" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_LaunchPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "LaunchPawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Pawn_eventLaunchPawn_Parms), Z_Construct_UFunction_APawn_LaunchPawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_LaunchPawn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_LaunchPawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_LaunchPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_LaunchPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_LaunchPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_OnRep_Controller_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_OnRep_Controller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Called when Controller is replicated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_OnRep_Controller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "OnRep_Controller", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_OnRep_Controller_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_OnRep_Controller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_OnRep_Controller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_OnRep_Controller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_OnRep_PlayerState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_OnRep_PlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "PlayerState Replication Notification Callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_OnRep_PlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "OnRep_PlayerState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_OnRep_PlayerState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_OnRep_PlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_OnRep_PlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_OnRep_PlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_PawnMakeNoise_Statics
	{
		struct Pawn_eventPawnMakeNoise_Parms
		{
			float Loudness;
			FVector NoiseLocation;
			bool bUseNoiseMakerLocation;
			AActor* NoiseMaker;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseMaker;
		static void NewProp_bUseNoiseMakerLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseNoiseMakerLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Loudness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_NoiseMaker = { UE4CodeGen_Private::EPropertyClass::Object, "NoiseMaker", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventPawnMakeNoise_Parms, NoiseMaker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_bUseNoiseMakerLocation_SetBit(void* Obj)
	{
		((Pawn_eventPawnMakeNoise_Parms*)Obj)->bUseNoiseMakerLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_bUseNoiseMakerLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseNoiseMakerLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventPawnMakeNoise_Parms), &Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_bUseNoiseMakerLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_NoiseLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NoiseLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventPawnMakeNoise_Parms, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_Loudness = { UE4CodeGen_Private::EPropertyClass::Float, "Loudness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventPawnMakeNoise_Parms, Loudness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_NoiseMaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_bUseNoiseMakerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_NoiseLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_Loudness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "CPP_Default_bUseNoiseMakerLocation", "true" },
		{ "CPP_Default_NoiseMaker", "None" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Inform AIControllers that you've made a noise they might hear (they are sent a HearNoise message if they have bHearNoises==true)\nThe instigator of this sound is the pawn which is used to call MakeNoise.\n\n@param Loudness - is the relative loudness of this noise (range 0.0 to 1.0).  Directly affects the hearing range specified by the AI's HearingThreshold.\n@param NoiseLocation - Position of noise source.  If zero vector, use the actor's location.\n@param bUseNoiseMakerLocation - If true, use the location of the NoiseMaker rather than NoiseLocation.  If false, use NoiseLocation.\n@param NoiseMaker - Which actor is the source of the noise.  Not to be confused with the Noise Instigator, which is responsible for the noise (and is the pawn on which this function is called).  If not specified, the pawn instigating the noise will be used as the NoiseMaker" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "PawnMakeNoise", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820405, sizeof(Pawn_eventPawnMakeNoise_Parms), Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_PawnMakeNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_ReceivePossessed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_ReceivePossessed_Statics::NewProp_NewController = { UE4CodeGen_Private::EPropertyClass::Object, "NewController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventReceivePossessed_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_ReceivePossessed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_ReceivePossessed_Statics::NewProp_NewController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_ReceivePossessed_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Possessed" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Event called when the Pawn is possessed by a Controller (normally only occurs on the server/standalone)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_ReceivePossessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "ReceivePossessed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Pawn_eventReceivePossessed_Parms), Z_Construct_UFunction_APawn_ReceivePossessed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_ReceivePossessed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_ReceivePossessed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_ReceivePossessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_ReceivePossessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_ReceivePossessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::NewProp_OldController = { UE4CodeGen_Private::EPropertyClass::Object, "OldController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Pawn_eventReceiveUnpossessed_Parms, OldController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::NewProp_OldController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Unpossessed" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Event called when the Pawn is no longer possessed by a Controller." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "ReceiveUnpossessed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Pawn_eventReceiveUnpossessed_Parms), Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_ReceiveUnpossessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics
	{
		struct Pawn_eventSetCanAffectNavigationGeneration_Parms
		{
			bool bNewValue;
			bool bForceUpdate;
		};
		static void NewProp_bForceUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceUpdate;
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bForceUpdate_SetBit(void* Obj)
	{
		((Pawn_eventSetCanAffectNavigationGeneration_Parms*)Obj)->bForceUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bForceUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceUpdate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventSetCanAffectNavigationGeneration_Parms), &Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bForceUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((Pawn_eventSetCanAffectNavigationGeneration_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Pawn_eventSetCanAffectNavigationGeneration_Parms), &Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bForceUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bForceUpdate" },
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_bForceUpdate", "false" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Use SetCanAffectNavigationGeneration to change this value at runtime.\nNote that calling this function at runtime will result in any navigation change only if runtime navigation generation is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "SetCanAffectNavigationGeneration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Pawn_eventSetCanAffectNavigationGeneration_Parms), Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_SpawnDefaultController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_SpawnDefaultController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Spawn default controller for this Pawn, and get possessed by it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_SpawnDefaultController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, "SpawnDefaultController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_SpawnDefaultController_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APawn_SpawnDefaultController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_SpawnDefaultController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APawn_SpawnDefaultController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APawn_NoRegister()
	{
		return APawn::StaticClass();
	}
	struct Z_Construct_UClass_APawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastControlInputVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastControlInputVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlInputVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlInputVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHitBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastHitBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AIControllerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteViewPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RemoteViewPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoPossessAI_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AutoPossessAI;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoPossessAI_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoPossessPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AutoPossessPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseEyeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseEyeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanAffectNavigationGeneration_MetaData[];
#endif
		static void NewProp_bCanAffectNavigationGeneration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanAffectNavigationGeneration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationRoll_MetaData[];
#endif
		static void NewProp_bUseControllerRotationRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationYaw_MetaData[];
#endif
		static void NewProp_bUseControllerRotationYaw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationPitch_MetaData[];
#endif
		static void NewProp_bUseControllerRotationPitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationPitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APawn_AddControllerPitchInput, "AddControllerPitchInput" }, // 335521227
		{ &Z_Construct_UFunction_APawn_AddControllerRollInput, "AddControllerRollInput" }, // 819785547
		{ &Z_Construct_UFunction_APawn_AddControllerYawInput, "AddControllerYawInput" }, // 218100487
		{ &Z_Construct_UFunction_APawn_AddMovementInput, "AddMovementInput" }, // 2362950711
		{ &Z_Construct_UFunction_APawn_ConsumeMovementInputVector, "ConsumeMovementInputVector" }, // 2307988224
		{ &Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy, "DetachFromControllerPendingDestroy" }, // 2018254519
		{ &Z_Construct_UFunction_APawn_GetBaseAimRotation, "GetBaseAimRotation" }, // 2970564357
		{ &Z_Construct_UFunction_APawn_GetController, "GetController" }, // 2812772627
		{ &Z_Construct_UFunction_APawn_GetControlRotation, "GetControlRotation" }, // 3464899507
		{ &Z_Construct_UFunction_APawn_GetLastMovementInputVector, "GetLastMovementInputVector" }, // 217365580
		{ &Z_Construct_UFunction_APawn_GetMovementBaseActor, "GetMovementBaseActor" }, // 3688672724
		{ &Z_Construct_UFunction_APawn_GetMovementComponent, "GetMovementComponent" }, // 2952698441
		{ &Z_Construct_UFunction_APawn_GetNavAgentLocation, "GetNavAgentLocation" }, // 590357215
		{ &Z_Construct_UFunction_APawn_GetPendingMovementInputVector, "GetPendingMovementInputVector" }, // 262596563
		{ &Z_Construct_UFunction_APawn_IsControlled, "IsControlled" }, // 1527497592
		{ &Z_Construct_UFunction_APawn_IsLocallyControlled, "IsLocallyControlled" }, // 1238144243
		{ &Z_Construct_UFunction_APawn_IsMoveInputIgnored, "IsMoveInputIgnored" }, // 1474059402
		{ &Z_Construct_UFunction_APawn_IsPlayerControlled, "IsPlayerControlled" }, // 1343720540
		{ &Z_Construct_UFunction_APawn_K2_GetMovementInputVector, "K2_GetMovementInputVector" }, // 421330251
		{ &Z_Construct_UFunction_APawn_LaunchPawn, "LaunchPawn" }, // 1648322198
		{ &Z_Construct_UFunction_APawn_OnRep_Controller, "OnRep_Controller" }, // 1141422137
		{ &Z_Construct_UFunction_APawn_OnRep_PlayerState, "OnRep_PlayerState" }, // 928986953
		{ &Z_Construct_UFunction_APawn_PawnMakeNoise, "PawnMakeNoise" }, // 1447162641
		{ &Z_Construct_UFunction_APawn_ReceivePossessed, "ReceivePossessed" }, // 2064334377
		{ &Z_Construct_UFunction_APawn_ReceiveUnpossessed, "ReceiveUnpossessed" }, // 916383206
		{ &Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration, "SetCanAffectNavigationGeneration" }, // 4239063973
		{ &Z_Construct_UFunction_APawn_SpawnDefaultController, "SpawnDefaultController" }, // 2970842062
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameFramework/Pawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "A Pawn is an actor that can be 'possessed' and receive input from a controller." },
		{ "ToolTip", "Pawn is the base class of all actors that can be possessed by players or AI.\nThey are the physical representations of players and creatures in a level.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_LastControlInputVector_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "The last control input vector that was processed by ConsumeMovementInputVector().\n@see GetLastMovementInputVector()" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_LastControlInputVector = { UE4CodeGen_Private::EPropertyClass::Struct, "LastControlInputVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(APawn, LastControlInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_LastControlInputVector_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_LastControlInputVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_ControlInputVector_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Accumulated control input vector, stored in world space. This is the pending input, which is cleared (zeroed) once consumed.\n@see GetPendingMovementInputVector(), AddMovementInput()" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_ControlInputVector = { UE4CodeGen_Private::EPropertyClass::Struct, "ControlInputVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(APawn, ControlInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_ControlInputVector_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_ControlInputVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Controller currently possessing this Actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000100000020, 1, "OnRep_Controller", STRUCT_OFFSET(APawn, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_Controller_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_LastHitBy_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Controller of the last Actor that caused us damage." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_LastHitBy = { UE4CodeGen_Private::EPropertyClass::Object, "LastHitBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002014, 1, nullptr, STRUCT_OFFSET(APawn, LastHitBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_LastHitBy_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_LastHitBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "If Pawn is possessed by a player, points to its Player State.  Needed for network play as controllers are not replicated to clients." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_PlayerState = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000034, 1, "OnRep_PlayerState", STRUCT_OFFSET(APawn, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_PlayerState_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_AIControllerClass_MetaData[] = {
		{ "Category", "Pawn" },
		{ "DisplayName", "AI Controller Class" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Default class to use when pawn is controlled by AI." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_AIControllerClass = { UE4CodeGen_Private::EPropertyClass::Class, "AIControllerClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(APawn, AIControllerClass), Z_Construct_UClass_AController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_AIControllerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_AIControllerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_RemoteViewPitch_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Replicated so we can see where remote clients are looking." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APawn_Statics::NewProp_RemoteViewPitch = { UE4CodeGen_Private::EPropertyClass::Byte, "RemoteViewPitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(APawn, RemoteViewPitch), nullptr, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_RemoteViewPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_RemoteViewPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessAI_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Determines when the Pawn creates and is possessed by an AI Controller (on level start, when spawned, etc).\nOnly possible if AIControllerClass is set, and ignored if AutoPossessPlayer is enabled.\n@see AutoPossessPlayer" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessAI = { UE4CodeGen_Private::EPropertyClass::Enum, "AutoPossessAI", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APawn, AutoPossessAI), Z_Construct_UEnum_Engine_EAutoPossessAI, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessAI_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessAI_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessAI_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessPlayer_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Determines which PlayerController, if any, should automatically possess the pawn when the level starts or when the pawn is spawned.\n@see AutoPossessAI" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessPlayer = { UE4CodeGen_Private::EPropertyClass::Byte, "AutoPossessPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APawn, AutoPossessPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_BaseEyeHeight_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Base eye height above collision center." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_BaseEyeHeight = { UE4CodeGen_Private::EPropertyClass::Float, "BaseEyeHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APawn, BaseEyeHeight), METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_BaseEyeHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_BaseEyeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_bCanAffectNavigationGeneration_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "If set to false (default) given pawn instance will never affect navigation generation.\n    Setting it to true will result in using regular AActor's navigation relevancy\n    calculation to check if this pawn instance should affect navigation generation\n    Use SetCanAffectNavigationGeneration to change this value at runtime.\n    Note that modifying this value at runtime will result in any navigation change only if runtime navigation generation is enabled." },
	};
#endif
	void Z_Construct_UClass_APawn_Statics::NewProp_bCanAffectNavigationGeneration_SetBit(void* Obj)
	{
		((APawn*)Obj)->bCanAffectNavigationGeneration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_bCanAffectNavigationGeneration = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanAffectNavigationGeneration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APawn), &Z_Construct_UClass_APawn_Statics::NewProp_bCanAffectNavigationGeneration_SetBit, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_bCanAffectNavigationGeneration_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_bCanAffectNavigationGeneration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationRoll_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "If true, this Pawn's roll will be updated to match the Controller's ControlRotation roll, if controlled by a PlayerController." },
	};
#endif
	void Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationRoll_SetBit(void* Obj)
	{
		((APawn*)Obj)->bUseControllerRotationRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationRoll = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseControllerRotationRoll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APawn), &Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationRoll_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationYaw_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "If true, this Pawn's yaw will be updated to match the Controller's ControlRotation yaw, if controlled by a PlayerController." },
	};
#endif
	void Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationYaw_SetBit(void* Obj)
	{
		((APawn*)Obj)->bUseControllerRotationYaw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationYaw = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseControllerRotationYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APawn), &Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationYaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationPitch_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "If true, this Pawn's pitch will be updated to match the Controller's ControlRotation pitch, if controlled by a PlayerController." },
	};
#endif
	void Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationPitch_SetBit(void* Obj)
	{
		((APawn*)Obj)->bUseControllerRotationPitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationPitch = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseControllerRotationPitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(APawn), &Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationPitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_LastControlInputVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_ControlInputVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_LastHitBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_PlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_AIControllerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_RemoteViewPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessAI_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_BaseEyeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_bCanAffectNavigationGeneration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationPitch,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(APawn, INavAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APawn_Statics::ClassParams = {
		&APawn::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APawn, 2772126252);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawn(Z_Construct_UClass_APawn, &APawn::StaticClass, TEXT("/Script/Engine"), TEXT("APawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
