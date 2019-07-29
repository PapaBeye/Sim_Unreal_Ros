// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/ExponentialHeightFogComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExponentialHeightFogComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale();
	ENGINE_API UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution();
// End Cross Module References
	void UExponentialHeightFogComponent::StaticRegisterNativesUExponentialHeightFogComponent()
	{
		UClass* Class = UExponentialHeightFogComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDirectionalInscatteringColor", &UExponentialHeightFogComponent::execSetDirectionalInscatteringColor },
			{ "SetDirectionalInscatteringExponent", &UExponentialHeightFogComponent::execSetDirectionalInscatteringExponent },
			{ "SetDirectionalInscatteringStartDistance", &UExponentialHeightFogComponent::execSetDirectionalInscatteringStartDistance },
			{ "SetFogCutoffDistance", &UExponentialHeightFogComponent::execSetFogCutoffDistance },
			{ "SetFogDensity", &UExponentialHeightFogComponent::execSetFogDensity },
			{ "SetFogHeightFalloff", &UExponentialHeightFogComponent::execSetFogHeightFalloff },
			{ "SetFogInscatteringColor", &UExponentialHeightFogComponent::execSetFogInscatteringColor },
			{ "SetFogMaxOpacity", &UExponentialHeightFogComponent::execSetFogMaxOpacity },
			{ "SetFullyDirectionalInscatteringColorDistance", &UExponentialHeightFogComponent::execSetFullyDirectionalInscatteringColorDistance },
			{ "SetInscatteringColorCubemap", &UExponentialHeightFogComponent::execSetInscatteringColorCubemap },
			{ "SetInscatteringColorCubemapAngle", &UExponentialHeightFogComponent::execSetInscatteringColorCubemapAngle },
			{ "SetInscatteringTextureTint", &UExponentialHeightFogComponent::execSetInscatteringTextureTint },
			{ "SetNonDirectionalInscatteringColorDistance", &UExponentialHeightFogComponent::execSetNonDirectionalInscatteringColorDistance },
			{ "SetStartDistance", &UExponentialHeightFogComponent::execSetStartDistance },
			{ "SetVolumetricFog", &UExponentialHeightFogComponent::execSetVolumetricFog },
			{ "SetVolumetricFogAlbedo", &UExponentialHeightFogComponent::execSetVolumetricFogAlbedo },
			{ "SetVolumetricFogDistance", &UExponentialHeightFogComponent::execSetVolumetricFogDistance },
			{ "SetVolumetricFogEmissive", &UExponentialHeightFogComponent::execSetVolumetricFogEmissive },
			{ "SetVolumetricFogExtinctionScale", &UExponentialHeightFogComponent::execSetVolumetricFogExtinctionScale },
			{ "SetVolumetricFogScatteringDistribution", &UExponentialHeightFogComponent::execSetVolumetricFogScatteringDistribution },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics
	{
		struct ExponentialHeightFogComponent_eventSetDirectionalInscatteringColor_Parms
		{
			FLinearColor Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetDirectionalInscatteringColor_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetDirectionalInscatteringColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ExponentialHeightFogComponent_eventSetDirectionalInscatteringColor_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics
	{
		struct ExponentialHeightFogComponent_eventSetDirectionalInscatteringExponent_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetDirectionalInscatteringExponent_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetDirectionalInscatteringExponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetDirectionalInscatteringExponent_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics
	{
		struct ExponentialHeightFogComponent_eventSetDirectionalInscatteringStartDistance_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetDirectionalInscatteringStartDistance_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetDirectionalInscatteringStartDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetDirectionalInscatteringStartDistance_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics
	{
		struct ExponentialHeightFogComponent_eventSetFogCutoffDistance_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogCutoffDistance_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetFogCutoffDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetFogCutoffDistance_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics
	{
		struct ExponentialHeightFogComponent_eventSetFogDensity_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogDensity_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetFogDensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetFogDensity_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics
	{
		struct ExponentialHeightFogComponent_eventSetFogHeightFalloff_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogHeightFalloff_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetFogHeightFalloff", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetFogHeightFalloff_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics
	{
		struct ExponentialHeightFogComponent_eventSetFogInscatteringColor_Parms
		{
			FLinearColor Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogInscatteringColor_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetFogInscatteringColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ExponentialHeightFogComponent_eventSetFogInscatteringColor_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics
	{
		struct ExponentialHeightFogComponent_eventSetFogMaxOpacity_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogMaxOpacity_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetFogMaxOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetFogMaxOpacity_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics
	{
		struct ExponentialHeightFogComponent_eventSetFullyDirectionalInscatteringColorDistance_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFullyDirectionalInscatteringColorDistance_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetFullyDirectionalInscatteringColorDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetFullyDirectionalInscatteringColorDistance_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics
	{
		struct ExponentialHeightFogComponent_eventSetInscatteringColorCubemap_Parms
		{
			UTextureCube* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Object, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetInscatteringColorCubemap_Parms, Value), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetInscatteringColorCubemap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetInscatteringColorCubemap_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics
	{
		struct ExponentialHeightFogComponent_eventSetInscatteringColorCubemapAngle_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetInscatteringColorCubemapAngle_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetInscatteringColorCubemapAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetInscatteringColorCubemapAngle_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics
	{
		struct ExponentialHeightFogComponent_eventSetInscatteringTextureTint_Parms
		{
			FLinearColor Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Struct, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetInscatteringTextureTint_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetInscatteringTextureTint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ExponentialHeightFogComponent_eventSetInscatteringTextureTint_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics
	{
		struct ExponentialHeightFogComponent_eventSetNonDirectionalInscatteringColorDistance_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetNonDirectionalInscatteringColorDistance_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetNonDirectionalInscatteringColorDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetNonDirectionalInscatteringColorDistance_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics
	{
		struct ExponentialHeightFogComponent_eventSetStartDistance_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetStartDistance_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetStartDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetStartDistance_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFog_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ExponentialHeightFogComponent_eventSetVolumetricFog_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFog_Parms), &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetVolumetricFog", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFog_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFogAlbedo_Parms
		{
			FColor NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Struct, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogAlbedo_Parms, NewValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetVolumetricFogAlbedo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFogAlbedo_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFogDistance_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogDistance_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetVolumetricFogDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFogDistance_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFogEmissive_Parms
		{
			FLinearColor NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Struct, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogEmissive_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetVolumetricFogEmissive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFogEmissive_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFogExtinctionScale_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogExtinctionScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetVolumetricFogExtinctionScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFogExtinctionScale_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFogScatteringDistribution_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogScatteringDistribution_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, "SetVolumetricFogScatteringDistribution", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFogScatteringDistribution_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister()
	{
		return UExponentialHeightFogComponent::StaticClass();
	}
	struct Z_Construct_UClass_UExponentialHeightFogComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightColorsWithFogInscatteringColors_MetaData[];
#endif
		static void NewProp_bOverrideLightColorsWithFogInscatteringColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightColorsWithFogInscatteringColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogStaticLightingScatteringIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogStaticLightingScatteringIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogExtinctionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogExtinctionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogEmissive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VolumetricFogEmissive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogAlbedo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VolumetricFogAlbedo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogScatteringDistribution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogScatteringDistribution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableVolumetricFog_MetaData[];
#endif
		static void NewProp_bEnableVolumetricFog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableVolumetricFog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogCutoffDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogCutoffDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogMaxOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogMaxOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogHeightFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogHeightFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionalInscatteringColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringStartDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringStartDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonDirectionalInscatteringColorDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonDirectionalInscatteringColorDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullyDirectionalInscatteringColorDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullyDirectionalInscatteringColorDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatteringTextureTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InscatteringTextureTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatteringColorCubemapAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InscatteringColorCubemapAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatteringColorCubemap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InscatteringColorCubemap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogInscatteringColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FogInscatteringColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogDensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExponentialHeightFogComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExponentialHeightFogComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor, "SetDirectionalInscatteringColor" }, // 1733380417
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent, "SetDirectionalInscatteringExponent" }, // 1213288107
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance, "SetDirectionalInscatteringStartDistance" }, // 2919786245
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance, "SetFogCutoffDistance" }, // 2849441441
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity, "SetFogDensity" }, // 4256018955
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff, "SetFogHeightFalloff" }, // 1072327860
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor, "SetFogInscatteringColor" }, // 2238432790
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity, "SetFogMaxOpacity" }, // 1136253265
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance, "SetFullyDirectionalInscatteringColorDistance" }, // 4216505715
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap, "SetInscatteringColorCubemap" }, // 258264062
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle, "SetInscatteringColorCubemapAngle" }, // 600800665
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint, "SetInscatteringTextureTint" }, // 3428332943
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance, "SetNonDirectionalInscatteringColorDistance" }, // 3255225326
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance, "SetStartDistance" }, // 3612903655
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog, "SetVolumetricFog" }, // 3196371762
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo, "SetVolumetricFogAlbedo" }, // 3119598839
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance, "SetVolumetricFogDistance" }, // 1390387538
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive, "SetVolumetricFogEmissive" }, // 684140104
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale, "SetVolumetricFogExtinctionScale" }, // 4016275116
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution, "SetVolumetricFogScatteringDistribution" }, // 166245826
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ExponentialHeightFogComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Used to create fogging effects such as clouds but with a density that is related to the height of the fog." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Whether to use FogInscatteringColor for the Sky Light volumetric scattering color and DirectionalInscatteringColor for the Directional Light scattering color.\nMake sure your directional light has 'Atmosphere Sun Light' enabled!\nEnabling this allows Volumetric fog to better match Height fog in the distance, but produces non-physical volumetric lighting that may not match surface lighting." },
	};
