// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/BlueprintMapLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintMapLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintMapLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintMapLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values();
	ENGINE_API UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UBlueprintMapLibrary::StaticRegisterNativesUBlueprintMapLibrary()
	{
		UClass* Class = UBlueprintMapLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Map_Add", &UBlueprintMapLibrary::execMap_Add },
			{ "Map_Clear", &UBlueprintMapLibrary::execMap_Clear },
			{ "Map_Contains", &UBlueprintMapLibrary::execMap_Contains },
			{ "Map_Find", &UBlueprintMapLibrary::execMap_Find },
			{ "Map_Keys", &UBlueprintMapLibrary::execMap_Keys },
			{ "Map_Length", &UBlueprintMapLibrary::execMap_Length },
			{ "Map_Remove", &UBlueprintMapLibrary::execMap_Remove },
			{ "Map_Values", &UBlueprintMapLibrary::execMap_Values },
			{ "SetMapPropertyByName", &UBlueprintMapLibrary::execSetMapPropertyByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics
	{
		struct BlueprintMapLibrary_eventMap_Add_Parms
		{
			TMap<int32,int32> TargetMap;
			int32 Key;
			int32 Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Add_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Int, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Add_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Add_Parms, TargetMap), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::NewProp_TargetMap_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Key, Value" },
		{ "Category", "Utilities|Map" },
		{ "CompactNodeTitle", "ADD" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Add" },
		{ "MapKeyParam", "Key" },
		{ "MapParam", "TargetMap" },
		{ "MapValueParam", "Value" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Adds a key and value to the map. If something already uses the provided key it will be overwritten with the new value.\nAfter calling Key is guaranteed to be associated with Value until a subsequent mutation of the Map.\n\n@param       TargetMap               The map to add the key and value to\n@param       Key                             The key that will be used to look the value up\n@param       Value                   The value to be retrieved later" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Add", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintMapLibrary_eventMap_Add_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics
	{
		struct BlueprintMapLibrary_eventMap_Clear_Parms
		{
			TMap<int32,int32> TargetMap;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Clear_Parms, TargetMap), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::NewProp_TargetMap_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Map" },
		{ "CompactNodeTitle", "CLEAR" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Clear" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Clears a map of all entries, resetting it to empty\n\n@param       TargetMap               The map to clear" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Clear", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintMapLibrary_eventMap_Clear_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics
	{
		struct BlueprintMapLibrary_eventMap_Contains_Parms
		{
			TMap<int32,int32> TargetMap;
			int32 Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMapLibrary_eventMap_Contains_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintMapLibrary_eventMap_Contains_Parms), &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Int, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Contains_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Contains_Parms, TargetMap), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::NewProp_TargetMap_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Key" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Utilities|Map" },
		{ "CompactNodeTitle", "CONTAINS" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Contains" },
		{ "MapKeyParam", "Key" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Checks whether key is in a provided Map\n\n@param       TargetMap               The map to perform the lookup on\n@param       Key                             The key that will be used to lookup\n@return      True if an item was found (False indicates nothing in the map uses the provided key)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Contains", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintMapLibrary_eventMap_Contains_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics
	{
		struct BlueprintMapLibrary_eventMap_Find_Parms
		{
			TMap<int32,int32> TargetMap;
			int32 Key;
			int32 Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMapLibrary_eventMap_Find_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintMapLibrary_eventMap_Find_Parms), &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Find_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Int, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Find_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Find_Parms, TargetMap), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::NewProp_TargetMap_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Key, Value" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Utilities|Map" },
		{ "CompactNodeTitle", "FIND" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Find" },
		{ "MapKeyParam", "Key" },
		{ "MapParam", "TargetMap" },
		{ "MapValueParam", "Value" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Finds the value associated with the provided Key\n\n@param       TargetMap               The map to perform the lookup on\n@param       Key                             The key that will be used to look the value up\n@param       Value                   The value associated with the key, default constructed if key was not found\n@return      True if an item was found (False indicates nothing in the map uses the provided key)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Find", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintMapLibrary_eventMap_Find_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics
	{
		struct BlueprintMapLibrary_eventMap_Keys_Parms
		{
			TMap<int32,int32> TargetMap;
			TArray<int32> Keys;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_Keys = { UE4CodeGen_Private::EPropertyClass::Array, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Keys_Parms, Keys), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_Keys_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Keys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Keys_Parms, TargetMap), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::NewProp_TargetMap_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Keys" },
		{ "Category", "Utilities|Map" },
		{ "CompactNodeTitle", "KEYS" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Keys" },
		{ "MapKeyParam", "Keys" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Outputs an array of all keys present in the map\n\n@param       TargetMap               The map to get the list of keys from\n@param       Keys                    All keys present in the map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Keys", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintMapLibrary_eventMap_Keys_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics
	{
		struct BlueprintMapLibrary_eventMap_Length_Parms
		{
			TMap<int32,int32> TargetMap;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Length_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Length_Parms, TargetMap), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::NewProp_TargetMap_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Utilities|Map" },
		{ "CompactNodeTitle", "LENGTH" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Length" },
		{ "Keywords", "num size count" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Determines the number of entries in a provided Map\n\n@param       TargetMap               The map in question\n@return      The number of entries in the map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Length", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(BlueprintMapLibrary_eventMap_Length_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics
	{
		struct BlueprintMapLibrary_eventMap_Remove_Parms
		{
			TMap<int32,int32> TargetMap;
			int32 Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMapLibrary_eventMap_Remove_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BlueprintMapLibrary_eventMap_Remove_Parms), &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Int, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Remove_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Remove_Parms, TargetMap), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::NewProp_TargetMap_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Key" },
		{ "Category", "Utilities|Map" },
		{ "CompactNodeTitle", "REMOVE" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Remove" },
		{ "MapKeyParam", "Key" },
		{ "MapParam", "TargetMap" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Removes a key and its associated value from the map.\n\n@param       TargetMap               The map to remove the key and its associated value from\n@param       Key                             The key that will be used to look the value up\n@return      True if an item was removed (False indicates nothing in the map uses the provided key)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Remove", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintMapLibrary_eventMap_Remove_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics
	{
		struct BlueprintMapLibrary_eventMap_Values_Parms
		{
			TMap<int32,int32> TargetMap;
			TArray<int32> Values;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TargetMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_Values = { UE4CodeGen_Private::EPropertyClass::Array, "Values", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Values_Parms, Values), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_Values_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Values", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap = { UE4CodeGen_Private::EPropertyClass::Map, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventMap_Values_Parms, TargetMap), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "TargetMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::NewProp_TargetMap_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Values" },
		{ "Category", "Utilities|Map" },
		{ "CompactNodeTitle", "VALUES" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Values" },
		{ "MapParam", "TargetMap" },
		{ "MapValueParam", "Values" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Outputs an array of all values present in the map\n\n@param       TargetMap               The map to get the list of values from\n@param       Values                  All values present in the map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "Map_Values", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintMapLibrary_eventMap_Values_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics
	{
		struct BlueprintMapLibrary_eventSetMapPropertyByName_Parms
		{
			UObject* Object;
			FName PropertyName;
			TMap<int32,int32> Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Map, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventSetMapPropertyByName_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "Value_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_PropertyName = { UE4CodeGen_Private::EPropertyClass::Name, "PropertyName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventSetMapPropertyByName_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Object = { UE4CodeGen_Private::EPropertyClass::Object, "Object", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BlueprintMapLibrary_eventSetMapPropertyByName_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Value_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_PropertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CustomThunk", "true" },
		{ "MapParam", "Value" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
		{ "ToolTip", "Not exposed to users. Supports setting a map property on an object by name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMapLibrary, "SetMapPropertyByName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(BlueprintMapLibrary_eventSetMapPropertyByName_Parms), Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueprintMapLibrary_NoRegister()
	{
		return UBlueprintMapLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintMapLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintMapLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintMapLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Add, "Map_Add" }, // 1038478790
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Clear, "Map_Clear" }, // 3186358402
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Contains, "Map_Contains" }, // 3036589734
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Find, "Map_Find" }, // 4213441862
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Keys, "Map_Keys" }, // 4209167033
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Length, "Map_Length" }, // 251075070
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Remove, "Map_Remove" }, // 2762595776
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_Map_Values, "Map_Values" }, // 3011807611
		{ &Z_Construct_UFunction_UBlueprintMapLibrary_SetMapPropertyByName, "SetMapPropertyByName" }, // 586440490
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintMapLibrary_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Kismet/BlueprintMapLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintMapLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintMapLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintMapLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintMapLibrary_Statics::ClassParams = {
		&UBlueprintMapLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintMapLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlueprintMapLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintMapLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueprintMapLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueprintMapLibrary, 2332282221);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueprintMapLibrary(Z_Construct_UClass_UBlueprintMapLibrary, &UBlueprintMapLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UBlueprintMapLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintMapLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
