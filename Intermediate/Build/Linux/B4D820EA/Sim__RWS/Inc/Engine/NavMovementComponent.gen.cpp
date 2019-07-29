// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/NavMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavMovementComponent_IsCrouching();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavMovementComponent_IsFalling();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavMovementComponent_IsFlying();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavMovementComponent_IsSwimming();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMovementProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
// End Cross Module References
	void UNavMovementComponent::StaticRegisterNativesUNavMovementComponent()
	{
		UClass* Class = UNavMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsCrouching", &UNavMovementComponent::execIsCrouching },
			{ "IsFalling", &UNavMovementComponent::execIsFalling },
			{ "IsFlying", &UNavMovementComponent::execIsFlying },
			{ "IsMovingOnGround", &UNavMovementComponent::execIsMovingOnGround },
			{ "IsSwimming", &UNavMovementComponent::execIsSwimming },
			{ "StopActiveMovement", &UNavMovementComponent::execStopActiveMovement },
			{ "StopMovementKeepPathing", &UNavMovementComponent::execStopMovementKeepPathing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics
	{
		struct NavMovementComponent_eventIsCrouching_Parms
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
	void Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavMovementComponent_eventIsCrouching_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavMovementComponent_eventIsCrouching_Parms), &Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "@return true if currently crouching" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, "IsCrouching", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(NavMovementComponent_eventIsCrouching_Parms), Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavMovementComponent_IsCrouching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_IsCrouching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics
	{
		struct NavMovementComponent_eventIsFalling_Parms
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
	void Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavMovementComponent_eventIsFalling_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavMovementComponent_eventIsFalling_Parms), &Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "@return true if currently falling (not flying, in a non-fluid volume, and not on the ground)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, "IsFalling", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(NavMovementComponent_eventIsFalling_Parms), Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavMovementComponent_IsFalling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_IsFalling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics
	{
		struct NavMovementComponent_eventIsFlying_Parms
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
	void Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavMovementComponent_eventIsFlying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavMovementComponent_eventIsFlying_Parms), &Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "@return true if currently flying (moving through a non-fluid volume without resting on the ground)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, "IsFlying", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(NavMovementComponent_eventIsFlying_Parms), Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavMovementComponent_IsFlying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_IsFlying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics
	{
		struct NavMovementComponent_eventIsMovingOnGround_Parms
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
	void Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavMovementComponent_eventIsMovingOnGround_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavMovementComponent_eventIsMovingOnGround_Parms), &Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "@return true if currently moving on the ground (e.g. walking or driving)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, "IsMovingOnGround", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(NavMovementComponent_eventIsMovingOnGround_Parms), Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics
	{
		struct NavMovementComponent_eventIsSwimming_Parms
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
	void Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavMovementComponent_eventIsSwimming_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavMovementComponent_eventIsSwimming_Parms), &Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|NavMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "@return true if currently swimming (moving through a fluid volume)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, "IsSwimming", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(NavMovementComponent_eventIsSwimming_Parms), Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavMovementComponent_IsSwimming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_IsSwimming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|PawnMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Stops applying further movement (usually zeros acceleration)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, "StopActiveMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Movement" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Stops movement immediately (reset velocity) but keeps following current path" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavMovementComponent, "StopMovementKeepPathing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavMovementComponent_NoRegister()
	{
		return UNavMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathFollowingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PathFollowingComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixedBrakingDistanceForPaths_MetaData[];
#endif
		static void NewProp_bUseFixedBrakingDistanceForPaths_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixedBrakingDistanceForPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAccelerationForPaths_MetaData[];
#endif
		static void NewProp_bUseAccelerationForPaths_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAccelerationForPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateNavAgentWithOwnersCollision_MetaData[];
#endif
		static void NewProp_bUpdateNavAgentWithOwnersCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateNavAgentWithOwnersCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedPathBrakingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixedPathBrakingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavAgentProps_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NavAgentProps;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNavMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavMovementComponent_IsCrouching, "IsCrouching" }, // 2948200279
		{ &Z_Construct_UFunction_UNavMovementComponent_IsFalling, "IsFalling" }, // 1315942690
		{ &Z_Construct_UFunction_UNavMovementComponent_IsFlying, "IsFlying" }, // 164580101
		{ &Z_Construct_UFunction_UNavMovementComponent_IsMovingOnGround, "IsMovingOnGround" }, // 3483515933
		{ &Z_Construct_UFunction_UNavMovementComponent_IsSwimming, "IsSwimming" }, // 4198739509
		{ &Z_Construct_UFunction_UNavMovementComponent_StopActiveMovement, "StopActiveMovement" }, // 4262905588
		{ &Z_Construct_UFunction_UNavMovementComponent_StopMovementKeepPathing, "StopMovementKeepPathing" }, // 1373009953
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFramework/NavMovementComponent.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "NavMovementComponent defines base functionality for MovementComponents that move any 'agent' that may be involved in AI pathfinding." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_PathFollowingComp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "object implementing IPathFollowingAgentInterface. Is private to control access to it.\n    @see SetPathFollowingAgent, GetPathFollowingAgent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_PathFollowingComp = { UE4CodeGen_Private::EPropertyClass::Object, "PathFollowingComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UNavMovementComponent, PathFollowingComp), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_PathFollowingComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_PathFollowingComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_MovementState_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Expresses runtime state of character's movement. Put all temporal changes to movement properties here" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_MovementState = { UE4CodeGen_Private::EPropertyClass::Struct, "MovementState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UNavMovementComponent, MovementState), Z_Construct_UScriptStruct_FMovementProperties, METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_MovementState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_MovementState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths_MetaData[] = {
		{ "Category", "NavMovement" },
		{ "EditCondition", "bUseAccelerationForPaths" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "If set, FixedPathBrakingDistance will be used for path following deceleration" },
	};
