// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Curves/CurveLinearColorAtlas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveLinearColorAtlas() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
// End Cross Module References
	void UCurveLinearColorAtlas::StaticRegisterNativesUCurveLinearColorAtlas()
	{
		UClass* Class = UCurveLinearColorAtlas::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurvePosition", &UCurveLinearColorAtlas::execGetCurvePosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics
	{
		struct CurveLinearColorAtlas_eventGetCurvePosition_Parms
		{
			UCurveLinearColor* InCurve;
			float Position;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CurveLinearColorAtlas_eventGetCurvePosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CurveLinearColorAtlas_eventGetCurvePosition_Parms), &Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Float, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(CurveLinearColorAtlas_eventGetCurvePosition_Parms, Position), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_InCurve = { UE4CodeGen_Private::EPropertyClass::Object, "InCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CurveLinearColorAtlas_eventGetCurvePosition_Parms, InCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_InCurve,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveLinearColorAtlas, "GetCurvePosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(CurveLinearColorAtlas_eventGetCurvePosition_Parms), Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister()
	{
		return UCurveLinearColorAtlas::StaticClass();
	}
	struct Z_Construct_UClass_UCurveLinearColorAtlas_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GradientCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GradientCurves;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GradientCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GradientPixelSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_GradientPixelSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_TextureSize;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDirty_MetaData[];
#endif
		static void NewProp_bIsDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDirty;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveLinearColorAtlas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurveLinearColorAtlas_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition, "GetCurvePosition" }, // 1252808176
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Curves/CurveLinearColorAtlas.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Manages gradient LUT textures for registered actors and assigns them to the corresponding materials on the actor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_MetaData[] = {
		{ "Category", "Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "How many pixels tall is any gradient slot" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves = { UE4CodeGen_Private::EPropertyClass::Array, "GradientCurves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCurveLinearColorAtlas, GradientCurves), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "GradientCurves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientPixelSize_MetaData[] = {
		{ "Category", "Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Size of the lookup textures" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientPixelSize = { UE4CodeGen_Private::EPropertyClass::UInt32, "GradientPixelSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(UCurveLinearColorAtlas, GradientPixelSize), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientPixelSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientPixelSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize = { UE4CodeGen_Private::EPropertyClass::UInt32, "TextureSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UCurveLinearColorAtlas, TextureSize), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif
	void Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_SetBit(void* Obj)
	{
		((UCurveLinearColorAtlas*)Obj)->bIsDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsDirty", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UCurveLinearColorAtlas), &Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientPixelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveLinearColorAtlas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveLinearColorAtlas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::ClassParams = {
		&UCurveLinearColorAtlas::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveLinearColorAtlas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCurveLinearColorAtlas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCurveLinearColorAtlas, 4047641776);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCurveLinearColorAtlas(Z_Construct_UClass_UCurveLinearColorAtlas, &UCurveLinearColorAtlas::StaticClass, TEXT("/Script/Engine"), TEXT("UCurveLinearColorAtlas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveLinearColorAtlas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
