// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/PhysicsConstraintComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsConstraintComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularDriveMode();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularConstraintMotion();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EConstraintFrame();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELinearConstraintMotion();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstance();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ConstraintBrokenSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstrainComponentPropName();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UPhysicsConstraintComponent::StaticRegisterNativesUPhysicsConstraintComponent()
	{
		UClass* Class = UPhysicsConstraintComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakConstraint", &UPhysicsConstraintComponent::execBreakConstraint },
			{ "GetConstraintForce", &UPhysicsConstraintComponent::execGetConstraintForce },
			{ "GetCurrentSwing1", &UPhysicsConstraintComponent::execGetCurrentSwing1 },
			{ "GetCurrentSwing2", &UPhysicsConstraintComponent::execGetCurrentSwing2 },
			{ "GetCurrentTwist", &UPhysicsConstraintComponent::execGetCurrentTwist },
			{ "IsBroken", &UPhysicsConstraintComponent::execIsBroken },
			{ "SetAngularBreakable", &UPhysicsConstraintComponent::execSetAngularBreakable },
			{ "SetAngularDriveMode", &UPhysicsConstraintComponent::execSetAngularDriveMode },
			{ "SetAngularDriveParams", &UPhysicsConstraintComponent::execSetAngularDriveParams },
			{ "SetAngularOrientationDrive", &UPhysicsConstraintComponent::execSetAngularOrientationDrive },
			{ "SetAngularOrientationTarget", &UPhysicsConstraintComponent::execSetAngularOrientationTarget },
			{ "SetAngularSwing1Limit", &UPhysicsConstraintComponent::execSetAngularSwing1Limit },
			{ "SetAngularSwing2Limit", &UPhysicsConstraintComponent::execSetAngularSwing2Limit },
			{ "SetAngularTwistLimit", &UPhysicsConstraintComponent::execSetAngularTwistLimit },
			{ "SetAngularVelocityDrive", &UPhysicsConstraintComponent::execSetAngularVelocityDrive },
			{ "SetAngularVelocityDriveSLERP", &UPhysicsConstraintComponent::execSetAngularVelocityDriveSLERP },
			{ "SetAngularVelocityDriveTwistAndSwing", &UPhysicsConstraintComponent::execSetAngularVelocityDriveTwistAndSwing },
			{ "SetAngularVelocityTarget", &UPhysicsConstraintComponent::execSetAngularVelocityTarget },
			{ "SetConstrainedComponents", &UPhysicsConstraintComponent::execSetConstrainedComponents },
			{ "SetConstraintReferenceFrame", &UPhysicsConstraintComponent::execSetConstraintReferenceFrame },
			{ "SetConstraintReferenceOrientation", &UPhysicsConstraintComponent::execSetConstraintReferenceOrientation },
			{ "SetConstraintReferencePosition", &UPhysicsConstraintComponent::execSetConstraintReferencePosition },
			{ "SetDisableCollision", &UPhysicsConstraintComponent::execSetDisableCollision },
			{ "SetLinearBreakable", &UPhysicsConstraintComponent::execSetLinearBreakable },
			{ "SetLinearDriveParams", &UPhysicsConstraintComponent::execSetLinearDriveParams },
			{ "SetLinearPositionDrive", &UPhysicsConstraintComponent::execSetLinearPositionDrive },
			{ "SetLinearPositionTarget", &UPhysicsConstraintComponent::execSetLinearPositionTarget },
			{ "SetLinearVelocityDrive", &UPhysicsConstraintComponent::execSetLinearVelocityDrive },
			{ "SetLinearVelocityTarget", &UPhysicsConstraintComponent::execSetLinearVelocityTarget },
			{ "SetLinearXLimit", &UPhysicsConstraintComponent::execSetLinearXLimit },
			{ "SetLinearYLimit", &UPhysicsConstraintComponent::execSetLinearYLimit },
			{ "SetLinearZLimit", &UPhysicsConstraintComponent::execSetLinearZLimit },
			{ "SetOrientationDriveSLERP", &UPhysicsConstraintComponent::execSetOrientationDriveSLERP },
			{ "SetOrientationDriveTwistAndSwing", &UPhysicsConstraintComponent::execSetOrientationDriveTwistAndSwing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Break this constraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "BreakConstraint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics
	{
		struct PhysicsConstraintComponent_eventGetConstraintForce_Parms
		{
			FVector OutLinearForce;
			FVector OutAngularForce;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutAngularForce;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutLinearForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::NewProp_OutAngularForce = { UE4CodeGen_Private::EPropertyClass::Struct, "OutAngularForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetConstraintForce_Parms, OutAngularForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::NewProp_OutLinearForce = { UE4CodeGen_Private::EPropertyClass::Struct, "OutLinearForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetConstraintForce_Parms, OutLinearForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::NewProp_OutAngularForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::NewProp_OutLinearForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Retrieve the constraint force most recently applied to maintain this constraint. Returns 0 forces if the constraint is not initialized or broken." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "GetConstraintForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventGetConstraintForce_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics
	{
		struct PhysicsConstraintComponent_eventGetCurrentSwing1_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetCurrentSwing1_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Gets the current Swing1 of the constraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "GetCurrentSwing1", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PhysicsConstraintComponent_eventGetCurrentSwing1_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics
	{
		struct PhysicsConstraintComponent_eventGetCurrentSwing2_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetCurrentSwing2_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Gets the current Swing2 of the constraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "GetCurrentSwing2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PhysicsConstraintComponent_eventGetCurrentSwing2_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics
	{
		struct PhysicsConstraintComponent_eventGetCurrentTwist_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventGetCurrentTwist_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Gets the current Angular Twist of the constraint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "GetCurrentTwist", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PhysicsConstraintComponent_eventGetCurrentTwist_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics
	{
		struct PhysicsConstraintComponent_eventIsBroken_Parms
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
	void Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventIsBroken_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventIsBroken_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Retrieve the status of constraint being broken." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "IsBroken", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventIsBroken_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularBreakable_Parms
		{
			bool bAngularBreakable;
			float AngularBreakThreshold;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold;
		static void NewProp_bAngularBreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_AngularBreakThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "AngularBreakThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularBreakable_Parms, AngularBreakThreshold), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_bAngularBreakable_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularBreakable_Parms*)Obj)->bAngularBreakable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_bAngularBreakable = { UE4CodeGen_Private::EPropertyClass::Bool, "bAngularBreakable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularBreakable_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_bAngularBreakable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_AngularBreakThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::NewProp_bAngularBreakable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Angular Breakable properties\n     @param bAngularBreakable                Whether it is possible to break the joint with angular force\n     @param AngularBreakThreshold    Torque needed to break the joint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularBreakable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularBreakable_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularDriveMode_Parms
		{
			TEnumAsByte<EAngularDriveMode::Type> DriveMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DriveMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::NewProp_DriveMode = { UE4CodeGen_Private::EPropertyClass::Byte, "DriveMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveMode_Parms, DriveMode), Z_Construct_UEnum_Engine_EAngularDriveMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::NewProp_DriveMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Switches the angular drive mode between SLERP and Twist And Swing\n\n     @param DriveMode        The angular drive mode to use. SLERP uses shortest spherical path, but will not work if any angular constraints are locked. Twist and Swing decomposes the path into the different angular degrees of freedom but may experience gimbal lock" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularDriveMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularDriveMode_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularDriveParams_Parms
		{
			float PositionStrength;
			float VelocityStrength;
			float InForceLimit;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InForceLimit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityStrength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_InForceLimit = { UE4CodeGen_Private::EPropertyClass::Float, "InForceLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveParams_Parms, InForceLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_VelocityStrength = { UE4CodeGen_Private::EPropertyClass::Float, "VelocityStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveParams_Parms, VelocityStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_PositionStrength = { UE4CodeGen_Private::EPropertyClass::Float, "PositionStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularDriveParams_Parms, PositionStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_InForceLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_VelocityStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::NewProp_PositionStrength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the drive params for the angular drive.\n    @param PositionStrength         Positional strength for the drive (stiffness)\n    @param VelocityStrength         Velocity strength of the drive (damping)\n    @param InForceLimit     Max force applied by the drive" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularDriveParams", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularDriveParams_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms
		{
			bool bEnableSwingDrive;
			bool bEnableTwistDrive;
		};
		static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
		static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms*)Obj)->bEnableTwistDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableTwistDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableTwistDrive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms*)Obj)->bEnableSwingDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableSwingDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSwingDrive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableTwistDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::NewProp_bEnableSwingDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetOrientationDriveTwistAndSwing instead." },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\n    @param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n    @param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularOrientationDrive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularOrientationDrive_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularOrientationTarget_Parms
		{
			FRotator InPosTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPosTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::NewProp_InPosTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::NewProp_InPosTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "InPosTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularOrientationTarget_Parms, InPosTarget), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::NewProp_InPosTarget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::NewProp_InPosTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::NewProp_InPosTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the target orientation for the angular drive.\n    @param InPosTarget              Target orientation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularOrientationTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventSetAngularOrientationTarget_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms
		{
			TEnumAsByte<EAngularConstraintMotion> MotionType;
			float Swing1LimitAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitAngle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MotionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::NewProp_Swing1LimitAngle = { UE4CodeGen_Private::EPropertyClass::Float, "Swing1LimitAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms, Swing1LimitAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::NewProp_MotionType = { UE4CodeGen_Private::EPropertyClass::Byte, "MotionType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms, MotionType), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::NewProp_Swing1LimitAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::NewProp_MotionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Angular Swing1 Motion Type\n     @param ConstraintType   New Constraint Type\n     @param Swing1LimitAngle Size of limit in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularSwing1Limit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularSwing1Limit_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms
		{
			TEnumAsByte<EAngularConstraintMotion> MotionType;
			float Swing2LimitAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitAngle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MotionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::NewProp_Swing2LimitAngle = { UE4CodeGen_Private::EPropertyClass::Float, "Swing2LimitAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms, Swing2LimitAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::NewProp_MotionType = { UE4CodeGen_Private::EPropertyClass::Byte, "MotionType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms, MotionType), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::NewProp_Swing2LimitAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::NewProp_MotionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Angular Swing2 Motion Type\n     @param ConstraintType   New Constraint Type\n     @param Swing2LimitAngle Size of limit in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularSwing2Limit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularSwing2Limit_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms
		{
			TEnumAsByte<EAngularConstraintMotion> ConstraintType;
			float TwistLimitAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TwistLimitAngle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstraintType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::NewProp_TwistLimitAngle = { UE4CodeGen_Private::EPropertyClass::Float, "TwistLimitAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms, TwistLimitAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::NewProp_ConstraintType = { UE4CodeGen_Private::EPropertyClass::Byte, "ConstraintType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms, ConstraintType), Z_Construct_UEnum_Engine_EAngularConstraintMotion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::NewProp_TwistLimitAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::NewProp_ConstraintType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Angular Twist Motion Type\n     @param ConstraintType   New Constraint Type\n     @param TwistLimitAngle  Size of limit in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularTwistLimit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularTwistLimit_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms
		{
			bool bEnableSwingDrive;
			bool bEnableTwistDrive;
		};
		static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
		static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms*)Obj)->bEnableTwistDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableTwistDrive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms*)Obj)->bEnableSwingDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSwingDrive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetAngularVelocityDriveTwistAndSwing instead." },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularVelocityDrive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDrive_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms
		{
			bool bEnableSLERP;
		};
		static void NewProp_bEnableSLERP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSLERP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms*)Obj)->bEnableSLERP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSLERP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::NewProp_bEnableSLERP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables the angular velocity slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n\n     @param bEnableSLERP             Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularVelocityDriveSLERP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveSLERP_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms
		{
			bool bEnableTwistDrive;
			bool bEnableSwingDrive;
		};
		static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
		static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms*)Obj)->bEnableSwingDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSwingDrive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms*)Obj)->bEnableTwistDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableTwistDrive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables angular velocity twist and swing drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\n     @param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n     @param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularVelocityDriveTwistAndSwing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityDriveTwistAndSwing_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics
	{
		struct PhysicsConstraintComponent_eventSetAngularVelocityTarget_Parms
		{
			FVector InVelTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVelTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::NewProp_InVelTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::NewProp_InVelTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "InVelTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetAngularVelocityTarget_Parms, InVelTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::NewProp_InVelTarget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::NewProp_InVelTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::NewProp_InVelTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the target velocity for the angular drive.\n    @param InVelTarget              Target velocity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetAngularVelocityTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventSetAngularVelocityTarget_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics
	{
		struct PhysicsConstraintComponent_eventSetConstrainedComponents_Parms
		{
			UPrimitiveComponent* Component1;
			FName BoneName1;
			UPrimitiveComponent* Component2;
			FName BoneName2;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component2;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_BoneName2 = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, BoneName2), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component2_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component2 = { UE4CodeGen_Private::EPropertyClass::Object, "Component2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, Component2), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component2_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component2_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_BoneName1 = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, BoneName1), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component1_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component1 = { UE4CodeGen_Private::EPropertyClass::Object, "Component1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms, Component1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component1_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_BoneName2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_BoneName1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::NewProp_Component1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Directly specify component to connect. Will update frames based on current position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetConstrainedComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetConstrainedComponents_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics
	{
		struct PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms
		{
			TEnumAsByte<EConstraintFrame::Type> Frame;
			FTransform RefFrame;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefFrame;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_RefFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_RefFrame = { UE4CodeGen_Private::EPropertyClass::Struct, "RefFrame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms, RefFrame), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_RefFrame_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_RefFrame_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_Frame = { UE4CodeGen_Private::EPropertyClass::Byte, "Frame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms, Frame), Z_Construct_UEnum_Engine_EConstraintFrame, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_RefFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::NewProp_Frame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Pass in reference frame in. If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetConstraintReferenceFrame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventSetConstraintReferenceFrame_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics
	{
		struct PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms
		{
			TEnumAsByte<EConstraintFrame::Type> Frame;
			FVector PriAxis;
			FVector SecAxis;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PriAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_SecAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_SecAxis = { UE4CodeGen_Private::EPropertyClass::Struct, "SecAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms, SecAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_SecAxis_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_SecAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_PriAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_PriAxis = { UE4CodeGen_Private::EPropertyClass::Struct, "PriAxis", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms, PriAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_PriAxis_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_PriAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_Frame = { UE4CodeGen_Private::EPropertyClass::Byte, "Frame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms, Frame), Z_Construct_UEnum_Engine_EConstraintFrame, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_SecAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_PriAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::NewProp_Frame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Pass in reference orientation in (maintains reference position). If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetConstraintReferenceOrientation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventSetConstraintReferenceOrientation_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics
	{
		struct PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms
		{
			TEnumAsByte<EConstraintFrame::Type> Frame;
			FVector RefPosition;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RefPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RefPosition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Frame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_RefPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_RefPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "RefPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms, RefPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_RefPosition_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_RefPosition_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_Frame = { UE4CodeGen_Private::EPropertyClass::Byte, "Frame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms, Frame), Z_Construct_UEnum_Engine_EConstraintFrame, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_RefPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::NewProp_Frame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Pass in reference position in (maintains reference orientation). If the constraint is currently active, this will set its active local pose. Otherwise the change will take affect in InitConstraint." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetConstraintReferencePosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventSetConstraintReferencePosition_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics
	{
		struct PhysicsConstraintComponent_eventSetDisableCollision_Parms
		{
			bool bDisableCollision;
		};
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetDisableCollision_Parms*)Obj)->bDisableCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::NewProp_bDisableCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableCollision", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetDisableCollision_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::NewProp_bDisableCollision,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "If true, the collision between the two rigid bodies of the constraint will be disabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetDisableCollision", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetDisableCollision_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearBreakable_Parms
		{
			bool bLinearBreakable;
			float LinearBreakThreshold;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold;
		static void NewProp_bLinearBreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_LinearBreakThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "LinearBreakThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearBreakable_Parms, LinearBreakThreshold), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_bLinearBreakable_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetLinearBreakable_Parms*)Obj)->bLinearBreakable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_bLinearBreakable = { UE4CodeGen_Private::EPropertyClass::Bool, "bLinearBreakable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetLinearBreakable_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_bLinearBreakable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_LinearBreakThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::NewProp_bLinearBreakable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the Linear Breakable properties\n     @param bLinearBreakable         Whether it is possible to break the joint with linear force\n     @param LinearBreakThreshold     Force needed to break the joint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearBreakable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetLinearBreakable_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearDriveParams_Parms
		{
			float PositionStrength;
			float VelocityStrength;
			float InForceLimit;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InForceLimit;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityStrength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionStrength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_InForceLimit = { UE4CodeGen_Private::EPropertyClass::Float, "InForceLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearDriveParams_Parms, InForceLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_VelocityStrength = { UE4CodeGen_Private::EPropertyClass::Float, "VelocityStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearDriveParams_Parms, VelocityStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_PositionStrength = { UE4CodeGen_Private::EPropertyClass::Float, "PositionStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearDriveParams_Parms, PositionStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_InForceLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_VelocityStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::NewProp_PositionStrength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the drive params for the linear drive.\n    @param PositionStrength         Positional strength for the drive (stiffness)\n    @param VelocityStrength         Velocity strength of the drive (damping)\n    @param InForceLimit     Max force applied by the drive" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearDriveParams", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetLinearDriveParams_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms
		{
			bool bEnableDriveX;
			bool bEnableDriveY;
			bool bEnableDriveZ;
		};
		static void NewProp_bEnableDriveZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveZ;
		static void NewProp_bEnableDriveY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveY;
		static void NewProp_bEnableDriveX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms*)Obj)->bEnableDriveZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDriveZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms*)Obj)->bEnableDriveY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDriveY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms*)Obj)->bEnableDriveX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDriveX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::NewProp_bEnableDriveX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables linear position drive\n\n    @param bEnableDriveX    Indicates whether the drive for the X-Axis should be enabled\n    @param bEnableDriveY    Indicates whether the drive for the Y-Axis should be enabled\n    @param bEnableDriveZ    Indicates whether the drive for the Z-Axis should be enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearPositionDrive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetLinearPositionDrive_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearPositionTarget_Parms
		{
			FVector InPosTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPosTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::NewProp_InPosTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::NewProp_InPosTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "InPosTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearPositionTarget_Parms, InPosTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::NewProp_InPosTarget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::NewProp_InPosTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::NewProp_InPosTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the target position for the linear drive.\n    @param InPosTarget              Target position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearPositionTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventSetLinearPositionTarget_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms
		{
			bool bEnableDriveX;
			bool bEnableDriveY;
			bool bEnableDriveZ;
		};
		static void NewProp_bEnableDriveZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveZ;
		static void NewProp_bEnableDriveY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveY;
		static void NewProp_bEnableDriveX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDriveX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms*)Obj)->bEnableDriveZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDriveZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms*)Obj)->bEnableDriveY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDriveY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms*)Obj)->bEnableDriveX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDriveX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::NewProp_bEnableDriveX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables linear position drive\n\n    @param bEnableDriveX    Indicates whether the drive for the X-Axis should be enabled\n    @param bEnableDriveY    Indicates whether the drive for the Y-Axis should be enabled\n    @param bEnableDriveZ    Indicates whether the drive for the Z-Axis should be enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearVelocityDrive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetLinearVelocityDrive_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearVelocityTarget_Parms
		{
			FVector InVelTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVelTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVelTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::NewProp_InVelTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::NewProp_InVelTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "InVelTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearVelocityTarget_Parms, InVelTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::NewProp_InVelTarget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::NewProp_InVelTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::NewProp_InVelTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the target velocity for the linear drive.\n    @param InVelTarget              Target velocity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearVelocityTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(PhysicsConstraintComponent_eventSetLinearVelocityTarget_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearXLimit_Parms
		{
			TEnumAsByte<ELinearConstraintMotion> ConstraintType;
			float LimitSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstraintType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::NewProp_LimitSize = { UE4CodeGen_Private::EPropertyClass::Float, "LimitSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearXLimit_Parms, LimitSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::NewProp_ConstraintType = { UE4CodeGen_Private::EPropertyClass::Byte, "ConstraintType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearXLimit_Parms, ConstraintType), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::NewProp_LimitSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::NewProp_ConstraintType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the LinearX Motion Type\n     @param ConstraintType   New Constraint Type\n     @param LimitSize                Size of limit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearXLimit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetLinearXLimit_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearYLimit_Parms
		{
			TEnumAsByte<ELinearConstraintMotion> ConstraintType;
			float LimitSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstraintType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::NewProp_LimitSize = { UE4CodeGen_Private::EPropertyClass::Float, "LimitSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearYLimit_Parms, LimitSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::NewProp_ConstraintType = { UE4CodeGen_Private::EPropertyClass::Byte, "ConstraintType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearYLimit_Parms, ConstraintType), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::NewProp_LimitSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::NewProp_ConstraintType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the LinearY Motion Type\n     @param ConstraintType   New Constraint Type\n     @param LimitSize                Size of limit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearYLimit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetLinearYLimit_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics
	{
		struct PhysicsConstraintComponent_eventSetLinearZLimit_Parms
		{
			TEnumAsByte<ELinearConstraintMotion> ConstraintType;
			float LimitSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstraintType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::NewProp_LimitSize = { UE4CodeGen_Private::EPropertyClass::Float, "LimitSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearZLimit_Parms, LimitSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::NewProp_ConstraintType = { UE4CodeGen_Private::EPropertyClass::Byte, "ConstraintType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsConstraintComponent_eventSetLinearZLimit_Parms, ConstraintType), Z_Construct_UEnum_Engine_ELinearConstraintMotion, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::NewProp_LimitSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::NewProp_ConstraintType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Sets the LinearZ Motion Type\n     @param ConstraintType   New Constraint Type\n     @param LimitSize                Size of limit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetLinearZLimit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetLinearZLimit_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics
	{
		struct PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms
		{
			bool bEnableSLERP;
		};
		static void NewProp_bEnableSLERP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSLERP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms*)Obj)->bEnableSLERP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSLERP", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::NewProp_bEnableSLERP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables the angular orientation slerp drive. Only relevant if the AngularDriveMode is set to SLERP\n\n     @param bEnableSLERP             Indicates whether the SLERP drive should be enabled. Only relevant if the AngularDriveMode is set to SLERP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetOrientationDriveSLERP", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetOrientationDriveSLERP_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics
	{
		struct PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms
		{
			bool bEnableTwistDrive;
			bool bEnableSwingDrive;
		};
		static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
		static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms*)Obj)->bEnableSwingDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSwingDrive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
	{
		((PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms*)Obj)->bEnableTwistDrive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableTwistDrive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms), &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableSwingDrive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::NewProp_bEnableTwistDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Enables/Disables angular orientation drive. Only relevant if the AngularDriveMode is set to Twist and Swing\n\n     @param bEnableSwingDrive        Indicates whether the drive for the swing axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing\n     @param bEnableTwistDrive        Indicates whether the drive for the twist axis should be enabled. Only relevant if the AngularDriveMode is set to Twist and Swing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsConstraintComponent, "SetOrientationDriveTwistAndSwing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsConstraintComponent_eventSetOrientationDriveTwistAndSwing_Parms), Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister()
	{
		return UPhysicsConstraintComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsConstraintComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstraintInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnConstraintBroken_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstraintBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentName2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintActor2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintActor2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentName1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentName1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintActor1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintActor1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsConstraintComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhysicsConstraintComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_BreakConstraint, "BreakConstraint" }, // 1510155585
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetConstraintForce, "GetConstraintForce" }, // 1746283571
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing1, "GetCurrentSwing1" }, // 2579078588
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentSwing2, "GetCurrentSwing2" }, // 3331410684
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_GetCurrentTwist, "GetCurrentTwist" }, // 587296863
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_IsBroken, "IsBroken" }, // 1001514746
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularBreakable, "SetAngularBreakable" }, // 1335913537
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveMode, "SetAngularDriveMode" }, // 3400087775
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularDriveParams, "SetAngularDriveParams" }, // 3619621806
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationDrive, "SetAngularOrientationDrive" }, // 561797499
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularOrientationTarget, "SetAngularOrientationTarget" }, // 1733853818
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing1Limit, "SetAngularSwing1Limit" }, // 1519499011
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularSwing2Limit, "SetAngularSwing2Limit" }, // 1365319516
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularTwistLimit, "SetAngularTwistLimit" }, // 3251105765
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDrive, "SetAngularVelocityDrive" }, // 1750214098
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveSLERP, "SetAngularVelocityDriveSLERP" }, // 1632629639
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityDriveTwistAndSwing, "SetAngularVelocityDriveTwistAndSwing" }, // 3991209469
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetAngularVelocityTarget, "SetAngularVelocityTarget" }, // 2058535290
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstrainedComponents, "SetConstrainedComponents" }, // 1939299436
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceFrame, "SetConstraintReferenceFrame" }, // 3759875968
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferenceOrientation, "SetConstraintReferenceOrientation" }, // 746496042
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetConstraintReferencePosition, "SetConstraintReferencePosition" }, // 3809952137
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetDisableCollision, "SetDisableCollision" }, // 1338332670
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearBreakable, "SetLinearBreakable" }, // 333109826
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearDriveParams, "SetLinearDriveParams" }, // 2352058137
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionDrive, "SetLinearPositionDrive" }, // 1670107124
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearPositionTarget, "SetLinearPositionTarget" }, // 2351636740
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityDrive, "SetLinearVelocityDrive" }, // 1704163581
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearVelocityTarget, "SetLinearVelocityTarget" }, // 1113278080
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearXLimit, "SetLinearXLimit" }, // 76288346
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearYLimit, "SetLinearYLimit" }, // 2220102278
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetLinearZLimit, "SetLinearZLimit" }, // 33360725
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveSLERP, "SetOrientationDriveSLERP" }, // 1646602605
		{ &Z_Construct_UFunction_UPhysicsConstraintComponent_SetOrientationDriveTwistAndSwing, "SetOrientationDriveTwistAndSwing" }, // 4160484222
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "HideCategories", "Activation Components|Activation Physics Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ShowCategories", "Physics|Components|PhysicsConstraint" },
		{ "ToolTip", "This is effectively a joint that allows you to connect 2 rigid bodies together. You can create different types of joints using the various parameters of this component." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintInstance_MetaData[] = {
		{ "Category", "ConstraintComponent" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "All constraint settings" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintInstance = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstraintInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintInstance), Z_Construct_UScriptStruct_FConstraintInstance, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_OnConstraintBroken_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Notification when constraint is broken." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_OnConstraintBroken = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnConstraintBroken", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintComponent, OnConstraintBroken), Z_Construct_UDelegateFunction_Engine_ConstraintBrokenSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_OnConstraintBroken_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_OnConstraintBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintSetup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintSetup = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintSetup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0012000020080008, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintSetup_DEPRECATED), Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintSetup_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName2_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Name of second component property to constrain. If Actor2 is NULL, will look within Owner.\nIf this is NULL, will use RootComponent of Actor2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName2 = { UE4CodeGen_Private::EPropertyClass::Struct, "ComponentName2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintComponent, ComponentName2), Z_Construct_UScriptStruct_FConstrainComponentPropName, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor2_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Pointer to second Actor to constrain." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor2 = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintActor2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000801, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintActor2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName1_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Name of first component property to constrain. If Actor1 is NULL, will look within Owner.\nIf this is NULL, will use RootComponent of Actor1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName1 = { UE4CodeGen_Private::EPropertyClass::Struct, "ComponentName1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintComponent, ComponentName1), Z_Construct_UScriptStruct_FConstrainComponentPropName, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor1_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintComponent.h" },
		{ "ToolTip", "Pointer to first Actor to constrain." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor1 = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintActor1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000801, 1, nullptr, STRUCT_OFFSET(UPhysicsConstraintComponent, ConstraintActor1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsConstraintComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_OnConstraintBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ComponentName1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsConstraintComponent_Statics::NewProp_ConstraintActor1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsConstraintComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsConstraintComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsConstraintComponent_Statics::ClassParams = {
		&UPhysicsConstraintComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UPhysicsConstraintComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhysicsConstraintComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsConstraintComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsConstraintComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsConstraintComponent, 537177062);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsConstraintComponent(Z_Construct_UClass_UPhysicsConstraintComponent, &UPhysicsConstraintComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsConstraintComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsConstraintComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
