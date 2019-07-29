// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SceneCaptureCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureCube() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASceneCaptureCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCaptureCube();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle();
	ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponentCube_NoRegister();
// End Cross Module References
	void ASceneCaptureCube::StaticRegisterNativesASceneCaptureCube()
	{
		UClass* Class = ASceneCaptureCube::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInterpToggle", &ASceneCaptureCube::execOnInterpToggle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics
	{
		struct SceneCaptureCube_eventOnInterpToggle_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SceneCaptureCube_eventOnInterpToggle_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::NewProp_bEnable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SceneCaptureCube_eventOnInterpToggle_Parms), &Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCaptureCube.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneCaptureCube, "OnInterpToggle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SceneCaptureCube_eventOnInterpToggle_Parms), Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASceneCaptureCube_NoRegister()
	{
		return ASceneCaptureCube::StaticClass();
	}
	struct Z_Construct_UClass_ASceneCaptureCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawFrustum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DrawFrustum;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponentCube_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponentCube;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASceneCaptureCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASceneCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASceneCaptureCube_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle, "OnInterpToggle" }, // 3521653813
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneCaptureCube_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/SceneCaptureCube.h" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCaptureCube.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_DrawFrustum_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCaptureCube.h" },
		{ "ToolTip", "To allow drawing the camera frustum in the editor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_DrawFrustum = { UE4CodeGen_Private::EPropertyClass::Object, "DrawFrustum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ASceneCaptureCube, DrawFrustum), Z_Construct_UClass_UDrawFrustumComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_DrawFrustum_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_DrawFrustum_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_CaptureComponentCube_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DecalActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCaptureCube.h" },
		{ "ToolTip", "Scene capture component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_CaptureComponentCube = { UE4CodeGen_Private::EPropertyClass::Object, "CaptureComponentCube", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ASceneCaptureCube, CaptureComponentCube), Z_Construct_UClass_USceneCaptureComponentCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_CaptureComponentCube_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_CaptureComponentCube_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASceneCaptureCube_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_DrawFrustum,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_CaptureComponentCube,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASceneCaptureCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASceneCaptureCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASceneCaptureCube_Statics::ClassParams = {
		&ASceneCaptureCube::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ASceneCaptureCube_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASceneCaptureCube_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASceneCaptureCube_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASceneCaptureCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASceneCaptureCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASceneCaptureCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASceneCaptureCube, 1118845146);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASceneCaptureCube(Z_Construct_UClass_ASceneCaptureCube, &ASceneCaptureCube::StaticClass, TEXT("/Script/Engine"), TEXT("ASceneCaptureCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneCaptureCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
