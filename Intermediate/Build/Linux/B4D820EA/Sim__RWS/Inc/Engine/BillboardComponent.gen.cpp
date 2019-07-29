// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/BillboardComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBillboardComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UBillboardComponent_SetSprite();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV();
	ENGINE_API UFunction* Z_Construct_UFunction_UBillboardComponent_SetUV();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteCategoryInfo();
// End Cross Module References
	void UBillboardComponent::StaticRegisterNativesUBillboardComponent()
	{
		UClass* Class = UBillboardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSprite", &UBillboardComponent::execSetSprite },
			{ "SetSpriteAndUV", &UBillboardComponent::execSetSpriteAndUV },
			{ "SetUV", &UBillboardComponent::execSetUV },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics
	{
		struct BillboardComponent_eventSetSprite_Parms
		{
			UTexture2D* NewSprite;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::NewProp_NewSprite = { UE4CodeGen_Private::EPropertyClass::Object, "NewSprite", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BillboardComponent_eventSetSprite_Parms, NewSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::NewProp_NewSprite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "Change the sprite texture used by this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBillboardComponent, "SetSprite", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(BillboardComponent_eventSetSprite_Parms), Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBillboardComponent_SetSprite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBillboardComponent_SetSprite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics
	{
		struct BillboardComponent_eventSetSpriteAndUV_Parms
		{
			UTexture2D* NewSprite;
			int32 NewU;
			int32 NewUL;
			int32 NewV;
			int32 NewVL;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewVL;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewV;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewUL;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewU;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewVL = { UE4CodeGen_Private::EPropertyClass::Int, "NewVL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BillboardComponent_eventSetSpriteAndUV_Parms, NewVL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewV = { UE4CodeGen_Private::EPropertyClass::Int, "NewV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BillboardComponent_eventSetSpriteAndUV_Parms, NewV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewUL = { UE4CodeGen_Private::EPropertyClass::Int, "NewUL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BillboardComponent_eventSetSpriteAndUV_Parms, NewUL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewU = { UE4CodeGen_Private::EPropertyClass::Int, "NewU", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BillboardComponent_eventSetSpriteAndUV_Parms, NewU), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewSprite = { UE4CodeGen_Private::EPropertyClass::Object, "NewSprite", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BillboardComponent_eventSetSpriteAndUV_Parms, NewSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewVL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewUL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::NewProp_NewSprite,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "Change the sprite texture and the UV's used by this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBillboardComponent, "SetSpriteAndUV", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(BillboardComponent_eventSetSpriteAndUV_Parms), Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBillboardComponent_SetUV_Statics
	{
		struct BillboardComponent_eventSetUV_Parms
		{
			int32 NewU;
			int32 NewUL;
			int32 NewV;
			int32 NewVL;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewVL;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewV;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewUL;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewU;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewVL = { UE4CodeGen_Private::EPropertyClass::Int, "NewVL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BillboardComponent_eventSetUV_Parms, NewVL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewV = { UE4CodeGen_Private::EPropertyClass::Int, "NewV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BillboardComponent_eventSetUV_Parms, NewV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewUL = { UE4CodeGen_Private::EPropertyClass::Int, "NewUL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BillboardComponent_eventSetUV_Parms, NewUL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewU = { UE4CodeGen_Private::EPropertyClass::Int, "NewU", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BillboardComponent_eventSetUV_Parms, NewU), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewVL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewUL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::NewProp_NewU,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "Change the sprite's UVs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBillboardComponent, "SetUV", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(BillboardComponent_eventSetUV_Parms), Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBillboardComponent_SetUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBillboardComponent_SetUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBillboardComponent_NoRegister()
	{
		return UBillboardComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBillboardComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInEditorScaling_MetaData[];
#endif
		static void NewProp_bUseInEditorScaling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInEditorScaling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpriteInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteCategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpriteCategoryName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VL_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_V;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UL_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_U;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScreenSizeScaled_MetaData[];
#endif
		static void NewProp_bIsScreenSizeScaled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScreenSizeScaled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBillboardComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBillboardComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBillboardComponent_SetSprite, "SetSprite" }, // 709455431
		{ &Z_Construct_UFunction_UBillboardComponent_SetSpriteAndUV, "SetSpriteAndUV" }, // 2789295415
		{ &Z_Construct_UFunction_UBillboardComponent_SetUV, "SetUV" }, // 2490982406
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBillboardComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Activation Components|Activation Physics Collision Lighting Mesh PhysicsVolume Mobility Trigger" },
		{ "IncludePath", "Components/BillboardComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "A 2d texture that will be rendered always facing the camera." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bUseInEditorScaling_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "Whether to use in-editor arrow scaling (i.e. to be affected by the global arrow scale)" },
	};
#endif
	void Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bUseInEditorScaling_SetBit(void* Obj)
	{
		((UBillboardComponent*)Obj)->bUseInEditorScaling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bUseInEditorScaling = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseInEditorScaling", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBillboardComponent), &Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bUseInEditorScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bUseInEditorScaling_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bUseInEditorScaling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBillboardComponent_Statics::NewProp_SpriteInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "Sprite category information regarding the component" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_SpriteInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "SpriteInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UBillboardComponent, SpriteInfo), Z_Construct_UScriptStruct_FSpriteCategoryInfo, METADATA_PARAMS(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_SpriteInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_SpriteInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBillboardComponent_Statics::NewProp_SpriteCategoryName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
		{ "ToolTip", "Sprite category that the component belongs to. Value serves as a key into the localization file." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_SpriteCategoryName = { UE4CodeGen_Private::EPropertyClass::Name, "SpriteCategoryName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UBillboardComponent, SpriteCategoryName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_SpriteCategoryName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_SpriteCategoryName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBillboardComponent_Statics::NewProp_VL_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_VL = { UE4CodeGen_Private::EPropertyClass::Float, "VL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBillboardComponent, VL), METADATA_PARAMS(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_VL_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_VL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBillboardComponent_Statics::NewProp_V_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_V = { UE4CodeGen_Private::EPropertyClass::Float, "V", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBillboardComponent, V), METADATA_PARAMS(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_V_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_V_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBillboardComponent_Statics::NewProp_UL_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_UL = { UE4CodeGen_Private::EPropertyClass::Float, "UL", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBillboardComponent, UL), METADATA_PARAMS(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_UL_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_UL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBillboardComponent_Statics::NewProp_U_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_U = { UE4CodeGen_Private::EPropertyClass::Float, "U", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBillboardComponent, U), METADATA_PARAMS(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_U_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_U_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBillboardComponent_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_ScreenSize = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBillboardComponent, ScreenSize), METADATA_PARAMS(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_ScreenSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bIsScreenSizeScaled_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bIsScreenSizeScaled_SetBit(void* Obj)
	{
		((UBillboardComponent*)Obj)->bIsScreenSizeScaled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bIsScreenSizeScaled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsScreenSizeScaled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UBillboardComponent), &Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bIsScreenSizeScaled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bIsScreenSizeScaled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bIsScreenSizeScaled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBillboardComponent_Statics::NewProp_Sprite_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/Components/BillboardComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBillboardComponent_Statics::NewProp_Sprite = { UE4CodeGen_Private::EPropertyClass::Object, "Sprite", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBillboardComponent, Sprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_Sprite_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::NewProp_Sprite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBillboardComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bUseInEditorScaling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_SpriteInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_SpriteCategoryName,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_VL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_V,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_UL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_U,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_ScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_bIsScreenSizeScaled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardComponent_Statics::NewProp_Sprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBillboardComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBillboardComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBillboardComponent_Statics::ClassParams = {
		&UBillboardComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B030A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UBillboardComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBillboardComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBillboardComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBillboardComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBillboardComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBillboardComponent, 3169730720);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBillboardComponent(Z_Construct_UClass_UBillboardComponent, &UBillboardComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UBillboardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBillboardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