#endif
	void Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors_SetBit(void* Obj)
	{
		((UExponentialHeightFogComponent*)Obj)->bOverrideLightColorsWithFogInscatteringColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideLightColorsWithFogInscatteringColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UExponentialHeightFogComponent), &Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogStaticLightingScatteringIntensity_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "DisplayName", "Static Lighting Scattering Intensity" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogStaticLightingScatteringIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "VolumetricFogStaticLightingScatteringIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogStaticLightingScatteringIntensity), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogStaticLightingScatteringIntensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogStaticLightingScatteringIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogDistance_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "DisplayName", "View Distance" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Distance over which volumetric fog should be computed.  Larger values extend the effect into the distance but expose under-sampling artifacts in details." },
		{ "UIMax", "10000" },
		{ "UIMin", "1000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogDistance = { UE4CodeGen_Private::EPropertyClass::Float, "VolumetricFogDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogDistance), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogExtinctionScale_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "DisplayName", "Extinction Scale" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Scales the height fog particle extinction amount used by volumetric fog.  Values larger than 1 cause fog particles everywhere absorb more light." },
		{ "UIMax", "10" },
		{ "UIMin", ".1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogExtinctionScale = { UE4CodeGen_Private::EPropertyClass::Float, "VolumetricFogExtinctionScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogExtinctionScale), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogExtinctionScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogExtinctionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogEmissive_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "DisplayName", "Emissive" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Light emitted by height fog.  This is a density so more light is emitted the further you are looking through the fog.\nIn most cases skylight is a better choice, however right now volumetric fog does not support precomputed lighting,\nSo stationary skylights are unshadowed and static skylights don't affect volumetric fog at all." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogEmissive = { UE4CodeGen_Private::EPropertyClass::Struct, "VolumetricFogEmissive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogEmissive), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogEmissive_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogEmissive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogAlbedo_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "DisplayName", "Albedo" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "The height fog particle reflectiveness used by volumetric fog.\nWater particles in air have an albedo near white, while dust has slightly darker value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogAlbedo = { UE4CodeGen_Private::EPropertyClass::Struct, "VolumetricFogAlbedo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogAlbedo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogAlbedo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogAlbedo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "DisplayName", "Scattering Distribution" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Controls the scattering phase function - how much incoming light scatters in various directions.\nA distribution value of 0 scatters equally in all directions, while .9 scatters predominantly in the light direction.\nIn order to have visible volumetric fog light shafts from the side, the distribution will need to be closer to 0." },
		{ "UIMax", ".9" },
		{ "UIMin", "-.9" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogScatteringDistribution = { UE4CodeGen_Private::EPropertyClass::Float, "VolumetricFogScatteringDistribution", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogScatteringDistribution), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "DisplayName", "Volumetric Fog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Whether to enable Volumetric fog.  Scalability settings control the resolution of the fog simulation.\nNote that Volumetric fog currently does not support StartDistance, FogMaxOpacity and FogCutoffDistance.\nVolumetric fog also can't match exponential height fog in general as exponential height fog has non-physical behavior." },
	};
