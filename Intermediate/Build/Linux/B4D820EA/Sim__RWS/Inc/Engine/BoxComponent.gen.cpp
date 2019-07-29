// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/BoxComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent();
	ENGINE_API UFunction* Z_Construct_UFunction_UBoxComponent_SetBoxExtent();
// End Cross Module References
	void UBoxComponent::StaticRegisterNativesUBoxComponent()
	{
		UClass* Class = UBoxComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScaledBoxExtent", &UBoxComponent::execGetScaledBoxExtent },
			{ "GetUnscaledBoxExtent", &UBoxComponent::execGetUnscaledBoxExtent },
			{ "SetBoxExtent", &UBoxComponent::execSetBoxExtent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent_Statics
	{
		struct BoxComponent_eventGetScaledBoxExtent_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BoxComponent_eventGetScaledBoxExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Box" },
		{ "ModuleRelativePath", "Classes/Components/BoxComponent.h" },
		{ "ToolTip", "@return the box extent, scaled by the component scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxComponent, "GetScaledBoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(BoxComponent_eventGetScaledBoxExtent_Parms), Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent_Statics
	{
		struct BoxComponent_eventGetUnscaledBoxExtent_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BoxComponent_eventGetUnscaledBoxExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Box" },
		{ "ModuleRelativePath", "Classes/Components/BoxComponent.h" },
		{ "ToolTip", "@return the box extent, ignoring component scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxComponent, "GetUnscaledBoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(BoxComponent_eventGetUnscaledBoxExtent_Parms), Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBoxComponent_SetBoxExtent_Statics
	{
		struct BoxComponent_eventSetBoxExtent_Parms
		{
			FVector InBoxExtent;
			bool bUpdateOverlaps;
		};
		static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBoxExtent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBoxComponent_SetBoxExtent_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
	{
		((BoxComponent_eventSetBoxExtent_Parms*)Obj)->bUpdateOverlaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBoxComponent_SetBoxExtent_Statics::NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BoxComponent_eventSetBoxExtent_Parms), &Z_Construct_UFunction_UBoxComponent_SetBoxExtent_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBoxComponent_SetBoxExtent_Statics::NewProp_InBoxExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "InBoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BoxComponent_eventSetBoxExtent_Parms, InBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoxComponent_SetBoxExtent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxComponent_SetBoxExtent_Statics::NewProp_bUpdateOverlaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoxComponent_SetBoxExtent_Statics::NewProp_InBoxExtent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoxComponent_SetBoxExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Box" },
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "ModuleRelativePath", "Classes/Components/BoxComponent.h" },
		{ "ToolTip", "Change the box extent size. This is the unscaled size, before component scale is applied.\n@param       InBoxExtent: new extent (radius) for the box.\n@param       bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoxComponent_SetBoxExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxComponent, "SetBoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(BoxComponent_eventSetBoxExtent_Parms), Z_Construct_UFunction_UBoxComponent_SetBoxExtent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBoxComponent_SetBoxExtent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoxComponent_SetBoxExtent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBoxComponent_SetBoxExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoxComponent_SetBoxExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBoxComponent_SetBoxExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBoxComponent_NoRegister()
	{
		return UBoxComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBoxComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoxComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UShapeComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoxComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent, "GetScaledBoxExtent" }, // 3737745411
		{ &Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent, "GetUnscaledBoxExtent" }, // 3534076917
		{ &Z_Construct_UFunction_UBoxComponent_SetBoxExtent, "SetBoxExtent" }, // 3329051444
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Collision" },
		{ "DisplayName", "Box Collision" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/BoxComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/BoxComponent.h" },
		{ "ToolTip", "A box generally used for simple collision. Bounds are rendered as lines in the editor." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxComponent_Statics::NewProp_LineThickness_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Classes/Components/BoxComponent.h" },
		{ "ToolTip", "Used to control the line thickness when rendering" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBoxComponent_Statics::NewProp_LineThickness = { UE4CodeGen_Private::EPropertyClass::Float, "LineThickness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000000001d, 1, nullptr, STRUCT_OFFSET(UBoxComponent, LineThickness), METADATA_PARAMS(Z_Construct_UClass_UBoxComponent_Statics::NewProp_LineThickness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoxComponent_Statics::NewProp_LineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoxComponent_Statics::NewProp_BoxExtent_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Classes/Components/BoxComponent.h" },
		{ "ToolTip", "The extents (radii dimensions) of the box *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoxComponent_Statics::NewProp_BoxExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000000001d, 1, nullptr, STRUCT_OFFSET(UBoxComponent, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBoxComponent_Statics::NewProp_BoxExtent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoxComponent_Statics::NewProp_BoxExtent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoxComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxComponent_Statics::NewProp_LineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoxComponent_Statics::NewProp_BoxExtent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoxComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoxComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoxComponent_Statics::ClassParams = {
		&UBoxComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UBoxComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBoxComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBoxComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBoxComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoxComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoxComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoxComponent, 504160769);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoxComponent(Z_Construct_UClass_UBoxComponent, &UBoxComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UBoxComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoxComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
