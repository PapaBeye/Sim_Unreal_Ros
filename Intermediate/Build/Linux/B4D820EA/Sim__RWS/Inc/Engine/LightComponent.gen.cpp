// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/LightComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetBloomScale();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetBloomThreshold();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetBloomTint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetIESTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetIntensity();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetLightColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionScale();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetShadowBias();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetTemperature();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetTransmission();
	ENGINE_API UFunction* Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
// End Cross Module References
	void ULightComponent::StaticRegisterNativesULightComponent()
	{
		UClass* Class = ULightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAffectDynamicIndirectLighting", &ULightComponent::execSetAffectDynamicIndirectLighting },
			{ "SetAffectTranslucentLighting", &ULightComponent::execSetAffectTranslucentLighting },
			{ "SetBloomScale", &ULightComponent::execSetBloomScale },
			{ "SetBloomThreshold", &ULightComponent::execSetBloomThreshold },
			{ "SetBloomTint", &ULightComponent::execSetBloomTint },
			{ "SetEnableLightShaftBloom", &ULightComponent::execSetEnableLightShaftBloom },
			{ "SetForceCachedShadowsForMovablePrimitives", &ULightComponent::execSetForceCachedShadowsForMovablePrimitives },
			{ "SetIESTexture", &ULightComponent::execSetIESTexture },
			{ "SetIndirectLightingIntensity", &ULightComponent::execSetIndirectLightingIntensity },
			{ "SetIntensity", &ULightComponent::execSetIntensity },
			{ "SetLightColor", &ULightComponent::execSetLightColor },
			{ "SetLightFunctionDisabledBrightness", &ULightComponent::execSetLightFunctionDisabledBrightness },
			{ "SetLightFunctionFadeDistance", &ULightComponent::execSetLightFunctionFadeDistance },
			{ "SetLightFunctionMaterial", &ULightComponent::execSetLightFunctionMaterial },
			{ "SetLightFunctionScale", &ULightComponent::execSetLightFunctionScale },
			{ "SetShadowBias", &ULightComponent::execSetShadowBias },
			{ "SetTemperature", &ULightComponent::execSetTemperature },
			{ "SetTransmission", &ULightComponent::execSetTransmission },
			{ "SetVolumetricScatteringIntensity", &ULightComponent::execSetVolumetricScatteringIntensity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics
	{
		struct LightComponent_eventSetAffectDynamicIndirectLighting_Parms
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
	void Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponent_eventSetAffectDynamicIndirectLighting_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LightComponent_eventSetAffectDynamicIndirectLighting_Parms), &Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetAffectDynamicIndirectLighting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetAffectDynamicIndirectLighting_Parms), Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics
	{
		struct LightComponent_eventSetAffectTranslucentLighting_Parms
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
	void Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponent_eventSetAffectTranslucentLighting_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LightComponent_eventSetAffectTranslucentLighting_Parms), &Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetAffectTranslucentLighting", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetAffectTranslucentLighting_Parms), Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics
	{
		struct LightComponent_eventSetBloomScale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetBloomScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetBloomScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetBloomScale_Parms), Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetBloomScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics
	{
		struct LightComponent_eventSetBloomThreshold_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetBloomThreshold_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetBloomThreshold", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetBloomThreshold_Parms), Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetBloomThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics
	{
		struct LightComponent_eventSetBloomTint_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Struct, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetBloomTint_Parms, NewValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetBloomTint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(LightComponent_eventSetBloomTint_Parms), Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetBloomTint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics
	{
		struct LightComponent_eventSetEnableLightShaftBloom_Parms
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
	void Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponent_eventSetEnableLightShaftBloom_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LightComponent_eventSetEnableLightShaftBloom_Parms), &Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetEnableLightShaftBloom", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetEnableLightShaftBloom_Parms), Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics
	{
		struct LightComponent_eventSetForceCachedShadowsForMovablePrimitives_Parms
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
	void Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponent_eventSetForceCachedShadowsForMovablePrimitives_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LightComponent_eventSetForceCachedShadowsForMovablePrimitives_Parms), &Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetForceCachedShadowsForMovablePrimitives", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetForceCachedShadowsForMovablePrimitives_Parms), Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics
	{
		struct LightComponent_eventSetIESTexture_Parms
		{
			UTextureLightProfile* NewValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Object, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetIESTexture_Parms, NewValue), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "DisplayName", "Set IES Texture" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetIESTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetIESTexture_Parms), Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetIESTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics
	{
		struct LightComponent_eventSetIndirectLightingIntensity_Parms
		{
			float NewIntensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::NewProp_NewIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "NewIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetIndirectLightingIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::NewProp_NewIntensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetIndirectLightingIntensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetIndirectLightingIntensity_Parms), Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetIntensity_Statics
	{
		struct LightComponent_eventSetIntensity_Parms
		{
			float NewIntensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::NewProp_NewIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "NewIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::NewProp_NewIntensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Set intensity of the light" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetIntensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetIntensity_Parms), Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetLightColor_Statics
	{
		struct LightComponent_eventSetLightColor_Parms
		{
			FLinearColor NewLightColor;
			bool bSRGB;
		};
		static void NewProp_bSRGB_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSRGB;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLightColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_bSRGB_SetBit(void* Obj)
	{
		((LightComponent_eventSetLightColor_Parms*)Obj)->bSRGB = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_bSRGB = { UE4CodeGen_Private::EPropertyClass::Bool, "bSRGB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LightComponent_eventSetLightColor_Parms), &Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_bSRGB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_NewLightColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLightColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightColor_Parms, NewLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_bSRGB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_NewLightColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "CPP_Default_bSRGB", "true" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Set color of the light" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetLightColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(LightComponent_eventSetLightColor_Parms), Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics
	{
		struct LightComponent_eventSetLightFunctionDisabledBrightness_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightFunctionDisabledBrightness_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetLightFunctionDisabledBrightness", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetLightFunctionDisabledBrightness_Parms), Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics
	{
		struct LightComponent_eventSetLightFunctionFadeDistance_Parms
		{
			float NewLightFunctionFadeDistance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLightFunctionFadeDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::NewProp_NewLightFunctionFadeDistance = { UE4CodeGen_Private::EPropertyClass::Float, "NewLightFunctionFadeDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightFunctionFadeDistance_Parms, NewLightFunctionFadeDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::NewProp_NewLightFunctionFadeDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetLightFunctionFadeDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetLightFunctionFadeDistance_Parms), Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics
	{
		struct LightComponent_eventSetLightFunctionMaterial_Parms
		{
			UMaterialInterface* NewLightFunctionMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewLightFunctionMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::NewProp_NewLightFunctionMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "NewLightFunctionMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightFunctionMaterial_Parms, NewLightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::NewProp_NewLightFunctionMaterial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetLightFunctionMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetLightFunctionMaterial_Parms), Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics
	{
		struct LightComponent_eventSetLightFunctionScale_Parms
		{
			FVector NewLightFunctionScale;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLightFunctionScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::NewProp_NewLightFunctionScale = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLightFunctionScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetLightFunctionScale_Parms, NewLightFunctionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::NewProp_NewLightFunctionScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetLightFunctionScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(LightComponent_eventSetLightFunctionScale_Parms), Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics
	{
		struct LightComponent_eventSetShadowBias_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Float, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetShadowBias_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetShadowBias", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetShadowBias_Parms), Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetShadowBias()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetTemperature_Statics
	{
		struct LightComponent_eventSetTemperature_Parms
		{
			float NewTemperature;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewTemperature;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::NewProp_NewTemperature = { UE4CodeGen_Private::EPropertyClass::Float, "NewTemperature", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetTemperature_Parms, NewTemperature), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::NewProp_NewTemperature,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetTemperature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetTemperature_Parms), Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetTransmission_Statics
	{
		struct LightComponent_eventSetTransmission_Parms
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
	void Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((LightComponent_eventSetTransmission_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LightComponent_eventSetTransmission_Parms), &Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetTransmission", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetTransmission_Parms), Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetTransmission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics
	{
		struct LightComponent_eventSetVolumetricScatteringIntensity_Parms
		{
			float NewIntensity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::NewProp_NewIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "NewIntensity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LightComponent_eventSetVolumetricScatteringIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::NewProp_NewIntensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, "SetVolumetricScatteringIntensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LightComponent_eventSetVolumetricScatteringIntensity_Parms), Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULightComponent_NoRegister()
	{
		return ULightComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayStartOffsetDepthScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayStartOffsetDepthScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRayTracedDistanceFieldShadows_MetaData[];
#endif
		static void NewProp_bUseRayTracedDistanceFieldShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRayTracedDistanceFieldShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloomTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloomScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BloomScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLightShaftBloom_MetaData[];
#endif
		static void NewProp_bEnableLightShaftBloom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLightShaftBloom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisabledBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisabledBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightFunctionFadeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightFunctionFadeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IESBrightnessScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IESBrightnessScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseIESBrightness_MetaData[];
#endif
		static void NewProp_bUseIESBrightness_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseIESBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IESTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IESTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightFunctionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightFunctionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightFunctionMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightFunctionMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceCachedShadowsForMovablePrimitives_MetaData[];
#endif
		static void NewProp_bForceCachedShadowsForMovablePrimitives_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceCachedShadowsForMovablePrimitives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLighting_MetaData[];
#endif
		static void NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadowsFromCinematicObjectsOnly_MetaData[];
#endif
		static void NewProp_bCastShadowsFromCinematicObjectsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadowsFromCinematicObjectsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastTranslucentShadows_MetaData[];
#endif
		static void NewProp_CastTranslucentShadows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CastTranslucentShadows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InverseSquaredFalloff_MetaData[];
#endif
		static void NewProp_InverseSquaredFalloff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InverseSquaredFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactShadowLengthInWS_MetaData[];
#endif
		static void NewProp_ContactShadowLengthInWS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ContactShadowLengthInWS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContactShadowLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ContactShadowLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowSharpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowSharpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowResolutionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowResolutionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecularScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpecularScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRoughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRoughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowMapChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShadowMapChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseTemperature_MetaData[];
#endif
		static void NewProp_bUseTemperature_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseTemperature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceFadeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceFadeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDrawDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDrawDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Temperature;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULightComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightComponent_SetAffectDynamicIndirectLighting, "SetAffectDynamicIndirectLighting" }, // 3380971042
		{ &Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting, "SetAffectTranslucentLighting" }, // 2164259717
		{ &Z_Construct_UFunction_ULightComponent_SetBloomScale, "SetBloomScale" }, // 1584058872
		{ &Z_Construct_UFunction_ULightComponent_SetBloomThreshold, "SetBloomThreshold" }, // 252097511
		{ &Z_Construct_UFunction_ULightComponent_SetBloomTint, "SetBloomTint" }, // 1027068156
		{ &Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom, "SetEnableLightShaftBloom" }, // 1032600472
		{ &Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives, "SetForceCachedShadowsForMovablePrimitives" }, // 304207753
		{ &Z_Construct_UFunction_ULightComponent_SetIESTexture, "SetIESTexture" }, // 880170862
		{ &Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity, "SetIndirectLightingIntensity" }, // 3614701364
		{ &Z_Construct_UFunction_ULightComponent_SetIntensity, "SetIntensity" }, // 361481002
		{ &Z_Construct_UFunction_ULightComponent_SetLightColor, "SetLightColor" }, // 1466948151
		{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness, "SetLightFunctionDisabledBrightness" }, // 3336870537
		{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance, "SetLightFunctionFadeDistance" }, // 108266481
		{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial, "SetLightFunctionMaterial" }, // 1176598760
		{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionScale, "SetLightFunctionScale" }, // 3169115001
		{ &Z_Construct_UFunction_ULightComponent_SetShadowBias, "SetShadowBias" }, // 1382597999
		{ &Z_Construct_UFunction_ULightComponent_SetTemperature, "SetTemperature" }, // 828799378
		{ &Z_Construct_UFunction_ULightComponent_SetTransmission, "SetTransmission" }, // 2856622209
		{ &Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity, "SetVolumetricScatteringIntensity" }, // 3541283800
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/LightComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "SerializeToFArchive", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_RayStartOffsetDepthScale_MetaData[] = {
		{ "Category", "DistanceFieldShadows" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Controls how large of an offset ray traced shadows have from the receiving surface as the camera gets further away.\nThis can be useful to hide self-shadowing artifacts from low resolution distance fields on huge static meshes." },
		{ "UIMax", ".1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_RayStartOffsetDepthScale = { UE4CodeGen_Private::EPropertyClass::Float, "RayStartOffsetDepthScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, RayStartOffsetDepthScale), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_RayStartOffsetDepthScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_RayStartOffsetDepthScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows_MetaData[] = {
		{ "Category", "DistanceFieldShadows" },
		{ "DisplayName", "RayTraced DistanceField Shadows" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Whether to use ray traced distance field area shadows.  The project setting bGenerateMeshDistanceFields must be enabled for this to have effect.\nDistance field shadows support area lights so they create soft shadows with sharp contacts.\nThey have less aliasing artifacts than standard shadowmaps, but inherit all the limitations of distance field representations (only uniform scale, no deformation).\nThese shadows have a low per-object cost (and don't depend on triangle count) so they are effective for distant shadows from a dynamic sun." },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->bUseRayTracedDistanceFieldShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseRayTracedDistanceFieldShadows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomTint_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Multiplies against scene color to create the bloom color." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomTint = { UE4CodeGen_Private::EPropertyClass::Struct, "BloomTint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, BloomTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomTint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomThreshold_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Scene color must be larger than this to create bloom in the light shafts." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "BloomThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, BloomThreshold), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomScale_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Scales the additive color." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomScale = { UE4CodeGen_Private::EPropertyClass::Float, "BloomScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, BloomScale), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "DisplayName", "Light Shaft Bloom" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Whether to render light shaft bloom from this light.\nFor directional lights, the color around the light direction will be blurred radially and added back to the scene.\nfor point lights, the color on pixels closer than the light's SourceRadius will be blurred radially and added back to the scene." },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->bEnableLightShaftBloom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableLightShaftBloom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_DisabledBrightness_MetaData[] = {
		{ "Category", "LightFunction" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Brightness factor applied to the light when the light function is specified but disabled, for example in scene captures that use SceneCapView_LitNoShadows.\nThis should be set to the average brightness of the light function material's emissive input, which should be between 0 and 1." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_DisabledBrightness = { UE4CodeGen_Private::EPropertyClass::Float, "DisabledBrightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, DisabledBrightness), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_DisabledBrightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_DisabledBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionFadeDistance_MetaData[] = {
		{ "Category", "LightFunction" },
		{ "DisplayName", "Fade Distance" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Distance at which the light function should be completely faded to DisabledBrightness.\nThis is useful for hiding aliasing from light functions applied in the distance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionFadeDistance = { UE4CodeGen_Private::EPropertyClass::Float, "LightFunctionFadeDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, LightFunctionFadeDistance), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionFadeDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionFadeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_IESBrightnessScale_MetaData[] = {
		{ "Category", "LightProfiles" },
		{ "DisplayName", "IES Intensity Scale" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Global scale for IES brightness contribution. Only available when \"Use IES Brightness\" is selected, and a valid IES profile texture is set" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_IESBrightnessScale = { UE4CodeGen_Private::EPropertyClass::Float, "IESBrightnessScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, IESBrightnessScale), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_IESBrightnessScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_IESBrightnessScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness_MetaData[] = {
		{ "Category", "LightProfiles" },
		{ "DisplayName", "Use IES Intensity" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "true: take light brightness from IES profile, false: use the light brightness - the maximum light in one direction is used to define no masking. Use with InverseSquareFalloff. Will be disabled if a valid IES profile texture is not supplied." },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->bUseIESBrightness = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseIESBrightness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_IESTexture_MetaData[] = {
		{ "Category", "LightProfiles" },
		{ "DisplayName", "IES Texture" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "IES texture (light profiles from real world measured data)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_IESTexture = { UE4CodeGen_Private::EPropertyClass::Object, "IESTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, IESTexture), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_IESTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_IESTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionScale_MetaData[] = {
		{ "AllowPreserveRatio", "true" },
		{ "Category", "LightFunction" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Scales the light function projection.  X and Y scale in the directions perpendicular to the light's direction, Z scales along the light direction." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionScale = { UE4CodeGen_Private::EPropertyClass::Struct, "LightFunctionScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, LightFunctionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionMaterial_MetaData[] = {
		{ "Category", "LightFunction" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "The light function material to be applied to this light.\nNote that only non-lightmapped lights (UseDirectLightMap=False) can have a light function." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "LightFunctionMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, LightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Channels that this light should affect.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_LightingChannels = { UE4CodeGen_Private::EPropertyClass::Struct, "LightingChannels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightingChannels_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_LightingChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Enables cached shadows for movable primitives for this light even if r.shadow.cachedshadowscastfrommovableprimitives is 0" },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->bForceCachedShadowsForMovablePrimitives = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceCachedShadowsForMovablePrimitives", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Dynamic Indirect Lighting" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Whether the light should be injected into the Light Propagation Volume" },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->bAffectDynamicIndirectLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bAffectDynamicIndirectLighting = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectDynamicIndirectLighting", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Whether the light should only cast shadows from components marked as bCastCinematicShadows.\nThis is useful for setting up cinematic Movable spotlights aimed at characters and avoiding the shadow depth rendering costs of the background.\nNote: this only works with dynamic shadow maps, not with static shadowing or Ray Traced Distance Field shadows." },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->bCastShadowsFromCinematicObjectsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastShadowsFromCinematicObjectsOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Whether the light is allowed to cast dynamic shadows from translucency." },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->CastTranslucentShadows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "CastTranslucentShadows", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->InverseSquaredFalloff_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff = { UE4CodeGen_Private::EPropertyClass::Bool, "InverseSquaredFalloff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Contact Shadow Length In World Space Units" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Where Length of screen space ray trace for sharp contact shadows is in world space units or in screen space units." },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->ContactShadowLengthInWS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS = { UE4CodeGen_Private::EPropertyClass::Bool, "ContactShadowLengthInWS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLength_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Length of screen space ray trace for sharp contact shadows. Zero is disabled." },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLength = { UE4CodeGen_Private::EPropertyClass::Float, "ContactShadowLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000005, 1, nullptr, STRUCT_OFFSET(ULightComponent, ContactShadowLength), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSharpen_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Shadow Filter Sharpen" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Amount to sharpen shadow filtering" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSharpen = { UE4CodeGen_Private::EPropertyClass::Float, "ShadowSharpen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, ShadowSharpen), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSharpen_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSharpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowBias_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Controls how accurate self shadowing of whole scene shadows from this light are.\nAt 0, shadows will start at the their caster surface, but there will be many self shadowing artifacts.\nlarger values, shadows will start further from their caster, and there won't be self shadowing artifacts but object might appear to fly.\naround 0.5 seems to be a good tradeoff. This also affects the soft transition of shadows" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowBias = { UE4CodeGen_Private::EPropertyClass::Float, "ShadowBias", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, ShadowBias), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowBias_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowResolutionScale_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Scales the resolution of shadowmaps used to shadow this light.  By default shadowmap resolution is chosen based on screen size of the caster.\nNote: shadowmap resolution is still clamped by 'r.Shadow.MaxResolution'" },
		{ "UIMax", "8" },
		{ "UIMin", ".125" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowResolutionScale = { UE4CodeGen_Private::EPropertyClass::Float, "ShadowResolutionScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, ShadowResolutionScale), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowResolutionScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowResolutionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_SpecularScale_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Multiplier on specular highlights. Use only with great care! Any value besides 1 is not physical!\nCan be used to artistically remove highlights mimicking polarizing filters or photo touch up." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_SpecularScale = { UE4CodeGen_Private::EPropertyClass::Float, "SpecularScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, SpecularScale), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_SpecularScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_SpecularScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_MinRoughness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Min roughness effective for this light. Used for softening specular highlights." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_MinRoughness = { UE4CodeGen_Private::EPropertyClass::Float, "MinRoughness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULightComponent, MinRoughness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_MinRoughness_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_MinRoughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowMapChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Legacy shadowmap channel from the lighting build, now stored in FLightComponentMapBuildData." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowMapChannel = { UE4CodeGen_Private::EPropertyClass::Int, "ShadowMapChannel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULightComponent, ShadowMapChannel_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowMapChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowMapChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Use Temperature" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "false: use white (D65) as illuminant." },
	};
#endif
	void Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature_SetBit(void* Obj)
	{
		((ULightComponent*)Obj)->bUseTemperature = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseTemperature", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDistanceFadeRange_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDistanceFadeRange = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDistanceFadeRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULightComponent, MaxDistanceFadeRange), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDistanceFadeRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDistanceFadeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDrawDistance_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDrawDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDrawDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULightComponent, MaxDrawDistance), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDrawDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDrawDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightComponent_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Color temperature in Kelvin of the blackbody illuminant.\nWhite (D65) is 6500K." },
		{ "UIMax", "12000.0" },
		{ "UIMin", "1700.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_Temperature = { UE4CodeGen_Private::EPropertyClass::Float, "Temperature", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000015, 1, nullptr, STRUCT_OFFSET(ULightComponent, Temperature), METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::NewProp_Temperature_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::NewProp_Temperature_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_RayStartOffsetDepthScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_DisabledBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionFadeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_IESBrightnessScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_IESTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_LightingChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bAffectDynamicIndirectLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSharpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowResolutionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_SpecularScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_MinRoughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowMapChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDistanceFadeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDrawDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_Temperature,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULightComponent_Statics::ClassParams = {
		&ULightComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A5u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ULightComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULightComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULightComponent, 607815699);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULightComponent(Z_Construct_UClass_ULightComponent, &ULightComponent::StaticClass, TEXT("/Script/Engine"), TEXT("ULightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULightComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