#endif
	void Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog_SetBit(void* Obj)
	{
		((UExponentialHeightFogComponent*)Obj)->bEnableVolumetricFog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableVolumetricFog", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UExponentialHeightFogComponent), &Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogCutoffDistance_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Scene elements past this distance will not have fog applied.  This is useful for excluding skyboxes which already have fog baked in." },
		{ "UIMax", "20000000" },
		{ "UIMin", "100000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogCutoffDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FogCutoffDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, FogCutoffDistance), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogCutoffDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogCutoffDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_StartDistance_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Distance from the camera that the fog will start, in world units." },
		{ "UIMax", "5000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_StartDistance = { UE4CodeGen_Private::EPropertyClass::Float, "StartDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, StartDistance), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_StartDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_StartDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogMaxOpacity_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Maximum opacity of the fog.\nA value of 1 means the fog can become fully opaque at a distance and replace scene color completely,\nA value of 0 means the fog color will not be factored in at all." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogMaxOpacity = { UE4CodeGen_Private::EPropertyClass::Float, "FogMaxOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, FogMaxOpacity), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogMaxOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogMaxOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogHeightFalloff_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Height density factor, controls how the density increases as height decreases.\nSmaller values make the visible transition larger." },
		{ "UIMax", "2" },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogHeightFalloff = { UE4CodeGen_Private::EPropertyClass::Float, "FogHeightFalloff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, FogHeightFalloff), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogHeightFalloff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogHeightFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringColor_MetaData[] = {
		{ "Category", "DirectionalInscattering" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Controls the color of the directional inscattering, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DirectionalInscatteringColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, DirectionalInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData[] = {
		{ "Category", "DirectionalInscattering" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Controls the start distance from the viewer of the directional inscattering, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringStartDistance = { UE4CodeGen_Private::EPropertyClass::Float, "DirectionalInscatteringStartDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, DirectionalInscatteringStartDistance), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringExponent_MetaData[] = {
		{ "Category", "DirectionalInscattering" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Controls the size of the directional inscattering cone, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
		{ "UIMax", "64" },
		{ "UIMin", "2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringExponent = { UE4CodeGen_Private::EPropertyClass::Float, "DirectionalInscatteringExponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, DirectionalInscatteringExponent), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringExponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_NonDirectionalInscatteringColorDistance_MetaData[] = {
		{ "Category", "InscatteringTexture" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Distance at which only the average color of InscatteringColorCubemap should be used as Inscattering Color." },
		{ "UIMax", "1000000" },
		{ "UIMin", "1000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_NonDirectionalInscatteringColorDistance = { UE4CodeGen_Private::EPropertyClass::Float, "NonDirectionalInscatteringColorDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, NonDirectionalInscatteringColorDistance), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_NonDirectionalInscatteringColorDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_NonDirectionalInscatteringColorDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FullyDirectionalInscatteringColorDistance_MetaData[] = {
		{ "Category", "InscatteringTexture" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Distance at which InscatteringColorCubemap should be used directly for the Inscattering Color." },
		{ "UIMax", "1000000" },
		{ "UIMin", "1000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FullyDirectionalInscatteringColorDistance = { UE4CodeGen_Private::EPropertyClass::Float, "FullyDirectionalInscatteringColorDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, FullyDirectionalInscatteringColorDistance), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FullyDirectionalInscatteringColorDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FullyDirectionalInscatteringColorDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringTextureTint_MetaData[] = {
		{ "Category", "InscatteringTexture" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Tint color used when InscatteringColorCubemap is specified, for quick edits without having to reimport InscatteringColorCubemap." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringTextureTint = { UE4CodeGen_Private::EPropertyClass::Struct, "InscatteringTextureTint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, InscatteringTextureTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringTextureTint_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringTextureTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemapAngle_MetaData[] = {
		{ "Category", "InscatteringTexture" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Angle to rotate the InscatteringColorCubemap around the Z axis." },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemapAngle = { UE4CodeGen_Private::EPropertyClass::Float, "InscatteringColorCubemapAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, InscatteringColorCubemapAngle), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemapAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemapAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemap_MetaData[] = {
		{ "Category", "InscatteringTexture" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Cubemap that can be specified for fog color, which is useful to make distant, heavily fogged scene elements match the sky.\nWhen the cubemap is specified, FogInscatteringColor is ignored and Directional inscattering is disabled." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemap = { UE4CodeGen_Private::EPropertyClass::Object, "InscatteringColorCubemap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, InscatteringColorCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogInscatteringColor_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogInscatteringColor = { UE4CodeGen_Private::EPropertyClass::Struct, "FogInscatteringColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, FogInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogInscatteringColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogInscatteringColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogDensity_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Global density factor." },
		{ "UIMax", ".05" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogDensity = { UE4CodeGen_Private::EPropertyClass::Float, "FogDensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000015, 1, nullptr, STRUCT_OFFSET(UExponentialHeightFogComponent, FogDensity), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogDensity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogDensity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExponentialHeightFogComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogStaticLightingScatteringIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogExtinctionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogEmissive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogAlbedo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogScatteringDistribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogCutoffDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_StartDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogMaxOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogHeightFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringStartDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_NonDirectionalInscatteringColorDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FullyDirectionalInscatteringColorDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringTextureTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemapAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogInscatteringColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogDensity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExponentialHeightFogComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExponentialHeightFogComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::ClassParams = {
		&UExponentialHeightFogComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B030A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UExponentialHeightFogComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExponentialHeightFogComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExponentialHeightFogComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExponentialHeightFogComponent, 231528261);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExponentialHeightFogComponent(Z_Construct_UClass_UExponentialHeightFogComponent, &UExponentialHeightFogComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UExponentialHeightFogComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExponentialHeightFogComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
