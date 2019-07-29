// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/SphereComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_USphereComponent_GetShapeScale();
	ENGINE_API UFunction* Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_USphereComponent_SetSphereRadius();
// End Cross Module References
	void USphereComponent::StaticRegisterNativesUSphereComponent()
	{
		UClass* Class = USphereComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScaledSphereRadius", &USphereComponent::execGetScaledSphereRadius },
			{ "GetShapeScale", &USphereComponent::execGetShapeScale },
			{ "GetUnscaledSphereRadius", &USphereComponent::execGetUnscaledSphereRadius },
			{ "SetSphereRadius", &USphereComponent::execSetSphereRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics
	{
		struct SphereComponent_eventGetScaledSphereRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SphereComponent_eventGetScaledSphereRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sphere" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "@return the radius of the sphere, with component scale applied." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, "GetScaledSphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SphereComponent_eventGetScaledSphereRadius_Parms), Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics
	{
		struct SphereComponent_eventGetShapeScale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SphereComponent_eventGetShapeScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sphere" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "Get the scale used by this shape. This is a uniform scale that is the minimum of any non-uniform scaling.\n@return the scale used by this shape." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, "GetShapeScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SphereComponent_eventGetShapeScale_Parms), Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USphereComponent_GetShapeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USphereComponent_GetShapeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics
	{
		struct SphereComponent_eventGetUnscaledSphereRadius_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SphereComponent_eventGetUnscaledSphereRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sphere" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "@return the radius of the sphere, ignoring component scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, "GetUnscaledSphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SphereComponent_eventGetUnscaledSphereRadius_Parms), Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics
	{
		struct SphereComponent_eventSetSphereRadius_Parms
		{
			float InSphereRadius;
			bool bUpdateOverlaps;
		};
		static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSphereRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
	{
		((SphereComponent_eventSetSphereRadius_Parms*)Obj)->bUpdateOverlaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SphereComponent_eventSetSphereRadius_Parms), &Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_InSphereRadius = { UE4CodeGen_Private::EPropertyClass::Float, "InSphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SphereComponent_eventSetSphereRadius_Parms, InSphereRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_bUpdateOverlaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::NewProp_InSphereRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sphere" },
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "Change the sphere radius. This is the unscaled radius, before component scale is applied.\n@param       InSphereRadius: the new sphere radius\n@param       bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, "SetSphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SphereComponent_eventSetSphereRadius_Parms), Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USphereComponent_SetSphereRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USphereComponent_SetSphereRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USphereComponent_NoRegister()
	{
		return USphereComponent::StaticClass();
	}
	struct Z_Construct_UClass_USphereComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USphereComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UShapeComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USphereComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius, "GetScaledSphereRadius" }, // 1982363626
		{ &Z_Construct_UFunction_USphereComponent_GetShapeScale, "GetShapeScale" }, // 2274963072
		{ &Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius, "GetUnscaledSphereRadius" }, // 809388066
		{ &Z_Construct_UFunction_USphereComponent_SetSphereRadius, "SetSphereRadius" }, // 2317845901
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Collision" },
		{ "DisplayName", "Sphere Collision" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/SphereComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "A sphere generally used for simple collision. Bounds are rendered as lines in the editor." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereComponent_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
		{ "ToolTip", "The radius of the sphere *" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USphereComponent_Statics::NewProp_SphereRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000000001d, 1, nullptr, STRUCT_OFFSET(USphereComponent, SphereRadius), METADATA_PARAMS(Z_Construct_UClass_USphereComponent_Statics::NewProp_SphereRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_USphereComponent_Statics::NewProp_SphereRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USphereComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereComponent_Statics::NewProp_SphereRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USphereComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USphereComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USphereComponent_Statics::ClassParams = {
		&USphereComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_USphereComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_USphereComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USphereComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USphereComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USphereComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USphereComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USphereComponent, 528355571);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USphereComponent(Z_Construct_UClass_USphereComponent, &USphereComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USphereComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USphereComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
