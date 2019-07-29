// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraModifier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraModifier() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraModifier_DisableModifier();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraModifier_EnableModifier();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraModifier_GetViewTarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UCameraModifier_IsDisabled();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
// End Cross Module References
	static FName NAME_UCameraModifier_BlueprintModifyCamera = FName(TEXT("BlueprintModifyCamera"));
	void UCameraModifier::BlueprintModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV)
	{
		CameraModifier_eventBlueprintModifyCamera_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.ViewLocation=ViewLocation;
		Parms.ViewRotation=ViewRotation;
		Parms.FOV=FOV;
		Parms.NewViewLocation=NewViewLocation;
		Parms.NewViewRotation=NewViewRotation;
		Parms.NewFOV=NewFOV;
		ProcessEvent(FindFunctionChecked(NAME_UCameraModifier_BlueprintModifyCamera),&Parms);
		NewViewLocation=Parms.NewViewLocation;
		NewViewRotation=Parms.NewViewRotation;
		NewFOV=Parms.NewFOV;
	}
	static FName NAME_UCameraModifier_BlueprintModifyPostProcess = FName(TEXT("BlueprintModifyPostProcess"));
	void UCameraModifier::BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings)
	{
		CameraModifier_eventBlueprintModifyPostProcess_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.PostProcessBlendWeight=PostProcessBlendWeight;
		Parms.PostProcessSettings=PostProcessSettings;
		ProcessEvent(FindFunctionChecked(NAME_UCameraModifier_BlueprintModifyPostProcess),&Parms);
		PostProcessBlendWeight=Parms.PostProcessBlendWeight;
		PostProcessSettings=Parms.PostProcessSettings;
	}
	void UCameraModifier::StaticRegisterNativesUCameraModifier()
	{
		UClass* Class = UCameraModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableModifier", &UCameraModifier::execDisableModifier },
			{ "EnableModifier", &UCameraModifier::execEnableModifier },
			{ "GetViewTarget", &UCameraModifier::execGetViewTarget },
			{ "IsDisabled", &UCameraModifier::execIsDisabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewFOV;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewViewRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewViewLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOV;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewFOV = { UE4CodeGen_Private::EPropertyClass::Float, "NewFOV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, NewFOV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewViewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewViewRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, NewViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewViewLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewViewLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, NewViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_FOV = { UE4CodeGen_Private::EPropertyClass::Float, "FOV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, FOV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_ViewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "ViewRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, ViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_ViewLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ViewLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, ViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewViewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewViewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_FOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_ViewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_ViewLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Called per tick that the modifier is active to allow Blueprinted modifiers to modify the camera's transform.\nScaling by Alpha happens after this in code, so no need to deal with that in the blueprint.\n@param       DeltaTime       Change in time since last update\n@param       ViewLocation            The current camera location.\n@param       ViewRotation            The current camera rotation.\n@param       FOV                                     The current camera fov.\n@param       NewViewLocation         (out) The modified camera location.\n@param       NewViewRotation         (out) The modified camera rotation.\n@param       NewFOV                          (out) The modified camera FOV." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, "BlueprintModifyCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08C20808, sizeof(CameraModifier_eventBlueprintModifyCamera_Parms), Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_PostProcessSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "PostProcessSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyPostProcess_Parms, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_PostProcessBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "PostProcessBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyPostProcess_Parms, PostProcessBlendWeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyPostProcess_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_PostProcessSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_PostProcessBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Called per tick that the modifier is active to allow Blueprinted modifiers to modify the camera's postprocess effects.\nScaling by Alpha happens after this in code, so no need to deal with that in the blueprint.\n@param       DeltaTime                               Change in time since last update\n@param       PostProcessBlendWeight  (out) Blend weight applied to the entire postprocess structure.\n@param       PostProcessSettings             (out) Post process structure defining what settings and values to override." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, "BlueprintModifyPostProcess", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420808, sizeof(CameraModifier_eventBlueprintModifyPostProcess_Parms), Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics
	{
		struct CameraModifier_eventDisableModifier_Parms
		{
			bool bImmediate;
		};
		static void NewProp_bImmediate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::NewProp_bImmediate_SetBit(void* Obj)
	{
		((CameraModifier_eventDisableModifier_Parms*)Obj)->bImmediate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::NewProp_bImmediate = { UE4CodeGen_Private::EPropertyClass::Bool, "bImmediate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CameraModifier_eventDisableModifier_Parms), &Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::NewProp_bImmediate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraModifier" },
		{ "CPP_Default_bImmediate", "false" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Disables this modifier.\n@param  bImmediate  - true to disable with no blend out, false (default) to allow blend out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, "DisableModifier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(CameraModifier_eventDisableModifier_Parms), Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraModifier_DisableModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraModifier" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Enables this modifier." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, "EnableModifier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraModifier_EnableModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics
	{
		struct CameraModifier_eventGetViewTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CameraModifier_eventGetViewTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraModifier" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "@return Returns the actor the camera is currently viewing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, "GetViewTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(CameraModifier_eventGetViewTarget_Parms), Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraModifier_GetViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics
	{
		struct CameraModifier_eventIsDisabled_Parms
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
	void Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraModifier_eventIsDisabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CameraModifier_eventIsDisabled_Parms), &Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraModifier" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "@return Returns true if modifier is disabled, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, "IsDisabled", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(CameraModifier_eventIsDisabled_Parms), Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraModifier_IsDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCameraModifier_NoRegister()
	{
		return UCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_UCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExclusive_MetaData[];
#endif
		static void NewProp_bExclusive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExclusive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera, "BlueprintModifyCamera" }, // 2181724210
		{ &Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess, "BlueprintModifyPostProcess" }, // 1329524070
		{ &Z_Construct_UFunction_UCameraModifier_DisableModifier, "DisableModifier" }, // 2025923995
		{ &Z_Construct_UFunction_UCameraModifier_EnableModifier, "EnableModifier" }, // 1314320241
		{ &Z_Construct_UFunction_UCameraModifier_GetViewTarget, "GetViewTarget" }, // 824878604
		{ &Z_Construct_UFunction_UCameraModifier_IsDisabled, "IsDisabled" }, // 2474656715
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Camera/CameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "A CameraModifier is a base class for objects that may adjust the final camera properties after\nbeing computed by the APlayerCameraManager (@see ModifyCamera). A CameraModifier\ncan be stateful, and is associated uniquely with a specific APlayerCameraManager." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Current blend alpha." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_Alpha = { UE4CodeGen_Private::EPropertyClass::Float, "Alpha", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002014, 1, nullptr, STRUCT_OFFSET(UCameraModifier, Alpha), METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::NewProp_Alpha_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaOutTime_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "When blending out, alpha proceeds from 1 to 0 over this time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaOutTime = { UE4CodeGen_Private::EPropertyClass::Float, "AlphaOutTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(UCameraModifier, AlphaOutTime), METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaInTime_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "When blending in, alpha proceeds from 0 to 1 over this time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaInTime = { UE4CodeGen_Private::EPropertyClass::Float, "AlphaInTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(UCameraModifier, AlphaInTime), METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaInTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::NewProp_CameraOwner_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Camera this object is associated with." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_CameraOwner = { UE4CodeGen_Private::EPropertyClass::Object, "CameraOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002014, 1, nullptr, STRUCT_OFFSET(UCameraModifier, CameraOwner), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::NewProp_CameraOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::NewProp_CameraOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Priority value that determines the order in which modifiers are applied. 0 = highest priority, 255 = lowest." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Byte, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UCameraModifier, Priority), nullptr, METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::NewProp_Priority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "If true, no other modifiers of same priority allowed." },
	};
#endif
	void Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive_SetBit(void* Obj)
	{
		((UCameraModifier*)Obj)->bExclusive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive = { UE4CodeGen_Private::EPropertyClass::Bool, "bExclusive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCameraModifier), &Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "If true, enables certain debug visualization features." },
	};
#endif
	void Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UCameraModifier*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebug", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCameraModifier), &Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_CameraOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraModifier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCameraModifier_Statics::ClassParams = {
		&UCameraModifier::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCameraModifier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraModifier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCameraModifier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCameraModifier, 3866249601);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCameraModifier(Z_Construct_UClass_UCameraModifier, &UCameraModifier::StaticClass, TEXT("/Script/Engine"), TEXT("UCameraModifier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraModifier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
