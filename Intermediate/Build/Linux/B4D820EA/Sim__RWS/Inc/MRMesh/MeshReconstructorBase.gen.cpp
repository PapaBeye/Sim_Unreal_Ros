// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRMesh/Public/MeshReconstructorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshReconstructorBase() {}
// Cross Module References
	MRMESH_API UScriptStruct* Z_Construct_UScriptStruct_FMRMeshConfiguration();
	UPackage* Z_Construct_UPackage__Script_MRMesh();
	MRMESH_API UClass* Z_Construct_UClass_UMeshReconstructorBase_NoRegister();
	MRMESH_API UClass* Z_Construct_UClass_UMeshReconstructorBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction();
// End Cross Module References
class UScriptStruct* FMRMeshConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MRMESH_API uint32 Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRMeshConfiguration, Z_Construct_UPackage__Script_MRMesh(), TEXT("MRMeshConfiguration"), sizeof(FMRMeshConfiguration), Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMRMeshConfiguration(FMRMeshConfiguration::StaticStruct, TEXT("/Script/MRMesh"), TEXT("MRMeshConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_MRMesh_StaticRegisterNativesFMRMeshConfiguration
{
	FScriptStruct_MRMesh_StaticRegisterNativesFMRMeshConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MRMeshConfiguration")),new UScriptStruct::TCppStructOps<FMRMeshConfiguration>);
	}
} ScriptStruct_MRMesh_StaticRegisterNativesFMRMeshConfiguration;
	struct Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRMeshConfiguration>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
		nullptr,
		&NewStructOps,
		"MRMeshConfiguration",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FMRMeshConfiguration),
		alignof(FMRMeshConfiguration),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMRMeshConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MRMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MRMeshConfiguration"), sizeof(FMRMeshConfiguration), Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMRMeshConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_CRC() { return 1823257947U; }
	void UMeshReconstructorBase::StaticRegisterNativesUMeshReconstructorBase()
	{
		UClass* Class = UMeshReconstructorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectMRMesh", &UMeshReconstructorBase::execConnectMRMesh },
			{ "DisconnectMRMesh", &UMeshReconstructorBase::execDisconnectMRMesh },
			{ "IsReconstructionPaused", &UMeshReconstructorBase::execIsReconstructionPaused },
			{ "IsReconstructionStarted", &UMeshReconstructorBase::execIsReconstructionStarted },
			{ "PauseReconstruction", &UMeshReconstructorBase::execPauseReconstruction },
			{ "StartReconstruction", &UMeshReconstructorBase::execStartReconstruction },
			{ "StopReconstruction", &UMeshReconstructorBase::execStopReconstruction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics
	{
		struct MeshReconstructorBase_eventConnectMRMesh_Parms
		{
			UMRMeshComponent* Mesh;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MeshReconstructorBase_eventConnectMRMesh_Parms, Mesh), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, "ConnectMRMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(MeshReconstructorBase_eventConnectMRMesh_Parms), Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, "DisconnectMRMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics
	{
		struct MeshReconstructorBase_eventIsReconstructionPaused_Parms
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
	void Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshReconstructorBase_eventIsReconstructionPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MeshReconstructorBase_eventIsReconstructionPaused_Parms), &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, "IsReconstructionPaused", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(MeshReconstructorBase_eventIsReconstructionPaused_Parms), Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics
	{
		struct MeshReconstructorBase_eventIsReconstructionStarted_Parms
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
	void Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshReconstructorBase_eventIsReconstructionStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MeshReconstructorBase_eventIsReconstructionStarted_Parms), &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, "IsReconstructionStarted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(MeshReconstructorBase_eventIsReconstructionStarted_Parms), Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, "PauseReconstruction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, "StartReconstruction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Reconstruction" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, "StopReconstruction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeshReconstructorBase_NoRegister()
	{
		return UMeshReconstructorBase::StaticClass();
	}
	struct Z_Construct_UClass_UMeshReconstructorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshReconstructorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshReconstructorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh, "ConnectMRMesh" }, // 2807371837
		{ &Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh, "DisconnectMRMesh" }, // 1765000221
		{ &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused, "IsReconstructionPaused" }, // 2586203132
		{ &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted, "IsReconstructionStarted" }, // 2742435435
		{ &Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction, "PauseReconstruction" }, // 1788747700
		{ &Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction, "StartReconstruction" }, // 2651564718
		{ &Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction, "StopReconstruction" }, // 770966228
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshReconstructorBase_Statics::Class_MetaDataParams[] = {
		{ "Experimental", "" },
		{ "IncludePath", "MeshReconstructorBase.h" },
		{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshReconstructorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshReconstructorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshReconstructorBase_Statics::ClassParams = {
		&UMeshReconstructorBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMeshReconstructorBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMeshReconstructorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshReconstructorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshReconstructorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshReconstructorBase, 3502298631);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshReconstructorBase(Z_Construct_UClass_UMeshReconstructorBase, &UMeshReconstructorBase::StaticClass, TEXT("/Script/MRMesh"), TEXT("UMeshReconstructorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshReconstructorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
