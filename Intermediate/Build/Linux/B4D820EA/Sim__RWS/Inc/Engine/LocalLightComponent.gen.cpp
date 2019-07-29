// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/LocalLightComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalLightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULocalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
	ENGINE_API UFunction* Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPointLightSettings();
// End Cross Module References
	void ULocalLightComponent::StaticRegisterNativesULocalLightComponent()
	{
		UClass* Class = ULocalLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUnitsConversionFactor", &ULocalLightComponent::execGetUnitsConversionFactor },
			{ "SetAttenuationRadius", &ULocalLightComponent::execSetAttenuationRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics
	{
		struct LocalLightComponent_eventGetUnitsConversionFactor_Parms
		{
			ELightUnits SrcUnits;
			ELightUnits TargetUnits;
			float CosHalfConeAngle;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CosHalfConeAngle;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetUnits;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetUnits_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SrcUnits;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SrcUnits_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_CosHalfConeAngle = { UE4CodeGen_Private::EPropertyClass::Float, "CosHalfConeAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, CosHalfConeAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits = { UE4CodeGen_Private::EPropertyClass::Enum, "TargetUnits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, TargetUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits = { UE4CodeGen_Private::EPropertyClass::Enum, "SrcUnits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LocalLightComponent_eventGetUnitsConversionFactor_Parms, SrcUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_CosHalfConeAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_TargetUnits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::NewProp_SrcUnits_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "CPP_Default_CosHalfConeAngle", "-1.000000" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalLightComponent, "GetUnitsConversionFactor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(LocalLightComponent_eventGetUnitsConversionFactor_Parms), Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics
	{
		struct LocalLightComponent_eventSetAttenuationRadius_Parms
		{
			float NewRadius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::NewProp_NewRadius = { UE4CodeGen_Private::EPropertyClass::Float, "NewRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LocalLightComponent_eventSetAttenuationRadius_Parms, NewRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::NewProp_NewRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalLightComponent, "SetAttenuationRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LocalLightComponent_eventSetAttenuationRadius_Parms), Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULocalLightComponent_NoRegister()
	{
		return ULocalLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULocalLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntensityUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IntensityUnits;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IntensityUnits_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULocalLightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalLightComponent_GetUnitsConversionFactor, "GetUnitsConversionFactor" }, // 3352140398
		{ &Z_Construct_UFunction_ULocalLightComponent_SetAttenuationRadius, "SetAttenuationRadius" }, // 557294200
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Lights Common" },
		{ "HideCategories", "Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/LocalLightComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A light component which emits light from a single point equally in all directions." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Lightmass settings for this object." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings = { UE4CodeGen_Private::EPropertyClass::Struct, "LightmassSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULocalLightComponent, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPointLightSettings, METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "SliderExponent", "5.0" },
		{ "ToolTip", "Bounds the light's visible influence.\nThis clamping of the light's influence is not physically correct but very important for performance, larger lights cost more." },
		{ "UIMax", "16384.0" },
		{ "UIMin", "8.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius = { UE4CodeGen_Private::EPropertyClass::Float, "AttenuationRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000200000015, 1, nullptr, STRUCT_OFFSET(ULocalLightComponent, AttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULocalLightComponent, Radius_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Intensity Units" },
		{ "EditCondition", "bUseInverseSquaredFalloff" },
		{ "ModuleRelativePath", "Classes/Components/LocalLightComponent.h" },
		{ "ToolTip", "Units used for the intensity.\nThe peak luminous intensity is measured in candelas,\nwhile the luminous power is measured in lumens." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits = { UE4CodeGen_Private::EPropertyClass::Enum, "IntensityUnits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000015, 1, nullptr, STRUCT_OFFSET(ULocalLightComponent, IntensityUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalLightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_LightmassSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_AttenuationRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalLightComponent_Statics::NewProp_IntensityUnits_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalLightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocalLightComponent_Statics::ClassParams = {
		&ULocalLightComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A5u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ULocalLightComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULocalLightComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULocalLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocalLightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocalLightComponent, 4272119643);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocalLightComponent(Z_Construct_UClass_ULocalLightComponent, &ULocalLightComponent::StaticClass, TEXT("/Script/Engine"), TEXT("ULocalLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalLightComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULocalLightComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
