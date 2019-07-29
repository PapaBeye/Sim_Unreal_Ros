// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/InvalidationBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvalidationBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UInvalidationBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UInvalidationBox();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_UInvalidationBox_GetCanCache();
	UMG_API UFunction* Z_Construct_UFunction_UInvalidationBox_InvalidateCache();
	UMG_API UFunction* Z_Construct_UFunction_UInvalidationBox_SetCanCache();
// End Cross Module References
	void UInvalidationBox::StaticRegisterNativesUInvalidationBox()
	{
		UClass* Class = UInvalidationBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCanCache", &UInvalidationBox::execGetCanCache },
			{ "InvalidateCache", &UInvalidationBox::execInvalidateCache },
			{ "SetCanCache", &UInvalidationBox::execSetCanCache },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics
	{
		struct InvalidationBox_eventGetCanCache_Parms
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
	void Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InvalidationBox_eventGetCanCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InvalidationBox_eventGetCanCache_Parms), &Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Invalidation Box" },
		{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInvalidationBox, "GetCanCache", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(InvalidationBox_eventGetCanCache_Parms), Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInvalidationBox_GetCanCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInvalidationBox_InvalidateCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInvalidationBox_InvalidateCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Invalidation Box" },
		{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInvalidationBox_InvalidateCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInvalidationBox, "InvalidateCache", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInvalidationBox_InvalidateCache_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInvalidationBox_InvalidateCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInvalidationBox_InvalidateCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInvalidationBox_InvalidateCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics
	{
		struct InvalidationBox_eventSetCanCache_Parms
		{
			bool CanCache;
		};
		static void NewProp_CanCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanCache;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::NewProp_CanCache_SetBit(void* Obj)
	{
		((InvalidationBox_eventSetCanCache_Parms*)Obj)->CanCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::NewProp_CanCache = { UE4CodeGen_Private::EPropertyClass::Bool, "CanCache", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InvalidationBox_eventSetCanCache_Parms), &Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::NewProp_CanCache_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::NewProp_CanCache,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Invalidation Box" },
		{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInvalidationBox, "SetCanCache", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InvalidationBox_eventSetCanCache_Parms), Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInvalidationBox_SetCanCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInvalidationBox_NoRegister()
	{
		return UInvalidationBox::StaticClass();
	}
	struct Z_Construct_UClass_UInvalidationBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheRelativeTransforms_MetaData[];
#endif
		static void NewProp_CacheRelativeTransforms_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CacheRelativeTransforms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanCache_MetaData[];
#endif
		static void NewProp_bCanCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanCache;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInvalidationBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInvalidationBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInvalidationBox_GetCanCache, "GetCanCache" }, // 3481755466
		{ &Z_Construct_UFunction_UInvalidationBox_InvalidateCache, "InvalidateCache" }, // 286696024
		{ &Z_Construct_UFunction_UInvalidationBox_SetCanCache, "SetCanCache" }, // 1356319767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInvalidationBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/InvalidationBox.h" },
		{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
		{ "ToolTip", "Invalidate\n* Single Child\n* Caching / Performance" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInvalidationBox_Statics::NewProp_CacheRelativeTransforms_MetaData[] = {
		{ "Category", "Caching" },
		{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
		{ "ToolTip", "Caches the locations for child draw elements relative to the invalidation box,\nthis adds extra overhead to drawing them every frame.  However, in cases where\nthe position of the invalidation boxes changes every frame this can be a big savings." },
	};
#endif
	void Z_Construct_UClass_UInvalidationBox_Statics::NewProp_CacheRelativeTransforms_SetBit(void* Obj)
	{
		((UInvalidationBox*)Obj)->CacheRelativeTransforms = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInvalidationBox_Statics::NewProp_CacheRelativeTransforms = { UE4CodeGen_Private::EPropertyClass::Bool, "CacheRelativeTransforms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInvalidationBox), &Z_Construct_UClass_UInvalidationBox_Statics::NewProp_CacheRelativeTransforms_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInvalidationBox_Statics::NewProp_CacheRelativeTransforms_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInvalidationBox_Statics::NewProp_CacheRelativeTransforms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInvalidationBox_Statics::NewProp_bCanCache_MetaData[] = {
		{ "Category", "Caching" },
		{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
		{ "ToolTip", "Should the invalidation panel cache the widgets?  Making this false makes it so the invalidation\npanel stops acting like an invalidation panel, just becomes a simple container widget." },
	};
#endif
	void Z_Construct_UClass_UInvalidationBox_Statics::NewProp_bCanCache_SetBit(void* Obj)
	{
		((UInvalidationBox*)Obj)->bCanCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInvalidationBox_Statics::NewProp_bCanCache = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanCache", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInvalidationBox), &Z_Construct_UClass_UInvalidationBox_Statics::NewProp_bCanCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInvalidationBox_Statics::NewProp_bCanCache_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInvalidationBox_Statics::NewProp_bCanCache_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInvalidationBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInvalidationBox_Statics::NewProp_CacheRelativeTransforms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInvalidationBox_Statics::NewProp_bCanCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInvalidationBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInvalidationBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInvalidationBox_Statics::ClassParams = {
		&UInvalidationBox::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UInvalidationBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInvalidationBox_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInvalidationBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInvalidationBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInvalidationBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInvalidationBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInvalidationBox, 1606742738);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInvalidationBox(Z_Construct_UClass_UInvalidationBox, &UInvalidationBox::StaticClass, TEXT("/Script/UMG"), TEXT("UInvalidationBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInvalidationBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
