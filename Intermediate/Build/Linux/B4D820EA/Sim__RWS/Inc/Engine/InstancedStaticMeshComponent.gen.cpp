// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/InstancedStaticMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedStaticMeshComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances();
	ENGINE_API UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform();
// End Cross Module References
class UScriptStruct* FInstancedStaticMeshMappingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo, Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshMappingInfo"), sizeof(FInstancedStaticMeshMappingInfo), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInstancedStaticMeshMappingInfo(FInstancedStaticMeshMappingInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("InstancedStaticMeshMappingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshMappingInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshMappingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InstancedStaticMeshMappingInfo")),new UScriptStruct::TCppStructOps<FInstancedStaticMeshMappingInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshMappingInfo;
	struct Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshMappingInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InstancedStaticMeshMappingInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FInstancedStaticMeshMappingInfo),
		alignof(FInstancedStaticMeshMappingInfo),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InstancedStaticMeshMappingInfo"), sizeof(FInstancedStaticMeshMappingInfo), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo_CRC() { return 4138714667U; }
class UScriptStruct* FInstancedStaticMeshInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, Z_Construct_UPackage__Script_Engine(), TEXT("InstancedStaticMeshInstanceData"), sizeof(FInstancedStaticMeshInstanceData), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInstancedStaticMeshInstanceData(FInstancedStaticMeshInstanceData::StaticStruct, TEXT("/Script/Engine"), TEXT("InstancedStaticMeshInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshInstanceData
{
	FScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InstancedStaticMeshInstanceData")),new UScriptStruct::TCppStructOps<FInstancedStaticMeshInstanceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFInstancedStaticMeshInstanceData;
	struct Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStaticMeshInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform = { UE4CodeGen_Private::EPropertyClass::Struct, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FInstancedStaticMeshInstanceData, Transform), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::NewProp_Transform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InstancedStaticMeshInstanceData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FInstancedStaticMeshInstanceData),
		alignof(FInstancedStaticMeshInstanceData),
		Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InstancedStaticMeshInstanceData"), sizeof(FInstancedStaticMeshInstanceData), Get_Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData_CRC() { return 1946518529U; }
	void UInstancedStaticMeshComponent::StaticRegisterNativesUInstancedStaticMeshComponent()
	{
		UClass* Class = UInstancedStaticMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInstance", &UInstancedStaticMeshComponent::execAddInstance },
			{ "AddInstanceWorldSpace", &UInstancedStaticMeshComponent::execAddInstanceWorldSpace },
			{ "ClearInstances", &UInstancedStaticMeshComponent::execClearInstances },
			{ "GetInstanceCount", &UInstancedStaticMeshComponent::execGetInstanceCount },
			{ "GetInstancesOverlappingBox", &UInstancedStaticMeshComponent::execGetInstancesOverlappingBox },
			{ "GetInstancesOverlappingSphere", &UInstancedStaticMeshComponent::execGetInstancesOverlappingSphere },
			{ "GetInstanceTransform", &UInstancedStaticMeshComponent::execGetInstanceTransform },
			{ "RemoveInstance", &UInstancedStaticMeshComponent::execRemoveInstance },
			{ "SetCullDistances", &UInstancedStaticMeshComponent::execSetCullDistances },
			{ "UpdateInstanceTransform", &UInstancedStaticMeshComponent::execUpdateInstanceTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics
	{
		struct InstancedStaticMeshComponent_eventAddInstance_Parms
		{
			FTransform InstanceTransform;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstanceTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "InstanceTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstance_Parms, InstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::NewProp_InstanceTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Add an instance to this component. Transform is given in local space of this component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "AddInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20400, sizeof(InstancedStaticMeshComponent_eventAddInstance_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics
	{
		struct InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms
		{
			FTransform WorldTransform;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::NewProp_WorldTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Add an instance to this component. Transform is given in world space." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "AddInstanceWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(InstancedStaticMeshComponent_eventAddInstanceWorldSpace_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Clear all instances being rendered by this component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "ClearInstances", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics
	{
		struct InstancedStaticMeshComponent_eventGetInstanceCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstanceCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Get the number of instances in this component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "GetInstanceCount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(InstancedStaticMeshComponent_eventGetInstanceCount_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics
	{
		struct InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms
		{
			FBox Box;
			bool bBoxInWorldSpace;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_bBoxInWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBoxInWorldSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms*)Obj)->bBoxInWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bBoxInWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box = { UE4CodeGen_Private::EPropertyClass::Struct, "Box", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_bBoxInWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::NewProp_Box,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "CPP_Default_bBoxInWorldSpace", "true" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Returns the instances with instance bounds overlapping the specified box. The return value is an array of instance indices." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "GetInstancesOverlappingBox", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20400, sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingBox_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics
	{
		struct InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms
		{
			FVector Center;
			float Radius;
			bool bSphereInWorldSpace;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_bSphereInWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSphereInWorldSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms*)Obj)->bSphereInWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bSphereInWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center = { UE4CodeGen_Private::EPropertyClass::Struct, "Center", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_bSphereInWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::NewProp_Center,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "CPP_Default_bSphereInWorldSpace", "true" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Returns the instances with instance bounds overlapping the specified sphere. The return value is an array of instance indices." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "GetInstancesOverlappingSphere", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20400, sizeof(InstancedStaticMeshComponent_eventGetInstancesOverlappingSphere_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics
	{
		struct InstancedStaticMeshComponent_eventGetInstanceTransform_Parms
		{
			int32 InstanceIndex;
			FTransform OutInstanceTransform;
			bool bWorldSpace;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutInstanceTransform;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventGetInstanceTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventGetInstanceTransform_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_OutInstanceTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "OutInstanceTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms, OutInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_InstanceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InstanceIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_OutInstanceTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::NewProp_InstanceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Get the transform for the instance specified. Instance is returned in local space of this component unless bWorldSpace is set.  Returns True on success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "GetInstanceTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54C20401, sizeof(InstancedStaticMeshComponent_eventGetInstanceTransform_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics
	{
		struct InstancedStaticMeshComponent_eventRemoveInstance_Parms
		{
			int32 InstanceIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventRemoveInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventRemoveInstance_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_InstanceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InstanceIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventRemoveInstance_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::NewProp_InstanceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Remove the instance specified. Returns True on success. Note that this will leave the array in order, but may shrink it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "RemoveInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(InstancedStaticMeshComponent_eventRemoveInstance_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics
	{
		struct InstancedStaticMeshComponent_eventSetCullDistances_Parms
		{
			int32 StartCullDistance;
			int32 EndCullDistance;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndCullDistance;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartCullDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_EndCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "EndCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCullDistances_Parms, EndCullDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_StartCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "StartCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventSetCullDistances_Parms, StartCullDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_EndCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::NewProp_StartCullDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Sets the fading start and culling end distances for this component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "SetCullDistances", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InstancedStaticMeshComponent_eventSetCullDistances_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics
	{
		struct InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms
		{
			int32 InstanceIndex;
			FTransform NewInstanceTransform;
			bool bWorldSpace;
			bool bMarkRenderStateDirty;
			bool bTeleport;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewInstanceTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewInstanceTransform;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->bTeleport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport = { UE4CodeGen_Private::EPropertyClass::Bool, "bTeleport", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty = { UE4CodeGen_Private::EPropertyClass::Bool, "bMarkRenderStateDirty", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bWorldSpace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "NewInstanceTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms, NewInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_InstanceIndex = { UE4CodeGen_Private::EPropertyClass::Int, "InstanceIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::NewProp_InstanceIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|InstancedStaticMesh" },
		{ "CPP_Default_bMarkRenderStateDirty", "false" },
		{ "CPP_Default_bTeleport", "false" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Update the transform for the instance specified.\n\n@param InstanceIndex                  The index of the instance to update\n@param NewInstanceTransform   The new transform\n@param bWorldSpace                    If true, the new transform interpreted as a World Space transform, otherwise it is interpreted as Local Space\n@param bMarkRenderStateDirty  If true, the change should be visible immediately. If you are updating many instances you should only set this to true for the last instance.\n@param bTeleport                              Whether or not the instance's physics should be moved normally, or teleported (moved instantly, ignoring velocity).\n@return                                               True on success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstancedStaticMeshComponent, "UpdateInstanceTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20400, sizeof(InstancedStaticMeshComponent_eventUpdateInstanceTransform_Parms), Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister()
	{
		return UInstancedStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInstancedStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPendingLightmaps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPendingLightmaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceReorderTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstanceReorderTable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceReorderTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceEndCullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceEndCullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceStartCullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstanceStartCullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancingRandomSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InstancingRandomSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSMData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSMData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerInstanceSMData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstance, "AddInstance" }, // 1285595168
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_AddInstanceWorldSpace, "AddInstanceWorldSpace" }, // 3129775882
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_ClearInstances, "ClearInstances" }, // 2951558030
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceCount, "GetInstanceCount" }, // 632802783
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingBox, "GetInstancesOverlappingBox" }, // 3419545982
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstancesOverlappingSphere, "GetInstancesOverlappingSphere" }, // 2786691270
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_GetInstanceTransform, "GetInstanceTransform" }, // 3363617413
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_RemoveInstance, "RemoveInstance" }, // 1288643311
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_SetCullDistances, "SetCullDistances" }, // 1496953792
		{ &Z_Construct_UFunction_UInstancedStaticMeshComponent_UpdateInstanceTransform, "UpdateInstanceTransform" }, // 3758013383
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Components/InstancedStaticMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "A component that efficiently renders multiple instances of the same StaticMesh." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "The mappings for all the instances of this component." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings = { UE4CodeGen_Private::EPropertyClass::Array, "CachedMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020480000202000, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, CachedMappings), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedMappings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshMappingInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Number of pending lightmaps still to be calculated (Apply()'d)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps = { UE4CodeGen_Private::EPropertyClass::Int, "NumPendingLightmaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020480000202000, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, NumPendingLightmaps), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Mapping from PerInstanceSMData order to instance render buffer order. If empty, the PerInstanceSMData order is used." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable = { UE4CodeGen_Private::EPropertyClass::Array, "InstanceReorderTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceReorderTable), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "InstanceReorderTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance_MetaData[] = {
		{ "Category", "Culling" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Distance from camera at which each instance completely fades out." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "InstanceEndCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceEndCullDistance), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance_MetaData[] = {
		{ "Category", "Culling" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Distance from camera at which each instance begins to fade out." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "InstanceStartCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstanceStartCullDistance), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed_MetaData[] = {
		{ "Category", "InstancedStaticMeshComponent" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Value used to seed the random number stream that generates random numbers for each of this mesh's instances.\n      The random number is stored in a buffer accessible to materials through the PerInstanceRandom expression. If\n      this is set to zero (default), it will be populated automatically by the editor." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed = { UE4CodeGen_Private::EPropertyClass::Int, "InstancingRandomSeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, InstancingRandomSeed), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_MetaData[] = {
		{ "Category", "Instances" },
		{ "DisplayName", "Instances" },
		{ "EditFixedOrder", "" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Classes/Components/InstancedStaticMeshComponent.h" },
		{ "ToolTip", "Array of instances, bulk serialized." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData = { UE4CodeGen_Private::EPropertyClass::Array, "PerInstanceSMData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0090000000000001, 1, nullptr, STRUCT_OFFSET(UInstancedStaticMeshComponent, PerInstanceSMData), METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PerInstanceSMData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_CachedMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_NumPendingLightmaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceReorderTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceEndCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstanceStartCullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_InstancingRandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::NewProp_PerInstanceSMData_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInstancedStaticMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::ClassParams = {
		&UInstancedStaticMeshComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInstancedStaticMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInstancedStaticMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInstancedStaticMeshComponent, 160632724);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInstancedStaticMeshComponent(Z_Construct_UClass_UInstancedStaticMeshComponent, &UInstancedStaticMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UInstancedStaticMeshComponent"), false, nullptr, nullptr, nullptr);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInstancedStaticMeshComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
