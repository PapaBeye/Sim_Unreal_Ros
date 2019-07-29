// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Private/AsyncActionLoadPrimaryAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncActionLoadPrimaryAsset() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAsset();
	ENGINE_API UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass();
	ENGINE_API UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList();
	ENGINE_API UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList();
	ENGINE_API UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles();
	ENGINE_API UFunction* Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets();
	ENGINE_API UFunction* Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnPrimaryAssetBundlesChanged__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnPrimaryAssetClassListLoaded_Parms
		{
			TArray<TSubclassOf<UObject> > Loaded;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Loaded;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Loaded_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::NewProp_Loaded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::NewProp_Loaded = { UE4CodeGen_Private::EPropertyClass::Array, "Loaded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000008000182, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnPrimaryAssetClassListLoaded_Parms, Loaded), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::NewProp_Loaded_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::NewProp_Loaded_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::NewProp_Loaded_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "Loaded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::NewProp_Loaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::NewProp_Loaded_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnPrimaryAssetClassListLoaded__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventOnPrimaryAssetClassListLoaded_Parms), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnPrimaryAssetListLoaded_Parms
		{
			TArray<UObject*> Loaded;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Loaded;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Loaded_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::NewProp_Loaded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::NewProp_Loaded = { UE4CodeGen_Private::EPropertyClass::Array, "Loaded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnPrimaryAssetListLoaded_Parms, Loaded), METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::NewProp_Loaded_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::NewProp_Loaded_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::NewProp_Loaded_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Loaded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::NewProp_Loaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::NewProp_Loaded_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnPrimaryAssetListLoaded__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventOnPrimaryAssetListLoaded_Parms), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnPrimaryAssetClassLoaded_Parms
		{
			TSubclassOf<UObject>  Loaded;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Loaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::NewProp_Loaded = { UE4CodeGen_Private::EPropertyClass::Class, "Loaded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnPrimaryAssetClassLoaded_Parms, Loaded), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::NewProp_Loaded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnPrimaryAssetClassLoaded__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventOnPrimaryAssetClassLoaded_Parms), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnPrimaryAssetLoaded_Parms
		{
			UObject* Loaded;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Loaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::NewProp_Loaded = { UE4CodeGen_Private::EPropertyClass::Object, "Loaded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnPrimaryAssetLoaded_Parms, Loaded), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::NewProp_Loaded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "OnPrimaryAssetLoaded__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventOnPrimaryAssetLoaded_Parms), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UAsyncActionLoadPrimaryAssetBase::StaticRegisterNativesUAsyncActionLoadPrimaryAssetBase()
	{
	}
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_NoRegister()
	{
		return UAsyncActionLoadPrimaryAssetBase::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
		{ "ToolTip", "Base class of all asset manager load calls" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionLoadPrimaryAssetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics::ClassParams = {
		&UAsyncActionLoadPrimaryAssetBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsyncActionLoadPrimaryAssetBase, 1645953403);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncActionLoadPrimaryAssetBase(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase, &UAsyncActionLoadPrimaryAssetBase::StaticClass, TEXT("/Script/Engine"), TEXT("UAsyncActionLoadPrimaryAssetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionLoadPrimaryAssetBase);
	void UAsyncActionLoadPrimaryAsset::StaticRegisterNativesUAsyncActionLoadPrimaryAsset()
	{
		UClass* Class = UAsyncActionLoadPrimaryAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadPrimaryAsset", &UAsyncActionLoadPrimaryAsset::execAsyncLoadPrimaryAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics
	{
		struct AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms
		{
			UObject* WorldContextObject;
			FPrimaryAssetId PrimaryAsset;
			TArray<FName> LoadBundles;
			UAsyncActionLoadPrimaryAsset* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadBundles;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LoadBundles_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_LoadBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_LoadBundles = { UE4CodeGen_Private::EPropertyClass::Array, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms, LoadBundles), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_LoadBundles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_LoadBundles_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_LoadBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_PrimaryAsset = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms, PrimaryAsset), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_LoadBundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_LoadBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_PrimaryAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoadBundles" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AssetManager" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
		{ "ToolTip", "Load a primary asset into memory. The completed delegate will go off when the load succeeds or fails, you should cast the Loaded object to verify it is the correct type.\nIf LoadBundles is specified, those bundles are loaded along with the asset" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAsset, "AsyncLoadPrimaryAsset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(AsyncActionLoadPrimaryAsset_eventAsyncLoadPrimaryAsset_Parms), Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_NoRegister()
	{
		return UAsyncActionLoadPrimaryAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset, "AsyncLoadPrimaryAsset" }, // 3509127944
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::NewProp_Completed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "Completed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAsyncActionLoadPrimaryAsset, Completed), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::NewProp_Completed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::NewProp_Completed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionLoadPrimaryAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::ClassParams = {
		&UAsyncActionLoadPrimaryAsset::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsyncActionLoadPrimaryAsset, 726639041);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncActionLoadPrimaryAsset(Z_Construct_UClass_UAsyncActionLoadPrimaryAsset, &UAsyncActionLoadPrimaryAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UAsyncActionLoadPrimaryAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionLoadPrimaryAsset);
	void UAsyncActionLoadPrimaryAssetClass::StaticRegisterNativesUAsyncActionLoadPrimaryAssetClass()
	{
		UClass* Class = UAsyncActionLoadPrimaryAssetClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadPrimaryAssetClass", &UAsyncActionLoadPrimaryAssetClass::execAsyncLoadPrimaryAssetClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics
	{
		struct AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms
		{
			UObject* WorldContextObject;
			FPrimaryAssetId PrimaryAsset;
			TArray<FName> LoadBundles;
			UAsyncActionLoadPrimaryAssetClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadBundles;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LoadBundles_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_LoadBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_LoadBundles = { UE4CodeGen_Private::EPropertyClass::Array, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms, LoadBundles), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_LoadBundles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_LoadBundles_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_LoadBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_PrimaryAsset = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms, PrimaryAsset), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_LoadBundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_LoadBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_PrimaryAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoadBundles" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AssetManager" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
		{ "ToolTip", "Load a primary asset class into memory. The completed delegate will go off when the load succeeds or fails, you should cast the Loaded class to verify it is the correct type\nIf LoadBundles is specified, those bundles are loaded along with the asset" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass, "AsyncLoadPrimaryAssetClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(AsyncActionLoadPrimaryAssetClass_eventAsyncLoadPrimaryAssetClass_Parms), Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_NoRegister()
	{
		return UAsyncActionLoadPrimaryAssetClass::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass, "AsyncLoadPrimaryAssetClass" }, // 2948998037
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::NewProp_Completed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "Completed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAsyncActionLoadPrimaryAssetClass, Completed), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::NewProp_Completed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::NewProp_Completed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionLoadPrimaryAssetClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::ClassParams = {
		&UAsyncActionLoadPrimaryAssetClass::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsyncActionLoadPrimaryAssetClass, 2669616961);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncActionLoadPrimaryAssetClass(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass, &UAsyncActionLoadPrimaryAssetClass::StaticClass, TEXT("/Script/Engine"), TEXT("UAsyncActionLoadPrimaryAssetClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionLoadPrimaryAssetClass);
	void UAsyncActionLoadPrimaryAssetList::StaticRegisterNativesUAsyncActionLoadPrimaryAssetList()
	{
		UClass* Class = UAsyncActionLoadPrimaryAssetList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadPrimaryAssetList", &UAsyncActionLoadPrimaryAssetList::execAsyncLoadPrimaryAssetList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics
	{
		struct AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms
		{
			UObject* WorldContextObject;
			TArray<FPrimaryAssetId> PrimaryAssetList;
			TArray<FName> LoadBundles;
			UAsyncActionLoadPrimaryAssetList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadBundles;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LoadBundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetList_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_LoadBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_LoadBundles = { UE4CodeGen_Private::EPropertyClass::Array, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms, LoadBundles), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_LoadBundles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_LoadBundles_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_LoadBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_PrimaryAssetList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_PrimaryAssetList = { UE4CodeGen_Private::EPropertyClass::Array, "PrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms, PrimaryAssetList), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_PrimaryAssetList_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_PrimaryAssetList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_PrimaryAssetList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_LoadBundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_LoadBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_PrimaryAssetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_PrimaryAssetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoadBundles" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AssetManager" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
		{ "ToolTip", "Load a list primary assets into memory. The completed delegate will go off when the load succeeds or fails, you should cast the Loaded object list to verify it is the correct type\nIf LoadBundles is specified, those bundles are loaded along with the asset list" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList, "AsyncLoadPrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AsyncActionLoadPrimaryAssetList_eventAsyncLoadPrimaryAssetList_Parms), Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_NoRegister()
	{
		return UAsyncActionLoadPrimaryAssetList::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList, "AsyncLoadPrimaryAssetList" }, // 746062581
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::NewProp_Completed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "Completed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAsyncActionLoadPrimaryAssetList, Completed), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::NewProp_Completed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::NewProp_Completed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionLoadPrimaryAssetList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::ClassParams = {
		&UAsyncActionLoadPrimaryAssetList::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsyncActionLoadPrimaryAssetList, 1565678675);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncActionLoadPrimaryAssetList(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList, &UAsyncActionLoadPrimaryAssetList::StaticClass, TEXT("/Script/Engine"), TEXT("UAsyncActionLoadPrimaryAssetList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionLoadPrimaryAssetList);
	void UAsyncActionLoadPrimaryAssetClassList::StaticRegisterNativesUAsyncActionLoadPrimaryAssetClassList()
	{
		UClass* Class = UAsyncActionLoadPrimaryAssetClassList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadPrimaryAssetClassList", &UAsyncActionLoadPrimaryAssetClassList::execAsyncLoadPrimaryAssetClassList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics
	{
		struct AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms
		{
			UObject* WorldContextObject;
			TArray<FPrimaryAssetId> PrimaryAssetList;
			TArray<FName> LoadBundles;
			UAsyncActionLoadPrimaryAssetClassList* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadBundles;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LoadBundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetList_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_LoadBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_LoadBundles = { UE4CodeGen_Private::EPropertyClass::Array, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms, LoadBundles), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_LoadBundles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_LoadBundles_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_LoadBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "LoadBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_PrimaryAssetList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_PrimaryAssetList = { UE4CodeGen_Private::EPropertyClass::Array, "PrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms, PrimaryAssetList), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_PrimaryAssetList_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_PrimaryAssetList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_PrimaryAssetList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_LoadBundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_LoadBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_PrimaryAssetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_PrimaryAssetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "LoadBundles" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AssetManager" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
		{ "ToolTip", "Load a list primary asset classes into memory. The completed delegate will go off when the load succeeds or fails, you should cast the Loaded object list to verify it is the correct type\nIf LoadBundles is specified, those bundles are loaded along with the asset list" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList, "AsyncLoadPrimaryAssetClassList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AsyncActionLoadPrimaryAssetClassList_eventAsyncLoadPrimaryAssetClassList_Parms), Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_NoRegister()
	{
		return UAsyncActionLoadPrimaryAssetClassList::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList, "AsyncLoadPrimaryAssetClassList" }, // 4278101533
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::NewProp_Completed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "Completed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAsyncActionLoadPrimaryAssetClassList, Completed), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::NewProp_Completed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::NewProp_Completed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionLoadPrimaryAssetClassList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::ClassParams = {
		&UAsyncActionLoadPrimaryAssetClassList::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsyncActionLoadPrimaryAssetClassList, 3448934792);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncActionLoadPrimaryAssetClassList(Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList, &UAsyncActionLoadPrimaryAssetClassList::StaticClass, TEXT("/Script/Engine"), TEXT("UAsyncActionLoadPrimaryAssetClassList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionLoadPrimaryAssetClassList);
	void UAsyncActionChangePrimaryAssetBundles::StaticRegisterNativesUAsyncActionChangePrimaryAssetBundles()
	{
		UClass* Class = UAsyncActionChangePrimaryAssetBundles::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncChangeBundleStateForMatchingPrimaryAssets", &UAsyncActionChangePrimaryAssetBundles::execAsyncChangeBundleStateForMatchingPrimaryAssets },
			{ "AsyncChangeBundleStateForPrimaryAssetList", &UAsyncActionChangePrimaryAssetBundles::execAsyncChangeBundleStateForPrimaryAssetList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics
	{
		struct AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms
		{
			UObject* WorldContextObject;
			TArray<FName> NewBundles;
			TArray<FName> OldBundles;
			UAsyncActionChangePrimaryAssetBundles* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OldBundles;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OldBundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewBundles;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewBundles_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_OldBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_OldBundles = { UE4CodeGen_Private::EPropertyClass::Array, "OldBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms, OldBundles), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_OldBundles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_OldBundles_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_OldBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "OldBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_NewBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_NewBundles = { UE4CodeGen_Private::EPropertyClass::Array, "NewBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms, NewBundles), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_NewBundles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_NewBundles_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_NewBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "NewBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_OldBundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_OldBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_NewBundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_NewBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AssetManager" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
		{ "ToolTip", "Change the bundle state of all assets that match OldBundles to instead contain NewBundles." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles, "AsyncChangeBundleStateForMatchingPrimaryAssets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForMatchingPrimaryAssets_Parms), Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics
	{
		struct AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms
		{
			UObject* WorldContextObject;
			TArray<FPrimaryAssetId> PrimaryAssetList;
			TArray<FName> AddBundles;
			TArray<FName> RemoveBundles;
			UAsyncActionChangePrimaryAssetBundles* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemoveBundles;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RemoveBundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddBundles;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AddBundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetList_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_RemoveBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_RemoveBundles = { UE4CodeGen_Private::EPropertyClass::Array, "RemoveBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms, RemoveBundles), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_RemoveBundles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_RemoveBundles_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_RemoveBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "RemoveBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_AddBundles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_AddBundles = { UE4CodeGen_Private::EPropertyClass::Array, "AddBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms, AddBundles), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_AddBundles_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_AddBundles_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_AddBundles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "AddBundles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_PrimaryAssetList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_PrimaryAssetList = { UE4CodeGen_Private::EPropertyClass::Array, "PrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms, PrimaryAssetList), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_PrimaryAssetList_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_PrimaryAssetList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_PrimaryAssetList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_RemoveBundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_RemoveBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_AddBundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_AddBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_PrimaryAssetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_PrimaryAssetList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AssetManager" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
		{ "ToolTip", "Change the bundle state of assets in PrimaryAssetList. AddBundles are added and RemoveBundles are removed, both must be filled in but an empty array is allowed" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles, "AsyncChangeBundleStateForPrimaryAssetList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(AsyncActionChangePrimaryAssetBundles_eventAsyncChangeBundleStateForPrimaryAssetList_Parms), Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister()
	{
		return UAsyncActionChangePrimaryAssetBundles::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets, "AsyncChangeBundleStateForMatchingPrimaryAssets" }, // 2308189769
		{ &Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList, "AsyncChangeBundleStateForPrimaryAssetList" }, // 3582353873
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncActionLoadPrimaryAsset.h" },
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::NewProp_Completed_MetaData[] = {
		{ "ModuleRelativePath", "Private/AsyncActionLoadPrimaryAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::NewProp_Completed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "Completed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UAsyncActionChangePrimaryAssetBundles, Completed), Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::NewProp_Completed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::NewProp_Completed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionChangePrimaryAssetBundles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::ClassParams = {
		&UAsyncActionChangePrimaryAssetBundles::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsyncActionChangePrimaryAssetBundles, 54951927);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncActionChangePrimaryAssetBundles(Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles, &UAsyncActionChangePrimaryAssetBundles::StaticClass, TEXT("/Script/Engine"), TEXT("UAsyncActionChangePrimaryAssetBundles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionChangePrimaryAssetBundles);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
