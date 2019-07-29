// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Navigation/NavLocalGridManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLocalGridManager() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule();
	AIMODULE_API UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint();
	AIMODULE_API UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints();
	AIMODULE_API UFunction* Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath();
	AIMODULE_API UFunction* Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid();
	AIMODULE_API UFunction* Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity();
// End Cross Module References
	void UNavLocalGridManager::StaticRegisterNativesUNavLocalGridManager()
	{
		UClass* Class = UNavLocalGridManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLocalNavigationGridForBox", &UNavLocalGridManager::execAddLocalNavigationGridForBox },
			{ "AddLocalNavigationGridForCapsule", &UNavLocalGridManager::execAddLocalNavigationGridForCapsule },
			{ "AddLocalNavigationGridForPoint", &UNavLocalGridManager::execAddLocalNavigationGridForPoint },
			{ "AddLocalNavigationGridForPoints", &UNavLocalGridManager::execAddLocalNavigationGridForPoints },
			{ "FindLocalNavigationGridPath", &UNavLocalGridManager::execFindLocalNavigationGridPath },
			{ "RemoveLocalNavigationGrid", &UNavLocalGridManager::execRemoveLocalNavigationGrid },
			{ "SetLocalNavigationGridDensity", &UNavLocalGridManager::execSetLocalNavigationGridDensity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics
	{
		struct NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			FVector Extent;
			FRotator Rotation;
			int32 Radius2D;
			float Height;
			bool bRebuildGrids;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bRebuildGrids_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Radius2D;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_bRebuildGrids_SetBit(void* Obj)
	{
		((NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms*)Obj)->bRebuildGrids = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_bRebuildGrids = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuildGrids", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms), &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_bRebuildGrids_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Height_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Height), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Radius2D_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Radius2D = { UE4CodeGen_Private::EPropertyClass::Int, "Radius2D", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Radius2D), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Radius2D_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Radius2D_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Extent = { UE4CodeGen_Private::EPropertyClass::Struct, "Extent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_bRebuildGrids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Radius2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Extent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_bRebuildGrids", "true" },
		{ "CPP_Default_Extent", "1.000000,1.000000,1.000000" },
		{ "CPP_Default_Height", "100.000000" },
		{ "CPP_Default_Radius2D", "5" },
		{ "CPP_Default_Rotation", "" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, "AddLocalNavigationGridForBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForBox_Parms), Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics
	{
		struct NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			float CapsuleRadius;
			float CapsuleHalfHeight;
			int32 Radius2D;
			float Height;
			bool bRebuildGrids;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bRebuildGrids_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Radius2D;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_bRebuildGrids_SetBit(void* Obj)
	{
		((NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms*)Obj)->bRebuildGrids = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_bRebuildGrids = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuildGrids", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms), &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_bRebuildGrids_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Height_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, Height), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Radius2D_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Radius2D = { UE4CodeGen_Private::EPropertyClass::Int, "Radius2D", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, Radius2D), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Radius2D_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Radius2D_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_CapsuleHalfHeight = { UE4CodeGen_Private::EPropertyClass::Float, "CapsuleHalfHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, CapsuleHalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_CapsuleRadius = { UE4CodeGen_Private::EPropertyClass::Float, "CapsuleRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, CapsuleRadius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_bRebuildGrids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Radius2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_CapsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_CapsuleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_bRebuildGrids", "true" },
		{ "CPP_Default_Height", "100.000000" },
		{ "CPP_Default_Radius2D", "5" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, "AddLocalNavigationGridForCapsule", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForCapsule_Parms), Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics
	{
		struct NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms
		{
			UObject* WorldContextObject;
			FVector Location;
			int32 Radius2D;
			float Height;
			bool bRebuildGrids;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bRebuildGrids_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Radius2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_bRebuildGrids_SetBit(void* Obj)
	{
		((NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms*)Obj)->bRebuildGrids = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_bRebuildGrids = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuildGrids", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms), &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_bRebuildGrids_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Height_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, Height), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Radius2D_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Radius2D = { UE4CodeGen_Private::EPropertyClass::Int, "Radius2D", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, Radius2D), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Radius2D_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Radius2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_bRebuildGrids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Radius2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_bRebuildGrids", "true" },
		{ "CPP_Default_Height", "100.000000" },
		{ "CPP_Default_Radius2D", "5" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "ToolTip", "creates new grid data for single point" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, "AddLocalNavigationGridForPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForPoint_Parms), Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics
	{
		struct NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms
		{
			UObject* WorldContextObject;
			TArray<FVector> Locations;
			int32 Radius2D;
			float Height;
			bool bRebuildGrids;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bRebuildGrids_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Radius2D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Locations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_bRebuildGrids_SetBit(void* Obj)
	{
		((NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms*)Obj)->bRebuildGrids = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_bRebuildGrids = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuildGrids", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms), &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_bRebuildGrids_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Height_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, Height), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Height_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Radius2D_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Radius2D = { UE4CodeGen_Private::EPropertyClass::Int, "Radius2D", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, Radius2D), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Radius2D_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Radius2D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations = { UE4CodeGen_Private::EPropertyClass::Array, "Locations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, Locations), METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Locations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_bRebuildGrids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Radius2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_Locations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_bRebuildGrids", "true" },
		{ "CPP_Default_Height", "100.000000" },
		{ "CPP_Default_Radius2D", "5" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "ToolTip", "creates single grid data for set of points" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, "AddLocalNavigationGridForPoints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(NavLocalGridManager_eventAddLocalNavigationGridForPoints_Parms), Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics
	{
		struct NavLocalGridManager_eventFindLocalNavigationGridPath_Parms
		{
			UObject* WorldContextObject;
			FVector Start;
			FVector End;
			TArray<FVector> PathPoints;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavLocalGridManager_eventFindLocalNavigationGridPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms), &Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_PathPoints = { UE4CodeGen_Private::EPropertyClass::Array, "PathPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, PathPoints), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_PathPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PathPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_End = { UE4CodeGen_Private::EPropertyClass::Struct, "End", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_End_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_Start = { UE4CodeGen_Private::EPropertyClass::Struct, "Start", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_Start_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_Start_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_PathPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_PathPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_End,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, "FindLocalNavigationGridPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(NavLocalGridManager_eventFindLocalNavigationGridPath_Parms), Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics
	{
		struct NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms
		{
			UObject* WorldContextObject;
			int32 GridId;
			bool bRebuildGrids;
		};
		static void NewProp_bRebuildGrids_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildGrids;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GridId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_bRebuildGrids_SetBit(void* Obj)
	{
		((NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms*)Obj)->bRebuildGrids = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_bRebuildGrids = { UE4CodeGen_Private::EPropertyClass::Bool, "bRebuildGrids", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms), &Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_bRebuildGrids_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_GridId = { UE4CodeGen_Private::EPropertyClass::Int, "GridId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms, GridId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_bRebuildGrids,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_GridId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_bRebuildGrids", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, "RemoveLocalNavigationGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(NavLocalGridManager_eventRemoveLocalNavigationGrid_Parms), Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics
	{
		struct NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms
		{
			UObject* WorldContextObject;
			float CellSize;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CellSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms), &Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_CellSize = { UE4CodeGen_Private::EPropertyClass::Float, "CellSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms, CellSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_CellSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavLocalGridManager, "SetLocalNavigationGridDensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(NavLocalGridManager_eventSetLocalNavigationGridDensity_Parms), Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister()
	{
		return UNavLocalGridManager::StaticClass();
	}
	struct Z_Construct_UClass_UNavLocalGridManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavLocalGridManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNavLocalGridManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForBox, "AddLocalNavigationGridForBox" }, // 2181421990
		{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForCapsule, "AddLocalNavigationGridForCapsule" }, // 2503886345
		{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoint, "AddLocalNavigationGridForPoint" }, // 2968326812
		{ &Z_Construct_UFunction_UNavLocalGridManager_AddLocalNavigationGridForPoints, "AddLocalNavigationGridForPoints" }, // 3101242580
		{ &Z_Construct_UFunction_UNavLocalGridManager_FindLocalNavigationGridPath, "FindLocalNavigationGridPath" }, // 1590394521
		{ &Z_Construct_UFunction_UNavLocalGridManager_RemoveLocalNavigationGrid, "RemoveLocalNavigationGrid" }, // 3594558934
		{ &Z_Construct_UFunction_UNavLocalGridManager_SetLocalNavigationGridDensity, "SetLocalNavigationGridDensity" }, // 2502364743
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLocalGridManager_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Navigation/NavLocalGridManager.h" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLocalGridManager.h" },
		{ "ToolTip", "Manager for local navigation grids\n\nBuilds non overlapping grid from multiple sources, that can be used later for pathfinding.\nCheck also: UGridPathFollowingComponent, FNavLocalGridData" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavLocalGridManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavLocalGridManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavLocalGridManager_Statics::ClassParams = {
		&UNavLocalGridManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UNavLocalGridManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNavLocalGridManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavLocalGridManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavLocalGridManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavLocalGridManager, 2784511564);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavLocalGridManager(Z_Construct_UClass_UNavLocalGridManager, &UNavLocalGridManager::StaticClass, TEXT("/Script/AIModule"), TEXT("UNavLocalGridManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLocalGridManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
