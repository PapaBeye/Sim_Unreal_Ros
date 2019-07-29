// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionControllerComponent() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_IsTracked();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus();
// End Cross Module References
	static FName NAME_UMotionControllerComponent_OnMotionControllerUpdated = FName(TEXT("OnMotionControllerUpdated"));
	void UMotionControllerComponent::OnMotionControllerUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMotionControllerComponent_OnMotionControllerUpdated),NULL);
	}
	void UMotionControllerComponent::StaticRegisterNativesUMotionControllerComponent()
	{
		UClass* Class = UMotionControllerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetParameterValue", &UMotionControllerComponent::execGetParameterValue },
			{ "GetTrackingSource", &UMotionControllerComponent::execGetTrackingSource },
			{ "IsTracked", &UMotionControllerComponent::execIsTracked },
			{ "SetAssociatedPlayerIndex", &UMotionControllerComponent::execSetAssociatedPlayerIndex },
			{ "SetCustomDisplayMesh", &UMotionControllerComponent::execSetCustomDisplayMesh },
			{ "SetDisplayModelSource", &UMotionControllerComponent::execSetDisplayModelSource },
			{ "SetShowDeviceModel", &UMotionControllerComponent::execSetShowDeviceModel },
			{ "SetTrackingMotionSource", &UMotionControllerComponent::execSetTrackingMotionSource },
			{ "SetTrackingSource", &UMotionControllerComponent::execSetTrackingSource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics
	{
		struct MotionControllerComponent_eventGetParameterValue_Parms
		{
			FName InName;
			bool bValueFound;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static void NewProp_bValueFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValueFound;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventGetParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound_SetBit(void* Obj)
	{
		((MotionControllerComponent_eventGetParameterValue_Parms*)Obj)->bValueFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound = { UE4CodeGen_Private::EPropertyClass::Bool, "bValueFound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MotionControllerComponent_eventGetParameterValue_Parms), &Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_InName = { UE4CodeGen_Private::EPropertyClass::Name, "InName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventGetParameterValue_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_bValueFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Controller Update" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Returns the value of a custom parameter on the current in use Motion Controller (see member InUseMotionController). Only valid for the duration of OnMotionControllerUpdated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "GetParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04480401, sizeof(MotionControllerComponent_eventGetParameterValue_Parms), Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics
	{
		struct MotionControllerComponent_eventGetTrackingSource_Parms
		{
			EControllerHand ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventGetTrackingSource_Parms, ReturnValue), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the Motion Source property instead of Hand" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "GetTrackingSource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MotionControllerComponent_eventGetTrackingSource_Parms), Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics
	{
		struct MotionControllerComponent_eventIsTracked_Parms
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
	void Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionControllerComponent_eventIsTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MotionControllerComponent_eventIsTracked_Parms), &Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "MotionController" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Whether or not this component had a valid tracked device this frame" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "IsTracked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MotionControllerComponent_eventIsTracked_Parms), Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_IsTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Controller Update" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Blueprint Implementable function for reponding to updated data from a motion controller (so we can use custom paramater values from it)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "OnMotionControllerUpdated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics
	{
		struct MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms
		{
			int32 NewPlayer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer = { UE4CodeGen_Private::EPropertyClass::Int, "NewPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms, NewPlayer), METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "SetAssociatedPlayerIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MotionControllerComponent_eventSetAssociatedPlayerIndex_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics
	{
		struct MotionControllerComponent_eventSetCustomDisplayMesh_Parms
		{
			UStaticMesh* NewDisplayMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewDisplayMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::NewProp_NewDisplayMesh = { UE4CodeGen_Private::EPropertyClass::Object, "NewDisplayMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventSetCustomDisplayMesh_Parms, NewDisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::NewProp_NewDisplayMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "SetCustomDisplayMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MotionControllerComponent_eventSetCustomDisplayMesh_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics
	{
		struct MotionControllerComponent_eventSetDisplayModelSource_Parms
		{
			FName NewDisplayModelSource;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDisplayModelSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewDisplayModelSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource = { UE4CodeGen_Private::EPropertyClass::Name, "NewDisplayModelSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventSetDisplayModelSource_Parms, NewDisplayModelSource), METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "SetDisplayModelSource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MotionControllerComponent_eventSetDisplayModelSource_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics
	{
		struct MotionControllerComponent_eventSetShowDeviceModel_Parms
		{
			bool bShowControllerModel;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowControllerModel_MetaData[];
#endif
		static void NewProp_bShowControllerModel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowControllerModel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel_SetBit(void* Obj)
	{
		((MotionControllerComponent_eventSetShowDeviceModel_Parms*)Obj)->bShowControllerModel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowControllerModel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MotionControllerComponent_eventSetShowDeviceModel_Parms), &Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::NewProp_bShowControllerModel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "SetShowDeviceModel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MotionControllerComponent_eventSetShowDeviceModel_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics
	{
		struct MotionControllerComponent_eventSetTrackingMotionSource_Parms
		{
			FName NewSource;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource = { UE4CodeGen_Private::EPropertyClass::Name, "NewSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventSetTrackingMotionSource_Parms, NewSource), METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::NewProp_NewSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "SetTrackingMotionSource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MotionControllerComponent_eventSetTrackingMotionSource_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics
	{
		struct MotionControllerComponent_eventSetTrackingSource_Parms
		{
			EControllerHand NewSource;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewSource;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewSource_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource = { UE4CodeGen_Private::EPropertyClass::Enum, "NewSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MotionControllerComponent_eventSetTrackingSource_Parms, NewSource), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::NewProp_NewSource_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the Motion Source property instead of Hand" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionControllerComponent, "SetTrackingSource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MotionControllerComponent_eventSetTrackingSource_Parms), Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister()
	{
		return UMotionControllerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMotionControllerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisplayComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayMeshMaterialOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisplayMeshMaterialOverrides;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DisplayMeshMaterialOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDisplayMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomDisplayMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayModelSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisplayModelSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayDeviceModel_MetaData[];
#endif
		static void NewProp_bDisplayDeviceModel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayDeviceModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTrackingStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentTrackingStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentTrackingStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableLowLatencyUpdate_MetaData[];
#endif
		static void NewProp_bDisableLowLatencyUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableLowLatencyUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MotionSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionControllerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotionControllerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue, "GetParameterValue" }, // 869988264
		{ &Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource, "GetTrackingSource" }, // 1019961866
		{ &Z_Construct_UFunction_UMotionControllerComponent_IsTracked, "IsTracked" }, // 2750417227
		{ &Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated, "OnMotionControllerUpdated" }, // 1641470981
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex, "SetAssociatedPlayerIndex" }, // 3671919222
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetCustomDisplayMesh, "SetCustomDisplayMesh" }, // 975807147
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetDisplayModelSource, "SetDisplayModelSource" }, // 817044517
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetShowDeviceModel, "SetShowDeviceModel" }, // 1802065993
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource, "SetTrackingMotionSource" }, // 2656848970
		{ &Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource, "SetTrackingSource" }, // 1421865459
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MotionController" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "MotionControllerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Visualization" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayComponent = { UE4CodeGen_Private::EPropertyClass::Object, "DisplayComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x004000000008201c, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, DisplayComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides_MetaData[] = {
		{ "Category", "Visualization" },
		{ "editcondition", "bDisplayDeviceModel" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Material overrides for the specified display mesh." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides = { UE4CodeGen_Private::EPropertyClass::Array, "DisplayMeshMaterialOverrides", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, DisplayMeshMaterialOverrides), METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "DisplayMeshMaterialOverrides", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CustomDisplayMesh_MetaData[] = {
		{ "BlueprintSetter", "SetCustomDisplayMesh" },
		{ "Category", "Visualization" },
		{ "editcondition", "bDisplayDeviceModel" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "A mesh override that'll be displayed attached to this MotionController." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CustomDisplayMesh = { UE4CodeGen_Private::EPropertyClass::Object, "CustomDisplayMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, CustomDisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CustomDisplayMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CustomDisplayMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayModelSource_MetaData[] = {
		{ "BlueprintSetter", "SetDisplayModelSource" },
		{ "Category", "Visualization" },
		{ "editcondition", "bDisplayDeviceModel" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Determines the source of the desired model. By default, the active XR system(s) will be queried and (if available) will provide a model for the associated device. NOTE: this may fail if there's no default model; use 'Custom' to specify your own." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayModelSource = { UE4CodeGen_Private::EPropertyClass::Name, "DisplayModelSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, DisplayModelSource), METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayModelSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayModelSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel_MetaData[] = {
		{ "BlueprintSetter", "SetShowDeviceModel" },
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Used to automatically render a model associated with the set hand." },
	};
#endif
	void Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel_SetBit(void* Obj)
	{
		((UMotionControllerComponent*)Obj)->bDisplayDeviceModel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisplayDeviceModel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMotionControllerComponent), &Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_MetaData[] = {
		{ "Category", "MotionController" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "The tracking status for the device (e.g. full tracking, inertial tracking only, no tracking)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus = { UE4CodeGen_Private::EPropertyClass::Enum, "CurrentTrackingStatus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, CurrentTrackingStatus), Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_MetaData[] = {
		{ "Category", "MotionController" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "If false, render transforms within the motion controller hierarchy will be updated a second time immediately before rendering." },
	};
#endif
	void Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_SetBit(void* Obj)
	{
		((UMotionControllerComponent*)Obj)->bDisableLowLatencyUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableLowLatencyUpdate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMotionControllerComponent), &Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource_MetaData[] = {
		{ "BlueprintSetter", "SetTrackingMotionSource" },
		{ "Category", "MotionController" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource = { UE4CodeGen_Private::EPropertyClass::Name, "MotionSource", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, MotionSource), METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand_MetaData[] = {
		{ "BlueprintGetter", "GetTrackingSource" },
		{ "BlueprintSetter", "SetTrackingSource" },
		{ "Category", "MotionController" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "DEPRECATED (use MotionSource instead) Which hand this component should automatically follow" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Enum, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000004, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, Hand_DEPRECATED), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "BlueprintSetter", "SetAssociatedPlayerIndex" },
		{ "Category", "MotionController" },
		{ "ModuleRelativePath", "Public/MotionControllerComponent.h" },
		{ "ToolTip", "Which player index this motion controller should automatically follow" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex = { UE4CodeGen_Private::EPropertyClass::Int, "PlayerIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMotionControllerComponent, PlayerIndex), METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotionControllerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayMeshMaterialOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CustomDisplayMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_DisplayModelSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisplayDeviceModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_CurrentTrackingStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_MotionSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_PlayerIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionControllerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionControllerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMotionControllerComponent_Statics::ClassParams = {
		&UMotionControllerComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMotionControllerComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMotionControllerComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMotionControllerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionControllerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMotionControllerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMotionControllerComponent, 2689859121);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMotionControllerComponent(Z_Construct_UClass_UMotionControllerComponent, &UMotionControllerComponent::StaticClass, TEXT("/Script/HeadMountedDisplay"), TEXT("UMotionControllerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionControllerComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMotionControllerComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