#endif
	void Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths_SetBit(void* Obj)
	{
		((UNavMovementComponent*)Obj)->bUseFixedBrakingDistanceForPaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseFixedBrakingDistanceForPaths", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavMovementComponent), &Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths_MetaData[] = {
		{ "Category", "NavMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "If set, pathfollowing will control character movement via acceleration values. If false, it will set velocities directly." },
	};
#endif
	void Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths_SetBit(void* Obj)
	{
		((UNavMovementComponent*)Obj)->bUseAccelerationForPaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAccelerationForPaths", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000044001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavMovementComponent), &Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision_MetaData[] = {
		{ "Category", "NavMovement" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "If set to true NavAgentProps' radius and height will be updated with Owner's collision capsule size" },
	};
#endif
	void Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision_SetBit(void* Obj)
	{
		((UNavMovementComponent*)Obj)->bUpdateNavAgentWithOwnersCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateNavAgentWithOwnersCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavMovementComponent), &Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_FixedPathBrakingDistance_MetaData[] = {
		{ "Category", "NavMovement" },
		{ "EditCondition", "bUseFixedBrakingDistanceForPaths" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Braking distance override used with acceleration driven path following (bUseAccelerationForPaths)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_FixedPathBrakingDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FixedPathBrakingDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UNavMovementComponent, FixedPathBrakingDistance), METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_FixedPathBrakingDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_FixedPathBrakingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_NavAgentProps_MetaData[] = {
		{ "Category", "NavMovement" },
		{ "DisplayName", "Movement Capabilities" },
		{ "Keywords", "Nav Agent" },
		{ "ModuleRelativePath", "Classes/GameFramework/NavMovementComponent.h" },
		{ "ToolTip", "Properties that define how the component can move." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_NavAgentProps = { UE4CodeGen_Private::EPropertyClass::Struct, "NavAgentProps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UNavMovementComponent, NavAgentProps), Z_Construct_UScriptStruct_FNavAgentProperties, METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_NavAgentProps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_NavAgentProps_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_PathFollowingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_MovementState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseFixedBrakingDistanceForPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUseAccelerationForPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_bUpdateNavAgentWithOwnersCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_FixedPathBrakingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavMovementComponent_Statics::NewProp_NavAgentProps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavMovementComponent_Statics::ClassParams = {
		&UNavMovementComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A5u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UNavMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNavMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavMovementComponent, 3342948942);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavMovementComponent(Z_Construct_UClass_UNavMovementComponent, &UNavMovementComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UNavMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
