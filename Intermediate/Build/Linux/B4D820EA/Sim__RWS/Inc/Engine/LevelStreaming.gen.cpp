// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/LevelStreaming.h"
#include "Engine/Classes/Engine/World.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreaming() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_CreateInstance();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_IsLevelVisible();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelStreamingVolume_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "LevelStreamingVisibilityStatus__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Delegate signatures" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "LevelStreamingLoadedStatus__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ULevelStreaming::StaticRegisterNativesULevelStreaming()
	{
		UClass* Class = ULevelStreaming::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateInstance", &ULevelStreaming::execCreateInstance },
			{ "GetLevelScriptActor", &ULevelStreaming::execGetLevelScriptActor },
			{ "GetWorldAssetPackageFName", &ULevelStreaming::execGetWorldAssetPackageFName },
			{ "IsLevelLoaded", &ULevelStreaming::execIsLevelLoaded },
			{ "IsLevelVisible", &ULevelStreaming::execIsLevelVisible },
			{ "IsStreamingStatePending", &ULevelStreaming::execIsStreamingStatePending },
			{ "SetLevelLODIndex", &ULevelStreaming::execSetLevelLODIndex },
			{ "SetShouldBeLoaded", &ULevelStreaming::execSetShouldBeLoaded },
			{ "SetShouldBeVisible", &ULevelStreaming::execSetShouldBeVisible },
			{ "ShouldBeLoaded", &ULevelStreaming::execShouldBeLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics
	{
		struct LevelStreaming_eventCreateInstance_Parms
		{
			FString UniqueInstanceName;
			ULevelStreaming* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueInstanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueInstanceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LevelStreaming_eventCreateInstance_Parms, ReturnValue), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::NewProp_UniqueInstanceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::NewProp_UniqueInstanceName = { UE4CodeGen_Private::EPropertyClass::Str, "UniqueInstanceName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelStreaming_eventCreateInstance_Parms, UniqueInstanceName), METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::NewProp_UniqueInstanceName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::NewProp_UniqueInstanceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::NewProp_UniqueInstanceName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Creates a new instance of this streaming level with a provided unique instance name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "CreateInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LevelStreaming_eventCreateInstance_Parms), Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_CreateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreaming_CreateInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics
	{
		struct LevelStreaming_eventGetLevelScriptActor_Parms
		{
			ALevelScriptActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LevelStreaming_eventGetLevelScriptActor_Parms, ReturnValue), Z_Construct_UClass_ALevelScriptActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Returns the Level Script Actor of the level if the level is loaded and valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "GetLevelScriptActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(LevelStreaming_eventGetLevelScriptActor_Parms), Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics
	{
		struct LevelStreaming_eventGetWorldAssetPackageFName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LevelStreaming_eventGetWorldAssetPackageFName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Gets the package name for the world asset referred to by this level streaming as an FName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "GetWorldAssetPackageFName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(LevelStreaming_eventGetWorldAssetPackageFName_Parms), Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics
	{
		struct LevelStreaming_eventIsLevelLoaded_Parms
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
	void Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelStreaming_eventIsLevelLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelStreaming_eventIsLevelLoaded_Parms), &Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Returns whether streaming level is loaded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "IsLevelLoaded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(LevelStreaming_eventIsLevelLoaded_Parms), Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics
	{
		struct LevelStreaming_eventIsLevelVisible_Parms
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
	void Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelStreaming_eventIsLevelVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelStreaming_eventIsLevelVisible_Parms), &Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Returns whether streaming level is visible" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "IsLevelVisible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(LevelStreaming_eventIsLevelVisible_Parms), Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_IsLevelVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreaming_IsLevelVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics
	{
		struct LevelStreaming_eventIsStreamingStatePending_Parms
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
	void Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelStreaming_eventIsStreamingStatePending_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelStreaming_eventIsStreamingStatePending_Parms), &Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Returns whether level has streaming state change pending" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "IsStreamingStatePending", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(LevelStreaming_eventIsStreamingStatePending_Parms), Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics
	{
		struct LevelStreaming_eventSetLevelLODIndex_Parms
		{
			int32 LODIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelStreaming_eventSetLevelLODIndex_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Sets the world composition level LOD index and marks the streaming level as requiring consideration." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "SetLevelLODIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LevelStreaming_eventSetLevelLODIndex_Parms), Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics
	{
		struct LevelStreaming_eventSetShouldBeLoaded_Parms
		{
			bool bInShouldBeLoaded;
		};
		static void NewProp_bInShouldBeLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInShouldBeLoaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::NewProp_bInShouldBeLoaded_SetBit(void* Obj)
	{
		((LevelStreaming_eventSetShouldBeLoaded_Parms*)Obj)->bInShouldBeLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::NewProp_bInShouldBeLoaded = { UE4CodeGen_Private::EPropertyClass::Bool, "bInShouldBeLoaded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelStreaming_eventSetShouldBeLoaded_Parms), &Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::NewProp_bInShouldBeLoaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::NewProp_bInShouldBeLoaded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Virtual that can be overriden to change whether a streaming level should be loaded.\nDoesn't do anything at the base level as should be loaded defaults to true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "SetShouldBeLoaded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(LevelStreaming_eventSetShouldBeLoaded_Parms), Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics
	{
		struct LevelStreaming_eventSetShouldBeVisible_Parms
		{
			bool bInShouldBeVisible;
		};
		static void NewProp_bInShouldBeVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInShouldBeVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::NewProp_bInShouldBeVisible_SetBit(void* Obj)
	{
		((LevelStreaming_eventSetShouldBeVisible_Parms*)Obj)->bInShouldBeVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::NewProp_bInShouldBeVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bInShouldBeVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelStreaming_eventSetShouldBeVisible_Parms), &Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::NewProp_bInShouldBeVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::NewProp_bInShouldBeVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Sets the should be visible flag and marks the streaming level as requiring consideration." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "SetShouldBeVisible", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LevelStreaming_eventSetShouldBeVisible_Parms), Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics
	{
		struct LevelStreaming_eventShouldBeLoaded_Parms
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
	void Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelStreaming_eventShouldBeLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelStreaming_eventShouldBeLoaded_Parms), &Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Return whether this level should be present in memory which in turn tells the\nstreaming code to stream it in. Please note that a change in value from false\nto true only tells the streaming code that it needs to START streaming it in\nso the code needs to return true an appropriate amount of time before it is\nneeded.\n\n@return true if level should be loaded/ streamed in, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreaming, "ShouldBeLoaded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(LevelStreaming_eventShouldBeLoaded_Parms), Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelStreaming_NoRegister()
	{
		return ULevelStreaming::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreaming_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FolderPath;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingUnloadLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingUnloadLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadedLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLevelHidden_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelHidden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLevelShown_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelShown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLevelUnloaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelUnloaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLevelLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelLoaded;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keywords;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keywords_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTimeBetweenVolumeUnloadRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTimeBetweenVolumeUnloadRequests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorStreamingVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorStreamingVolumes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorStreamingVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelColor;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawOnLevelStatusMap_MetaData[];
#endif
		static void NewProp_bDrawOnLevelStatusMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawOnLevelStatusMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableDistanceStreaming_MetaData[];
#endif
		static void NewProp_bDisableDistanceStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableDistanceStreaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBlockOnUnload_MetaData[];
#endif
		static void NewProp_bShouldBlockOnUnload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBlockOnUnload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBlockOnLoad_MetaData[];
#endif
		static void NewProp_bShouldBlockOnLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBlockOnLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStatic_MetaData[];
#endif
		static void NewProp_bIsStatic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBeLoaded_MetaData[];
#endif
		static void NewProp_bShouldBeLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisible_MetaData[];
#endif
		static void NewProp_bShouldBeVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisible;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisibleInEditor_MetaData[];
#endif
		static void NewProp_bShouldBeVisibleInEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisibleInEditor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelLODIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelLODIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODPackageNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODPackageNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LODPackageNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageNameToLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageNameToLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_WorldAsset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreaming_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelStreaming_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelStreaming_CreateInstance, "CreateInstance" }, // 1204951456
		{ &Z_Construct_UFunction_ULevelStreaming_GetLevelScriptActor, "GetLevelScriptActor" }, // 1722352477
		{ &Z_Construct_UFunction_ULevelStreaming_GetWorldAssetPackageFName, "GetWorldAssetPackageFName" }, // 2733163847
		{ &Z_Construct_UFunction_ULevelStreaming_IsLevelLoaded, "IsLevelLoaded" }, // 2260724220
		{ &Z_Construct_UFunction_ULevelStreaming_IsLevelVisible, "IsLevelVisible" }, // 1507731824
		{ &Z_Construct_UFunction_ULevelStreaming_IsStreamingStatePending, "IsStreamingStatePending" }, // 458051051
		{ &Z_Construct_UFunction_ULevelStreaming_SetLevelLODIndex, "SetLevelLODIndex" }, // 2610438472
		{ &Z_Construct_UFunction_ULevelStreaming_SetShouldBeLoaded, "SetShouldBeLoaded" }, // 2569630826
		{ &Z_Construct_UFunction_ULevelStreaming_SetShouldBeVisible, "SetShouldBeVisible" }, // 647549283
		{ &Z_Construct_UFunction_ULevelStreaming_ShouldBeLoaded, "ShouldBeLoaded" }, // 3537386206
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Engine/LevelStreaming.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Abstract base class of container object encapsulating data required for streaming and providing\ninterface for when a level should be streamed in and out of memory." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_FolderPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "The folder path for this level within the world browser. This is only available in editor builds.\n              A NONE path indicates that it exists at the root. It is '/' separated." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_FolderPath = { UE4CodeGen_Private::EPropertyClass::Name, "FolderPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800000000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, FolderPath), METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_FolderPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_FolderPath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PendingUnloadLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Pointer to a Level object that was previously active and was replaced with a new LoadedLevel (for LOD switching)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PendingUnloadLevel = { UE4CodeGen_Private::EPropertyClass::Object, "PendingUnloadLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, PendingUnloadLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PendingUnloadLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PendingUnloadLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LoadedLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Pointer to Level object if currently loaded/ streamed in." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LoadedLevel = { UE4CodeGen_Private::EPropertyClass::Object, "LoadedLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, LoadedLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LoadedLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LoadedLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelHidden_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Called when level is removed from the world" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelHidden = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLevelHidden", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, OnLevelHidden), Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelHidden_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelHidden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelShown_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Called when level is added to the world" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelShown = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLevelShown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, OnLevelShown), Z_Construct_UDelegateFunction_Engine_LevelStreamingVisibilityStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelShown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelShown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelUnloaded_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Called when level is streamed out" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelUnloaded = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLevelUnloaded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, OnLevelUnloaded), Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelUnloaded_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelUnloaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Called when level is streamed in" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelLoaded = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnLevelLoaded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, OnLevelLoaded), Z_Construct_UDelegateFunction_Engine_LevelStreamingLoadedStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelLoaded_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelLoaded_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_Keywords_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "List of keywords to filter on in the level browser" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_Keywords = { UE4CodeGen_Private::EPropertyClass::Array, "Keywords", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, Keywords), METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_Keywords_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_Keywords_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_Keywords_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Keywords", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_MinTimeBetweenVolumeUnloadRequests_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Cooldown time in seconds between volume-based unload requests.  Used in preventing spurious unload requests." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_MinTimeBetweenVolumeUnloadRequests = { UE4CodeGen_Private::EPropertyClass::Float, "MinTimeBetweenVolumeUnloadRequests", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, MinTimeBetweenVolumeUnloadRequests), METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_MinTimeBetweenVolumeUnloadRequests_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_MinTimeBetweenVolumeUnloadRequests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_EditorStreamingVolumes_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "DisplayName", "Streaming Volumes" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "NoElementDuplicate", "" },
		{ "ToolTip", "The level streaming volumes bound to this level." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_EditorStreamingVolumes = { UE4CodeGen_Private::EPropertyClass::Array, "EditorStreamingVolumes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, EditorStreamingVolumes), METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_EditorStreamingVolumes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_EditorStreamingVolumes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_EditorStreamingVolumes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "EditorStreamingVolumes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ALevelStreamingVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelColor_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "The level color used for visualization. (Show -> Advanced -> Level Coloration)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelColor = { UE4CodeGen_Private::EPropertyClass::Struct, "LevelColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, LevelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelColor_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_DrawColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Deprecated level color used for visualization." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_DrawColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DrawColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, DrawColor_DEPRECATED), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_DrawColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_DrawColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDrawOnLevelStatusMap_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "If true, will be drawn on the 'level streaming status' map (STAT LEVELMAP console command)" },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDrawOnLevelStatusMap_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bDrawOnLevelStatusMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDrawOnLevelStatusMap = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawOnLevelStatusMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDrawOnLevelStatusMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDrawOnLevelStatusMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDrawOnLevelStatusMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDisableDistanceStreaming_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether this level streaming object should be ignored by world composition distance streaming,\nso streaming state can be controlled by other systems (ex: in blueprints)" },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDisableDistanceStreaming_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bDisableDistanceStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDisableDistanceStreaming = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableDistanceStreaming", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDisableDistanceStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDisableDistanceStreaming_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDisableDistanceStreaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnUnload_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether we want to force a blocking unload" },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnUnload_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bShouldBlockOnUnload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnUnload = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBlockOnUnload", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnUnload_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnUnload_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnUnload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnLoad_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether we want to force a blocking load" },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnLoad_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bShouldBlockOnLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnLoad = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBlockOnLoad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnLoad_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bIsStatic_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether this level only contains static actors that aren't affected by gameplay or replication.\nIf true, the engine can make certain optimizations and will add this level to the StaticLevels collection." },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bIsStatic_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bIsStatic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bIsStatic = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsStatic", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bIsStatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bIsStatic_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bIsStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bLocked_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether this level is locked; that is, its actors are read-only." },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bLocked = { UE4CodeGen_Private::EPropertyClass::Bool, "bLocked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bLocked_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeLoaded_MetaData[] = {
		{ "BlueprintGetter", "ShouldBeLoaded" },
		{ "BlueprintSetter", "SetShouldBeLoaded" },
		{ "Category", "LevelStreaming" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether the level should be loaded" },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeLoaded_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bShouldBeLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeLoaded = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBeLoaded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeLoaded_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisible_MetaData[] = {
		{ "BlueprintSetter", "SetShouldBeVisible" },
		{ "Category", "LevelStreaming" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether the level should be visible if it is loaded" },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisible_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bShouldBeVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBeVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000004, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisible_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisibleInEditor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Whether this level should be visible in the Editor" },
	};
#endif
	void Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisibleInEditor_SetBit(void* Obj)
	{
		((ULevelStreaming*)Obj)->bShouldBeVisibleInEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisibleInEditor = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldBeVisibleInEditor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreaming), &Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisibleInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisibleInEditor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisibleInEditor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelLODIndex_MetaData[] = {
		{ "BlueprintSetter", "SetLevelLODIndex" },
		{ "Category", "LevelStreaming" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Requested LOD. Non LOD sub-levels have Index = -1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelLODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LevelLODIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002004, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, LevelLODIndex), METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelLODIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelLODIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelTransform_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Transform applied to actors after loading." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "LevelTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, LevelTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LODPackageNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "LOD versions of this level" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LODPackageNames = { UE4CodeGen_Private::EPropertyClass::Array, "LODPackageNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, LODPackageNames), METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LODPackageNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LODPackageNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LODPackageNames_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "LODPackageNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageNameToLoad_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "If this isn't Name_None, then we load from this package on disk to the new package named PackageName" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageNameToLoad = { UE4CodeGen_Private::EPropertyClass::Name, "PackageNameToLoad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, PackageNameToLoad), METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageNameToLoad_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageNameToLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_WorldAsset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "LevelStreaming" },
		{ "DisplayName", "Level" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "The reference to the world containing the level to load" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_WorldAsset = { UE4CodeGen_Private::EPropertyClass::SoftObject, "WorldAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000020015, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, WorldAsset), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_WorldAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_WorldAsset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/LevelStreaming.h" },
		{ "ToolTip", "Deprecated name of the package containing the level to load. Use GetWorldAsset() or GetWorldAssetPackageFName() instead." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageName = { UE4CodeGen_Private::EPropertyClass::Name, "PackageName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000820000000, 1, nullptr, STRUCT_OFFSET(ULevelStreaming, PackageName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageName_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelStreaming_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_FolderPath,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PendingUnloadLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LoadedLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelHidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelShown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelUnloaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_OnLevelLoaded,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_Keywords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_Keywords_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_MinTimeBetweenVolumeUnloadRequests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_EditorStreamingVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_EditorStreamingVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelColor,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_DrawColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDrawOnLevelStatusMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bDisableDistanceStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnUnload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBlockOnLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bIsStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisible,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_bShouldBeVisibleInEditor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelLODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LevelTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LODPackageNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_LODPackageNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageNameToLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_WorldAsset,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreaming_Statics::NewProp_PackageName,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreaming_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreaming>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreaming_Statics::ClassParams = {
		&ULevelStreaming::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009010A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ULevelStreaming_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULevelStreaming_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelStreaming_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelStreaming()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelStreaming_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelStreaming, 3564983923);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelStreaming(Z_Construct_UClass_ULevelStreaming, &ULevelStreaming::StaticClass, TEXT("/Script/Engine"), TEXT("ULevelStreaming"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreaming);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULevelStreaming)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
