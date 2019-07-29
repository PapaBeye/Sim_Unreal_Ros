// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/LevelStreamingDynamic.h"
#include "Engine/Classes/Engine/World.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingDynamic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	void ULevelStreamingDynamic::StaticRegisterNativesULevelStreamingDynamic()
	{
		UClass* Class = ULevelStreamingDynamic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadLevelInstance", &ULevelStreamingDynamic::execLoadLevelInstance },
			{ "LoadLevelInstanceBySoftObjectPtr", &ULevelStreamingDynamic::execLoadLevelInstanceBySoftObjectPtr },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics
	{
		struct LevelStreamingDynamic_eventLoadLevelInstance_Parms
		{
			UObject* WorldContextObject;
			FString LevelName;
			FVector Location;
			FRotator Rotation;
			bool bOutSuccess;
			ULevelStreamingDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstance_Parms, ReturnValue), Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((LevelStreamingDynamic_eventLoadLevelInstance_Parms*)Obj)->bOutSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_bOutSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bOutSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelStreamingDynamic_eventLoadLevelInstance_Parms), &Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstance_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstance_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_LevelName = { UE4CodeGen_Private::EPropertyClass::Str, "LevelName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstance_Parms, LevelName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_bOutSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelStreaming" },
		{ "DisplayName", "Load Level Instance (by Name)" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingDynamic.h" },
		{ "ToolTip", "Stream in a level with a specific location and rotation. You can create multiple instances of the same level!\n\nThe level to be loaded does not have to be in the persistent map's Levels list, however to ensure that the .umap does get\npackaged, please be sure to include the .umap in your Packaging Settings:\n\n  Project Settings -> Packaging -> List of Maps to Include in a Packaged Build (you may have to show advanced or type in filter)\n\n@param LevelName - Level package name, ex: /Game/Maps/MyMapName, specifying short name like MyMapName will force very slow search on disk\n@param Location - World space location where the level should be spawned\n@param Rotation - World space rotation for rotating the entire level\n@param bOutSuccess - Whether operation was successful (map was found and added to the sub-levels list)\n@return Streaming level object for a level instance" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingDynamic, "LoadLevelInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(LevelStreamingDynamic_eventLoadLevelInstance_Parms), Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics
	{
		struct LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms
		{
			UObject* WorldContextObject;
			TSoftObjectPtr<UWorld> Level;
			FVector Location;
			FRotator Rotation;
			bool bOutSuccess;
			ULevelStreamingDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bOutSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOutSuccess;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms, ReturnValue), Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bOutSuccess_SetBit(void* Obj)
	{
		((LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms*)Obj)->bOutSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bOutSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "bOutSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms), &Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bOutSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Level = { UE4CodeGen_Private::EPropertyClass::SoftObject, "Level", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_bOutSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelStreaming" },
		{ "DisplayName", "Load Level Instance (by Object Reference)" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingDynamic.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelStreamingDynamic, "LoadLevelInstanceBySoftObjectPtr", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(LevelStreamingDynamic_eventLoadLevelInstanceBySoftObjectPtr_Parms), Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister()
	{
		return ULevelStreamingDynamic::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreamingDynamic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitiallyVisible_MetaData[];
#endif
		static void NewProp_bInitiallyVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitiallyVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitiallyLoaded_MetaData[];
#endif
		static void NewProp_bInitiallyLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitiallyLoaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreamingDynamic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelStreaming,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelStreamingDynamic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstance, "LoadLevelInstance" }, // 4134752752
		{ &Z_Construct_UFunction_ULevelStreamingDynamic_LoadLevelInstanceBySoftObjectPtr, "LoadLevelInstanceBySoftObjectPtr" }, // 764611224
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingDynamic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Engine/LevelStreamingDynamic.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingDynamic.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyVisible_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingDynamic.h" },
		{ "ToolTip", "Whether the level should be visible at startup if it is loaded" },
	};
#endif
	void Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyVisible_SetBit(void* Obj)
	{
		((ULevelStreamingDynamic*)Obj)->bInitiallyVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bInitiallyVisible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreamingDynamic), &Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyLoaded_MetaData[] = {
		{ "Category", "LevelStreaming" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingDynamic.h" },
		{ "ToolTip", "Whether the level should be loaded at startup" },
	};
#endif
	void Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyLoaded_SetBit(void* Obj)
	{
		((ULevelStreamingDynamic*)Obj)->bInitiallyLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyLoaded = { UE4CodeGen_Private::EPropertyClass::Bool, "bInitiallyLoaded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ULevelStreamingDynamic), &Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyLoaded_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyLoaded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelStreamingDynamic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelStreamingDynamic_Statics::NewProp_bInitiallyLoaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreamingDynamic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingDynamic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingDynamic_Statics::ClassParams = {
		&ULevelStreamingDynamic::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ULevelStreamingDynamic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingDynamic_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingDynamic_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingDynamic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelStreamingDynamic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelStreamingDynamic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelStreamingDynamic, 950220119);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelStreamingDynamic(Z_Construct_UClass_ULevelStreamingDynamic, &ULevelStreamingDynamic::StaticClass, TEXT("/Script/Engine"), TEXT("ULevelStreamingDynamic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingDynamic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
