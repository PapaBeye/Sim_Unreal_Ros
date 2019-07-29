// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/PhysicsHandleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsHandleComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation();
// End Cross Module References
	void UPhysicsHandleComponent::StaticRegisterNativesUPhysicsHandleComponent()
	{
		UClass* Class = UPhysicsHandleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGrabbedComponent", &UPhysicsHandleComponent::execGetGrabbedComponent },
			{ "GetTargetLocationAndRotation", &UPhysicsHandleComponent::execGetTargetLocationAndRotation },
			{ "GrabComponent", &UPhysicsHandleComponent::execGrabComponent },
			{ "GrabComponentAtLocation", &UPhysicsHandleComponent::execGrabComponentAtLocation },
			{ "GrabComponentAtLocationWithRotation", &UPhysicsHandleComponent::execGrabComponentAtLocationWithRotation },
			{ "ReleaseComponent", &UPhysicsHandleComponent::execReleaseComponent },
			{ "SetAngularDamping", &UPhysicsHandleComponent::execSetAngularDamping },
			{ "SetAngularStiffness", &UPhysicsHandleComponent::execSetAngularStiffness },
			{ "SetInterpolationSpeed", &UPhysicsHandleComponent::execSetInterpolationSpeed },
			{ "SetLinearDamping", &UPhysicsHandleComponent::execSetLinearDamping },
			{ "SetLinearStiffness", &UPhysicsHandleComponent::execSetLinearStiffness },
			{ "SetTargetLocation", &UPhysicsHandleComponent::execSetTargetLocation },
			{ "SetTargetLocationAndRotation", &UPhysicsHandleComponent::execSetTargetLocationAndRotation },
			{ "SetTargetRotation", &UPhysicsHandleComponent::execSetTargetRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics
	{
		struct PhysicsHandleComponent_eventGetGrabbedComponent_Parms
		{
			UPrimitiveComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGetGrabbedComponent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Returns the currently grabbed component, or null if nothing is grabbed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "GetGrabbedComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PhysicsHandleComponent_eventGetGrabbedComponent_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics
	{
		struct PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms
		{
			FVector TargetLocation;
			FRotator TargetRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::NewProp_TargetRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::NewProp_TargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::NewProp_TargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::NewProp_TargetLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Get the current location and rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "GetTargetLocationAndRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(PhysicsHandleComponent_eventGetTargetLocationAndRotation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics
	{
		struct PhysicsHandleComponent_eventGrabComponent_Parms
		{
			UPrimitiveComponent* Component;
			FName InBoneName;
			FVector GrabLocation;
			bool bConstrainRotation;
		};
		static void NewProp_bConstrainRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConstrainRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabLocation;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_bConstrainRotation_SetBit(void* Obj)
	{
		((PhysicsHandleComponent_eventGrabComponent_Parms*)Obj)->bConstrainRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_bConstrainRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bConstrainRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PhysicsHandleComponent_eventGrabComponent_Parms), &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_bConstrainRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_GrabLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "GrabLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponent_Parms, GrabLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_InBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "InBoneName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponent_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponent_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_bConstrainRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_GrabLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_InBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GrabComponentAtLocation or GrabComponentAtLocationWithRotation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "GrabComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(PhysicsHandleComponent_eventGrabComponent_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics
	{
		struct PhysicsHandleComponent_eventGrabComponentAtLocation_Parms
		{
			UPrimitiveComponent* Component;
			FName InBoneName;
			FVector GrabLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrabLocation;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_GrabLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "GrabLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocation_Parms, GrabLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_InBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "InBoneName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocation_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocation_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_GrabLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_InBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Grab the specified component at a given location. Does NOT constraint rotation which means the handle will pivot about GrabLocation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "GrabComponentAtLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(PhysicsHandleComponent_eventGrabComponentAtLocation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics
	{
		struct PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms
		{
			UPrimitiveComponent* Component;
			FName InBoneName;
			FVector Location;
			FRotator Rotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_InBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "InBoneName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Component = { UE4CodeGen_Private::EPropertyClass::Object, "Component", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Component_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_InBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Grab the specified component at a given location and rotation. Constrains rotation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "GrabComponentAtLocationWithRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(PhysicsHandleComponent_eventGrabComponentAtLocationWithRotation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Release the currently held component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "ReleaseComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics
	{
		struct PhysicsHandleComponent_eventSetAngularDamping_Parms
		{
			float NewAngularDamping;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewAngularDamping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::NewProp_NewAngularDamping = { UE4CodeGen_Private::EPropertyClass::Float, "NewAngularDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetAngularDamping_Parms, NewAngularDamping), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::NewProp_NewAngularDamping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set angular damping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetAngularDamping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsHandleComponent_eventSetAngularDamping_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics
	{
		struct PhysicsHandleComponent_eventSetAngularStiffness_Parms
		{
			float NewAngularStiffness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewAngularStiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::NewProp_NewAngularStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "NewAngularStiffness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetAngularStiffness_Parms, NewAngularStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::NewProp_NewAngularStiffness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set angular stiffness" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetAngularStiffness", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsHandleComponent_eventSetAngularStiffness_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics
	{
		struct PhysicsHandleComponent_eventSetInterpolationSpeed_Parms
		{
			float NewInterpolationSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewInterpolationSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::NewProp_NewInterpolationSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "NewInterpolationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetInterpolationSpeed_Parms, NewInterpolationSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::NewProp_NewInterpolationSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set interpolation speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetInterpolationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsHandleComponent_eventSetInterpolationSpeed_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics
	{
		struct PhysicsHandleComponent_eventSetLinearDamping_Parms
		{
			float NewLinearDamping;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLinearDamping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::NewProp_NewLinearDamping = { UE4CodeGen_Private::EPropertyClass::Float, "NewLinearDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetLinearDamping_Parms, NewLinearDamping), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::NewProp_NewLinearDamping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set linear damping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetLinearDamping", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsHandleComponent_eventSetLinearDamping_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics
	{
		struct PhysicsHandleComponent_eventSetLinearStiffness_Parms
		{
			float NewLinearStiffness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLinearStiffness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::NewProp_NewLinearStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "NewLinearStiffness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetLinearStiffness_Parms, NewLinearStiffness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::NewProp_NewLinearStiffness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set linear stiffness" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetLinearStiffness", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PhysicsHandleComponent_eventSetLinearStiffness_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics
	{
		struct PhysicsHandleComponent_eventSetTargetLocation_Parms
		{
			FVector NewLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::NewProp_NewLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set the target location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetTargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(PhysicsHandleComponent_eventSetTargetLocation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics
	{
		struct PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms
		{
			FVector NewLocation;
			FRotator NewRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::NewProp_NewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::NewProp_NewLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::NewProp_NewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set target location and rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetTargetLocationAndRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(PhysicsHandleComponent_eventSetTargetLocationAndRotation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics
	{
		struct PhysicsHandleComponent_eventSetTargetRotation_Parms
		{
			FRotator NewRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::NewProp_NewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PhysicsHandleComponent_eventSetTargetRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Components|PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Set the target rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsHandleComponent, "SetTargetRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(PhysicsHandleComponent_eventSetTargetRotation_Parms), Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister()
	{
		return UPhysicsHandleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsHandleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinearDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LinearDamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInterpolateTarget_MetaData[];
#endif
		static void NewProp_bInterpolateTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterpolateTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftLinearConstraint_MetaData[];
#endif
		static void NewProp_bSoftLinearConstraint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSoftLinearConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSoftAngularConstraint_MetaData[];
#endif
		static void NewProp_bSoftAngularConstraint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSoftAngularConstraint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabbedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabbedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsHandleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhysicsHandleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_GetGrabbedComponent, "GetGrabbedComponent" }, // 865197975
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_GetTargetLocationAndRotation, "GetTargetLocationAndRotation" }, // 459999565
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponent, "GrabComponent" }, // 2831252547
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocation, "GrabComponentAtLocation" }, // 2501927863
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_GrabComponentAtLocationWithRotation, "GrabComponentAtLocationWithRotation" }, // 3397439493
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_ReleaseComponent, "ReleaseComponent" }, // 871543783
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularDamping, "SetAngularDamping" }, // 2886574304
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetAngularStiffness, "SetAngularStiffness" }, // 2562975340
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetInterpolationSpeed, "SetInterpolationSpeed" }, // 1378457374
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearDamping, "SetLinearDamping" }, // 1785879474
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetLinearStiffness, "SetLinearStiffness" }, // 1075951993
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocation, "SetTargetLocation" }, // 2999487631
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetLocationAndRotation, "SetTargetLocationAndRotation" }, // 3987498946
		{ &Z_Construct_UFunction_UPhysicsHandleComponent_SetTargetRotation, "SetTargetRotation" }, // 460330547
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Utility object for moving physics objects around." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "EditCondition", "bInterpolateTarget" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "How quickly we interpolate the physics target transform" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_InterpolationSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "InterpolationSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, InterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_InterpolationSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_InterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularStiffness_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "EditCondition", "bSoftConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Angular stiffness of the handle spring" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "AngularStiffness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, AngularStiffness), METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularDamping_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "EditCondition", "bSoftConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Angular damping of the handle spring" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularDamping = { UE4CodeGen_Private::EPropertyClass::Float, "AngularDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, AngularDamping), METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearStiffness_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "EditCondition", "bSoftConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Linear stiffness of the handle spring" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "LinearStiffness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, LinearStiffness), METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearDamping_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "EditCondition", "bSoftConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Linear damping of the handle spring." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearDamping = { UE4CodeGen_Private::EPropertyClass::Float, "LinearDamping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, LinearDamping), METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearDamping_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearDamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_SetBit(void* Obj)
	{
		((UPhysicsHandleComponent*)Obj)->bInterpolateTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget = { UE4CodeGen_Private::EPropertyClass::Bool, "bInterpolateTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPhysicsHandleComponent), &Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_SetBit(void* Obj)
	{
		((UPhysicsHandleComponent*)Obj)->bSoftLinearConstraint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint = { UE4CodeGen_Private::EPropertyClass::Bool, "bSoftLinearConstraint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPhysicsHandleComponent), &Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_MetaData[] = {
		{ "Category", "PhysicsHandle" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_SetBit(void* Obj)
	{
		((UPhysicsHandleComponent*)Obj)->bSoftAngularConstraint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint = { UE4CodeGen_Private::EPropertyClass::Bool, "bSoftAngularConstraint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPhysicsHandleComponent), &Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_GrabbedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsHandleComponent.h" },
		{ "ToolTip", "Component we are currently holding" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_GrabbedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "GrabbedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080008, 1, nullptr, STRUCT_OFFSET(UPhysicsHandleComponent, GrabbedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_GrabbedComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_GrabbedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsHandleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_InterpolationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_AngularDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_LinearDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bInterpolateTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftLinearConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_bSoftAngularConstraint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHandleComponent_Statics::NewProp_GrabbedComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsHandleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsHandleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsHandleComponent_Statics::ClassParams = {
		&UPhysicsHandleComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B020A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UPhysicsHandleComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsHandleComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPhysicsHandleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsHandleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhysicsHandleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhysicsHandleComponent, 553967366);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsHandleComponent(Z_Construct_UClass_UPhysicsHandleComponent, &UPhysicsHandleComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsHandleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsHandleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
